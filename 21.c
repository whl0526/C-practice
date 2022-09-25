#include<stdio.h>
void ExChange(int *pA, int *pB);
void ExChange(int *pA, int *pB)
{
 int temp;
 temp = *pA;
 *pA = *pB;
 *pB = temp;                    //함수a,b와 main a,b가 둘 다 바뀜
 printf("*pA ==%d, *pB == %d\n",*pA,*pB);
}
void main()
{
 int a, b, temp;
 printf("두 정수 a,b를 입력 :");
 scanf_s("%d%d", &a, &b);
 ExChange(&a, &b);
 printf("b ==%d, b == %d\n", a, b);
 
}