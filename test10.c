#include<stdio.h>
void add_array(int* p, int* p1, int* p2, int x)
{
	for (int j = 0; j < x; j++)
	{
		p2[j] = p[j] + p1[j];
	}
}
int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 0 };
	add_array(arr1, arr2, arr3, 4);
	for(int i=0;i<4;i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}