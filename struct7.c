#include<stdio.h>

typedef struct {
    int x, y;
}Point;

typedef struct {
    Point bLeft, tRight;
    int area;
}Rec;
void GetArea(Rec *pR);
void main()
{
    int width, height;
    Rec r;
    r.bLeft.x = 1;
    r.bLeft.y = 2;
    printf("tRigth의 x,y를 입력 :");
    scanf_s("%d %d", &r.tRight.x, &r.tRight.y);
    width = r.tRight.x - r.bLeft.x;
    height = r.tRight.y - r.bLeft.y;
    r.area = width * height;
    GetArea(&r);
    printf("r.area == %d\n", r.area);
}
void GetArea(Rec *pR)
{
    int width, height;
    Rec r;
    pR->bLeft.x = 1;
    pR->bLeft.y = 2;
    width = pR->tRight.x - pR->bLeft.x;
    height = pR->tRight.y - pR->bLeft.y;
    pR->area = width * height;
    printf("함수pR->area == %d\n", pR->area);
}