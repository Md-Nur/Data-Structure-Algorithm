T = int(input())
a = input().split()
for i in range(len(a)):
    a[i] = int(a[i])
b = a.copy()
b.sort()
# print(a)
# print(b)
if(a == b):
    print('Yes')
else:
    print('No')
