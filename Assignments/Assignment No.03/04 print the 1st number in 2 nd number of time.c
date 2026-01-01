#include <stdio.h>
#include<conio.h>
int main()
{
  int num = 0,times = 0,i = 0;
  
  printf("\n Enter the first number:");
  scanf("%d",&num);
  
  printf("\n Enter the second number:");
  scanf("%d",&times);
  
  for(i = 1; i <= times; i++);
  {
    printf("%d",num);
  }
  printf("\n Thanks...");
  
  getch();
  return 0;
}