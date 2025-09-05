#include<stdio.h>
int main()
{
  int fahrenheit,celcius;
  printf("Enter the temperature in fahrenheit:");
  scanf("%d", &fahrenheit);
  celcius = (fahrenheit - 32) * 5/9;
  printf("Temperature in celcius :  %.2d\n",celcius);
  return 0;
}