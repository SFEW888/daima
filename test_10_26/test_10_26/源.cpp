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

 

////这个代码有个问题
////先第一次循环n=1、i=1、ret=1，得到sum=1
////之后第二次循环n=2、(i=1、i=2)、ret=2、sum=3
////最后一次循环n=3、(i=1、i=2、i=3)、ret=12、sum=15
////原因就出现在ret=12错误，因为第二次循环ret!=1而是ret=2
////正确的写法如下



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



//还能继续优化
//1*1
//1*1*2
//1*1*2*3
//1*1*2*3*4
//因此没必要每次都从1开始称起


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
////发现无论是if还是else都可以打印printf("%d ", n % 10);因此可以优化一些
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