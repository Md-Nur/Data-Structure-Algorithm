#include <iostream>
using namespace std;

int main()
{
   int t, i, k, len;
   string s;
   char temp[200];
   cin >> t;
   getchar();
   while (t--)
   {
      getline(cin, s);
      len = s.length();
      k = 0;
      for (i = 0; i < len; i++)
      {
         if (s[i] != ' ')
         {
            temp[k++] = s[i];
         }
         else
         {
            for (--k; k >= 0; k--)
            {
               cout << temp[k];
            }
            cout << s[i];
            k++;
         }
      }
      for (--k; k >= 0; k--)
      {
         cout << temp[k];
      }
      cout << endl;
   }

   return 0;
}