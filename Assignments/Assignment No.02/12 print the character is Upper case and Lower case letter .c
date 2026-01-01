#include<stdio.h>
#include<conio.h>
int main()
{
  char  chr ='\0';
  
  printf("\n Enter a character:");
  scanf("%c",&chr);
  
  if(chr >= 'A' && chr <= 'Z')
  {
    printf("The character is an Upper case letter.\n");
  }
  else if(chr >= 'a' && chr <= 'z')
  {
    printf("The character is an Lower case letter.\n");
  }
  else
  {
    printf("The character is a Not an Alphabet.\n");
  }
 
  printf("\n Thanks...");
 
  getch();
  return 0;
}
