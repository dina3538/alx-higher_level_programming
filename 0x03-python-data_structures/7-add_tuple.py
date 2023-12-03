#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    d1 = tuple_a[0] if len(tuple_a) > 0 else 0
    d2 = tuple_a[1] if len(tuple_a) > 1 else 0
    c1 = tuple_b[0] if len(tuple_b) > 0 else 0
    c2 = tuple_b[1] if len(tuple_b) > 1 else 0
    return (d1 + c1, d2 + c2)
