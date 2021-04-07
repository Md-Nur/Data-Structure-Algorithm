#include <stdio.h>
#include <string.h>

int factorial(int n);

int word_count(char s[220]);

int main()
{
    int t;
    scanf("%d", &t);
    for (; t > 0; t--)
    {
        char s[220];
        int similar_word[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        scanf(" %[^\n]", s);
        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            s[0] = s[0] + 32;
        }
        int word_len = word_count(s);
        char word[word_len][25];
        int i = 0, j = 0, k = 0, cmpr = 0, ans = 0, fact_word = 0, fact_smlr = 1;
        for (i = 0, j = 0, k = 0; i <= strlen(s); i++, j++)
        {
            if (s[i] == ' ' || s[i] == '\0')
            {
                word[k][j] = '\0';
                k++;
                j = -1;
            }
            else
            {
                word[k][j] = s[i];
            }
        }
        for (i = 0; i < word_len; i++)
        {
            if (word[i] == '\0')
                continue;
            for (j = i + 1; j < word_len; j++)
            {
                if (word[j][0] == '\0')
                    continue;
                cmpr = strcmp(word[i], word[j]);
                if (cmpr == 0)
                {
                    similar_word[i]++;
                    word[j][0] = '\0';
                }
            }
        }
        fact_word = factorial(word_len);

        for (i = 0; i < word_len; i++)
        {
            fact_smlr = fact_smlr * factorial(similar_word[i]);
        }

        ans = fact_word / fact_smlr;
        printf("1/%d\n", ans);
    }

    return 0;
}

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int word_count(char s[])
{
    int i, count = 1, len;
    len = strlen(s);
    for (i = 0; i <= len; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }

    return count;
}