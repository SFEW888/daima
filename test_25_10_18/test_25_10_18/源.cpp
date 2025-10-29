#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			flag = 0;
//			break;
//		}
//		if (flag == 0)
//			printf("找不到");
//		return 0;
//    }
// }
//
//
//
//
//int main()
//{
//	char arr1[] = "Welcome to China!!!!!!";
//	char arr2[] = "######################";
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		
//		Sleep(1000);
//		system("cls");
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[3]);
//	printf("%d\n", arr[8]);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}