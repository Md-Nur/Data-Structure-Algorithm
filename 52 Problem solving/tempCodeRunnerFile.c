#include <stdlib.h> // the library required to use strtol
int main()
{
    char str[50] = "2020111224234234";
    char *remaining;
    long answer;

    answer = strtol(str, &remaining, 10);
    printf("The converted long integer is %ld\n", answer);
    return 0;
}