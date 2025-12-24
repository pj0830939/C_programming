#include<stdio.h>
#include<stdio.h>

int main()
{
  int num1 , num2 , multiply;
  
  printf("Enter two number:");
  scanf("%d%d",&num1 ,&num2);
  
  multiply = num1 * num2;
  
  printf("Multiplication = %d\n", multiply);
  
  getch();
  return 0;
}
