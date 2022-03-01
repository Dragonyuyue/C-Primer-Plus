#include<stdio.h>
int search_max(int* p, int *x,int *y, int sz)
{
	int i;
	*x = *p;
	*y = *p;
	for (i = 0; i < sz; i++)
	{
		if (*(p + i) > *x)
		{
			*x = *(p + i);
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (*(p + i) < *y)
		{
			*y = *(p + i);
		}
	}
	return *x - *y;
}
int main()
{
	int arr[5] = { 7,2,3,9,5 };
	int x=0,y=0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = search_max(arr,&x,&y,sz);
	printf("num=%d\n", ret);
	return 0;
}