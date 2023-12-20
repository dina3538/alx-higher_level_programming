#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    k = []

    for i in range(list_length):
        try:
            k.append(my_list_1[i] / my_list_2[i])
        except ZeroDivisionError:
            k.append(0)
            print('division by 0')
            continue
        except IndexError:
            k.append(0)
            print('out of range')
            continue
        except TypeError:
            k.append(0)
            print('wrong type')
            continue
        finally:
            pass
    return k
