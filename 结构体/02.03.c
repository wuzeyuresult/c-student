#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别+年龄
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s3,s4,s5;//全局的结构体变量
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//结构体的自引用
//
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//
//	return 0;
//}


//typedef struct Node
//{
//	int data;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}



//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%lf\n", s.st.weight);
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//
//	return 0;
//}


//结构体内存对齐


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//
//	return 0;
//}

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}

void Print(const struct S* ps)
{
	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);
	Print(&s);
	return 0;
}
//结构体传参，最好传地址