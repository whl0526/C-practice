#include<stdio.h>
int MaxMin(int a, int b, int c,int *pMax)
{
 int min;
 if (a > b)
 {
  if (a > c)
   *pMax = a;
  else
   *pMax = c;
  if (b > c)
   min = c;
  else
   min = b;
 }
 else
 {
  if (b > c) *pMax = b;
  else *pMax = c;
  if (c > a) min = c;
  else min = a;
 }
 return min;
}

void main()
{
 int a, b, c,max,min;
 printf("세 정수 a,b,c를 입력:");
 scanf_s("%d %d %d", &a, &b, &c);
 min = MaxMin(a, b, c, &max);
 printf("최대 %d  최소 %d", max, min);
 

} 