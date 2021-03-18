#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[50];
    scanf("%s", &a);
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if ((strlen(a) - i)%3 == 0 && i!=0)
        {
            printf(",");
        }
        printf("%c", a[i]);
    }

    return 0;
}