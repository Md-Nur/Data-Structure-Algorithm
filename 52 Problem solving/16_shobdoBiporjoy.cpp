#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int t, a;
    char sentence[1000];

    cin >> t;
    while (t--)
    {
        getchar();
        cin.get(sentence, 1000);

        a = 0;

        while (a < strlen(sentence))
        {
            char word[100];
            int i = 0, b;
            for (i; sentence[a] != ' '; i++)
            {
                word[i] = sentence[a];
                word[i + 1] = '\0';
                a++;
            }
            if (i > 0)
            {
                // cout << strrev(word);
                for (int j = 0; j < strlen(word); j++)
                {
                    cout << word[strlen(word) - 1 - j];
                }
            }

            while (sentence[a] == ' ')
            {
                cout << sentence[a];
                a++;
            }
        }
        cout << endl;
    }
    return 0;
}


/*

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

*/