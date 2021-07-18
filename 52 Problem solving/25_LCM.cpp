//Program Name: Lcm

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <list>
#include <map>

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
    int T;
    cin >> T;
    while (T--)
    {
        int vajjo, vajok, gunfol, temp;
        cin >> vajjo >> vajok;
        gunfol = vajjo * vajok;
        while (vajok != 0)
        {
            temp = vajok;
            vajok  = vajjo % vajok;
            vajjo = temp;
            // cout << vajjo <<endl << vajok <<endl<< vagshes << endl;
        }
        cout << "LCM = " << (gunfol / vajok) << endl;
    }
    return 0;
}