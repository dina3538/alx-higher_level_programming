#!/usr/bin/python3
def remove_char_at(str, n):
    add = ''
    k = 0
    for char in str:
        if k != n:
            add += str(k)
        k += 1
    return (add)
