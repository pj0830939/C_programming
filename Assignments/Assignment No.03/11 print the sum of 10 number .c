#include <stdio.h>
#include<conio.h>
int main()
{
  int i = 0,num = 0,sum = 0;
  for( i = 1; i <= 10; i++)
  {
    printf("\n Enter number %d :",i);
    scanf(" %d ",&num);
    
    sum = sum + num;
  }
    printf("sum of 10 number =%d.",sum);
    
  getch();
  return 0;
}