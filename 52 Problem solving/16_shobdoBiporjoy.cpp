#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int t;
    char sentence[1002], word[1002];
    cin >> t;
    while (t--)
    {
        getchar();
        cin.get(sentence, 1002);
        // cout << sentence << endl;
        for (int i = 0; i < strlen(sentence); i++)
        {
            if (sentence[i]!=' ')
            {
                word[i]= sentence[i];
            }
            
        }
        
    }

    return 0;
}