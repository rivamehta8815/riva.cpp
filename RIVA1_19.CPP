#include<stdio.h>
int main()
{
  int R,A;
  printf("Enter the Radius(R) of a circle:");
  scanf("%d",&R);
  A = (22 * R * R)/7;
  printf("Area(A) of a Circle = %2d\n",A);
  return 0;
}