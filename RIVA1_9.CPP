#include<stdio.h>
int main()
{
  int dollars,rupees;
  printf("Enter the amount in rupees:");
  scanf("%d",&rupees);
  dollars = rupees / 48;
  printf("%2d INR is equal to %2d USD\n",rupees,dollars);
  return 0;
}