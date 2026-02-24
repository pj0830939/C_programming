#include <stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0;
  
  for(i = 1;i <= 20;i++)
  {
    for(j = 1;j <= 21;j++)
    {
      printf(" %3d ",i * j);
    }
    getch();
    printf("\n");
  }
   printf("\n============******========\n");
  
   getch();
   return 0;
}