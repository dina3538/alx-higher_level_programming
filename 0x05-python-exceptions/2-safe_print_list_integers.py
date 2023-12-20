#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    k, l = 0, 0
    while k < x:
        try:
            print("{:d}".format(my_list[k]), end='')
            l += 1
        except (ValueError, TypeError):
            pass
        k += 1
    print()
    return l
