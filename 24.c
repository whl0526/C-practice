#include<stdio.h>
int GetSum();
extern int a = 10; b = 1;
void main()
{
 int sum,b=4;
 sum = GetSum();
 printf("sum == %d\n", sum);
 sum = GetSum2(b);
 printf("GetSum2 == %d\n", sum);
}
int GetSum()
{
 int sum;
 sum = a + b;
 printf("함수 sum == %d\n", sum);
}

int GetSum2(int b)
{
 int sum;
 sum = a + b;
 printf("함수2 sum == %d\n", sum);
}