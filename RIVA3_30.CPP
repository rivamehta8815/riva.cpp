#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,isPrime;
  printf("Print all prime numbers between 1 to 500:\n");
  for (i = 2; i <= 500; i++)
   {
     isPrime = 1;
     for (j = 2; j <= i/2; j++)
    {
     if ( i % j == 0)
     {
       isPrime = 0;
       break;
     }
   }
   if (isPrime == 1)
   {
     printf("%d  ",i);
   }
   }
  getch();
}