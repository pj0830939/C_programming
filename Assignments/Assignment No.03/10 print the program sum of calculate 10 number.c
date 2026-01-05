#include <stdio.h>
#include<conio.h>
int main()
{
  int bill = 0,cnt =0,bill_sum = 0;
  
  printf("\n Enter a all 10 bills => \n");
  
  while ( cnt < 10)
  {
    printf("\n Enter a bill no %d :",cnt+1);
    scanf("%d",&bill);
    
    bill_sum = bill_sum + bill;
    cnt++;
  }
   printf("\n sum of 10 bills = %d.",bill_sum);
   
   getch();
   return 0;
}