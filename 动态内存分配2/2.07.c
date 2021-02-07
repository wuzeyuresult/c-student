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
//	//1.对NULL指针解引用操作
//	//int* p = malloc(40);
//	//对p进行相关的判断
//	//*p = 10;//malloc开辟空间失败 - 对NULL指针解引用
//
//
//	//2.对动态开辟空间的越界访问
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////越界
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//
//
//	//3.对非动态开辟的内存进行释放
//	/*int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;*/
//
//
//	//4.使用free释放动态开辟内存的一部分
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
//	////回收空间
//	//free(p);
//	//p = NULL;
//
//
//	//5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;//解决方法 - free完之后加上这句话
//	////...
//	//free(p);
//
//
//	//6.动态开辟内存忘记释放（内存泄漏）
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

	//1.运行代码程序会出现崩溃的现象
	//2.程序存在内存泄露的问题
	//str以值传递的形式给p，p是GetMemory函数的形参，只能函数内部有效
	//等GetMemory函数fan'hui之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
}