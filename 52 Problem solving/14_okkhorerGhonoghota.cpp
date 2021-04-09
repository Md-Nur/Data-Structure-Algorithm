#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int count = 0;
        char line[1000];
        char a;
        getchar();
        cin.get(line, 1000);
        getchar();
        cin >> a;
        for (int i = 0; i < strlen(line); i++)
        {
            if (line[i] == a)
            {
                count++;
            }
        }
        if (count)
        {
            cout << "Occurrence of "
                 << "\'" << a << "\'"
                 << " in "
                 << "\'" << line << "\'"
                 << " = " << count << endl;
        }
        else
        {
            cout << "\'" << a << "\'"
                 << " is not present" << endl;
        }

        //         Occurrence of 'l' in 'hello world' = 3
        // 'a' is not present
    }

    return 0;
}