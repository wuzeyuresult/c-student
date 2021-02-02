#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//strstr - 查找字符串
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	//strtok
//	//192.168.31.121
//	//192 168 31 121--strtok
//	char arr[] = "212602929@qq.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p);ret!=NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//#include<errno.h>
//int main()
//{
	//strerror - 返回错误码，所对应的错误信息
	//错误码   错误信息
	//0 -      No error 
	//1 -      Operation not permitted
	//2 -      No such file or directory
	//...
	//errrno 是一个全局的错误码的变量
	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
	/*char* str = strerror(2);
	printf("%s\n", str);*/

	//打开文件
//	FILE* pf=fopen("test.txt","r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

int main()
{
	//tolower  大写转小写
	//toupper  小写转大写
	char ch = tolower('Q');
	putchar(ch);
	return 0;
}