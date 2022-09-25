#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int* GenerateScore(int n);
void main()
{
 int n, count, *pScore, sum=0;
 printf("학생수 n 을 입력 :");
 scanf_s("%d", &n);
 pScore = GenerateScore(n);
 for (count = 0; count < n; count++)
 { 
  sum += pScore[count];
  printf("pScore[%d] == %d\n", count, pScore[count]);
 }
 printf("sum == %d\n", sum);
}

int* GenerateScore(int n)
{
 int count, *pScore, sum=0;
 pScore = (int*)malloc(n * sizeof(int));
 for (count = 0; count < n; count++)
 {
  pScore[count] = rand() % 70 + 30;
  printf("함수 pScore[%d] == %d\n", count, pScore[count]);
 }
 return pScore;
} 