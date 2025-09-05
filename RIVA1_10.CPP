#include<stdio.h>
int main()
{
  int dollars,rupees,pounds;
  printf("Enter the amount in dollars:");
  scanf("%d",&dollars);
  rupees = dollars * 48;
  pounds = rupees/70;
  printf("Equivalent amount in pounds: %d\n",pounds);
  return 0;
}