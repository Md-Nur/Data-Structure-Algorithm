#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf("The reverse number is :");
    while (a)
    {
        printf("%d", a % 10);
        a = a / 10;
    }

    return 0;
}