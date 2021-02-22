#define _CRT_SECURE_NO_WARNINGS 1

//1.乘法表
//输出九九乘法表。

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2.景点游览
//小明来到一个景区游玩，但是他的时间有限，没办法逛遍所有的景点，所以他从网上下载了每个景点的评分，
//他希望能够使游览的景点的评分总和最高，于是他希望你帮他对于N个景点排下序。


//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//3.大写转小写
//从键盘输入一个大写字母，要求改用小写字母输出。


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch + 32);
//	return 0;
//}




//4.数据交换
//编写一个程序，输入两个整数，分别存放在变量x和y当中，然后使用自己定义的函数swap来交换这两个变量的值。


//#include<stdio.h>
//
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}






