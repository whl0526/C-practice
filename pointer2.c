#include<stdio.h>
#include<math.h>
void main()
{
 double r, phi = 3.14, *p = &r, L,area;
 int a, b;
 printf("반경 r 을 입력 : ");
 scanf_s("%lf", p);
 printf("반경r == %f\n", r);
 L = 2 * phi * (*p);
 printf("L == %f\n",L);
 *p += 5;
 p = &phi;
 area = *p * r*r;
 printf("area== %f\n", area);


 
}