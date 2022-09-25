#include<stdio.h>
void UnExchange(int a, int b);
void main()
{
 int a, b, temp;
 printf("두 정수 a,b를 입력 :");
 scanf_s("%d%d", &a, &b);
 UnExchange(a, b);                    //함수만 a,b가 바뀌고 main 안바뀌는 프로그램
 printf("main a == %d, b ===%d\n", a, b);

}

void UnExchange(int a, int b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;
 printf("함수 a == %d, b == %d\n", a, b);
} 