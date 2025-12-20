#include<stdio.h>
#include<stdio.h>

int main()
{
  float circumference , radius;
  
  printf("Enter the radius of the circle:");
  scanf("%f",& radius);
  
  circumference = 2 * 3.14 * radius;
  
  printf("circumference of the circle = %.2f", circumference);
  
  getch();
  return 0;
}
