#include<stdio.h>
void InputArray(int *p);   //함수의 원형
void main()
{
 int a[3], col;
 printf("main에서 a의 크기 == %d\n",sizeof(a));
 InputArray(a);        //함수의 호출
 for (col = 0; col < 3; col++)
 {
  printf("a[%d] = %d\n", col, a[col]);  //배열을 출력
 }
}

void InputArray(int *p)
{
 int col;
 printf("main에서 p의 크기 == %d\n", sizeof(p));
 for (col = 0; col < 3; col++)
 {
  p[col] = col * 2 + 2;
 }
 for (col = 0; col < 3; col++)
 {
  printf("p[%d] = %d\n", col, p[col]);
 }
}