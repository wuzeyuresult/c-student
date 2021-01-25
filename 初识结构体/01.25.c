#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3三个全局的结构体变量(不建议使用)

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = {"张三",20,66666666666,"男"};//局部变量
//	Stu s2 = {"旺财",30,99999999999,"保密"};
//	
//	return 0;
//}
#include<stdio.h>

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "Hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void print(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}
void print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	Stu s = { "张三",40,"66666666666","男" };
	print(s);
	print2(&s);
	return 0;
}
