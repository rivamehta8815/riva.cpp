#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  printf("First 10 odd numbers:\n");
  for (int i = 1 ; i <= 19; i += 2)
  {
    printf("%d\n",i);
  }
  getch();
}