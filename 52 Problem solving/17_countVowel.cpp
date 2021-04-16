#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int vowel = 0;
        char sentence[1002];
        getchar();
        cin.get(sentence, 1002);
        for (int i = 0; i < strlen(sentence); i++)
        {
            sentence[i] = tolower(sentence[i]);
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')
            {
                vowel++;
            }
        }
        //Number of vowels = 6
        cout << "Number of vowels = " << vowel << endl;
    }

    return 0;
}