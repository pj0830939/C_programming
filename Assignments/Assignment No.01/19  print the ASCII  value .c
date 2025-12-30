#include<stdio.h>
#include<conio.h>
int main()
{
  int num = 0;
  char  chr ='\0';
  
  printf("Enter a number");
  scanf("%d",&num);
  
  printf("Enter a character");
  scanf("%c",&chr);
  
  printf("\n ASCII valu of %c is %d",chr,chr);
  
  printf("\n Thanks...");
  
  getch();
  return 0;
}
