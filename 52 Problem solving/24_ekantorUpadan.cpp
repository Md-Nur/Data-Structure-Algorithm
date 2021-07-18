//Program Name: Ekantor upadan

/*	====	included header file	====	*/
#include <iostream>
// #include <iomanip>
// #include <cstring>
// #include <cmath>
#include <string>
// #include <algorithm>
// #include <fstream>
// #include <vector>
// #include <list>
// #include <map>

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Declaration of classes & Functions	====	*/

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < size; i += 2)
        {
            cout << arr[i];
            if (i + 2 <= size)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}