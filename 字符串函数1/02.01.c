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
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat
//	//strncat  �Լ����Լ������ַ���
//	strncat(str1, str1,len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
//	//strstr-���Ӵ�
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
//	//1.�ַ�����'\0'Ϊ������
//	//int len = my_strlen("abcdef");
//	//printf("%d\n", len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen-����ֵ���޷�����
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
//	//1.Դ�ַ���������'\0'����
//	//2.�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//	//3.Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//	//4.Ŀ��ռ����ɱ�
//	//5.ѧ��ģ��ʵ��
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//       STRCAT

//int main()
//{
//	//strcat-�ַ���׷��
//	//1.Դ�ַ���������'\0'����
//	//2.Ŀ��ռ�����㹻����������Դ�ַ���������
//	//3.Ŀ��ռ��������޸�
//	//strncat-�Լ����Լ������ַ���
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//       STRCMP
//int main()
//{
//	//strcmp-�ַ����Ƚ�
//	//1.��һ���ַ������ڵڶ����ַ������򷵻ش���0����
//	//2.��һ���ַ������ڵڶ����ַ������򷵻�0
//	//3.��һ���ַ���С�ڵڶ����ַ������򷵻�С��0����
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}



//���ַ�������
//srelen
//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp
//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp
//�ַ�������
//strstr
//strtok
//������Ϣ����
//strerror