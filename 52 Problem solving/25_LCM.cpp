//Program Name: LCM

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
    long long T;
    cin >> T;
    while (T--)
    {
        long long vajjo, vajok, vagsesh, temp, gunfol;
        cin >> vajjo >> vajok;
        if (vajjo == 0 || vajok <= 0)
        {
            gunfol = 0;
        }
        else
        {
            gunfol = vajjo * vajok;
            while (vajjo % vajok != 0)
            {
                temp = vajjo;
                vajjo = vajok;
                vajok = temp % vajok;
            }
        }
        cout << "LCM = " << gunfol / vajok << endl;
    }

    return 0;
}