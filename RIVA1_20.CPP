#include<stdio.h>
int main()
{
  int L,H,A;
  printf("Enter the Length(L) of a triangle:");
  scanf("%d",&L);
  printf("Enter the Height(H) of a triangle:");
  scanf("%d",&H);
  A = (H * L)/2;
  printf("Area(A) of a Triangle = %2d\n",A);
  return 0;
}