#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,n;
  printf("Print all integers from 1 to 100 divisible by 5:\n");
  for (i = 1; i <= 100; i++)
   {
   if (i % 5 == 0)
    {
    printf("%d ",i);
    }
   }
   printf("\n");
  getch();
}