#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    n_add = {}
    for key, value in a_dictionary.items():
        n_add.update({key: (value * 2)})
    return n_add
