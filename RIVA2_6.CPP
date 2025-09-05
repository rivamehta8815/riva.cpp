#include<stdio.h>
#include<conio.h>
void main()
{
  int m1,m2,m3,total;
  float avg;
  printf("\nenter the marks of 3 subjects:");
  scanf("%d%d%d",&m1,&m2,&m3);
  total = m1+m2+m3;
  avg = total / 3.0;
  printf("\ntotal marks = %d",total);
  printf("\naverage marks = %2f",avg);

  if (m1<35 || m2<35 || m3<35)
   {
     printf("\nresult : fail (less than 35 in a subject)");
   }
  else
   {
     if (avg >= 70)
       printf("\nresult : distinction");
     else if (avg >= 60)
       printf("\nresult : first Class");
     else if (avg >= 50)
       printf("\nresult : second Class");
     else if (avg >= 35)
       printf("\nresult : third Class");
     else
       printf("\nresult : fail");
    }
   getch();
}