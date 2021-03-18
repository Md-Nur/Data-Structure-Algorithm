#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T, N, fdigit, ldigit;
    scanf("%d", &T);
    if (1 <= T <= 10000)
    {
        for (int i = 0; i < T; i++)
        {
            scanf("%d", &N);
            if (10000 <= N <= 99999)
            {
                ldigit = N % 10;
                while (N > 0)
                {
                    fdigit = N % 10;
                    N = N / 10;
                }
                printf("Sum = %d\n", fdigit + ldigit);
            }
        }
    }
    return 0;
}