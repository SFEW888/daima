#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

 

////��������и�����
////�ȵ�һ��ѭ��n=1��i=1��ret=1���õ�sum=1
////֮��ڶ���ѭ��n=2��(i=1��i=2)��ret=2��sum=3
////���һ��ѭ��n=3��(i=1��i=2��i=3)��ret=12��sum=15
////ԭ��ͳ�����ret=12������Ϊ�ڶ���ѭ��ret!=1����ret=2
////��ȷ��д������



//int main()
//{
//	int n = 1;
//	int i = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//���ܼ����Ż�
//1*1
//1*1*2
//1*1*2*3
//1*1*2*3*4
//���û��Ҫÿ�ζ���1��ʼ����


//int main()
//{
//	int n = 1;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
	


//int Fact(unsigned int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}



//void Printf(int n)
//{
//	if (n > 9)
//	{
//		Printf(n / 10);
//		printf("%d ", n % 10);
//	}
//	else
//	{
//		printf("%d ", n % 10);
//	}
//}
////����������if����else�����Դ�ӡprintf("%d ", n % 10);��˿����Ż�һЩ
//

//void Printf(int n)
//{
//	if(n > 9)
//		Printf(n / 10);
//
//	printf("%d ", n % 10);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Printf(n);
//	return 0;
//}



//int Fact(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//}



int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}