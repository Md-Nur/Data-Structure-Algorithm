//Program Name: Pattern Invert Pyramid

/*	====	included header file	====	*/
#include <iostream>
//#include <iomanip>
//#include <cstring>
//#include <cmath>
//#include <string>
//#include <algorithm>
//#include <fstream>
//#include <vector>
//#include <list>
//#include <map> 

/*	====	Stucture, Uninons, Predefine Marcos & namespaces	====	*/
using namespace std;

/*	====	Classes	====	*/

/*	====	Functions	====	*/

/*	+-+-+-+-+-+-+-+-+-+-+
        Main Function
    +-+-+-+-+-+-+-+-+-+-+	*/
int main()
{
    int row;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i ; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}