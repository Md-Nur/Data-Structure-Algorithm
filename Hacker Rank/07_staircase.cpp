#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int n, i = 1, space, hash;
    cin >> n;
    for (i; i <= n; i++)
    {
        space = n - i;
        while (space--)
        {
            cout << " ";
        }
        hash = i;
        while (hash--)
        {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}