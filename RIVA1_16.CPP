#include<stdio.h>
int main()
{
  int P,R,N,I;
  printf("Enter Principal(P):");
  scanf("%d",&P);
  printf("Enter Rate ofInterest(R):");
  scanf("%d",&R);
  printf("Enter Time(N):");
  scanf("%d",&N);
  I = (P * R * N) / 10;
  printf("The Interest(I) = %2d\n",I);
  return 0;
}
