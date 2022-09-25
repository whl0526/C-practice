#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int num, count = 0, sum = 0;
	printf("더 할 정수를 입력 : ");
	scanf_s("%d", &num);

	for (count = 1; count <= num; count++)
	{
		sum += count;
	}
	printf("%d\n", sum);
}	
