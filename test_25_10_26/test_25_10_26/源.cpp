#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i = i + 1;
	}
	return 0;
}


int main()
{
	int i = 0;
	while (i < 10)
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i = i + 1;
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	//ѭ������100~200֮�����
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�ж�2~i-1֮�����
		int j = 0;
		int flag = 1;//����iΪ����
		//flag������Ϊ�˸�һ������������ǲ�������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}


int main()
{
	int i = 0;
	//ѭ������100~200֮�����
	for (i = 1; i <= 10; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�ж�2~i-1֮�����
		int j = 0;
		int flag = 1;//����iΪ����
		//flag������Ϊ�˸�һ������������ǲ�������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			printf("%d ", i);
	}
	return 0;
}


int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");

next:
	printf("������ӡhaha\n");
	return 0;
}