#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	//1.дһ������ָ�� pf���ܹ�ָ��my_strcpy
//	char* (*pf)(char*, const char*);
//	//2.дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}

//void menu()
//{
//	printf("**********************\n");
//	printf("*** 1.add    2.sub ***\n");
//	printf("*** 3.mul    4.div ***\n");
//	printf("***      0.exit    ***\n");
//	printf("**********************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("��������������");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����");
//		}
//	} while (input);
//}

 /*void Calc(int(*pf)(int ,int ))
{
	int x = 0;
	int y = 0;
	printf("��������������");
	scanf("%d %d", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}*/

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10]=&arr;//ȡ������ĵ�ַ
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ�򡾺���ָ�����顿��ָ��
//	int (*(*ppfArr)[4])(int ,int )=&pfArr;
//	//ppfArr��һ�� ����ָ�룬ָ��ָ���������4��Ԫ�ء�ָ��������ÿ��Ԫ�ص�������һ������ָ�� int (*)(int ,int )
//	return 0;
//}

//�ص�����
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(print);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa=&a;
//	//char* pc = &a;//������
//
//	void* p = &a;//void*-���Խ����κ����͵ĵ�ַ-���ܽ��н����ò���-���ܽ��мӼ������Ĳ���
//	
//	return 0;
//}



//qsort������ʹ��-�⺯��-ʵ������-quick sort
#include<stdlib.h>

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;
}

void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
	printf("\n");
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}

#include<string.h>

int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־�ʱ�Ƚ��ַ���
	//�ַ����Ƚϲ�����><=���Ƚϣ�Ӧ����strcmp�����Ƚ�
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test4()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);

}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}