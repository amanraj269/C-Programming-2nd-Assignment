#include<stdio.h>
void main()
{
 //Declaring Variable
  int i, sum = 0;

  for(i=1;i<=10;i++)
  {
       sum = sum + i;
  }
  printf("\nSum of first 10 Natural Numbers is : %d", sum);
}