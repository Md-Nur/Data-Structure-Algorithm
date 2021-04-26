#include <stdio.h>
#include <string.h>
int main()
{
   int T, len, i;
   char S[1001];
   scanf("%d", &T);
   while (T > 0)
   {
      scanf(" %[^\n]", S);
      len = strlen(S);
      for (i = len - 1; i >= 0; i--)
      {
         printf("%c", S[i]);
      }
      printf("\n");
      T--;
   }
   return 0;
}