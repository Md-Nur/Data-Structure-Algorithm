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
    int n,pr = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << pr << " ";
            pr++;
        }
        cout << endl;
    }

    return 0;
}