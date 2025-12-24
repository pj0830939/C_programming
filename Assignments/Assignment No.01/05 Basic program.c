#include<stdio.h>
#include<stdio.h>

int main()
{
  float radius, area;
  
  
  printf("Enter the radius of circle:");
  scanf("%f",&radius );
  
  area = 3.14 * radius * radius;
  
  printf("area of the circle = %2f", area);
  
  getch();
  return 0;
}
