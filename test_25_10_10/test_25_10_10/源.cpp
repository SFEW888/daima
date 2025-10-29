#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


//int main()
//{
//	printf("hello!");
//	return 0;
//}


//int main()
//{
//	char arr1[] = "Welcome to China!";
//	char arr2[] = "*****************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	left++;
//	right--;
//	return 0;
//}


int main()
{ 
	char arr1[] = "Welcome to China!!!!!!";
	char arr2[] = "######################";
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		Sleep(1000);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);

	return 0;
}


