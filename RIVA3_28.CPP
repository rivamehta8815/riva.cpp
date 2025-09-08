#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,sum=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  for (int i = 1; i <= num / 2; i++)
    {
      if (num % i == 0)
      sum = sum + i;
    }

      if (sum == num)
	printf("%d is a Perfect Number",num);
      else
	printf("%d is NOT a Perfect Number",num);

   getch();
}