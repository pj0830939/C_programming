#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
    int Bill[size] = {}, i = 0, Z_cnt = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Enter bill No %d:",i+1);
        scanf("%d",&Bill[i]);

        if(Bill[i] == 0)
        {
            Z_cnt++;
        }
    }

    printf("\n Zero count of all bills = %d.",Z_cnt);

   getch();
   return 0;
}
