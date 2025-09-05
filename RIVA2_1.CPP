#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the numbers a,b");
  scanf("%d%d",&a,&b);

  if (a>b)
    printf("The largest number = %d\n",a);
  else if (b>a)
    printf("The largest number = %d\n",b);
  else
    printf("All numbers are equal\n");

  //smallest number
   if (a<b)
     printf("The smallest number = %d\n",a);
   else if (b<a)
     printf("The smallest number = %d\n",b);
   else
     printf("All numbers are equal");
  return 0;
}