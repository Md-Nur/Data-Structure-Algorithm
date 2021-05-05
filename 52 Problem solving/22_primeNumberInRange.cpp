//Program Name: Prime number in a range

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <cmath>
// #include <string>
// #include <algorithm>
// #include <fstream>
#include <vector>
// #include <list>
// #include <map>

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;
#define size 1001
vector<int> arr(size, 0);
/*	====	Declaration of classes & Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/
int isPrime(int a)
{
    int Prime = 1;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            Prime = 0;
            break;
        }
    }
    return Prime;
}

void setPrime()
{
    for (int i = 2; i <= size; i++)
    {
        if (isPrime(i))
        {
            arr.at(i) = 1;
        }
    }
}
/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    // setPrime();

    int t;
    cin >> t;
    while (t--)
    {
        int a, b,count = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i) == 1 && i>1)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}