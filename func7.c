
       
#include<stdio.h>
void Exchange(int *pA, int *pB);
void main()
{
 int A, B, G, temp;
 printf("두 정수를 입력 : ");
 scanf_s("%d %d", &A, &B);
 while (A != B)
 {
  if (A < B) Exchange(&A, &B);
  A = A - B;
 }
 printf("최대공약수 == %d", A);
}

void Exchange(int *pA, int *pB)
{
 int  temp;

   temp = *pA;
   *pA = *pB;
   *pB = temp;

 printf("*pA == %d,*pB == %d\n", *pA,*pB);
}