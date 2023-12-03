#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for r in matrix:
        for col in r:
            if col == r[-1]:
                print('{:d}'.format(col), end='')
            else:
                print('{:d}'.format(col), end=' ')
        print()
