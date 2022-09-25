#include<stdio.h>
void InputArray(int a[3]);
void main()
{
 int a[3], col;
 printf("main에서의 a의 크기 == %d\n",sizeof(a));
 InputArray(a);
 for (col = 0; col < 3; col++)
 {
  printf("a[%d] = %d\n", col, a[col]);
 }
}

void InputArray(int a[3])
{
 int col;
 printf("main에서의 a의 크기 == %d\n", sizeof(a));
 for (col = 0; col < 3; col++)
 {
  a[col] = (col * 2) + 2;
 }
 for (col = 0; col < 3; col++) 
 {
  printf("함수 a[%d] = %d\n", col, a[col]);
 }
} 