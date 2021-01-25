#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	//int a = -1;
//	//int b = a >> 1;//(>> 右移操作符)    (<< 左移操作符)
//	//printf("%d", b);
//	//&-按位与     对位二进制有0则为0，两个都为1则是1
//	//|-按位或     对位二进制有1则为1，两个都是0则是0
//	//^-按位异或   对位二进制相同为0，相异为1
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;*/
//	
//	/*int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);*/
//
//	//不创建临时变量交换a与b的值
//	int a = 3;//00000000000000000000000000000011
//	int b = 5;//00000000000000000000000000000101
//	a = a ^ b;//00000000000000000000000000000110   6
//	b = a ^ b;//00000000000000000000000000000011   3
//	a = a ^ b;//00000000000000000000000000000101   5
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	short s = 0;//short 用hd输出
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%hd\n", s);
//	return 0;
//}
//#include<stdio.h>
//
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
	//条件操作符  exp1 ? exp2 : exp3
	//&& 逻辑与
	//|| 逻辑或
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;*/
	//i = a++ && ++b && d++;   1,2,3,4
	/*printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);*/
	/*return 0;*/
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//从左往右依次计算
//	printf("%d\n", c);
//	return 0;
//}
#include<stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}