#include <stdio.h>
#include<conio.h>
int main()
{
  int Bill = 0,Cnt = 0,Bill_sum = 0;
  
  printf("\n Enter Today Bills => \n");
  
  while(1)
  {
    printf("\n Enter Bill No %d:",Cnt+1);
    scanf("%d",&Bill);
    
    if(Bill <= 0)
    {
      break;
    }
    Bill_sum = Bill_sum + Bill;
    Cnt++;
  }
   printf("\n sum of %d Bill is = %d",Cnt,Bill_sum);
   printf("\n Thanks....");
   
   getch();
   return 0;
}