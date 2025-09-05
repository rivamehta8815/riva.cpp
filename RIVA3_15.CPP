#include<stdio.h>
#include<conio.h>
void main()
{
  int i,num,n;
  int sum=0;
  float mean;
  printf("Enter n numbers:");
  scanf("%d",&n);

  for (i = 1; i <=n; i++)
   {
    printf("Number %d : ",i);
    scanf("%d",&num);
    sum += num;
   }
   mean = sum/n;
   printf("Sum of n numbers = %d\n",sum);
   printf("Mean of n numbers = %.2f\n",mean);
   getch();
}