#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	//return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("arr[0]     = %p\n", &arr[0]);
//	printf("arr[0] + 1 = %p\n", &arr[0] + 1);
//	printf("arr        = %p\n", arr);
//	printf("arr + 1    = %p\n", arr + 1);
//	printf("&arr       = %p\n", &arr);
//	printf("&arr + 1   = %p\n", &arr + 1);
//	return 0;
//}




//void Printf(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Printf(arr, sz);
//	return 0;
//}
////还有一种写法因为将sz传参，所以可以直接写在函数里面

void Printf(int arr[10])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	Printf(arr);
	return 0;
}
//该代码有问题，只打印1 2
//因为有两个意外
//sizeof(arr)
//&arr
//Printf(arr)中的arr数组名是数组首元素地址，传过去的应该是地址
//则应该用指针接收 int* p








