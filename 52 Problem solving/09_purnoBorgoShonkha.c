#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T, num, rnum;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &num);
        rnum = sqrt(num);
        if (rnum * rnum == num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}