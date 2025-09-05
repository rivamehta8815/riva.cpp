#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i;
  long fact = 1;
  printf("Enter a number:");
  scanf("%d",&n);

  for (i = 1; i <= n; i++)
  {
    fact = fact * i;
  }
   printf("Factorial of %d = %d\n",n,fact);

  getch();
}