#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  printf("First 10 even numbers:\n");
  for (int i = 2 ; i <= 20; i += 2)
  {
    printf("%d\n",i);
  }
  getch();
}