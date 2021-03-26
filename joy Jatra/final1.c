#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int N, count = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        int temp = i, lt;
        while (temp != 0)
        {
            lt = temp % 10;
            temp = temp / 10;
            if (lt == 1)
            {
                // printf("%d = %d\n", i, lt);
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}