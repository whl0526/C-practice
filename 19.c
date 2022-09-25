#include<stdio.h>
int GetSum(int a, int b);
void main()
{
 int a, b, sum;
 printf("main a의 주소 == %d\n", &a);
 printf("두 정수 a,b를 입력 : ");
 scanf_s("%d %d", &a, &b);
 sum = GetSum(a,b);
 printf("sum == %d\n", sum);
}

int GetSum(int aCopy, int bCopy)
{
 int sum;
 printf("GetSum a의 주소 == %d\n", &aCopy);
 sum = aCopy + bCopy;
 printf("함수 sum == %d\n", sum);
 return sum;
}        