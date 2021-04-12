#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int n, plus = 0, minus = 0, zero = 0, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0)
        {
            plus++;
        }
        else if (arr[j] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << float(plus) / float(n) << endl;
    cout << float(minus) / float(n) << endl;
    cout << float(zero) / float(n) << endl;

    return 0;
}