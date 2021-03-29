#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b, c, t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        int n1, n2, n3;
        if (a < b && b < c)
        {
            n1 = a;
            n2 = b;
            n3 = c;
        }
        else if (b < c && c < a)
        {
            n1 = b;
            n2 = c;
            n3 = a;
        }
        else if (c < a && a < b)
        {
            n1 = c;
            n2 = a;
            n3 = b;
        }
        else if (a < c && c < b)
        {
            n1 = a;
            n2 = c;
            n3 = b;
        }
        else if (b < a && a < c)
        {
            n1 = b;
            n2 = a;
            n3 = c;
        }
        else
        {
            n1 = c;
            n2 = b;
            n3 = a;
        }
        printf("Case %d: %d %d %d\n", i, n1, n2, n3);
    }

    return 0;
}