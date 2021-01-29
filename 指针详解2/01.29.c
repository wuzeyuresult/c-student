#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//一维数组传参

//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int *arr)//ok
//{}
//void test2(int *arr[20])//ok
//{}
//void test2(int **arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//二维数组传参

//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])--错误
//{}
//void test3(int *arr)//错误
//{}
//void test3(int **arr)//错误
//{}
//void test3(int(*arr)[5])
//{}
////void test1(int arr[][5])
////{}	
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	test3(arr);
//	return 0;
//}

//一级指针传参

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//函数指针--是指向函数的指针--存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//printf("%d\n", Add(a, b));
//	//&函数名和函数名都是函数的地址
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	void (*p)(char*) = print;
	(*p)("Hello World");
	return 0;
}

