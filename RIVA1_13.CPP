#include<stdio.h>
#include<conio.h>
void main()
{
  long double bytes;
  printf("enter size in bytes:");
  scanf("%d",bytes);
  long double kb = bytes / 1024.0;
  printf("size in kilobytes is = %d\n",kb);
  long double mb = bytes / (1024.0 * 1024 * 1024);
  printf("size in megabytes is = %d\n",mb);
  long double gb = bytes / (1024.0 * 1024 * 1024);
  printf("size in gigabytes is = %d\n",gb);
  getch();
}