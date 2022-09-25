#include<stdio.h>

void Length(double a, double b, double *pV, double *pS)
{
 double s1, s2;
 s1 = 0.5*a*0.4*0.4;//가속도로 달린거리
 *pV = 0.4 * a;
 s2 = *pV * b;
 *pS = s1 + s2;
 printf("length 달린거리 = %lf\n", *pS);
}
void main()
{
 double a, b,s,v;
 printf("가속도 a와 등속도로 달린 시간 b를 입력 :");
 scanf_s("%lf %lf", &a, &b);
 Length(a, b, &v,&s);
 printf("달린거리 = %lf, 속도 = %lf \n", s,v);
}