#include <stdio.h>
#include<stdio.h>
int main()
{
  char ch = '\o';
  
  printf("\n Enter a Letter");
  Ch = getche();
  
  printf("\n OUTPUT => \n\n");
  
  if(ch >= 'A' && ch <= 'Z')
  {
    while(ch <= 'Z')
    {
      printf(" %c ",ch);
      ch++;
    }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
    while(ch >= 'a')
    {
      printf(" %c ",ch);
      ch--;
    }
  }
  else
  {
    printf("\n Invalid");
  }
  printf("\n\n Thanks....");
  
  getch();
  return 0;
}