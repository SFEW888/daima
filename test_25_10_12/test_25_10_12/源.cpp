#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8��9��10 };
//	int n = 0;
//	scanf("%d", &n);//Ҫ��arr�е�n�е�����
//	//1.������
//	int i = 0;
//	int flag = 0;//û�ҵ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag = 0)
//		printf("�Ҳ���\n");
//	return 0;
//}
//�����һ�Ƚ���������������û��˳����Ҫ



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d\n", &n);
//	//�۰����/���ֲ���
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			flag = 1;
//			break;
//		}
//
//	}
//	if (flag == 0)
//		printf("û�ҵ�\n");
//	return 0;
//}



