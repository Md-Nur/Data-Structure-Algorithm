//Find the valu of factorial

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int factItretive(int num)
{
    int result = 1;

    for (int i = 2; i <= num; i++)
    {
        result *= i;
    }
    return result;
}
int factRecusive(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factRecusive(num - 1);
    }
}

void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The factorial of (itrative) %d = %d\n", num, factItretive(num));
    printf("The factorial of (recursive) %d = %d\n", num, factRecusive(num));
}