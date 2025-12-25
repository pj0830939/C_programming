#include<stdio.h>
#include<stdio.h>

int main()
{
  float km , meter;
  
  printf("Enter distance in kilometre:");
  scanf("%f",&km);
  
  meter = km + 1000;
  
  printf("distance in meter= %.2f", meter);
  
  getch();
  return 0;
}
