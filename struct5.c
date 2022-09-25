#include<stdio.h>
#include<math.h>
typedef struct {
    int x, y;
   
}Point;

void main()
{
    double length;
    Point p[2];
    p[0].x = 1;
    p[0].y = 2;
    printf("x,y를 입력:");
    scanf_s("%d %d", &p[1].x, &p[1].y);
    length = sqrt(pow(p[1].x - p[0].x, 2) + pow(p[1].y - p[0].y, 2));
    printf("length==%lf",length);
}