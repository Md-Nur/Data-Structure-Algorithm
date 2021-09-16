//Program Name: Food of alean Gupi

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <cmath>
// #include <string>
// #include <algorithm>
// #include <fstream>
// #include <vector>
// #include <list>
// #include <map>

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Declaration of classes & Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float food;
        int days = 0;
        cin >> food;
        while (food > 1)
        {
            food /= 2;
            days++;
        }
        cout << days<<" days" << endl;
    }

    return 0;
}