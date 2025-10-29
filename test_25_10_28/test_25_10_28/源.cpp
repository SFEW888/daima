#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数递归
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

}//斐波那契数

//另一种写法
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
}



int main()
{
	int a = -10;
	//-10是存放在a中，a是整形变量，是4个字节，32bit位
	//-1对应的是1，10对应的是1010，又是为32位
	//则为：10000000000000000000000000001010 - 原码
	//取反：11111111111111111111111111110101 - 反码
	//反+1：11111111111111111111111111110110 - 补码
	return 0;
}



int main()
{
	int num = 10;
	int n = num << 1;
	printf("%d\n", num);
	printf("%d\n", n);
	return 0;
}



int main()
{
	int num = 10;
	int i = -1;
	int n = num >> 1;
	int a = i >> 1;
	printf("%d\n", n);
	printf("%d\n", a);
	return 0;
}