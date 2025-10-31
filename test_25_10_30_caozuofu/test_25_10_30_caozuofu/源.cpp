#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



////实现两个整数的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}


////如果不用第三变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}
////但是这样会有一个问题，如果a和b很大，但没超过整形的大小，但加起来超过整形表达的最大值
////造成溢出，无法翻译,只能解决部分问题


int main()
{
	int num = 15;
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
		printf("%d\n", count);
		return 0;
	}
}