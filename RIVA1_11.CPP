#include<stdio.h>
int main()
{
  int grams,kilograms;
  printf("Enter weight in grams:");
  scanf("%d",&grams);
  kilograms = grams/1000;
  printf("Weight in kilograms = %d\n",kilograms);
  return 0;
}