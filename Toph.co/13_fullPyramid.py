row = int(input())
for i in range(1, row+1):
    print(' '*(row-i), end='')
    for j in range(1, 2*i):
        if (j % 2):
            print("*", end='')
        else:
            print(' ', end='')
    print('')
