//Program Name: Find the number of the largest value

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
    int n, max, count = 0;
    cin >> n;
    int candle[n];
    for (int i = 0; i < n; i++)
    {
        cin >> candle[i];
    }
    max = candle[0];
    for (int j = 1; j < n; j++)
    {
        if (max < candle[j])
        {
            max = candle[j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        if (candle[k] == max)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}