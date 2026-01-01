#include<stdio.h>
#include<conio.h>
int main()
{
  char  chr ='\0';
  
  printf("\n Enter a character:");
  scanf("%c",&chr);
  
  if((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z'))
  {
    printf("The character is an Alphabet.\n");
  }
  else
  {
    printf("The character is an Not  Alphabet.\n");
  }
 
  printf("\n Thanks...");
 
  getch();
  return 0;
}
