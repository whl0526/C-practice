#include<stdio.h>

void Exchange(int *pA, int *pB)
{
 int temp;
 temp = *pA;
 *pA = *pB;
 *pB = temp;
 printf("Exchange *pA = %d,*pB = %d", *pA, *pB);
}
void main()
{
 int a, b;
 printf("a,b를 입력: ");
 scanf_s("%d %d", &a, &b);
 Exchange(&a, &b);
 printf("MAIN a = %d,b = %d", a, b);
}