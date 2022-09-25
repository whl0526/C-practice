#include<stdio.h>

void main()
{
 int a[2][3] = { {2,4,6},{10,20,30} };
 printf("a[0][0] == %d\n", a[0][0]);
 printf("&a[0][0] == %d\n", &a[0][0]);
 printf("a== %d\n", a);
 printf("&a[0] == %d\n\n", a[0]);

 printf("&a[0][0]+1 == %d\n", &a[0][0] + 1);
 printf("a+1== %d\n", a + 1);
 printf("&a[0]+1 == %d\n\n", a[0] + 1);

 printf("*&a[0][0] == %d\n", *&a[0][0]);
 printf("*a== %d\n", *a);
 printf("*a[0] == %d\n", *a[0]);
 printf("**a == %d\n\n", **a);
} 