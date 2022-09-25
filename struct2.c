#include<stdio.h>
typedef struct {
 int x, y;
}Point;
typedef struct {
 Point p1, p2;
 int area; //중접구조체
}Rect;

void GetArea(Rect rec) //20바이트
{
 rec.area = (rec.p2.x - rec.p1.x) * (rec.p2.y - rec.p1.y);
 printf("GetArea 넓이 = %d", rec.area);
}

void main()
{
 Rect rec;
 printf("p1의 x,y 좌표를 입력: ");
 scanf_s("%d %d", &rec.p1.x, &rec.p1.y);
 rec.p2.x = 10;
 rec.p2.y = 20;
 GetArea(rec);//일반변수 rec 사용
 //rec.area = (rec.p2.x - rec.p1.x) * (rec.p2.y - rec.p1.y);
 printf("area=%d", rec.area);

} 