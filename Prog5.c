//Find the prime numbers

#include <stdio.h>
// #include <math.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>

int findPrime(int n) // This function will fint the boolein value of prime number
{
    int isPrime = 1;

    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            // printf("%d\n", i);
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

void main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = findPrime(num);
    if (num == 1)
    {
        printf("%d is nither pirme nor composite numebr\n", num);
    }

    else if (result == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is a composite number\n", num);
    }
}