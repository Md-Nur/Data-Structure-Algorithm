def isPrime(n):
    d = 1
    i = 2

    while(i*i <= n):

        if (n % i == 0):
            d = 0
            break

        else:
            d = 1

        i += 1

    return d


a = int(input())
b = int(input())

for i in range(a, b+1):
    
    if (isPrime(i) and i != 1 and i != 0):
        print(i)
