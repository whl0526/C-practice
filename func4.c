#include<stdio.h>
void InputArray(int a[2][3]);
void main()
{
 int a[2][3], col;
 printf("main에서 a의 크기 == %d\n",sizeof(a));
 InputArray(a);
 for (col = 0; col < 3; col++)
 {
  a[0][col] = col * 2 + 2;
  printf("a[0][col] == %d\n", col, a[0][col]);
 }
 for (col = 0; col < 3; col++)
 {
  a[1][col] = col * 2 + 2;
  printf("a[1][col] == %d\n", col, a[1][col]);
 }
 
}
//void InputArray(int a[2][3])
void InputArray(int(*pp)[3])
{
 int col;
 printf("함수에서 pp의 크기 == %d\n", sizeof(pp));
 for (col = 0; col < 3; col++)
 {
  pp[0][col] = col * 2 + 2;
  pp[1][col] = rand() % 21;
 }
 for (col = 0; col < 3; col++)
 {
  printf("함수 pp[0][%d] == %d\n", col, pp[0][col]);
 }
 for (col = 0; col < 3; col++)
 { 
  printf("함수 pp[1][col] == %d\n", col, pp[1][col]);
 }

}