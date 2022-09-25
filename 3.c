#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int num, score, total=0,count,student=0;
	printf("학생 수 를 입력 : ");
	scanf_s("%d", &num);

	for (count = 0; count < num; count++)
	{
		score = rand() % 101;
		printf("%d\n", score);
		//if (score < 70)	 continue;
		if (score >= 70)
		{
			total += score;
			student++;
		}
	}

	printf("total == %d\n", total);
	printf("student == %d\n", student);
}