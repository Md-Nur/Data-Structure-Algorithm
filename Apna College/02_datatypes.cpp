//Program Name: 

/*	====	included header file	====	*/
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <list>
#include <map>

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
    int a = 0;
    float b = 5.3;
    char c = 't';
    double d = 23.540;
    short int e = 4;
    long int f = 3;
    bool g = true;
    cout << "Size of int "<<sizeof(a) << endl;
    cout << "Size of float "<<sizeof(b) << endl;
    cout << "Size of charecter "<<sizeof(c) << endl;
    cout << "Size of double "<<sizeof(d) << endl;
    cout << "Size of short int "<<sizeof(e) << endl;
    cout << "Size of long int "<<sizeof(f) << endl;
    cout << "Size of boolean "<<sizeof(g) << endl;
    return 0;
}