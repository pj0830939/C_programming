#include<stdio.h>
#include<stdio.h>

int main()
{
  int phy = 0 , chem = 0 , maths = 0 , total = 0;
  float per = 0;
  
  printf("\n Enter a physics markas:");
  scanf("%d",&phy);
  
  printf("\n Enter a chemistry markas:");
  scanf("%d",&chem);
  
  printf("\n Enter a maths markas:");
  scanf("%d",&maths);
  
  
  total = phy + chem + maths;
  
  per = total/3.0;
  
  printf("\n total = %d , persentage = %0.2f",total);
  
  getch();
  return 0;
}
