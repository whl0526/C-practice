#include<stdio.h>
#include<malloc.h>
#include<math.h>

void main()
{
 int input, factor1, factor2,limit,*pair,mod,n = 2,num;
 printf("자연수를 입력 : ");
 scanf_s("%d", &input);
 limit = (int)sqrt(input);
 pair = (int *)malloc(n * sizeof(int));

 for (factor1 = 1; factor1 <= limit; factor1++)
 {
  mod = input % factor1;                       //배열 계속 추가되는 인수 구하기
  if (mod == 0)
  {
   if(n != 2)pair = (int*)realloc(pair, n * sizeof(int));
   factor2 = input / factor1;
   pair[n-2] = factor1;
   pair[n-1] = factor2;
   n += 2;
  }
 }
 printf("n == %d\n",n);
 for (num = 0; num < n - 2; num++)
 {
  printf("pair[%d] == %d\n", num, pair[num]);
 }
}