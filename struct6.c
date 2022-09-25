#include<stdio.h>

typedef struct {
    int x, y;
}Point;

typedef struct {
    Point bLeft, tRight;
    int area;
}Rec;

void main()
{
    int width, height;
    Rec r;
    r.bLeft.x = 1;
    r.bLeft.y = 2;
    printf("tRight.x.y를 입력 : ");
    scanf_s("%d %d", &r.tRight.x, &r.tRight.y);
    width = r.tRight.x - r.bLeft.x;
    height = r.tRight.y - r.bLeft.y;
    r.area = width * height;
    printf("r.area == %d \n",r.area);
}