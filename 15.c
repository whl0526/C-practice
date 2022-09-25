#include<stdio.h>

void InputArray(int a[3], int n)
{
 int count,b[4];
 printf("InputArray 에서 a의 크기 =%d\n", sizeof(a));
 printf("InputArray 에서 b의 크기 =%d\n", sizeof(b)); //배열이면 16바이트, 포인트변수이면 4바이트
 for (count = 0; count < 3; count++)
 {
  a[count] = n*(count + 1);
  printf("InputArray a[%d]=%d\n", count, a[count]);
 }
}