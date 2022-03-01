//#include<stdio.h>
//void copy_arr(double target1[], double source[], int x)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		target1[i] = source[i];
//	}
//}
//void copy_ptr(double target2[], double* p, int y)
//{
//	int j;
//		for (j = 0; j < y; j++)
//		{
//			target2[j] = p[j];
//		}
//}
//void copy_ptrs(double target3[], double* p, double* z)
//{
//	int i;
//	for (i = 0; (z - p) > i; i++)//尾指针和首指针的判断
//	{
//		target3[i] = p[i];
//	}
//}
//void main()
//{
//	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", source[i]);
//	}
//	printf("\n");
//	copy_arr(target1, source, 5);//数组表示法
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", target1[i]);
//	}
//	printf("\n");
//	copy_ptr(target2, source, 5);//指针表示法
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", target2[i]);
//	}
//	printf("\n");
//	copy_ptrs(target3, source, source+5);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", target3[i]);
//	}
//}