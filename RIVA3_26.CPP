#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,temp,digit,sum=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  temp = num;

  while (temp>0)
    {
      digit = temp % 10;
      sum = sum + (digit * digit * digit);
	temp = temp / 10;
    }
      if (sum == num)
	printf("%d is an Armstrong number",num);
      else
	printf("%d is NOT an Armstrong number",num);

   getch();
}