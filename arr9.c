#include<stdio.h>

void main()
{
 int input, factor1, factor2;
 printf("자연수를 입력 : ");
 scanf_s("%d", &input);
 limit =(int)sqrt(input);
 for (factor1 = 1; factor1 < limit; factor1++)
 {
  mod = input % factor1;
  if (mod == 0)
  {
   factor2 = mod / factor1;
  }
 }
} 