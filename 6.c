#include<stdio.h>

void main()
{
 double a[4], *p = a , sum=0;
 int n;
 printf("a = %d, p = %d,p의 주소= %d \n", a, p, &p);//p의 주소는 메모리의 주소
 for (n = 0; n < 4; n++)
 {
  p[n] = (n + 1) * 2;// == *(p+n)= (n+1)*2;
  printf("a[%d] =%lf\n\n", n, a[n]);
 }
 for (n = 0; n < 4; n++)
 {
  sum += p[n];
  printf("sum = %lf\n",sum);
 }
}