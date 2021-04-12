#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int n, a, b, sum = 0, arr[1000];
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = a; j <= b; j++)
    {
        sum = sum + arr[j];
    }
    cout << sum << endl;
    return 0;
}