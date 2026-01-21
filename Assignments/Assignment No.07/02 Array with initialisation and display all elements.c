#include <stdio.h>
#include<conio.h>

void Display_Array(int Arr[],int size);

int main()
{
   int Num[5] = {10,20,30,40,50};
   
   Display_Array(Num,5);
  
   getch();
   return 0;
   
 }
 
 void Display_Array(int Arr[],int size)
 {
 
  int i = 0;
 
 
  for(i = 0;i < size;i++)
   { 
     printf("\n value of Element %d = %d.",i+1,Arr[i]);
   }
   return;
 }
 