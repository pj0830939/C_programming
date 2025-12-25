#include<stdio.h>
#include<stdio.h>

int main()
{
  float meter , km ;
  
  printf("\n Enter distance in meter:");
  scanf("%f",&meter);
  
  km = meter / 1000;
  
  printf("distance in kilometers = %.2f", km);
  
  getch();
  return 0;
}
