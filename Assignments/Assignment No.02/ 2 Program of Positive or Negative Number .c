#include<stdio.h>
#include<stdio.h>

int main()
{
   int Num;
   clrscr();
   
   printf("Enter the Number:");
   scanf("%d",&Num);
   
   if(Num > 0)
   {
       printf("Number is positive");
   }
   else if(Num < 0)
   { 
       printf("Number is negative");
   }
   else
   { 
       printf("Number is zero:");
    }
     
  getch();
  return 0;
}
