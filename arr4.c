#include<stdio.h>

void main()
{

 int a[3] = { 2,4,6 }, *p = a;
 printf("p[0] == %d\n", p[0]);
 printf("*p == %d\n", *p);
 p++;
 printf("*p == %d\n", *p);
}