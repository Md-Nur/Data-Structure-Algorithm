//Decimal to Binary

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int decToBin(int num, int result[]) // this funtion return the binary value
{
    int i = 0;

    while (num)
    {
        result[i] = num % 2;
        num = num / 2;
        i++;
    }

    return i;
}

int decToOct(int num, int result[]) // this funtion return the octal value
{
    int i = 0;

    while (num)
    {
        result[i] = num % 8;
        num = num / 8;
        i++;
    }

    return i;
}

void printIntArr(int arr[], int n) // This function will print the result
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}

void main()
{
    int num;

    int result[15]; // Result will be stored in this array

    // collecting the number from the user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Find the binary value
    printf("\nBinary = ");
    int i = decToBin(num, result);
    printIntArr(result, i);

    //Find the Octal vaule
    printf("\nOctal = ");
    i = decToOct(num, result);
    printIntArr(result, i);
}