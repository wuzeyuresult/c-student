#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	return 0;
//}


//int main()
//{
//	//1.��NULLָ������ò���
//	//int* p = malloc(40);
//	//��p������ص��ж�
//	//*p = 10;//malloc���ٿռ�ʧ�� - ��NULLָ�������
//
//
//	//2.�Զ�̬���ٿռ��Խ�����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////Խ��
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//
//
//	//3.�ԷǶ�̬���ٵ��ڴ�����ͷ�
//	/*int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;*/
//
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	//free(p);
//	//p = NULL;
//
//
//	//5.��ͬһ�鶯̬�ڴ����ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;//������� - free��֮�������仰
//	////...
//	//free(p);
//
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
//	while (1)
//	{
//		malloc(1);
//		
//	}
//
//	return 0;
//}



void GetMemory(char* p)//char** p
{
	p = (char*)malloc(100);//*p
}

void Test(viod)
{
	char* str = NULL;
	GetMemory(str);//&str
	strcpy(str, "hello world");
	printf(str);
	//free(str);
	//str = NULL;
}

int main()
{
	Test();

	return 0;

	//1.���д���������ֱ���������
	//2.��������ڴ�й¶������
	//str��ֵ���ݵ���ʽ��p��p��GetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
	//��GetMemory����fan'hui֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
}