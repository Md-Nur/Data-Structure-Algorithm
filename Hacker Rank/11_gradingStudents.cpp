//Program Name: adjust the student grading point

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

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int n, vag, ref;
    cin >> n;
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    for (auto &&i : marks)
    {
        vag = i / 5;
        ref = 5 * (vag + 1);
        // cout << ref << endl;
        if ((ref - i) < 3 && ref >= 40)
        {
            i = ref;
        }
        cout << i << endl;
    }

    return 0;
}