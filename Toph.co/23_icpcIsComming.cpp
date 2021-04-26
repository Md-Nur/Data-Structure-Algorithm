//Program Name: find the maximum digit in a value

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
    string a;
    cin >> a;
    int count, max = 0;
    char res = a.at(0);
    for (int i = 0; i < a.length(); i++)
    {
        count = 0;
        for (int j = 0; j < a.length(); j++)
        {
            if (a.at(i) == a.at(j))
            {
                count++;
            }
        }
        if (max < count)
        {
            res = a.at(i);
            max = count;
        }
    }
    cout << res << endl;
    return 0;
}