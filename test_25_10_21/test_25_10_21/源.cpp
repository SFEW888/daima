#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void Printf(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
}
int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	Printf(arr, 3, 5);//Ҫ֪����ʲô���飬�Ǽ��м���
	return 0;
}



//����ĳ��ĳ���ж�����
//��ȷ���Լ������������
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	//�������������庯��
	int d = get_days_of_month(year, month);
	printf("%d\n", d);
	return 0;
}
//֮���庯��
int get_days_of_month(int y, int m)
{
	//int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	//�����±���     0   1  2 3   4  5 6  7   8  9  10 11,���и�Ϊ
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//             0  1  2  3  4  5  6  7  8  9  10 11 12
	int d = days[m];
	//�ж�����,����һ������
	if (is_leap_year(y) && m == 2)
		d += 1;
	return 0;
}
//�������꺯��
int is_leap_year(int y)
{
	if(((y%4 == 0)&&(y%100 != 0)||(y%400 == 0)))
		return 1;
	else
		return 0;
}



int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)))
		return 1;
	else
		return 0;
}
int get_days_of_month(int y, int m)
{
	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int d = days[m];
	if (is_leap_year(y) && m == 2)
		d += 1;
	return d;
}
int main()
{
	int year = 0;
	int month = 0;
	scanf("%d %d", &year, &month);
	int d = get_days_of_month(year, month);
	printf("%d\n", d);
	return 0;
}



int main()
{
	printf("%d", printf("%d", printf("%d",43)));
	return 0;
}//4321

int main()
{
	printf("%d ", printf("%d ", printf("%d ", 43)));
	return 0;
}//43 3 2 ,��Ϊ�пո�printf����ֵΪ3��2



 void test()
{
	int n = 1;
	n++;
	printf("%d ", n);
}
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}

void test()
{
	static int i = 0;
	i++;
	printf("%d ", i);
}
int main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
			test();
	}
	return 0;
}