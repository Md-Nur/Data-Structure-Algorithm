#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n1, n2, n3, T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        printf("Case: %d", i);
        for (int j = 0; j < 3; j++)
        {
            if (n1 < n2 && n1 < n3)
            {
                printf("%d", n1);
            }
            else if (n2 < n1 && n2 < n3)
            {
                printf("%d", n2);
            }
            else
            {
                printf("%d", n3);
            }
        }
    }

    return 0;
}