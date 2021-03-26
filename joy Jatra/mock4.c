#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int x, y, count = 0;
    // scanf("%d", &T);
    // for (int i = 0; i < T; i++)
    // {
    scanf("%d %d", &x, &y);
    int t, mul = x * y;
    if (x > y)
    {
        t = x;
    }
    else
    {
        t = y;
    }
    int temp = t;
    while (temp < mul)
    {

        temp = t + t;
        if (temp <= 109)
        {
            t = temp;
        }else{
            t=t;
        }
        printf("%d + %d = %d\n",t,t, temp);
        count++;
    }
    printf("%d\n", count);
    // }

    return 0;
}