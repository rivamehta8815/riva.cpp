#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,digit,rev=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  while (num>0)
  {
    digit = num % 10;        // get last digit
    rev = rev * 10 + digit;  // add digit to reverse
    num = num / 10;          // remove last digit
  }
    printf("Reversed number = %d\n",rev);
  getch();
}