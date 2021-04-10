#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int shift;
    char word[100];
    cin >> shift;
    getchar();
    cin.get(word, 100);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] < 'a' || word[i] > 'z')
        {
            word[i] = ' ';
        }
        if (word[i] != ' ')
        {
            word[i] = word[i] - shift;
        }

        if (word[i] < 'a' && word[i] != ' ')
        {
            word[i] = word[i] + 26;
        }
    }
    cout << word;
    return 0;
}