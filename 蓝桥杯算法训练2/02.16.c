#define _CRT_SECURE_NO_WARNINGS 1


//1.数对
//编写一个程序，该程序从用户读入一个整数，然后列出所有的数对，每个数对的乘积即为该数。


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			if (i * j == n)
//			{
//				printf("%d * %d = %d\n", i, j, n);
//			}
//		}
//	}
//	return 0;
//}



//2.整除问题
//编写一个程序，输入三个正整数min、max和factor，然后对于min到max之间的每一个整数（包括min和max），
//如果它能被factor整除，就把它打印出来。


//#include<stdio.h>
//int main()
//{
//	int min = 0;
//	int max = 0;
//	int factor = 0;
//	int i = 0;
//	scanf("%d %d %d", &min, &max, &factor);
//	for (i = min; i <= max; i++)
//	{
//		if (i % factor == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//3.薪水计算
//编写一个程序，计算员工的周薪。
//薪水的计算是以小时为单位，如果在一周的时间内，员工工作的时间不超过40 个小时，
//那么他/她的总收入等于工作时间乘以每小时的薪水。
//如果员工工作的时间在40 到50 个小时之间，那么对于前40 个小时，仍按常规方法计算；
//而对于剩余的超额部分，每小时的薪水按1.5 倍计算。
//如果员工工作的时间超过了50 个小时，那么对于前40 个小时，仍按常规方法计算；
//对于40～50 个小时之间的部分，每小时的薪水按1.5 倍计算；
//而对于超出50 个小时的部分，每小时的薪水按2 倍计算。
//请编写一个程序，输入员工的工作时间和每小时的薪水，然后计算并显示他/她应该得到的周薪。



//#include<stdio.h>
//int main()
//{
//	float n, a;
//	scanf("%f%f", &n, &a);
//	if (n <= 40)
//	{
//		printf("%.2f", n * a);
//	}
//	if (n > 40 && n <= 50)
//	{
//		printf("%.2f", 40 * a + ((n - 40) * 1.5 * a));
//	}
//	if (n > 50)
//	{
//		printf("%.2f", 40 * a + (10 * 1.5 * a) + ((n - 50) * 2 * a));
//	}
//	return 0;
//}


//4.阶乘
//请编写一个程序，输入一个整数n(n<=100)，然后输出n! 最右边的那个非0的数字是多少。



//#include<stdio.h>
//int main()
//{
//	int n, i, t = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) 
//	{
//		t *= i;
//		while (t % 10 == 0) 
//		{//去掉末尾0 
//			t /= 10;
//		}
//		t %= 1000;//因为n<=100所以保留三位即可 
//	}
//	printf("%d", t % 10);
//	return 0;
//}


//5.整数平均数
//编写函数，求包含n个元素的整数数组中元素的平均值。要求在函数内部使用指针操纵数组元素，其中n个整数从键盘输入，输出为其平均值。



//#include<stdio.h>
//int aver(int x[], int n)
//{
//	int i, s = 0;
//	for (i = 0; i < n; i++)
//		s += *(x + i);
//	return s / n;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, a[10001];
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	int ave;
//	ave = aver(a, n);
//	printf("%d\n", ave);
//	return 0;
//}



//6.判定数字
//编写函数，判断某个给定字符是否为数字。

//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	if ('0' <= a && a <= '9')
//	{
//		printf("yes");
//	}else
//	{
//		printf("no");
//	}
//	return 0;
//}


//7.最大值与最小值的计算
//输入11个整数，计算它们的最大值和最小值。


#include<stdio.h>
int main()
{
	int arr[11] = { 0 };
	int i = 0;
	for (i = 0; i < 11; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for (i = 0; i < 11; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	for (i = 0; i < 11; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("%d %d", max, min);
	return 0;
}