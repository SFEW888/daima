#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a = 10;
	printf("%zd\n", sizeof(a));
	printf("%zd\n", sizeof(int));

	int arr[10] = { 0 };
	printf("%zd\n", sizeof(arr));
	printf("%zd\n", sizeof(int[10]));

	return 0;
}






int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



int main()
{
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));
	return 0;
}




//int main()
//{
//	int arr[5] = { 0 };
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ܳ��ȳ���Ԫ�صĳ��� - Ԫ�ظ���
//		//sizeof(arr);//�������������ܳ��ȣ���λ���ֽ� - 40 
//		//sizeof(arr[0]);//�����±�Ϊ0��Ԫ�أ�һ��Ԫ�صĳ���Ϊ4
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}



