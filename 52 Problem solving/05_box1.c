#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int i, T, j, n, k;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &n);
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if (i < T)
        {
            printf("\n");
        }
    }

    return 0;
}