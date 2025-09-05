#include<stdio.h>
int main()
{
  int L,B,A,P;
  printf("Enter the Length(L) of a rectangle:");
  scanf("%d",&L);
  printf("Enter the Breadth(B) of a rectangle:");
  scanf("%d",&B);
  A = L * B;
  P = 2 * (L+B);
  printf("Enter the Area(A) of a rectangle = %2d\n",A);
  printf("Enter the Perimeter(P) of a rectangle = %2d\n",P);
  return 0;
}