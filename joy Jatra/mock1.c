#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T, a[10][10], N, t;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = (i + 1) * (j + 1);
            // printf("%d\n", a[i][j]);
        }
    }

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == N)
                {
                    t = 1;
                    // printf("%d %d\n", i + 1, j + 1);
                    break;
                }
                else
                {
                    t = 0;
                }
            }
            if (t)
            {
                break;
            }
        }
        if (t == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}