#include<stdio.h>

void main()
{
 int a[2][3] = { {2,4,6},{10,20,30} };
 int(*pp)[3] = a;
 int b[3][3] = { {1,3,5},{100,200,300},{15,25,35} },c[2][4];
 int *pa[3];
 printf("pp의 크기 == %d\n", sizeof(pp));
 printf("a의 크기 ==%d\n", sizeof(a));
 printf("a[0][0] ==%d\n", a[0][0]);
 printf("pp[0][0] ==%d\n", pp[0][0]);
 pp = b;
 printf("pp[0][0] ==%d\n", pp[0][0]);
}