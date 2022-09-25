#include<stdio.h>
void GetMax(double a, double b, double c, double *pMax);
void main()
{
 double a, b, c, max;
 printf("세 실수를 입력: ");
 scanf_s("%lf %lf %lf", &a, &b, &c);                 //포인터 변수 활용 최댓값 구하는 문제
 GetMax(a, b, c, &max);
 printf("max == %lf\n", max);
}


void GetMax(double a, double b, double c,double *pMax)
{
 if (a > b)
 {
  if (a > c)
   *pMax = a;
  else *pMax = c;
 }
 else
 {
  if (b > c)
   *pMax = b;
  else
   *pMax = c;
 }
 printf("함수 max == %lf\n", *pMax);

}       */
       