#include <stdio.h>
#include<conio.h>
int main()
{
  int bill = 0,cnt = 0,min_bill = 0, max_bill = 0;
  
  printf("\n Enter All 7 bill => \n");
  
  while(cnt < 7)
 {
    printf("\n Enter bill no %d:",cnt+1);
    scanf("%d",&bill);
 
  if((cnt == 0) || (bill < min_bill))
  {
    min_bill = bill;
  }
  if((cnt == 0) || (bill > max_bill))
  {
    max_bill = bill;
  } 
  cnt++;
  }
  printf("\n minimum from 7 bills is =%d.",min_bill);
  printf("\n maximum from 7 bills is =%d.",max_bill);
  
  printf("\n Thanks...");
  
  getch();
  return 0;
}