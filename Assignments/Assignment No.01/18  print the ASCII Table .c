#include<stdio.h>
#include<conio.h>
int main()
{
  int Num = 0;
  
  printf("ASCII table\n");
  printf("value\tcharacter\n");
  
  for (Num = 0;Num<= 127;Num++);
  {
    printf("%d\t%c\n");
  }
  
  printf("\n Thanks...");
  
  getch();
  return 0;
}
