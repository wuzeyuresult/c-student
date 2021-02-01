#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//1.在str1字符串中追加一个str1字符串
//	//strcat
//	//strncat  自己给自己增加字符串
//	strncat(str1, str1,len1);
//	//2.判断str2指向的字符串是否是str1指向的字符串的字串
//	//strstr-找子串
//	char* ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}




//       STRLEN
//#include<assert.h>
//
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen
//	//1.字符串以'\0'为结束，
//	//int len = my_strlen("abcdef");
//	//printf("%d\n", len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen-返回值是无符号数
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}



//         STRCPY
//int main()
//{
//	//strcpy
//	//1.源字符串必须以'\0'结束
//	//2.会将源字符串中的'\0'拷贝到目标空间
//	//3.目标空间必须足够大，以确保能存放源字符串
//	//4.目标空间必须可变
//	//5.学会模拟实现
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//       STRCAT

//int main()
//{
//	//strcat-字符串追加
//	//1.源字符串必须以'\0'结束
//	//2.目标空间必须足够大，能容纳下源字符串的内容
//	//3.目标空间必须可以修改
//	//strncat-自己给自己增加字符串
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//       STRCMP
//int main()
//{
//	//strcmp-字符串比较
//	//1.第一个字符串大于第二个字符串，则返回大于0的数
//	//2.第一个字符串等于第二个字符串，则返回0
//	//3.第一个字符串小于第二个字符串，则返回小于0的数
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}



//求字符串长度
//srelen
//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp
//长度受限制的字符串函数
//strncpy
//strncat
//strncmp
//字符串查找
//strstr
//strtok
//错误信息报告
//strerror