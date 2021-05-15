x = int(input())
while x:
    a = input()
    for i in a:
        # print(i)
        print((ord(i)-64),end="")
    print()
    x-=1