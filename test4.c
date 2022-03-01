//#include<stdio.h>
//int search_max(int*p,int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i) > *p)
//		{
//			*p = *(p + i);
//		}
//	}
//	return *p;
//}
//int main()
//{
//	int arr[5] = { 7,1,3,9,5 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=search_max(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		if (ret==arr[i])
//		{
//			printf("sign=%d\n", i);
//		}
//	}
//	printf("max=%d\n", ret);
//	return 0;
//}
