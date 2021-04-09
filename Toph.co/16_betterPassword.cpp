#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    char psd[20];
    cin.get(psd, 20);
    psd[0] = char(toupper(psd[0]));
    for (int i = 0; i < strlen(psd); i++)
    {
        if (psd[i] == 's')
        {
            psd[i] = '$';
        }
        if (psd[i] == 'i')
        {
            psd[i] = '!';
        }
        if (psd[i] == 'o')
        {
            psd[i] = '(';

            for (int j = (strlen(psd)+1); j > (i + 1); j--)
            {
                psd[j] = psd[j - 1];
                // cout << psd[j] << endl;
            }
            psd[i + 1] = ')';
        }
    }
    // psd[strlen(psd)] = '.';
    // psd[strlen(psd)] = '\0';
    cout << psd << "." << endl;
    return 0;
}