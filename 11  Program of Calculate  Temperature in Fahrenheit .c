#include<stdio.h>
#include<stdio.h>

int main()
{
  float Fahrenheit , celsius;
  
  printf("Enter a temperature in Fahrenheit:");
  scanf("%f",& Fahrenheit);
  
  celsius = (Fahrenheit-32)*5/9;
  
  printf("temperature in celsius= %.2f", celsius);
  
  getch();
  return 0;
}
