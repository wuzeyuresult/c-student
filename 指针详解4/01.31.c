#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main()
{
	//һά����
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//������������ܴ�С-��λ���ֽ�-16
	printf("%d\n", sizeof(a+0));//4/8-�������������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ����ַ��С����4/8���ֽ�
	printf("%d\n", sizeof(*a));//4-��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof��*a������4
	printf("%d\n", sizeof(a+1));//4/8-�������������ʾ��Ԫ�ص�ֵ��a+1�ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1]));//4-�ڶ���Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));//4-&aȡ����������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*&a));//16-&a������ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(&a+1));//4/8-&a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	printf("%d\n", sizeof(&a[0]));//4/8-��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));//4/8-�ڶ���Ԫ�صĵ�ַ

	return 0;
}*/

/*int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6-sizeof�����������Ĵ�С��6*1=6���ֽ�
	printf("%d\n", sizeof(arr+0));//4/8-arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	printf("%d\n", sizeof(*arr));//1-arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ�����С��1���ֽ�
	printf("%d\n", sizeof(arr[1]));//1-
	printf("%d\n", sizeof(&arr));//4-&arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr+1));//4-����һ�����飬�����ǵ�ַ
	printf("%d\n", sizeof(&arr[0]+1));//4-�ڶ���Ԫ�صĵ�ַ����ַ��С��4/8���ֽ�

	return 0;
}*/

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr+0));//���ֵ
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr+1));//���ֵ
	printf("%d\n", strlen(&arr[0]+1));//���ֵ
	
	return 0;
}