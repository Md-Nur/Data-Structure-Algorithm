//Program Name: Using for loop

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>

using namespace std;

/*	====	Class,Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (1 <= i <= 9)
        {
            if (i == 1)
            {
                cout << "one" << endl;
            }
            if (i == 2)
            {
                cout << "two" << endl;
            }
            if (i == 3)
            {
                cout << "three" << endl;
            }
            if (i == 4)
            {
                cout << "four" << endl;
            }
            if (i == 5)
            {
                cout << "five" << endl;
            }
            if (i == 6)
            {
                cout << "six" << endl;
            }
            if (i == 7)
            {
                cout << "seven" << endl;
            }
            if (i == 8)
            {
                cout << "eight" << endl;
            }
            if (i == 9)
            {
                cout << "nine" << endl;
            }
        }
        if (i > 9)
        {
            if (i % 2)
            {
                cout << "odd" << endl;
            }
            else
            {
                cout << "even" << endl;
            }
        }
    }

    return 0;
}
/*	====	Functions	====	*/
