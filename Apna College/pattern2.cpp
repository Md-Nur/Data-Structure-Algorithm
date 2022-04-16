// Program Name: Pattern

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
    int row, col;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row-1 || i == 0 || j == col-1 || j == 0)
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