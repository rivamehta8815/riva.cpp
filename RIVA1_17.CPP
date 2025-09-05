#include<stdio.h>
int main()
{
  int L,A,P;
  printf("Enter the Length(L) of a square:");
  scanf("%d",&L);
  A = L * L;
  P = 4 * L;
  printf("Enter the Area(A) of a square = %2d\n",A);
  printf("Enter the Perimeter(P) of a square = %2d\n",P);
  return 0;
}