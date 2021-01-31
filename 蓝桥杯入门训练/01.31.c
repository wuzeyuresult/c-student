#define _CRT_SECURE_NO_WARNINGS 1

//1.Fibonacci数列的递推公式为：Fn=Fn-1+Fn-2，其中F1=F2=1。
//当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
//#include <stdio.h>
//int main()
//{
//    unsigned long s = 0, f1 = 1, f2 = 1, f3 = 1, n = 0;
//    scanf("%d", &n);
//
//    if (n > 2)
//        for (s = 3; s <= n; s++)
//        {
//            f3 = (f2 + f1) % 10007;
//            f1 = f2;
//            f2 = f3;
//        }
//
//    printf("%d", f3);
//    return 0;
//}


//2.给定圆的半径r，求圆的面积。
//#include<stdio.h>
//#define PI 3.14159265358979323
//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	double s = 0.0;
//	s = PI * r * r;
//	printf("%.7f", s);
//	return 0;
//}


//3.求1+2+3+...+n的值。
//#include <stdio.h>
//
//int main() 
//{
//	long long n, i, sum;
//	scanf("%I64d", &n);
//	sum = n * (n + 1) / 2;
//	printf("%I64d", sum);
//	return 0;
//}


//4.输入A、B，输出A+B。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}

