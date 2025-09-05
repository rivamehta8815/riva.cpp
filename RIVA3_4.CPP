#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i;
  printf("Enter the value of n:");
  scanf("%d",&n);

  printf("First %d Natural Numbers:\n",n);
  for (i = 1 ; i <= n; i++)
  {
    printf("%d\n",i);
  }
  getch();
}