//52 prolem er 2nd problem
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int T, j = 0;
    //printf("Enter the number of testing")
    scanf("%d", &T);
    char n[101];
    for (int i = 1; i <= T; i++)
    {
        // printf("Enter a number: ");
        scanf("%s", &n);
        j = strlen(n);
        if (n[j - 1] % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
}