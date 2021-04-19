#include <bits/stdc++.h>
using namespace std;

int main()
{
   int lines, c;
   string line;
   cin >> lines;
   cin.ignore();
   while (lines--)
   {
      getline(cin, line);
      for (int i = 0; i < line.size(); i++)
      {
         if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
         {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
            {
               cout << line[i];
            }
         }
      }

      cout << endl;

      for (int i = 0; i < line.size(); i++)
      {
         if (line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z')
         {
            if (line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u' && line[i] != 'A' && line[i] != 'E' && line[i] != 'I' && line[i] != 'O' && line[i] != 'U')
            {
               cout << line[i];
            }
         }
      }
      cout << endl;
   }
}