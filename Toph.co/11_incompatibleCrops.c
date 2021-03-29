#include <stdio.h>
// #include <math.h>
#include <string.h>
// #include <stdlib.h>
int main()
{
    int row, col, count = 0;
    char ar[25][25];
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%c", &ar[i][j]);
        }
        // getchar();
        // printf("\n");
    }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         printf("%c", &ar[i][j]);
    //     }
    //     // getchar();
    //     printf("\n");
    // }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ar[i][j] == '.')
            {
                if ((ar[i + 1][j] != '*') && (ar[i - 1][j] != '*') && (ar[i][j + 1] != '*') && (ar[i][j - 1] != '*'))
                {
                    count++;
                    // printf("row = %d \n coloum =  %d  =  %c\n", i, j, ar[i][j+1]);
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}