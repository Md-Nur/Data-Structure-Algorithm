// Program Name:

/*	====	included header file	====	*/
#include <iostream>
//#include <iomanip>
//#include <cstring>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <fstream>
//#include <vector>
//#include <list>
//#include <map>

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=  n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i<j && j <= 2*n-i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    for (int i = n; i >  0; i--)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i<j && j <= 2*n-i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}