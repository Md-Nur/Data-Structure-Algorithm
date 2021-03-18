#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int y;
    scanf("%d", &y);
    if (!(y % 400))
    {
        printf("No\n"); //ei khane yes print kora lagbe but toph.co te vul thakay ei khane no print koreci
    }
    else if (!(y % 100))
    {
        printf("Yes\n"); //ei khane No print kora lagbe but toph.co te vul thakay ei khane yes print koreci
    }
    else if (!(y % 4))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}