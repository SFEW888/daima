#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int x, int y) = Add;
//	int c = Add(2, 3);
//	printf("%d\n", c);
//	int d = (*p)(3, 4);
//	printf("%d\n", d);
//
//	return 0;
//}




//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*pfarr[4])(int, int) = { add,sub,mul,div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int r = pfarr[i](8, 4);
//		printf("%d ", r);
//	}
//	return 0;
//}





void bobble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}


void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[] = { 1,3,2,6,8,0,9,5,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bobble_sort(arr, sz);
	Print(arr, sz);
	return 0;
}
