//52 prolem er 1st problem
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int T, n;
    //printf("Enter the number of testing")
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        // printf("Enter a number: ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
}