//Networking error's Crc claculation
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int lengthOfInt(int a)
{
    int len = 0;
    while (a != 0)
    {
        a = a / 10;
        len++;
    }
    return len;
}

void main()
{
    int divisor, reminder, len, senderStingLength;

    char sender[101];

    printf("Enter the divisor's value: ");
    scanf("%d", &divisor);

    printf("Enter the sender data: ");
    scanf("%s", &sender);

    // printf("Sender = %s\n", sender);
    senderStingLength = strlen(sender);

    len = lengthOfInt(divisor);
    for (int i = 0; i < len - 1; i++)
    {
        sender[senderStingLength + i] = '0';
        sender[senderStingLength + i + 1] = '\0';
    }
    // printf("Sender = %s\n", sender);

    int temp[5];

    for (int i = 0; sender[i] != '\0'; i++)
    {
        temp[i] = sender[i];
        if (strlen(temp) < len || temp[0] == '0')
        {
            i++;
            continue;
        }
        else if (strlen(temp) == len)
        {
                }
    }
}