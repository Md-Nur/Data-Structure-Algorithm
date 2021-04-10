#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int sq, x, sum1 = 0, sum2 = 0;
    cin >> sq;
    int mat[sq][sq];
    for (int i = 0; i < sq; i++)
    {
        for (int j = 0; j < sq; j++)
        {
            cin >> mat[i][j];
        }
    }

    // for (int i = 0; i < sq; i++)
    // {
    //     for (int j = 0; j < sq; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < sq; i++)
    {
        for (int j = 0; j < sq; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + mat[i][j];
            }
        }
        // cout << sum1 << endl;
    }

    for (int i = 0; i < sq; i++)
    {
        for (int j = 0; j < sq; j++)
        {
            if (i == j)
            {
                sum2 = sum2 + mat[i][sq - j - 1];
            }
        }
        // cout << sum2 << endl;
    }

    cout << abs(sum1 - sum2) << endl;

    return 0;
}