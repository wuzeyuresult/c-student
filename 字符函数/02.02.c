#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//strstr - �����ַ���
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
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
	//strerror - ���ش����룬����Ӧ�Ĵ�����Ϣ
	//������   ������Ϣ
	//0 -      No error 
	//1 -      Operation not permitted
	//2 -      No such file or directory
	//...
	//errrno ��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	/*char* str = strerror(2);
	printf("%s\n", str);*/

	//���ļ�
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
	//tolower  ��дתСд
	//toupper  Сдת��д
	char ch = tolower('Q');
	putchar(ch);
	return 0;
}