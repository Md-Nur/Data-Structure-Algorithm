def fact(n):
    add = 1
    for i in range(2, n+1):
        add *= i
    return add


def mul(n):
    res = 1
    for i in n:
        res *= i
    return res


T = int(input())
for a in range(T):
    sentence = input().split()
    i = 0
    count = []
    n = len(sentence)

    while (i < len(sentence)):
        r = 0
        j = 0
        while (j < len(sentence)):
            if (sentence[i] == sentence[j]):
                r += 1
            if (r>1):
                sentence.remove(sentence[j])
                # continue
            j += 1

        if r > 1:
            count.append(r)
            # sentence.remove(sentence[i])
            # continue
        i += 1

    print(count)
    count = list(map(fact, count))
    print(count)
    c = int(mul(count))
    print(c)
    n = fact(n)
    # print(n)
    prob = (n/c)
    # print(prob)
    print('1/'+str(int(prob)))
