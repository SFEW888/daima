#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main() {
//    printf("Practice makes perfect!");
//    return 0;
//}



//int main()
//{
//	printf("v   v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}




//int main()
//{
//	//一行输出的效果
//	printf("v   v\n v v\n  v\n");
//	return 0;
//}




//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}




//int main()
//{
//	printf("0%o 0x%x", 1234, 1234);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}




//int main()
//{
//	int ch = getchar();
//	putchar(ch + 32);
//
//	return 0;
//}





//int main()
//{
//	int ch = 0;
//	while (ch = getchar())
//	{
//		putchar(ch + 32);
//		getchar();//处理多余的\n
//	}
//	return 0;
//}




//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}




//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}




//int main()
//{
//	int ret = printf("Hello world!");
//	printf("%d\n, ret");
//}



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}



//int main()
//{
//	int number = 0;
//	float score_c = 0.0;
//	float score_math = 0.0;
//	float score_eng = 0.0;
//	scanf("%d;%f,%f,%f", &number, &score_c, &score_math, &score_eng);
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", number, score_c, score_math, score_eng);
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("YES\n");
//		else
//			printf("NO\n");
//		getchar();//处理\n
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while((scanf("%c",&ch)) != EOF)
//	{
//			if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("YES\n");
//			else
//			printf("NO\n");
//	
//		}
//		return 0;
//	
//}




//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	//每循环一次，打印一行
//	//每一行由2部分组成，空格和字符
//	for (i = 0; i < 5; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印字符
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}