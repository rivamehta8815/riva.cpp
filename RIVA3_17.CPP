#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n = 100;
  int arr[200];
  int i,pos=0,neg=0,zero=0;

  printf("Enter 200 numbers:\n");
  for (i = 1; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }

   for (i = 1; i < n; i++)
    {
      if(arr[i] > 0)
	   pos++;
      else if(arr[i] < 0)
	   neg++;
      else  zero++;
   }
  printf("Positive numbers = %d\n",pos);
  printf("Negative numbers = %d\n",neg);
  printf("Zeros = %d\n",zero);
  getch();
}