import collections
a = collections.deque(input("Enter any string: "))
for j in range(len(a)):
    print(a[len(a)-j-1], end='')
