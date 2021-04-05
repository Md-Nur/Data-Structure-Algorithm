t = int(input())
for i in range(t):
    n = int(input())
    a = 1
    for j in range(2, n+1):
        a *= j
    # print(a)
    r = str(a)
    count = 0
    l = len(r)
    # print(r[l-count-1])
    # print(r[l-count-1] == '0')
    while(r[l-count-1] == '0'):
        count = count + 1
    print(count)
