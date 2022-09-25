#include<stdio.h>

int GetSum(int a, int b)  //함수의 헤더
{
 int sum;
 sum = a + b;
 return sum;
}

void main()                                              //cos(60)=1/2 함수,인수,반환값
{
 int a, b, sum;
 printf("정수 a,b 를 입력 : ");
 scanf_s("%d %d", &a, &b);
// sum = a + b;
 sum = GetSum(a, b);
 printf("sum=%d", sum);
}