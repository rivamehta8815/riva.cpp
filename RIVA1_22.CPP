#include<stdio.h>
int main()
{
  int gross,discount,net;
  printf("Enter Gross Sales:");
  scanf("%d",&gross);
  discount = 0.1 * gross;
  net = gross - discount;
  printf("Gross Sales = %d\n",gross);
  printf("Discount = %d\n",discount);
  printf("Net Sales = %d\n",net);
  return 0;
}