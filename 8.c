#include<stdio.h>

void UnExchange(int a, int b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;
 printf("UnExchange a=%d b=%d\n", a, b);
}
void main()
{
 int a, b, temp;
 printf("a,b 입력 :");
 scanf_s("%d %d", &a, &b);
/* temp = a;
 a = b;
 b = temp; */
 UnExchange(a, b);
 printf("Main a=%d b=%d\n", a, b);
} 