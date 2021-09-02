def unique(string):
    string = string.replace(" ", "")
    # return len(set(string))==len(string)
    char = set()
    for i in string:
        if i in char:
            return False
        else:
            char.add(i)
    return True


print(unique('a b cdef'))
