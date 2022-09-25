void main()
{
 int a[3], n, count;
 printf("배열 a에 n의 배수를 입력:");
 scanf_s("%d", &n);
 InputArray(a, n);
 for (count = 0; count < 3; count++)
 {
  //a[count] = n*(count + 1);
  printf("main a[%d]=%d\n", count, a[count]);
 }
} 