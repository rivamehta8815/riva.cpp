#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int n = 100;
  int arr[100];
  int i,largest,smallest;

  printf("Enter 100 numbers:\n");
  for (i = 1; i < n; i++)
   {
    scanf("%d",&arr[i]);
   }
   largest = arr[0];
   smallest = arr[0];

   for (i = 1; i < n; i++)
    {
      if(arr[i] > largest)
    {
      largest = arr[i];
    }
    if(arr[i] < smallest)
    {
      smallest = arr[i];
   }
  }
  printf("Largest number = %d\n",largest);
  printf("Smallest number = %d\n",smallest);
  getch();
}