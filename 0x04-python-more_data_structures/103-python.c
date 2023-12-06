i#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: object
 * Return: nothing
 */
void print_python_bytes(PyObject *p)
{
	char *let;
	long int s, i, limit;

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	s = ((PyVarObject *)(p))->ob_size;
	let = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", s);
	printf("  trying string: %s\n", let);

	if (s >= 10)
		limit = 10;
	else
		limit = s + 1;

	printf("  first %ld bytes:", limit);

	for (i = 0; i < limit; i++)
		if (let[i] >= 0)
			printf(" %02x", let[i]);
		else
			printf(" %02x", 256 + let[i]);

	printf("\n");
}

/**
 * print_python_list - Print list information
 *
 * @p: object
 * Return: nothing
 */
void print_python_list(PyObject *p)
{
	long int s, i;
	PyListObject *list;
	PyObject *obj;

	s = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", s);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < s; i++)
	{
		obj = ((PyListObject *)p)->ob_item[i];
		printf("Element %ld: %s\n", i, ((obj)->ob_type)->tp_name);
		if (PyBytes_Check(obj))
			print_python_bytes(obj);
	}
}
