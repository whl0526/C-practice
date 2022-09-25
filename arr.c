#include<stdio.h>

void main()
{
 int a[3],col;
 a[0] = 1;
 a[1] = 5;
 a[2] = 9;

 for (col = 0; col < 3; col++)
 {
  a[col] = 1 + col + 4;
 }      
 for (col = 0; col < 3; col++)
 {
  printf("a[%d] =%d ,&a[%d] =%d\n", col, a[col], col, &a[col]);
 }
}