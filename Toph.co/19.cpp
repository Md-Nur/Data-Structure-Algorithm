#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int bar, numOfPlus, numOfDots;
    double prog;
    // cin >> prog;
    scanf("%lf", &prog);
    bar = floor(prog);
    numOfPlus = bar / 10;
    numOfDots = 10 - numOfPlus;
    // cout << numOfDots << endl;
    cout << "[";
    while (numOfPlus > 0)
    {
        cout << "+";
        numOfPlus--;
    }
    while (numOfDots > 0)
    {
        cout << ".";
        numOfDots--;
    }
    cout << "] " << bar << "%" << endl;
    return 0;
}