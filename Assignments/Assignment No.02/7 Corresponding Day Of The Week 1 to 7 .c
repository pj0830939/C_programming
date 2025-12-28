#include<stdio.h>
#include<stdio.h>

int main()
{
   int Day = 0 ;
   
   printf("\n Enter Day Number (1 to 7):");
   scanf("%d",&Day);
   
   switch (Day);
   
   {
     case1:
       printf("\n Monday");
     case2:
       printf("\n Tuesday");
     case3:
       printf("\n Wednesday");
     case4:
       printf("\n Thursday");
     case5:
       printf("\n Friday");
     case6:
       printf("\n Saturday");
     case7:
       printf("\n Sunday");
     case8:
       printf("\n Invalid Day Number");
   }
    printf("\n Thanks");
   
   getch();
   return 0;
}
