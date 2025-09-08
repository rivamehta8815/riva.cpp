#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,temp,remainder,reverse=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  temp = num;

  while (temp>0)
    {
      remainder = temp % 10;
      reverse = reverse * 10 + remainder;
	temp = temp / 10;
    }
      if (reverse == num)
	printf("%d is a Palindrome Number",num);
      else
	printf("%d is NOT a Palindrome Number",num);

   getch();
}