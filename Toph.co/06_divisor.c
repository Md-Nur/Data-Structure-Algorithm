#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (!(a % i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}