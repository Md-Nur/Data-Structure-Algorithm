//Program Name: Word count(only letters and spaces)

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>

/*	====	Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Stucture & Uninons	====	*/

/*	====	Declaration of classes	====	*/

/*	====	Declaration of Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string line;
        int count = 1, len;
        getline(cin, line);
        // cout << line << endl;
        len = line.length();
        for (int i = 0; i < len; i++)
        {
            if (line.at(i) == ' ')
            {
                count++;
                while (line.at(i) == ' ')
                {
                    i++;
                }
            }
        }
        cout << "Count = " << count << endl;
    }
    return 0;
}