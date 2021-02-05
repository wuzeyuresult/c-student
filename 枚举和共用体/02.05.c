#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE=2,//2
//    FEMALE,//3
//	SECRET=8//8
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}


//联合-联合体-共用体
////union Un
////{
////	char c;
////	int i;
////};

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//union Un u;
//	//printf("%d\n", sizeof(u));//4
//	return 0;
//}


//联合大小的计算
//联合体的大小至少是最大成员体的大小
union Un
{
	int a;//4
	char arr[5];//5
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8
	return 0;
}