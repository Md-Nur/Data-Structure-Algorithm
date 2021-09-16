//Program Name:

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
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, sum = 0,last = 0;
        cin >> n;
        temp = n;
        while (temp > 0)
        {
            last = temp % 10;
            sum += last * last * last;
            temp /= 10;
        }
        if (sum == n)
        {
            cout << n << " is an armstrong number!" << endl;
        }
        else
        {
            cout << n << " is not an armstrong number!" << endl;
        }
    }
    return 0;
}