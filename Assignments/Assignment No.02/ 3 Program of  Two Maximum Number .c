#include<stdio.h>
#include<stdio.h>

int main()
{
   int a , b ;
   clrscr();
   
   printf("Enter the two number:");
   scanf("%d%d",&a,&b);
   
   if(a > b)
   {
       printf("maximum number is :%d",a);
   }
   else if(b > a)
   { 
       printf("maximum number is %d",b);
   }
   else
   { 
       printf("both numbers are equal:");
    }
     
  getch();
  return 0;
}
