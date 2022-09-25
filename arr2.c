#include<stdio.h>
#include<stdlib.h>

void main()
{
 int a[2][3],col;
 for (col = 0; col < 3; col++)
 {
  a[0][col] = 1 + col * 2;
  a[1][col] = rand() % 11;
 }
 for (col = 0; col < 3; col++)
 {
  printf("a[0][%d] = %d,  &a[0][%d] = %d\n", col, a[0][col], &a[0][col]);
  a[1][col] = rand() % 11;
 }
 for (col = 0; col < 3; col++)
 {
  printf("a[1][%d] = %d, &a[1][%d] = %d\n", col, a[1][col], &a[1][col]);
  a[1][col] = rand() % 11;
 }
} 