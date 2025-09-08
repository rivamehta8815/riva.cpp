#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,i,first=1;
  printf("Enter a number: ");
  scanf("%d",&num);

  printf("Factors of %d are: ",num);
  for (i = 1; i <= num; i++)
  {
    if(num % i == 0)
    {
      if(first)
    {
      printf("%d",i);            // print first factor without comma
      first = 0;
    }
    else
    {
      printf(",%d",i);             // print remaining with comma
    }

   }
  }
  getch();
}

