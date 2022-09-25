#include<stdio.h>

void main()
{
 int n, m, *p = &n, a[3] = { 1,3,5 };
 n = 10;
 printf("n == %d\n", n);
 printf("&n == %d\n", &n);

 printf("p == %d\n", p);
 printf("&p == %d\n", &p);
 p = &m;

 printf("a[0] == %d\n", a[0]);
 printf("*&a[0] == %d\n", &a[0]);
 printf("a == %d\n", a);

 printf("a[0]+1 == %d\n", a[0]+1);
 printf("&a[0]+1 == %d\n", &a[0]+1);
 printf("a+1 == %d\n", a+1);

 printf("*p == %d\n", *p);
 printf("*&a[0]+1 == %d\n", *&a[0]);
 printf("*a == %d\n", *&a[0]);