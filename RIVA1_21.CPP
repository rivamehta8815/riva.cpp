#include<stdio.h>
#include<conio.h>
void main()
{
  float gross,allowance,deduction,net;
  printf("Enter Gross Salaray:");
  scanf("%f",&gross);

  allowance = gross*0.1;
  deduction = gross*0.03;

  net = gross + allowance - deduction;

  printf("Gross salary = %f\n",gross);
  printf("Allowance = %f\n",allowance);
  printf("Deduction = %f\n",deduction);
  printf("Net salary = %f\n",net);

  getch();
}