#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int n = 0x11223344;
//	int* p = &n;
//	*p = 0;
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}
//arr和&arr打印的效果一样
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10] = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
	return 0;
}