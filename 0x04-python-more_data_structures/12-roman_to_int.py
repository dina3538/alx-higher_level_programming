#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str):
        return 0
    t = 0
    k = 0
    num = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    for i in reversed(roman_string):
        k = num[r]
        t += k if t < k * 5 else -k
    return t
