#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n,i,sum=0;
  printf("Enter the value of n:");
  scanf("%d",&n);

  printf("First %d Odd Numbers:\n",n);
  for (i = 1 ; i <= n; i++)
  {
    int odd = 2*i -1 ;
    printf("%d\n",odd);
    sum = sum + odd;
  }
    printf("Sum of first %d odd numbers = %d\n",n,sum);
  getch();
}