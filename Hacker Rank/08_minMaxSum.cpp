//Program Name: Min max sum

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>

using namespace std;

/*	====	Class,Stucture & Uninons	====	*/

/*	====	Declaration of Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    long int arr[5], min, max, minSum = 0, maxSum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    min = 0;
    max = 0;
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
        if (arr[j] > arr[max])
        {
            max = j;
        }
    }
    for (int k = 0; k < 5; k++)
    {
        if (k != min)
        {
            maxSum += arr[k];
        }
        if (k != max)
        {
            minSum += arr[k];
        }
    }
    cout << minSum << " " << maxSum << endl;
    return 0;
}

/*	====	Functions	====	*/