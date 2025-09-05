#include<stdio.h>
#include<conio.h>
void main()
{
  float gross,allowance,deduction,net;
  printf("enter gross salary:");
  scanf("%f",&gross);
   if (gross > 10000)
    {
      allowance = gross * 0.10;
      deduction = gross * 0.03;
    }
  else if (gross > 5000)
    {
      allowance = gross * 0.07;
      deduction = gross * 0.02;
    }
  else
    {
      allowance = 0;
      deduction = 0;
    }
   net = gross + allowance - deduction;

    printf("gross Salary =%f\n",gross);
    printf("allowance = %f\n",allowance);
     printf("deduction = %f\n",deduction);
     printf("net Salary = %f\n",net);
  getch();
}