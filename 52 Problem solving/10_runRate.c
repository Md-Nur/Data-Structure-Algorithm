#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T;
    double r1, r2, b, rr, cr;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%lf %lf %lf", &r1, &r2, &b);
        cr = r2 / (300 - b) * 6;
        rr = (r1 - r2 + 1) / b * 6;
        if (r1 < r2)
        {
            rr = 0.0;
        }

        printf("%.2lf %.2lf\n", cr, rr);
    }

    return 0;
}