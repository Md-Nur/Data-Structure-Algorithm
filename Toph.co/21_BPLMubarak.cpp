//Program Name: Find the numbers of ball and over

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
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        int ball = 0, Over, Ball;
        string over;
        getline(cin, over);
        for (int i = 0; i < over.length(); i++)
        {
            over.at(i) = toupper(over.at(i));
            // cout << over.at(i) << endl;
            if (over.at(i) != 'W' && over.at(i) != 'N' && over.at(i) != 'D')
            {
                ball++;
            }
        }
        Over = ball / 6;
        Ball = ball % 6;
        if (Over > 0)
        {
            if (Over == 1)
            {
                cout << "1 OVER";
            }
            else
            {
                cout << Over << " OVERS";
            }
        }

        if (Over == 0 && Ball > 0)
        {
            if (Ball == 1)
            {
                cout << "1 BALL";
            }
            else
            {
                cout << Ball << " BALLS";
            }
        }

        else if (Ball > 0)
        {
            if (Ball == 1)
            {
                cout << " 1 BALL";
            }
            else
            {
                cout << " " << Ball << " BALLS";
            }
        }
        cout << endl;
    }
    return 0;
}