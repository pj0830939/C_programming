#include <stdio.h>
#include<conio.h>
int main()
{
  int No = 0, i = 1;
  
  printf("\n Enter a number =");
  scanf("%d",&No);
  
  printf("\n Table of %d is => \n",No);
  
  while(i <= 10)
  {
    printf("\n %3d * %3d = %3d",No,i,(i * No));
    i++;
  }
    printf("\n Thanks....");
    
    getch();
    return 0;
}