#include<stdio.h>
#include<stdio.h>

int main()
{
   int Num = 0 ;
   
   printf("\n Enter The Number");
   scanf("%d",&Num);
   
   if(Num %5 == 0 && Num %7 == 0)
   {
      printf("\n is divisible by both 5 and 7",Num);
   }
   else if(Num %5 == 0)
   {
      printf("\n Number is divisible by 5");
   }
   else if(Num %7 == 0)
   {
      printf("Number is divisible by 7");
   }
   else
   {
      printf("%d is not divisible by both 5 and 7",Num);
   }
   
   printf("\n Thanks");
   
  getch();
  return 0;
}
