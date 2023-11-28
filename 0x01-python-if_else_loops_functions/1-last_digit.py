#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
new = number % 10 if number > 10 else number % -10
print(f"Last digit of {number:d} is {new:d} and is")
if new > 5:
    print("greater than 5")
elif new == 0:
    print("0")
elif new < 6 and not 0:
    print("less than 6 and not 0")
