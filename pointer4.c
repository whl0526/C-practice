#include<stdio.h>

void main()
{

 int a = 10, b, sum;
 int *pA = &a, *pB = &b;
 int **pp = &pA;
 printf("b의 값을 입력 : ");
 scanf_s("%d", pB);
 printf("b == %d", b);
 sum = **pp + *pB;
 printf("sum == %d\n", sum);
 pp = &pB;
 printf("**pp == %d\n", **pp);
 **pp += 30;
 sum = *pA + **pp;
 printf("sum == %d\n", sum);
} 