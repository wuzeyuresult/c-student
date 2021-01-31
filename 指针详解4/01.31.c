#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main()
{
	//一维数组
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//计算的是数组总大小-单位是字节-16
	printf("%d\n", sizeof(a+0));//4/8-数组名在这里表示首元素的值，a+0还是首元素地址，地址大小就是4/8个字节
	printf("%d\n", sizeof(*a));//4-数组名表示首元素地址，*a就是首元素，sizeof（*a）就是4
	printf("%d\n", sizeof(a+1));//4/8-数组名在这里表示首元素的值，a+1是第二个元素的地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1]));//4-第二个元素的大小
	printf("%d\n", sizeof(&a));//4-&a取出的是数组的地址，但数组的地址也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a));//16-&a是数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小，单位是字节
	printf("%d\n", sizeof(&a+1));//4/8-&a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
	printf("%d\n", sizeof(&a[0]));//4/8-第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));//4/8-第二个元素的地址

	return 0;
}*/

/*int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//6-sizeof计算的是数组的大小，6*1=6个字节
	printf("%d\n", sizeof(arr+0));//4/8-arr是首元素的地址，arr+0还是首元素的地址，地址的大小是4/8个字节
	printf("%d\n", sizeof(*arr));//1-arr是首元素的地址，*arr就是首元素，首元素是字符，大小是1个字节
	printf("%d\n", sizeof(arr[1]));//1-
	printf("%d\n", sizeof(&arr));//4-&arr虽然是数组的地址，但还是地址，地址大小是4/8个字节
	printf("%d\n", sizeof(&arr+1));//4-跳过一个数组，但还是地址
	printf("%d\n", sizeof(&arr[0]+1));//4-第二个元素的地址，地址大小是4/8个字节

	return 0;
}*/

int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr+0));//随机值
	printf("%d\n", strlen(*arr));//err
	printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr+1));//随机值
	printf("%d\n", strlen(&arr[0]+1));//随机值
	
	return 0;
}