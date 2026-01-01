#include<stdio.h>
#include<conio.h>
int main()
{
  char division = '\0';
  
  printf("\n Enter a student Division(A/B/C/D)");
  scanf("%c",&division);
  
  switch (division)
  
  {
    case'A':
    case'a':
     printf("Exam Time 10.00 AM\n");
     break;
     
    case'B':
    case'b':
     printf("Exam Time 10.30 AM\n");
     break;
     
    case'C':
    case'c':
     printf("Exam Time 1.00 PM\n");
     break;
     
    case'D':
    case'd':
      
     printf("Exam Time 1.30 PM\n");
     break;
     
    default:
     printf("Invalid Division");
     break;
  }
     printf("\n Thanks for Division...");
  
  getch();
  return 0;
}
