#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[10005]; 
   gets(s);
   int a[10005] = {}; 
   int j = 0, q = 0;
   while(s[q] != NULL)
   {
      if(s[q] != ' ')
      {
        a[j] *= 10;
        a[j] += (int) s[q] - '0';
      }
 
      if(s[q] == ' ') ;
      q++;
   }
   int now = j, cnt = 0;
   for(int i = j - 1; i >= 0; i--)
    {
        if(a[i] == now)
        {
            now--;
            cnt++;
        }
    }
   printf("%d", j - cnt);
   return 0;
}
