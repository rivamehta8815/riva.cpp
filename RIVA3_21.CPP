#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,digit;

  printf("Enter a numbers:");
  scanf("%d",&num);

  printf("Digits: ");
  while (num>0)
  {
    digit = num % 10;
    printf("%d",digit);
    num = num / 10;
    if (num>0)        // print comma until last digit

    printf(", ");
  }
  getch();
}