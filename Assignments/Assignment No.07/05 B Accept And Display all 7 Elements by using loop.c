#include <stdio.h>
#include<conio.h>
int main()
{
  int Num[7] = {}, i = 0;
  
  printf("\n Enter All Elements");
  
  for(i = 1; i <= 7; i++)
  {
    printf("\n Enter Element No %d:",i);
    scanf("%d",&Num[i]);
  }
   printf("\n Press Any Key To See All 7 Value \n");
   getch();
   
  for(i = 1; i <= 7; i++)
  {
    printf("\n value of %d Element %d",i,Num[i]);
  }
  getch();
  return 0;
}