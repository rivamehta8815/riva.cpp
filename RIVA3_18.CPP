#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  char sex;
  int boys=0, girls=0;

  printf("Enter sex code for 50 students (B for boys,G for girls):\n");

  for (int i = 1; i <= 50; i++)
   {
    printf("Student %d (B/G): " ,i);
    scanf(" %c",&sex);

      if (sex == 'B')
	   boys++;
      else if (sex == 'G')
	   girls++;
   }

    printf("Total Boys = %d\n",boys);
    printf("Total Girls = %d\n",girls);

  getch();
}