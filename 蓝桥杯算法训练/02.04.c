#define _CRT_SECURE_NO_WARNINGS 1


//1.求数列的项
//有一个数列，它的第一项是1，第二项是2，第三项是第一项与第二项的和，
//后面的项依次类推，即F（1）=1，F（2）=2，F（n）=F(n-1)+F(n-2)（n≥3，n∈N*）


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int F[30];
//	F[0] = 1;
//	F[1] = 2;
//	for (n = 2; n < 20; n++)
//	{
//		F[n] = F[n - 1] + F[n - 2];
//	}
//	for (n = 0; n < 20; n++)
//	{
//		printf("%d\n", F[n]);
//	}
//	return 0;
//}


//2.求1000以内的完数
//如果一个数恰好等于它的所有因子（包括1但不包括自身）之和，则称之为“完数”。
//例如6的因子是1，2，3，且6 = 1 + 2 + 3，因此6是完数。编写程序找出1000之内的所有完数。注意1不是完数。
//#include <stdio.h>
//
//int main()
//{
//    int i, j, sum;
//    for (i = 1; i <= 1000; i++)
//    {
//        sum = 0;
//        for (j = 1; j < i; j++)
//            if (i % j == 0)
//                sum += j;
//
//        if (sum == i)
//            printf("%d\n", i);
//    }
//    return 0;
//}


//3.求1加到x的和(number)
//有一个数x，求从1加到x的值

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//4.每月的天数
//编写程序，输入月份，输出该月包含的天数，例如1月有31天（设定年份为2015年）

//#include<stdio.h>
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	switch (y)
//	{
//	case 1:
//		printf("31");
//		break;
//	case 2:
//		printf("28");
//		break;
//	case 3:
//		printf("31");
//		break;
//	case 4:
//		printf("30");
//		break;
//	case 5:
//		printf("31");
//		break;
//	case 6:
//		printf("30");
//		break;
//	case 7:
//		printf("31");
//		break;
//	case 8:
//		printf("31");
//		break;
//	case 9:
//		printf("30");
//		break;
//	case 10:
//		printf("31");
//		break;
//	case 11:
//		printf("30");
//		break;
//	case 12:
//		printf("31");
//		break;
//	default:
//		printf("请输入1-12之间的数字");
//		break;
//	}
//	return 0;
//}


//5.连续平方和
//编写一个程序，输入两个正整数min和max（min肯定小于或等于max且 ），然后计算这两个整数之间的所有整数（包括min和max）的平方和。
//例如，假设用户输入的是2和5，则计算结果为:22+32+42+52=54。（注：引自课本第五章第8题）

//#include<stdio.h>
//int main()
//{
//	int min;
//	int max;
//	scanf("%d%d", &min, &max);
//	int num = 0;
//	int i = 0;
//	for (i = min; i <= max; i++)
//	{
//		num = num + i * i;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//6.矩阵对角线元素之和	
//设计一个程序，求一个4*4矩阵（四行四列的整数阵列）的两对角线元素这和。（矩阵的每个元素都是整数）

//#include<stdio.h>
//int main()
//{
//	int arr[4][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (i == j || i + j == 3)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//7.除法运算
//输入两个整数，判断第一个数能否被第二个数整除（即第一个数除第二个数能否除尽），如果能够除尽，输出1，否则输出0.


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	if (i % j == 0)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}


//8.字符串合并
//输入两个字符串，将其合并为一个字符串后输出。


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s1[100];
//	char s2[100];
//	gets(s1);
//	gets(s2);
//	printf("%s\n", strcat(s1, s2));
//	return 0;
//}



//9.完数
//一个数如果恰好等于它的因子之和，这个数就称为“完数”。
//例如，6的因子为1、2、3，而6＝1＋2＋3，因此6就是“完数”。
//又如，28的因子为1、2、4、7、14，而28＝1＋2＋4＋7＋14，因此28也是“完数”。
//编写一个程序，判断用户输入的一个数是否为“完数”。


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//10.成绩的等级输出
//输入一个百分制的成绩t后，按下式输出它的等级。等级为：90~100为A，80~89为B，70~79为C，60~69为D，0~59为E。


//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	if (t >= 90 && t <= 100)
//	{
//		printf("A");
//	}
//	else if (t >= 80 && t <= 89)
//	{
//		printf("B");
//	}
//	else if (t >= 70 && t <= 79)
//	{
//		printf("C");
//	}
//	else if (t >= 60 && t <= 69)
//	{
//		printf("D");
//	}
//	else if (t >= 0 && t <= 59)
//	{
//		printf("E");
//	}
//	return 0;
//}


