#!/usr/bin/python3
def uppercase(str):
    for alpha in str:
        temp = alpha
        if ord(temp) >= 97 and ord(temp) <= 122:
            temp = chr(ord(alpha) - 32)
        print("{}".format(temp), end="")
    print()
