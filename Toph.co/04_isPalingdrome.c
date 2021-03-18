#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int b = 1;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] != a[strlen(a) - 1 - i])
        {
            b = 0;
            break;
        }
    }
    if (b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}