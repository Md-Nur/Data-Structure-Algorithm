#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b = 1;
    scanf("%d", &a);
    for (int i = 2; i * i <= a; i++)
    {
        if (!(a % i))
        {
            b = 0;
            break;
        }
    }
    if (b && a!=1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}