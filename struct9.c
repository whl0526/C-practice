

#include<stdio.h>

struct Polygon {
    int x, y;
    struct Polygon*next;
   
};

typedef struct Polygon Polygon;

void main()
{
    Polygon poly, *p = &poly;
    poly.x = 1;
    poly.y = 10;
    poly.next = (Polygon*)malloc(sizeof(Polygon));
    poly.next->x = 1;
    poly.next->y = 2;
    poly.next->next= (Polygon*)malloc(sizeof(Polygon));
    poly.next->next->x = 5;
    poly.next->next->y = 2;
    poly.next->next->next = (Polygon*)malloc(sizeof(Polygon));
    poly.next->next->next->x = 5;
    poly.next->next->next->y = 10;
}