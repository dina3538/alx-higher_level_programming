#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int s = PyList_Size(p);
	int k;
	PyListObject *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", s);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (k = 0; k < s; k++)
		printf("Element %i: %s\n", k, Py_TYPE(obj->ob_item[k])->tp_name);
}
