#include<stdio.h>
#include<conio.h>
#define size 7
int main()
{
    int Bill[size] = {}, i = 0, Min_Bill = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n enter the Bill No %d:",i+1);
        scanf("%d",&Bill[i]);

        if((i = 0) || (Bill[i] < Min_Bill))
        {
            Min_Bill = Bill[i];
        }
    }
    printf("\n Minimum bill from all bill = %d",Min_Bill);

    getch();
    return 0;
}
