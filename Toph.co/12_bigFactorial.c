#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, fact = 1;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    int n = 3, r[4];
    for (int i = 0; i < 4; i++)
    {
        r[i] = fact % 10;
        fact = fact / 10;
        // printf("%d\n", fact);
        if (fact == 0)
        {
            n = i;
            break;
        }
    }
    // printf("%d\n", n);
    for (int i = n; i >= 0; i--)
    {

        printf("%d", r[i]);
    }

    printf("\n");
    return 0;
}