#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>


//int main()
//{

 
//	//memcpy - �ڴ濽��  �������ص�����

//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//	
//	return 0;
//}

//int main()
//{
    //memmove �����ص�����

//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	memmove(arr + 2, arr, 20);//20���ֽ���
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//memcmp - �ڴ�Ƚ�
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 8);//8���ֽ���
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
    //memset - �ڴ�����
    char arr[10] = "0";
    memset(arr, '#', 10);
    return 0;
}