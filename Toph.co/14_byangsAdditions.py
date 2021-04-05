a, b = input().split()
byangs = 0
l = min(len(a), len(b))

for i in range(1, l+1):
    add = int(a[len(a)-i])+int(b[len(b)-i])

    if (add >= 10):
        byangs = 1
        break

if (byangs):
    print('Yes')
else:
    print('No')
