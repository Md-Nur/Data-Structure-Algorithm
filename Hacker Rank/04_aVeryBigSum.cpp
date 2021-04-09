#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

// int aVeryBigSum(int n, long long int a[])
// {
//     long long int add = 0;
//     for (int i = 0; i < n; i++)
//     {
//         add += a[i];
//     }

//     return add;
// }

int main()
{
    int n;

    cin >> n;
    long long int t=0, A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        t += A[i];
    }

    // t = aVeryBigSum(n, A);
    cout << t << endl;
    return 0;
}