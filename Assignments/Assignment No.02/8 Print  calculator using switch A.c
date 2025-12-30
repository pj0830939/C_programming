#include<stdio.h>
#include<conio.h>
int main()
{
  char opr;
  int num1 = 0,num2 = 0, Result = 0;
  
  printf("\n Enter a operator (+,-,*,/,%)");
  scanf("%d",&opr);
  
  printf("\n Enter a first number:");
  scanf("%d",&num1);
  
  printf("Enter a second number:");
  scanf("%d",&num2);
  
  switch (opr)
  
  {
    case'+':
     Result = num1 + num2;
     printf("\n Addition of %d + %d = %d",num1,num2, Result);
     break;
     
   case'-':
     Result = num1 - num2;
     printf("\n subtraction of %d - %d = %d",num1,num2, Result);
     break;
     
   case'*':
     Result = num1 * num2;
     printf("\n Multiplication of %d * %d = %d",num1,num2, Result);
     break;
     
   case'/':
     Result = num1 / num2;
     printf("\n Division of %d / %d = %d",num1,num2, Result);
     break;
     
   case'%':
     Result = num1 % num2;
     printf("\n Modulo of %d %% %d",num1,num2, Result);
     break; 
     
   default:
     printf("Invalid operator");
     break;
  }
     printf("\n Thanks for arithmetic operators...");
  
  getch();
  return 0;
}
