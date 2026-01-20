#include <stdio.h>
#include<conio.h>
int main()
{
  int a = [50], n, i, count = 0;
  
  printf("\n Enter number of element");
  scanf("%d",&n);
  
  printf("Enter %d element:\n",n);
  
  for(i = 0,i < n,i++)
  {
    scanf("%d",&a[i]);
  }
    printf("Array element are:\n");
    
  for(i = 0,i < n,i++)
  {
    printf("%d",a[i]);
    
  if(a[i], %2 == 0);
  {
    count++;
  }
  }
  printf("\n count of Even elements = %d",count);
  
  printf("\n Thanks....");
  
  getch();
  return 0;
}