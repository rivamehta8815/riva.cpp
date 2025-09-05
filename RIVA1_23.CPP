#include<stdio.h>
#include<conio.h>
void main()
{
  int sub1,sub2,sub3,total;
  float average;
  printf("Enter the marks of sub1:");
  scanf("%d",&sub1);
  printf("Enter the marks of sub2:");
  scanf("%d",&sub2);
  printf("Enter the marks of sub3:");
  scanf("%d",&sub3);

  total = sub1 + sub2 + sub3;
  average = total / 3;

  printf("Total Marks = %d\n",total);
  printf("Average Marks = %2f\n",average);

  getch();
}
