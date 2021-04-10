a = int(input())
b = []

for i in range(a):
    i = input()
    b.append(i.lower())
    # print(i)
for j in b:
    check = 0
    for test in range(1, len(j)):

        for k in range(test, len(j)):
            if(ord(j[test-1]) > ord(j[k])):
                check = check+1

    if (check):
        print("YES")
    else:
        print("NO")
