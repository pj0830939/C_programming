#include<stdio.h>
#include<stdio.h>

int main()
{
  float length , width , area;
  
  printf("Enter length of rectangle:");
  scanf("%f",& length);
  
  printf("Enter width of rectangle:");
  
  area = length * width;
  
  printf(" area of rectangle  = %.2f", area);
  
  getch();
  return 0;
}
