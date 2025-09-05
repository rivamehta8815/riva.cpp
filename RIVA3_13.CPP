#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,sum=0;

  for (i = 1; i <= 100; i++)
  {
   if (i % 13 == 0)
   {
    sum += i;
   }
  }
  printf("Sum of numbers divisible by 13 between 1 and 100 = %d\n",sum);
  getch();
}