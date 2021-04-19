//Program Name: Little Matrix (2 dimention) Multiplication

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <cmath>
// #include <string>

using namespace std;

/*	====	Class,Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/
void getMatrix(int a[2][2]);
/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int a[2][2], b[2][2], c[2][2];
    getMatrix(a);
    getMatrix(b);

    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];

    cout << c[0][0] <<" "<< c[0][1] << endl
         << c[1][0] <<" "<< c[1][1] << endl;
    return 0;
}

/*	====	Functions	====	*/
void getMatrix(int a[2][2])
{
    cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
}