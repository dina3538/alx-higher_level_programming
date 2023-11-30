#!/usr/bin/python3
if __name__ == "__main__":
    """print hidden dirctory"""
    import hidden_4

    for num in dir(hidden_4):
        if num[:2] != "__":
            print(num)
