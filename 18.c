#include<stdio.h>
#include<string.h>

typedef struct
{
 char name[10];
 int age;
 double height, weight;
}Human;
void main()
{
 Human lee = { "이몽룡",22,174.2,65.3 }, sung;
 printf("sung의 이름을 입력 : ");
 scanf_s("%s", sung.name);
 printf("sung의 나이를 입력 : ");
 scanf_s("%d", &sung.age);
 printf("sung의 키와 몸무게를 입력: ");
 scanf_s("%lf %lf", &sung.height, &sung.weight);
 printf("%s와 %s가 사귄다.", lee.name, sung.name);
}