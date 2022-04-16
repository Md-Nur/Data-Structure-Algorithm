// Program Name: Pyramid 180 deg flip

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
    int row;
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (row - i - 1 <= j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}