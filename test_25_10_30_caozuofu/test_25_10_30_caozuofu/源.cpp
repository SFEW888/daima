#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



////ʵ�����������Ľ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}


////������õ�������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}
////������������һ�����⣬���a��b�ܴ󣬵�û�������εĴ�С�����������������α������ֵ
////���������޷�����,ֻ�ܽ����������


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