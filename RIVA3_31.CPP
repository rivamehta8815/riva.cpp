#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,isPrime,sum=0;

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
   if(isPrime == 1)
     {
       sum = sum + i;
     }
   }
   printf("Sum of all prime numbers between 1 to 500 = %d\n",sum);
  getch();
}