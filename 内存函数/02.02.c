#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>


//int main()
//{

 
//	//memcpy - 内存拷贝  不可以重叠拷贝

//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	
//	return 0;
//}

//int main()
//{
    //memmove 可以重叠拷贝

//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	memmove(arr + 2, arr, 20);//20是字节数
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//memcmp - 内存比较
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 8);//8是字节数
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
    //memset - 内存设置
    char arr[10] = "0";
    memset(arr, '#', 10);
    return 0;
}