#include<stdio.h>

double GetLength(double a, double b)
{
 double s, s1, s2, v;
 s1 = 0.5 *a *0.4*0.4;
 v = a* 0.4;
 s2 = v*b;
 s = s1 + s2;
 printf("총 달린 거리 s == %lf\n", s);
 return s;
}


void main()
{
 double a, b, s,s1,s2,v;
 printf("가속도 a와 등속도로 달린 시간 b를 입력 : ");
 scanf_s("%lf%lf", &a, &b);
 s = GetLength(a, b);
 printf("총 달린 거리 s == %lf\n", s);
}

 