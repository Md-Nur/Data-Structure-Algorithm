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
    count = {}
    n = len(sentence)

    while (i < len(sentence)):
        r = 0
        j = 0
        while (j < len(sentence)):
            if (sentence[i] == sentence[j]):
                r += 1
            j += 1

        if r > 1:
            count[sentence[i]] = r
        i += 1

    # print(count)
    lc = []
    for k in count.values():
        lc.append(k)

    # print(lc)
    lc = list(map(fact, lc))
    # print(lc)
    c = int(mul(lc))
    # print(c)
    n = fact(n)
    prob = (n/c)
    # print(prob)
    print('1/'+str(int(prob)))
