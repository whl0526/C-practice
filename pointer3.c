#include<stdio.h>
#include<math.h>
void main()
{
 int a = 120, *p = &a, **pp = &p;

 printf("a의 주소 ==  %d\n", &a);
 printf("p ==  %d\n", p);
 printf("*p ==  %d\n", *p);
 printf("p의 주소 ==  %d\n", &p);
 printf("pp가 가지고 있는 주소 ==  %d\n", pp);
 printf("*pp ==  %d\n", *pp);
 printf("**pp ==  %d\n", **pp);
 **pp += 20;
 printf("a ==  %d\n", a);
 printf("a의 값을 입력 :");
 //scanf_s("%d", &a);
 scanf_s("%d", *pp);
 printf("a ==%d\n",a);
}