#define _CRT_SECURE_NO_WARNINGS 1

//�ҡ��޸�bug

//Debug     Debug�汾�Ŀ�ִ�г���     ���԰汾    ���Ե��ԣ������а����˵�����Ϣ  ��F10��
//Release   Release�汾�Ŀ�ִ�г���   �����汾    �����Ե���




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);//���Ϊ�ϵ�-F9   ����ִ�й�����ͣ�ڴ˴�
//	}
//	return 0;
//}


//F5-��������-��F9���ʹ��
//Ctrl+F5-������ֱ������



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//F10-�����
//F11-�����   shift+F11-��������
//#include<stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n;i++)
//	{
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
#include<stdio.h>

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
	*dest = *src;
}
int main()
{
	char arr1[] = "###########";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}