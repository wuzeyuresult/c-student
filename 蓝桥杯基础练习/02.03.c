#define _CRT_SECURE_NO_WARNINGS 1

//1.报时助手
//给定当前的时间，请用英文的读法将它读出来。
//时间用时h和分m表示，在英文的读法中，读一个时间的方法是：
//如果m为0，则将时读出来，然后加上“o'clock”，如3:00读作“three o'clock”。
//如果m不为0，则将时读出来，然后将分读出来，如5 : 30读作“five thirty”。
//时和分的读法使用的是英文数字的读法，其中0~20读作：
//0 : zero, 1 : one, 2 : two, 3 : three, 4 : four, 5 : five, 6 : six, 7 : seven, 8 : eight, 9 : nine, 10 : ten, 
//11 : eleven, 12 : twelve, 13 : thirteen, 14 : fourteen, 15 : fifteen, 16 : sixteen, 17 : seventeen, 18 : eighteen, 
//19 : nineteen, 20 : twenty。30读作thirty，40读作forty，50读作fifty。
//对于大于20小于60的数字，首先读整十的数，然后再加上个位数。如31首先读30再加1的读法，读作“thirty one”。
//按上面的规则21 : 54读作“twenty one fifty four”，9 : 07读作“nine seven”，0 : 15读作“zero fifteen”。


//#include<stdio.h>
//int main()
//{
//	char t[24][60] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten",
//					"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
//					"eighteen","nineteen","twenty","thirty","forty","fifty" };
//	int h, m;
//	scanf("%d %d", &h, &m);
//	if (m == 0)
//	{
//		if (h <= 20)
//			printf("%s o'clock", t[h]);
//		else
//			printf("%s %s o'clock", t[20], t[h % 10]);
//	}
//	else
//	{
//		if (m <= 20 && h <= 20)
//		{
//			printf("%s %s", t[h], t[m]);
//		}
//		else if (m > 20 && h <= 20 && m % 10 != 0)
//		{
//			printf("%s %s %s", t[h], t[m / 10 + 18], t[m % 10]);
//		}
//		else if (m > 20 && h <= 20 && m % 10 == 0)
//		{
//			printf("%s %s", t[h], t[m / 10 + 18]);
//		}
//		else
//		{
//			printf("%s %s %s %s", t[20], t[h % 10], t[m / 10 + 18], t[m % 10]);
//		}
//	}
//	return 0;
//}


//2.FJ的字符串
//FJ在沙盘上写了这样一些字符串：
//A1 = “A”
//A2 = “ABA”
//A3 = “ABACABA”
//A4 = “ABACABADABACABA”
//… …
//你能找出其中的规律并写所有的数列AN吗？



//#include <stdio.h>
//char c[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//void A(int n)
//{
//	if (n == 1)
//	{
//		printf("A");
//	}
//	else
//	{
//		A(n - 1);
//		printf("%c", c[n - 1]);
//		A(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	A(n);
//	return 0;
//}



//3.字符串对比
//给定两个仅由大写字母或小写字母组成的字符串(长度介于1到10之间)，它们之间的关系是以下4中情况之一：
//1：两个字符串长度不等。比如 Beijing 和 Hebei
//2：两个字符串不仅长度相等，而且相应位置上的字符完全一致(区分大小写)，比如 Beijing 和 Beijing
//3：两个字符串长度相等，相应位置上的字符仅在不区分大小写的前提下才能达到完全一致（也就是说，它并不满足情况2）。比如 beijing 和 BEIjing
//4：两个字符串长度相等，但是即使是不区分大小写也不能使这两个字符串一致。比如 Beijing 和 Nanjing
//编程判断输入的两个字符串之间的关系属于这四类中的哪一类，给出所属的类的编号。


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	char b[100];
//	int l1, l2;
//	gets(a);
//	gets(b);
//	l1 = strlen(a);
//	l2 = strlen(b);
//	if (l1 != l2)
//	{
//		printf("1");
//	}
//	else
//	{
//		if (strcmp(a, b) == 0)
//			printf("2");
//
//		else
//		{
//			strcpy(a, strlwr(a));
//			strcpy(b, strlwr(b));
//			if (strcmp(a, b) == 0)
//			{
//				printf("3");
//			}
//			else
//			{
//				printf("4");
//			}
//		}
//	}
//	return 0;
//}

//4.时间转换
//给定一个以秒为单位的时间t，要求用“<H>:<M> : <S>”的格式来表示这个时间。<H>表示时间，<M>表示分钟，而<S>表示秒，
//它们都是整数且没有前导的“0”。例如，若t = 0，则应输出是“0 : 0 : 0”；若t = 3661，则输出“1 : 1 : 1”。

//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	int H = 0;
//	int M = 0;
//	int S = 0;
//	H = (int)(t / 3600);
//	M = (int)(t % 3600) / 60;
//	S = (int)(t % 3600) % 60;
//	printf("%d:%d:%d\n", H, M, S);
//	return 0;
//}
