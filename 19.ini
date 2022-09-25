#include<stdio.h>
#include<string.h>

typedef struct {
 char name[10];
 int age;
 double height, weight;
}Human;

void main()
{
 Human lee = { "이몽룡", 22, 174, 65 }, sung;
 Human *pSung = &sung;
 printf("sung의 이름을 입력:");
 scanf_s("%s", pSung->name); // 포인터 변수는 ->, 배열은 .
 printf("sung의 나이를 입력:");
 scanf_s("%d", &pSung->age);
 printf("sung의 키와 몸무게를 입력: ");
 scanf_s("%lf%lf", &sung.weight, &sung.height);
 printf("%s이는 %d세에 %s와 사귀었다.\n",
  lee.name, lee.age, sung.name);
 lee.age += 2;
 printf("%s이는 %d세에 과거에 급제했다.\n", lee.name, lee.age);
}
 