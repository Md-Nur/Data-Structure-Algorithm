#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int row, col, count = 0;
    char crop[25][25];
    scanf("%d %d", &row, &col);
    getchar();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%c", &crop[i][j]);
        }
        getchar();
    }

    // printf("printing\n");
    // for (int k = 0; k < row; k++)
    // {
    //     for (int x = 0; x < col; x++)
    //     {
    //         printf("%c", crop[k][x]);
    //     }
    //     printf("\n");
    // }

    for (int y = 0; y < row; y++)
    {
        for (int z = 0; z < col; z++)
        {
            // printf("%c", crop[y][z]);
            if (crop[y][z] == '.' && crop[y + 1][z] != '*' && crop[y - 1][z] != '*' && crop[y][z + 1] != '*' && crop[y][z - 1] != '*')
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}