#include<stdio.h>

typedef struct {
    char name[30];
    int age;

}Person;

typedef struct {
    Person papa, my;
    int ageDiff;

}Family;
void GetAgeDiff(Family *pF);
void main()
{
    Family f;
   
    printf("아버지의 이름과 나이를 입력 :");
    scanf_s("%s %d", f.papa.name,10, &f.papa.age);
    printf("나의 이름과 나이를 입력 :");
    scanf_s("%s %d", f.my.name, 10, &f.my.age);
    f.ageDiff = f.papa.age - f.my.age;
    GetAgeDiff(&f);
    printf("f.ageDiff == %d\n", f.ageDiff);

}

void GetAgeDiff(Family *pF)
{

    pF->ageDiff = pF->papa.age - pF->my.age;
    printf("pF->ageDiff == %d\n", pF->ageDiff);
   
}