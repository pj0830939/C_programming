#include<stdio.h>
#include<conio.h>
int main()
{
  int num = 0;
  
  printf("\n Enter a number");
  scanf("%d",&num);
   
  if(num < 10)
  {
    printf("Hello");
  }
  else 
  {
    printf("World");
  }
  printf("\n Thanks...");
  getch();
  return 0;
}