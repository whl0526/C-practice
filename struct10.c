#include<stdio.h>
#include <malloc.h>
struct Polygon {
    int x, y;
    struct Polygon *next;
};
typedef struct Polygon Polygon;

void main()
    {
        int n = 0;
        Polygon poly, *p = &poly;
        while (1)
        {
            printf("%d 번째 꼭지점(x,y)을 입력 : ",n);
            scanf_s("%d %d", &p->x, &p->y);
            if (p->x < 0 || p->y < 0) break;
            p->next = (Polygon*)malloc(sizeof(Polygon));
            p = p->next;
            n++;
        }
    }  