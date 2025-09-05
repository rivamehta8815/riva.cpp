#include<stdio.h>
int main()
{
  int grams,kilograms;
  printf("Enter weight in kilograms");
  scanf("%d",&kilograms);
  grams = kilograms*1000;
  printf("Weight in grams = %d\n",grams);
  return 0;
}