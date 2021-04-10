#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int a[3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < 3; j++)
    {
        sum = sum + a[j];
    }

    cout << sum << endl;
    return 0;
}