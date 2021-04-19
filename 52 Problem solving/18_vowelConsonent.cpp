//Program Name: Seperate vowel and consonent charecter in a string

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
#include <cstring>
// #include <cmath>
// #include <string>

using namespace std;

/*	====	Class,Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int T, v, c;
    cin >> T;
    while (T--)
    {
        char line[1001], vowel[1001], consonent[1001];
        getchar();
        cin.get(line, 1001);
        v = 0;
        c = 0;
        for (int i = 0; line[i] != '\0'; i++)
        {
            if (!(('a' <= line[i] && line[i] <= 'z') || ('A' <= line[i] && line[i] <= 'Z')))
            {
                continue;
            }
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
            {
                cout << line[i];
            }
        }
        cout << endl;
        for (int i = 0; line[i] != '\0'; i++)
        {
            if (!(('a' <= line[i] && line[i] <= 'z') || ('A' <= line[i] && line[i] <= 'Z')))
            {
                continue;
            }
            if (line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u' && line[i] != 'A' && line[i] != 'E' && line[i] != 'I' && line[i] != 'O' && line[i] != 'U')
            {
                cout << line[i];
            }
        }
        cout << endl;
    }

    return 0;
}

/*	====	Functions	====	*/
