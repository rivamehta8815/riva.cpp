#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i;
  printf("Enter the value of n:");
  scanf("%d",&n);

  printf("First %d Odd Numbers:\n",n);
  for (i = 1 ; i <= n; i+=2)
  {
    printf("%d\n",i);
  }
  getch();
}