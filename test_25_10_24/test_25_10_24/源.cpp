#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�׳�
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}


�׳˺�1!+2!+...+10!
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}//�����ˣ���Ϊ


int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 3 == 0)
		printf("����������Ϊ0\n");
	else if (n % 3 == 1)
		printf("����Ϊ1\n");
	else
		printf("����Ϊ2\n");
	return 0;
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	switch (n % 3)
	{
	case 0:
		printf("����������Ϊ0\n");
		
	case 1:
		printf("����Ϊ1\n");
		
	case 2:
		printf("����Ϊ2\n");
		
	}

}


int main()
{
	int day = 0;
	scanf("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}



int main()
{
	if (1)
		printf("Welcome to China\n");
	return 0;
}


int main()
{
	while (1)
		printf("Welcome to China\n");
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
		printf("%d ", i);
	return 0;
}


int main()
{
	int i = 0;
	while (i <= 10)
	{
		printf("%d ", i);
		i = i + 1;
	}
	return 0;
}


int main()
{
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i < 10);
	return 0;
}