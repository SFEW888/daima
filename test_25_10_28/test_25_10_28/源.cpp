#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�����ݹ�
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

}//쳲�������

//��һ��д��
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
	//-10�Ǵ����a�У�a�����α�������4���ֽڣ�32bitλ
	//-1��Ӧ����1��10��Ӧ����1010������Ϊ32λ
	//��Ϊ��10000000000000000000000000001010 - ԭ��
	//ȡ����11111111111111111111111111110101 - ����
	//��+1��11111111111111111111111111110110 - ����
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