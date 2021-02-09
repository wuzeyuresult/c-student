#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	//打开文件rest.txt
//	//绝对路径写法
//	fopen("C:\\Users\\86151\\Desktop\\C\\文件的操作\\test.txt", "r"); 
//	//相对路径写法
//	fopen("test.txt", "r");
//	//..表示上一路径
//	//.表示当前路径
//	fopen("../test.txt", "r");
//
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开文件
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//    //写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}


int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}