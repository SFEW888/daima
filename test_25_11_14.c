#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", a);
//	printf("%d\n", c);
//	return 0;
//}




//struct S
//{
//	char c;
//	int n;
//};
//struct B
//{
//	struct S s;
//	int* p;
//	char arr[10];
//	float sc;
//};
//int main()
//{
//	struct B b = { {'w',99}, NULL, "haha", 3.24f };
//	printf("%c %d %s %p %f", b.s.c, b.s.n, b.arr, b.p, b.sc);
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}





void s(int arr[], int sz)
{
	int i = 0;//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;//一趟排序的过程
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int n = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = n;
			}
		}
	}
}

void Printf(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	int arr[] = { 3,4,7,2,8,1,9,0,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	s(arr, sz);
	Printf(arr, sz);
	return 0;
}