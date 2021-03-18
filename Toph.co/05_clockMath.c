#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    float H, M;
    scanf("%f %f", &H, &M);
    double a = (((11.0 * M) - (60.0 * H)) / 2.0);
    if (a < 0)
    {
        a = a * (-1.0);
    }
    if (a > 180 && a <= 360)
    {
        a = 360 - a;
    }
    printf("%.7lf\n", a);
    return 0;
}