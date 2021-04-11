#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %li %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%li\n%c\n%f\n%lf", a, b, c, d, e);

    return 0;
}