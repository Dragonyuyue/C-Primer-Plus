//#include<stdio.h>
//void reverse(int* p, int x)
//{
//	for (int i = 0; i < x-1; i++)
//	{
//		for (int j = 0; j < x-1-i; j++)
//		{
//			if (p[j] < p[j + 1])
//			{
//				int tmp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//}