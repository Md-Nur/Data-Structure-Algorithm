//Multiplication Table
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a, n;
    printf("Enter The value of number and count for Multiplication Table: ");
    scanf("%d %d", &a,&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    
}