#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        my_list = list(a_dictionary.keys())
        s = 0
        k = ""
        for i in my_list:
            if a_dictionary[i] > s:
                s = a_dictionary[i]
                k = i
        return k
