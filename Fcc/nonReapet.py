from typing import NoReturn


def nonReapet(string):
    string = string.replace(" ", "").lower()
    char = {}
    for i in string:
        if i in char:
            char[i] += 1
        else:
            char[i] = 1

    allUnique = []
    for j in string:
        if char[j] == 1:
            allUnique.append((j, 1))
    return allUnique


print(nonReapet("I Apple Ape Peels"))
