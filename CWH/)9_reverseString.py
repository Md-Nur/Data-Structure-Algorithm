import collections
a = input("Enter any string: ")
print('String before reverse: ', a)
b = collections.deque()
for i in range(len(a)):
    b.appendleft(a[i])
print('String after reverse: ', end='')
for j in range(len(b)):
    print(b[j], end='')
# print(b)
