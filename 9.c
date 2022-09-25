#include<stdio.h>

void UnExchange(int aCopy, int bCopy);

void main()
{
 int a, b, temp;
 printf("a의 주소 =%d\n", &a);
 printf("정수 a,b를 입력: ");
 scanf_s("%d %d", &a, &b);
 UnExchange(a,b);
 /*temp = a;
 a = b;
 b = temp;*/
 printf("a =%d, b=%d\n", a, b);
}
void UnExchange(int aCopy, int bCopy)
{
 int temp;
 temp = aCopy;
 aCopy = bCopy;
 bCopy = temp;
 printf("aCopy의 주소 =%d\n", &aCopy);
 printf("aCopy =%d, bCopy=%d\n", aCopy, bCopy);
}