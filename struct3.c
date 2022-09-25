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
} 