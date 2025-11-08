#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int* const p = &a;//a的地址
//	//p = &b;//错误
//	*p = 100;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	printf("%d\n", a);
//	return 0;
//	//const修饰在*右边时，const限制的是指针变量本身，指针变量不再指向其他变量
//	//但是可以通过修改指针变量，修改指针变量指向的内容
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int const* p = &a;
//	p = &b;
//	//*p = 100;//报错
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%p\n", p);
//	return 0;
//}




//int main()
//{
//	int* p = NULL;
//	assert(p != NULL);
//	return 0;//只要有NULL会报错
//}




//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	assert(n > 3);
//	return 0;
//}




//void Swapl(int x, int y)
//{
//	int tap = x;
//	x = y;
//	y = tap;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	Swapl(a, b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//}




//#include <math.h>
//int main()
//{
//    double d = 16.0;
//    double r = sqrt(d);
//    printf("%lf\n", r);
//    return 0;
//}





//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    //输入 
//    scanf("%d %d", &a, &b);
//    //调用加法函数，完成a和b的相加 
//    //求和的结果放在r中 
//    int r = Add(a, b);
//    //输出 
//    printf("%d\n", r);
//    return 0;
//}






int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int a = 0;
    int b = 0;
    //输入 
    scanf("%d %d", &a, &b);
    //调用加法函数，完成a和b的相加 
    //求和的结果放在r中 
    int r = Add(a, b);
    //输出 
    printf("%d\n", r);
    return 0;
}




void test()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (i == 5)
            break;
        printf("%d\n", i);
    }
    printf("haha\n");
}