#include <stdio.h>
#include <math.h>
#include <string.h>
void removeSpace(char n[])
{
    // remove front spaces
    while (1)
    {
        if (n[0] != ' ')
        {
            break;
        }
        else
        {
            for (int i = 0; i < strlen(n); i++)
            {
                n[i] = n[i + 1];
            }
        }
    }

    // remove last spaces
    while (1)
    {
        if (n[strlen(n) - 1] != ' ')
        {
            break;
        }
        else
        {
            n[strlen(n) - 1] = '\0';
        }
    }
}

int countWord(char n[])
{
    int count = 1;
    for (int i = 0; i < strlen(n);)
    {
        if (n[i] == ' ')
        {
            while (n[i] == ' ')
            {
                i++;
            }

            count++;
        }
        // else
        i++;
    }
    return count;
}

int main()
{
    int t, result;
    scanf("%d", &t);
    while (t--)
    {
        char sentence[100000];
        scanf(" %[^\n]", sentence);
        removeSpace(sentence);
        result = countWord(sentence);
        if (strlen(sentence) == 0)
        {
            result = 0;
        }

        printf("%d\n", result);
    }
    
    return 0;
}