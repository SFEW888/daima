#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>



int main()
{
	double r = sqrt(16.0);
	printf("%f\n", r);
	printf("%0.2f\n", r);
	return 0;
}


int sum(int x, int y)
{
	return x + y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = sum(a, b);
	printf("c = %d\n", c);
	return 0;
}



void test()
{
	int n = 0;
	scanf("%d", &n);
	printf("haha\n");
	if (n == 1)
		return;
	printf("haha\n");
}

int main()
{
	test();
	return 0;
}



void test()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			break;
		printf("%d\n",i);

	}
	printf("haha\n");
}
//��ӡ��Ϊ��0,1,2,3,4,haha
int main()
{
	test();
	return 0;
}



void test()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i == 5)
			return;
		printf("%d\n", i);

	}
	printf("haha\n");
}
//��ӡ��Ϊ��0,1,2,3,4
int main()
{
	test();
	return 0;
}



int test()
{
	int n = 6;
	if (n % 2 == 1)
		return 1;
}
int main()
{
	int r = test();
	printf("%d\n",r);
	return 0;

}
//�������еĿؼ�·�����з���ֵ�����ֱ������



//�����ķ��ز�дĬ��Ϊint
test()
{
	//...
	return 1;
}

int main()
{
	int r = test();
	printf("%d\n", r);
	return 0;
}



//������д�˷������ͣ�����û��return����ֵ�������ķ���ֵ��δ֪��
int test()
{
	printf("China\n");
}
int main()
{
	int i = test();
	printf("%d\n", i);
	return 0;
}



