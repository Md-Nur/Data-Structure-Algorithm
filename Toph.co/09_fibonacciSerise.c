#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int t, n, f1 = 1, f2 = 1;
    scanf("%d", &n);
    for (int i = 0; i < n - 2; i++)
    {
        t = f2;
        f2 = f1 + f2;
        f1 = t;
    }
    printf("%d\n", f2);

    return 0;
}