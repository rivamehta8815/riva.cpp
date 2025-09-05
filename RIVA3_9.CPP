#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i,sum=0;
  printf("Enter the value of n:");
  scanf("%d",&n);

  printf("First %d Even Numbers:\n",n);
  for (i = 1 ; i <= n; i++)
  {
    int even = 2*i ;
    printf("%d\n",even);
    sum = sum + even;
  }
    printf("Sum of first %d even numbers = %d\n",n,sum);
  getch();
}