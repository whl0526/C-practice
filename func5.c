#include<stdio.h>
double GetMax(double a, double b, double c);
void main()
{
 double a, b, c, max;
 printf("세 실수를 입력: ");
 scanf_s("%lf %lf %lf", &a, &b, &c);
 
 max = GetMax(a,b,c);
 printf("max == %lf\n", max);
}


double GetMax(double a, double b, double c)
{
 double max;
 if (a > b)
 {
  if (a > c)
   max = a;
  else max = c;
 }                    
 else
 {
  if (b > c)
   max = b;
  else
   max = c;
 }
 printf("함수 max == %lf\n", max);
 return max;
} 