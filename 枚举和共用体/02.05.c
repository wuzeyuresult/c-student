#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
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


//����-������-������
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
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//union Un u;
//	//printf("%d\n", sizeof(u));//4
//	return 0;
//}


//���ϴ�С�ļ���
//������Ĵ�С����������Ա��Ĵ�С
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