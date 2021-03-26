#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int x = 1;
    while (x++ < 100)
    {
        x *= x;
        if (x < 10)
            continue;
        if (x > 50)
            break;
    }

    return 0;
}