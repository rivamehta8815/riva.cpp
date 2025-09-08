#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,count=0;

  printf("Enter a number: ");
  scanf("%d",&num);

  // Special case: if number = 0,it has 1 digit
  if (num == 0)
  {
    count = 1;
  }
  else
  {
    while (num>0)
    {
      num = num / 10;
      count++;
    }
  }
  printf("Number of digits = %d\n",count);
  getch();
}