#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
//
//void set_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void printf_arr(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}
//
//
//
//void Printf(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	Printf(arr, 3, 5);//打印arr数组，打印3行5列
//	return 0;
//}
//
//
//
//
//void main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("  *");
//			
//		}
//		printf("\n");
//	}
//}
//
//
//
//void main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5 - i; j++)
//		
//			printf(" ");
//		for (k = 1; k <= 2 * i - 1; k++)
//			printf("*");
//		
//		printf("\n");
//	}
//}
//
//
//
void main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5 - i; j++)

			printf("  ");
		for (k = 1; k <= 2 * i - 1; k++)
			printf(" *");

		printf("\n");
	}
}
