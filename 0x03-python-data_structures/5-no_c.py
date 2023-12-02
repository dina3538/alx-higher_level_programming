#!/usr/bin/python3
def no_c(my_string):
    l = ""
    for num in range(len(my_string)):
        if (my_string[num] != 'c' and my_string[num] != 'C'):
            l += my_string[num]
    return l
