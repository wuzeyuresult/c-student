#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	return 0;
//}


//malloc

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��ķ�ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//���ռ䶯̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ - free
//	free(p);
//	p = NULL;
//	return 0;
//}


//calloc

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));//��ʼ��Ϊ0
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc

int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}
