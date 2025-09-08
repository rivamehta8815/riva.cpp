#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  long num,square,temp,lastDigits;
  int digits=0;

  printf("Enter a number: ");
  scanf("%ld",&num);

  square = num * num;
  temp = num;

  while (temp > 0)
  {
    digits++;
    temp = temp / 10;
  }
  long divisor = 1;
  for (int i = 1; i <= digits; i++)
   {
     divisor = divisor * 10;
   }
   lastDigits = square % divisor;
  printf("Square of %ld = %ld\n",num,square);

   if (lastDigits == num)
     printf("%ld is an Automorphic Number.\n",num);
   else
     printf("%ld is NOT an Automorphic Number.\n",num);
   getch();
}