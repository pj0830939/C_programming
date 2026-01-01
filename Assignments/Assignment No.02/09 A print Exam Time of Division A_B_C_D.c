#include<stdio.h>
#include<conio.h>
int main()
{
  char division = 0;
  
  printf("\n Enter a student division(A/B/C/D):");
  scanf("%c",&division);
  
  if(division == 'A'|| division == 'a')
  {
    printf("Exam time 10.00 AM\n");
  }
  else if(division == 'B'|| division == 'b')
  {
    printf("Exam time 10.30 AM\n");
  }
  else if(division == 'C'|| division == 'c')
  {
    printf("Exam time 1.00 PM\n");
  }
  else if(division == 'D'|| division == 'd')
  {
    printf("Exam time 1.30 PM\n");
  }
  else 
  {
    printf("Invalid division Entered.\n");
  }
  
  printf("\n Thanks");
  
  getch();
  return 0;
}
