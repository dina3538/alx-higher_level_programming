#!/usr/bin/env python3
for num in range(ord('z'), ord('a') - 1, -2):
    print("{}{}".format(chr(num), chr(num - 33)), end='')
