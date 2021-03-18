#include <stdio.h>
#include <string.h>

void sortingString(char string[101])
{
    char temp;

    int i, j;
    int n = strlen(string);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
}
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    sortingString(a);
    sortingString(b);

    if (!strcmp(a, b))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}