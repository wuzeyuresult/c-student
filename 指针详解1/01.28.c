#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	const char* p = "abcdef";
//	printf("%s\n", p);//abcdef
//	printf("%c\n", *p);//a
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[]= "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
	//if (arr1 == arr2)
	//{
	//	printf("hehe\n");
	//}
	//else
	//{
	//	printf("haha\n");
	//}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��

//int main()
//{
//	//int* p=NULL;//p������ָ��-ָ�����ε�ָ��-���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��-���Դ���ַ��ĵ�ַ
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr- ��Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10]=&arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	int arr2[10] = { 0 };
//	int* (*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

////�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5]---arr��һ��5��Ԫ�ص���������
//int* parr1[10]---parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//int (*parr2)[10]---parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
//int (*parr3[10])[5]---parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int