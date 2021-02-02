#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	int arr[200] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 1 + i; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int t=0;
//				t = arr[j];
//				arr[j] = arr[i];
//				arr[i] = t;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////2.十六进制转八进制
////给定n个十六进制正整数，输出它们对应的八进制数。
//#include<stdio.h>
//int main()
//{
//
//	return 0;
//}                  不会做


//3.特殊回文数
//123321是一个非常特殊的数，它从左边读和从右边读是一样的。
//输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a, b, c, d, e, f;
//	scanf("%d", &n);
//	for (i = 10000; i <= 999999; i++)
//	{
//		if (i < 100000)
//		{
//			a = i / 10000 % 10;
//			b = i / 1000 % 10;
//			c = i / 100 % 10;
//			d = i / 10 % 10;
//			e = i % 10;
//			if (a == e && b == d && a + b + c + d + e == n)
//			{
//				printf("%d\n", i);
//			}
//		}
//		else
//		{
//			a = i / 100000 % 10;
//			b = i / 10000 % 10;
//			c = i / 1000 % 10;
//			d = i / 100 % 10;
//			e = i / 10 %10;
//			f = i % 10;
//			if (a == f && b == e && c == d && a + b + c + d + e + f == n)
//			{
//				printf("%d\n", i);
//			}
//		}
//	}
//	return 0;
//}


//4.回文数
//1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a, b, c, d;
//	for (i = 1000; i < 10000; i++)
//	{
//		a = i / 1000 % 10;
//		b = i / 100 % 10;
//		c = i / 10 % 10;
//		d = i % 10;
//		if (a == d && b == c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//5.特殊的数字
//153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a, b, c;
//	for (i = 100; i < 1000; i++)
//	{
//		a = i / 100 % 10;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//6.杨辉三角形

//#include <stdio.h>
//#define M 34
//int main()
//{
//	int n;
//	int i, j;
//	int y[M][M];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		y[i][0] = 1;
//		y[i][i] = 1;
//		for (j = 1; j < i; j++)
//		{
//			y[i][j] = y[i - 1][j - 1] + y[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", y[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//7.查找整数
//给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int j = 0;
//	int flag = 0;
//	int arr[1000];
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	scanf("%d", &b);
//	for (j = 0; j < a; j++)
//	{
//		if (b == arr[j])
//		{
//			printf("%d\n", j+1);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("-1\n");
//	}
//	return 0;
//}


//8.数列特征
//给出n个数，找出这n个数的最大值，最小值，和。


//#include <stdio.h>
//int main()
//{
//	int a[10000];
//	int n, i, max = -10001, min = 10001, sum = 0;
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		max = max < a[i] ? a[i] : max;
//		min = min > a[i] ? a[i] : min;
//		sum += a[i];
//	}
//	printf("%d\n", max);
//	printf("%d\n", min);
//	printf("%d\n", sum);
//	return 0;
//}

//9.字母图形

/*利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。*/

//#include<stdio.h>
//int main()
//{
//	char str[26][26];
//	int m, n;
//	int i, j;
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < m; i++) {
//		str[0][i] = 'A' + i;
//	}
//	for (i = 1; i < n; i++) {
//		str[i][0] = 'A' + i;
//		for (j = 1; j < m; j++) {
//			str[i][j] = str[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			printf("%c", str[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//10.01字串

//对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。它们的前几个是：
//00000
//00001
//00010
//00011
//00100
//请按从小到大的顺序输出这32种01串。


//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a < 2; a++)
//		for (b = 0; b < 2; b++)
//			for (c = 0; c < 2; c++)
//				for (d = 0; d < 2; d++)
//					for (e = 0; e < 2; e++)
//						printf("%d%d%d%d%d\n", a, b, c, d, e);
//	return 0;
//}



//11.闰年判断
//给定一个年份，判断这一年是不是闰年。
//当以下情况之一满足时，这一年是闰年：
//1. 年份是4的倍数而不是100的倍数；
//2. 年份是400的倍数。
//其他的年份都不是闰年。

//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//12.Huffuman树
//Huffman树在编码中有着广泛的应用。在这里，我们只关心Huffman树的构造过程。
//给出一列数{ pi } = { p0, p1, …, pn - 1 }，用这列数构造Huffman树的过程如下：
//1. 找到{ pi }中最小的两个数，设为pa和pb，将pa和pb从{ pi }中删除掉，然后将它们的和加入到{ pi }中。这个过程的费用记为pa + pb。
//2. 重复步骤1，直到{ pi }中只剩下一个数。
//在上面的操作过程中，把所有的费用相加，就得到了构造Huffman树的总费用。
//本题任务：对于给定的一个数列，现在请你求出用该数列构造Huffman树的总费用。



//#include<stdio.h>
//
//void paixu(int a[], int n)
//{
//	int i, j, temp;
//	for (i = 0; i < n; i++)
//	{
//		for (j = i; j < n; j++)
//		{
//			if (a[i] >= a[j])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i, n, a[100], b[100], sum = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	paixu(a, n);
//	for (i = 0; i < n - 1; i++)
//	{
//		sum += a[i] + a[i + 1];
//		a[i + 1] = a[i] + a[i + 1];
//		a[i] = 0;
//		paixu(a, n);
//	}
//	printf("%d", sum);
//	return 0;
//}


//13.2n皇后问题
//给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，
//使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，
//任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。

//不会做



