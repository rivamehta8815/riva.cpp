#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i,sum;
  printf("Enter the value of n:");
  scanf("%d",&n);

  printf("First %d Natural Numbers:\n",n);
  for (i = 2 ; i <= n; i+=2)
  {
    printf("%d\n",i);
  }
  getch();
}