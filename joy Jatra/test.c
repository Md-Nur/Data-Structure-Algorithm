#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
  //  What is the output of this code?
  int *arr = malloc(sizeof(int));
  *arr = 13;
  arr = realloc(arr, 2 * sizeof(int));
  *(arr + 1) = *arr;
  printf("%d", *(arr + 1));
}