#include<stdio.h>
typedef struct {
 int x, y;
}Point;
typedef struct {
 Point p1, p2;
 int area; //중접구조체
}Rect;

void GetArea(Rect*pRec) //4바이트 일반변수보다 전송속도 빠름.

{
 pRec->area = (pRec->p2.x - pRec->p1.x) *(pRec->p2.y - pRec-> p1.y);

printf("Rect 넓이 = %d",pRec->area);
}
void main()
{
 Rect rec;
 printf("p1의 x,y 좌표를 입력: ");
 scanf_s("%d %d", &rec.p1.x, &rec.p1.y);
 rec.p2.x = 10;
 rec.p2.y = 20;
 GetArea(&rec);
 //rec.area = (rec.p2.x - rec.p1.x) * (rec.p2.y - rec.p1.y);
 printf("area=%d", rec.area);

}