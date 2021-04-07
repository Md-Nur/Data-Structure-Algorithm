def strToInt(n):
    for i in range(len(n)):
        n[i] = int(n[i])


alice = 0
bob = 0
a = input().split()
b = input().split()

strToInt(a)
strToInt(b)

for i in range(3):
    if (a[i] > b[i]):
        alice += 1
    elif (a[i] < b[i]):
        bob += 1
print(alice, bob)
