#include<stdio.h>

void main()
{
 int a = 120, b, *p = &a;

 printf("a의 주소 == %d\n", &a);
 printf("p가 가지고 있는 주소 == %d\n",p);
 printf("p의 주소 == %d\n", &p);
 printf("*p == %d\n", *p);
 b = *p;
 *p = 200;
 printf("a == %d\n", a);
 printf("b == %d\n", b);
 p = &b;
 printf("*p == %d\n", *p);
 printf("b의 값을 입력 :");
 scanf_s("%d", &b);
 printf("b == %d\n", b);
 


 
} 