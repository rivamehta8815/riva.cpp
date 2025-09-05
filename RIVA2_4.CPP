#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number :");
  scanf("%d",&num);

  if (num % 7 == 0)
    printf("Num is divisible by 7\n");
  else
    printf("Num is not divisible by 7\n");

  return 0;
}