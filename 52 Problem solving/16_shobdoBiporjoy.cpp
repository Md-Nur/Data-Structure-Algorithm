#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int wordCount(char word[100]);

int main()
{
    int T, a, b, word;
    char sentence[1000], temp;

    cin >> T;
    while (T--)
    {
        getchar();
        cin.get(sentence, 1000);
        cout << sentence << endl;

        a = 0;
        word = wordCount(sentence);
        for (int i = 0; i < word; i++)
        {
            b = a;
            while (sentence[a] != ' ')
            {
                a++;
            }
            for (int j = b; sentence[j] != ' '; j++)
            {
                temp = sentence[j];
                sentence[j] = sentence[a - j];
                sentence[a - j] = temp;
            }
        }
        cout << sentence << endl;
    }

    return 0;
}

int wordCount(char word[100])
{
    int count = 1;
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] == ' ')
        {
            count++;
        }
    }
    return count;
}