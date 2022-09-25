#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int *GenerateScore(int n);

void main()
{
 int n, *pScore, col,total=0;
 printf("학생 수 n을 입력 : ");           //시험 꼭 내는 문제    학생들의 성적,최대공약수
 scanf_s("%d", &n);
 pScore = GenerateScore(n);
 for (col = 0; col < n; col++)  
  printf("main pScore[%d] == %d\n", col, pScore[col]);    
 for (col = 0; col < n; col++)
  total += pScore[col];
 printf("total == %d\n",total);
}
int *GenerateScore(int n)
{
 int *pScore, col, total = 0;
 pScore = (int*)malloc(n * sizeof(int));
 for (col = 0; col < n; col++)
  pScore[col] = 30 + rand() % 71;
 for (col = 0; col < n; col++)   //값을 출력
  printf("함수 pScore[%d] == %d\n", col, pScore[col]);
 return pScore;
}                