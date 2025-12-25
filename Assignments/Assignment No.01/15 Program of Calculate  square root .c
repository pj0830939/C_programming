#include<stdio.h>
#include<stdio.h>

int main()
{
  float Num = 0 , sqrt_root = 0;
  
  printf("\n Enter a number:");
  scanf("%d",&Num);
  
  sqrt_root = sqrt(Num);
  
  printf("\n square root of Number:%d", Num, sqrt_root);
  
  getch();
  return 0;
}
