#!/usr/bin/python3
"""Defines a text file insertion function."""

def append_after(filename="", search_string="", new_string=""):
    """Insert text after each line containing a given string in a file.
    Args:
    filename (str): The name of the file.
    search_string (str): The string to search for within the file.
    new_string (str): The string to insert.
    """
    with open(filename, 'r', encoding='utf-8') as f:
        line_list = []
        while True:
            line = f.readline()
            if line == "":
                break
            line_list.append(line)
            if search_string in line:
                line_list.append(new_string)
    with open(filename, 'w', encoding='utf-8') as f:
        f.writelines(line_list)
