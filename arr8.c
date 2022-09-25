#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


void main()
{
 int count, n,sum =0;
 int a[3] = { 2,4,6 };  //정적 할당
 int *p; //포인트변수
 double avg;


 printf("저장할 데이터의 수 를 입력 : ");
 scanf_s("%d", &n);
 p = (int *)malloc(n * sizeof(int));   //동적할당 저장하는 메모리를 선택가능

 for (count = 0; count < n; count++) p[count] = rand() % 101;
 for (count = 0; count < n; count++)  printf("p[%d] ==%d\n",count,p[count]);
 p = (int*)realloc(p, (n + 2) * sizeof(int));
 p[n] = 50;
 p[n + 1] = 70;
 for (count = 0; count < n+2; count++)  sum += p[count];
 free(p); // 메모리를 해제한다는 의미.
 avg = (double)sum / (n+2);
 printf("avg == %lf", avg);

}             
 