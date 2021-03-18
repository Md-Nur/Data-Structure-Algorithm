// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// int main()
// {
//     int T, N[10000000];
//     scanf("%d", &T);
//     if (1 <= T <= 100)
//     {
//         for (int i = 0; i < T; i++)
//         {
// for (int j = 0; j < count; j++)
// {
//     /* code */
// }
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char line[] = "1 -2 1000 -50 20 7 455";
    char *p, *e;
    long input;

    int count = 0;
    p = line;
    for (p = line;; p = e)
    {
        input = strtol(p, &e, 10);
        if (p == e)
        {
            break;
        }
        count++;
    }
    printf("%d\n", count);

    return 0;
}