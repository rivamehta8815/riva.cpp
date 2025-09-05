#include<stdio.h>
#include<conio.h>
void main()
{
  int i,num;
  int sum=0;
  float mean;
  printf("Enter 10 numbers:\n");

  for (i = 1; i <=10; i++)
   {
    printf("Number %d : ",i);
    scanf("%d",&num);
    sum += num;
   }
   mean = sum/10;
   printf("Sum of 10 numbers = %d\n",sum);
   printf("Mean of 10 numbers = %.2f\n",mean);
   getch();
}