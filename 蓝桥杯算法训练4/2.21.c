#define _CRT_SECURE_NO_WARNINGS 1

//1.�˷���
//����žų˷���

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2.��������
//С������һ���������棬��������ʱ�����ޣ�û�취������еľ��㣬������������������ÿ����������֣�
//��ϣ���ܹ�ʹ�����ľ���������ܺ���ߣ�������ϣ�����������N������������


//#include<stdio.h>
//int main()
//{
//	int arr[1000];
//	int a = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int t = arr[i];
//				arr[i] = arr[j];
//				arr[j] = t;
//			}
//		}
//	}
//	for (i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//3.��дתСд
//�Ӽ�������һ����д��ĸ��Ҫ�����Сд��ĸ�����


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch + 32);
//	return 0;
//}




//4.���ݽ���
//��дһ���������������������ֱ����ڱ���x��y���У�Ȼ��ʹ���Լ�����ĺ���swap������������������ֵ��


//#include<stdio.h>
//
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}






