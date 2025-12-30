#include<stdio.h>
#include<conio.h>
int main()
{
  int ASCII = 0;
  char  chr ='\0';
  
  printf("Enter an ASCII value");
  scanf("%d",& ASCII);
  
  chr =(char)ASCII;
  
  printf("\n character from ASCII value is %d and %c",chr,chr);
  
  printf("\n Thanks...");
  
  getch();
  return 0;
}
