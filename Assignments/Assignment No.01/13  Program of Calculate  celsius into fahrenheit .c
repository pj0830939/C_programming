#include<stdio.h>
#include<stdio.h>

int main()
{
  float celsius , fahrenheit;
  
  printf("Enter a temperature in celsius:");
  scanf("%d",& fahrenheit);
  
  fahrenheit = (celsius+32)*5/9;
  
  printf("temperature in fahrenheit=%.2f", fahrenheit);
  
  getch();
  return 0;
}
