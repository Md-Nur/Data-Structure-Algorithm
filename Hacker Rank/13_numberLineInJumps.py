x1, v1, x2, v2 = input().split()

x1 = int(x1)
v1 = int(v1)
x2 = int(x2)
v2 = int(v2)


result = 0
for i in range(x1, 10001):
    if (x1 == x2):
        result = 1
        break
    x1 += v1
    x2 += v2

if (result):
    print("YES")
else:
    print("NO")
