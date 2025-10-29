#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8，9，10 };
//	int n = 0;
//	scanf("%d", &n);//要在arr中的n中的数字
//	//1.挨个找
//	int i = 0;
//	int flag = 0;//没找到
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("找到了，下标为%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag = 0)
//		printf("找不到\n");
//	return 0;
//}
//挨个找会比较慢，而且数字有没有顺序不重要



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d\n", &n);
//	//折半查找/二分查找
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (left + right) / 2;
//	int flag = 0;
//	while (left <= right)
//	{
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			flag = 1;
//			break;
//		}
//
//	}
//	if (flag == 0)
//		printf("没找到\n");
//	return 0;
//}



