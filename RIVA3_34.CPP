#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n, a = 1, b = 1,c;
  printf("Enter how many terms of Fibonacci series you want:");
  scanf("%d",&n);

  printf("Fibonacci Series: ");

  if (n >= 1) printf("%d",a);
  if (n >= 2) printf(",%d",b);

  for (int i = 3; i <= n; i++)
   {
     c = a + b;
     printf(",%d",c);
     a = b;
     b = c;
   }
   getch();
}