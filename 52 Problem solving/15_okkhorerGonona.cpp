// #include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, count;
    // cin >> T;
    scanf("%d", &T);
    char word[1000];
    int letter[26];
    while (T--)
    {
        for (int a = 0; a < 26; a++)
        {
            letter[a] = 0;
        }
        // getchar();
        // cin.get(word, 1000);
        scanf(" %[^\n]", word);
        for (int i = 0; i < strlen(word); i++)
        {
            count = 0;
            for (int j = 0; j < strlen(word); j++)
            {
                if (word[i] == word[j])
                {
                    count++;
                }
            }
            if (word[i] >= 'a' && word[i] <= 'z' && count > 0)
            {
                letter[word[i] - 97] = count;
            }
        }
        for (int k = 0; k < 26; k++)
        {
            char b = k + 97;
            if (letter[k] > 0)
            {
                // cout << b << " = " << letter[k] << endl;
                printf("%c = %d\n", b, letter[k]);
            }
        }
        if (T != 0)
        {
            // cout << endl;
            printf("\n");
        }
    }
    return 0;
}