#include<stdio.h>
int GetSum(int a, int b);
void main()
{
 int a=10, b=1, sum;
 sum = GetSum(a, b);
 printf("첫번째 sum == %d\n", sum);
 sum = GetSum(a, b);
 printf("두번재 sum == %d\n", sum);
 sum = GetSum(a, b);
 printf("세번째 sum == %d\n", sum);

}
int GetSum(int a, int b)
 {
  auto int sum;
  static int c = 0;
  sum = a + b;
  printf("함수 sum == %d\n", sum);
  return sum+c++;
 } */

#include<stdio.h>
int LeapYear(int year);
void main()
{
 int year, month, day,mod,y,total=0,m;
 int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 printf("년, 월, 일을 입력 :");
 scanf_s("%d %d %d", &year, &month, &day);

 for (y = 1; y < year; y++)
 {
  total += 365 + LeapYear(y);
 }
 for (m = 0; m < month-1; m++)
 {
  total += months[m];
 }
 if (month > 2) total += LeapYear(year);
 total += day;
 printf("total == %d\n", total);
 mod = total % 7;
 if (mod == 1) printf("월요일 이다\n");
 else if (mod == 2) printf("화요일 이다\n");
 else if (mod == 3) printf("수요일 이다\n");
 else if (mod == 4) printf("목요일 이다\n");
 else if (mod == 5) printf("금요일 이다\n");
 else if (mod == 6) printf("토요일 이다\n");
 else printf("일요일 이다\n");
}


int LeapYear(int year)
{
 int month, day, mod;

 mod = year % 4;
 if (mod == 0)
 {
  mod = year % 100;
  if (mod == 0)
  {
   mod = year % 400;
   if (mod == 0)return 1;  //윤년 return1;
   else return 0;    //평년 return0;
  }
  else return 1;
 }
 else return 0;
 
} 