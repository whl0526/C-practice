#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int year;
	double a, b, total , interest;
	printf("원금a와 연리b를 입력 : ");
	scanf_s("%lf %lf",&a, &b);
	
	total = a;
	year = 1;
	while (total < 2*a)
	{																		
		interest = total*(b / 100);
		total = total + interest;
	//	if (total >= 2 * a) break;
		year++;
	}
	printf("total == %lf\n", total);
	printf("year == %d\n", year);

}			