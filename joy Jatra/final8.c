#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    if (1 <= T <= 1000)
    {
        for (int i = 0; i < T; i++)
        {
            int n, k, m;
            scanf("%d %d %d", &n, &k, &m);
            int check = pow(10, 9);
            if (n <= check && k <= check && m <= check)
            {
                int result = (((int)floor(pow((sqrt(n) + sqrt(n + 1)), (2 * k)))) % m);
                printf("%d\n", result);
            }
        }
    }

    return 0;
}
