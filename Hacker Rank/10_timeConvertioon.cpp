//Program Name: Time conversion

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
    int h;
    string time, hour;
    getline(cin, time);
    if (time.at(0) == '1' && time.at(1) == '2')
    {
        for (int i = 0; i < 2; i++)
        {
            time[i] = '0';
        }
    }
    if (time.at(8) == 'P')
    {
        for (int i = 0; i < 2; i++)
        {
            hour[i] = time[i];
        }

        h = stoi(hour);
        h += 12;
        hour = to_string(h);
        for (int i = 0; i < 2; i++)
        {
            time[i] = hour[i];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << time[i];
    }
    cout << endl;
    return 0;
}