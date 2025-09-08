#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,sum=0;

  for (i = 1; i <= 100; i++)
  {
   if (i % 3 == 0)
   {
    sum += i;
   }
  }
  printf("Sum of numbers divisible by 3 between 1 and 100 = %d\n",sum);
  getch();
}