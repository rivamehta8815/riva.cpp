#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the numbers a,b,c");
  scanf("%d%d%d",&a,&b,&c);

  if (a>b && a>c)
    printf("The largest number = %d\n",a);
  else if (b>a && b>c)
    printf("The largest number = %d\n",b);
  else if (c>a && c>b)
    printf("The largest number = %d\n",c);
  else
    printf("All numbers are equal\n");

  //smallest number
   if (a<b && a<c)
     printf("The smallest number = %d\n",a);
   else if (b<a && b<c)
     printf("The smallest number = %d\n",b);
   else if (c<a && c<b)
     printf("The smallest number = %d\n",c);
   else
     printf("All numbers are equal");
  return 0;
}