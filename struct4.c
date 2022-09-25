#include<stdio.h>

typedef struct {
 char name[30];     //char == 1바이트
 int age;
 double height, weight;
}Human;

void main()
{
 Human lee = { "이원형",23,180,67};
 printf("이름 == %s\n", lee.name);
 printf("나이 == %d\n", lee.age);
 printf("키 == %lf\n", lee.height);
 printf("몸무게 == %lf\n", lee.weight);
}         */

#include<stdio.h>
#include<string.h> //문자열을 쓸때 사용하는 헤더
#include<malloc.h>
typedef struct {
 char name[30];
 int age;
 double height, weight;
}Human;

void main()
{
 Human lee, *pLee = &lee;
 pLee = (Human*)malloc(sizeof(Human));  

 printf("Human의 크기 == %d\n", sizeof(Human));
 printf("이름을 입력 : ");
 scanf_s("%s", pLee->name, 10);
 printf("이름은 == %s\n", pLee->name);

 printf("나이를 입력 : ");
 scanf_s("%d", &pLee->age);
 printf("나이는 == %d\n", pLee->age);

 printf("키를 입력 : ");
 scanf_s("%lf", &pLee->height);
 printf("키는 == %lf\n", pLee->height);

 printf("몸무게를 입력 : ");
 scanf_s("%lf", &pLee->weight);
 printf("몸무게는 == %lf\n", pLee->weight);
 pLee->weight -= 2;
 printf("몸무게는 == %lf\n", pLee->weight);