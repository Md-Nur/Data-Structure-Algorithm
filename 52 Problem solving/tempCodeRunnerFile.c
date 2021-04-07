#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[34];
    fflush(stdin);
    gets(a);
    printf("%d\n", strlen(a));
    return 0;
}