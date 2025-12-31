#include<stdio.h>
#include<conio.h>
int main()
{
  char  chr ='\0';
  
  printf("\n Enter a character:");
  scanf("%c",&chr);
  
  if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr =='I' || chr == 'O' || chr == 'U')
  
  {
    printf("The character is a vowel.\n");
  }
  else
  {
    printf("The character is not a vowel.\n");
  }
  printf("\n Thanks...");
  
  getch();
  return 0;
}
