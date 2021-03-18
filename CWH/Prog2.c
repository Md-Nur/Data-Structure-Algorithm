//Sum of first natural number
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int formula(int n)
{
    return ((n * n + n) / 2);
}

int loop(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

void main()
{
    int lastNum;
    printf("Enter the last natural number : ");
    scanf("%d", &lastNum);

    printf("The sum to first %d natural number is = %d\n", lastNum, formula(lastNum));
    printf("The sum to first %d natural number is = %d\n", lastNum, loop(lastNum));
}