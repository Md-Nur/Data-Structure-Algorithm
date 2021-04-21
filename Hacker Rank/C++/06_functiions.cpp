//Program Name: Find the largest value of the four number

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>

/*	====	Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Stucture & Uninons	====	*/

/*	====	Declaration of classes	====	*/

/*	====	Declaration of Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/
// int largestValue(int a, int b, int c, int d)
// {
//     if (a > b && a > c && a > d)
//     {
//         return a;
//     }
//     else if (b > a && b > c && b > d)
//     {
//         return b;
//     }
//     else if (c > a && c > b && c > d)
//     {
//         return c;
//     }
//     else if (d > a && d > b && d > c)
//     {
//         return d;
//     }
// }
/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
     if (a >= b && a >= c && a >= d)
    {
        cout<< a;
    }
    else if (b >= a && b >= c && b >= d)
    {
        cout<< b;
    }
    else if (c >= a && c >= b && c >= d)
    {
        cout<< c;
    }
    else if (d >= a && d >= b && d >= c)
    {
        cout<< d;
    }
    // cout << largestValue(a, b, c, d) << endl;
    return 0;
}