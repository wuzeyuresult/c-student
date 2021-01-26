#define _CRT_SECURE_NO_WARNINGS 1

//找、修改bug

//Debug     Debug版本的可执行程序     调试版本    可以调试，它其中包含了调试信息  （F10）
//Release   Release版本的可执行程序   发布版本    不可以调试




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);//红点为断点-F9   代码执行过程中停在此处
//	}
//	return 0;
//}


//F5-启动调试-和F9配合使用
//Ctrl+F5-不调试直接运行



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//F10-逐过程
//F11-逐语句   shift+F11-跳出函数
//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
#include<stdio.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "###########";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}