#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n];
//	//输入数据
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int flag = 0;
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


int main()
{
	int month = 0;
	scanf("%d", &month);
	if (month == 3 || month == 4 || month == 5)
	{
		printf("春天\n");
	}
	return 0;
}