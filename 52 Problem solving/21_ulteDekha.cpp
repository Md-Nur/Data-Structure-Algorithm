//Program Name: reverseing a string

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <cmath>
#include <string>
#include <algorithm>
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
    int t;
    cin >> t;
    string a;
    cin.ignore();
    while (t--)
    {
        getline(cin, a);
        reverse(a.begin(), a.end());
        cout << a << endl;
    }

    return 0;
}