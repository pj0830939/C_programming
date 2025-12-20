#include<stdio.h>
#include<stdio.h>

int main()
{
  float side , area;
  
  printf("Enter side length of the square:");
  scanf("%f",& side);
  
  area = side * side;
  
  printf(" area of the square = %.2f", area);
  
  getch();
  return 0;
}
