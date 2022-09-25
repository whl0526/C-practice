#include<stdio.h>

void main()
{
 int A, B, G, temp;
 printf("두 정수를 입력 : ");
 scanf_s("%d %d", &A, &B);
 G = GetGcm(A, B);
 printf("최대공약수 == %d\n", G);
}

int GetGcm(int A,int B)

{
 int temp;
 while (A != B)
 {
  if (A < B) Exchange(&A, &B);
  A = A - B;
 }
 printf("함수 최대공약수 == %d\n", A);
 return A;
} 