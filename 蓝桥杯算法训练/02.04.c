#define _CRT_SECURE_NO_WARNINGS 1


//1.�����е���
//��һ�����У����ĵ�һ����1���ڶ�����2���������ǵ�һ����ڶ���ĺͣ�
//��������������ƣ���F��1��=1��F��2��=2��F��n��=F(n-1)+F(n-2)��n��3��n��N*��


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int F[30];
//	F[0] = 1;
//	F[1] = 2;
//	for (n = 2; n < 20; n++)
//	{
//		F[n] = F[n - 1] + F[n - 2];
//	}
//	for (n = 0; n < 20; n++)
//	{
//		printf("%d\n", F[n]);
//	}
//	return 0;
//}


//2.��1000���ڵ�����
//���һ����ǡ�õ��������������ӣ�����1������������֮�ͣ����֮Ϊ����������
//����6��������1��2��3����6 = 1 + 2 + 3�����6����������д�����ҳ�1000֮�ڵ�����������ע��1����������
//#include <stdio.h>
//
//int main()
//{
//    int i, j, sum;
//    for (i = 1; i <= 1000; i++)
//    {
//        sum = 0;
//        for (j = 1; j < i; j++)
//            if (i % j == 0)
//                sum += j;
//
//        if (sum == i)
//            printf("%d\n", i);
//    }
//    return 0;
//}


//3.��1�ӵ�x�ĺ�(number)
//��һ����x�����1�ӵ�x��ֵ

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//4.ÿ�µ�����
//��д���������·ݣ�������°���������������1����31�죨�趨���Ϊ2015�꣩

//#include<stdio.h>
//int main()
//{
//	int y;
//	scanf("%d", &y);
//	switch (y)
//	{
//	case 1:
//		printf("31");
//		break;
//	case 2:
//		printf("28");
//		break;
//	case 3:
//		printf("31");
//		break;
//	case 4:
//		printf("30");
//		break;
//	case 5:
//		printf("31");
//		break;
//	case 6:
//		printf("30");
//		break;
//	case 7:
//		printf("31");
//		break;
//	case 8:
//		printf("31");
//		break;
//	case 9:
//		printf("30");
//		break;
//	case 10:
//		printf("31");
//		break;
//	case 11:
//		printf("30");
//		break;
//	case 12:
//		printf("31");
//		break;
//	default:
//		printf("������1-12֮�������");
//		break;
//	}
//	return 0;
//}


//5.����ƽ����
//��дһ��������������������min��max��min�϶�С�ڻ����max�� ����Ȼ���������������֮�����������������min��max����ƽ���͡�
//���磬�����û��������2��5���������Ϊ:22+32+42+52=54����ע�����Կα������µ�8�⣩

//#include<stdio.h>
//int main()
//{
//	int min;
//	int max;
//	scanf("%d%d", &min, &max);
//	int num = 0;
//	int i = 0;
//	for (i = min; i <= max; i++)
//	{
//		num = num + i * i;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//6.����Խ���Ԫ��֮��	
//���һ��������һ��4*4�����������е��������У������Խ���Ԫ����͡��������ÿ��Ԫ�ض���������

//#include<stdio.h>
//int main()
//{
//	int arr[4][4];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (i == j || i + j == 3)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//7.��������
//���������������жϵ�һ�����ܷ񱻵ڶ���������������һ�������ڶ������ܷ������������ܹ����������1���������0.


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	if (i % j == 0)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}


//8.�ַ����ϲ�
//���������ַ���������ϲ�Ϊһ���ַ����������


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s1[100];
//	char s2[100];
//	gets(s1);
//	gets(s2);
//	printf("%s\n", strcat(s1, s2));
//	return 0;
//}



//9.����
//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ����������
//���磬6������Ϊ1��2��3����6��1��2��3�����6���ǡ���������
//���磬28������Ϊ1��2��4��7��14����28��1��2��4��7��14�����28Ҳ�ǡ���������
//��дһ�������ж��û������һ�����Ƿ�Ϊ����������


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum == n)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}



//10.�ɼ��ĵȼ����
//����һ���ٷ��Ƶĳɼ�t�󣬰���ʽ������ĵȼ����ȼ�Ϊ��90~100ΪA��80~89ΪB��70~79ΪC��60~69ΪD��0~59ΪE��


//#include<stdio.h>
//int main()
//{
//	int t = 0;
//	scanf("%d", &t);
//	if (t >= 90 && t <= 100)
//	{
//		printf("A");
//	}
//	else if (t >= 80 && t <= 89)
//	{
//		printf("B");
//	}
//	else if (t >= 70 && t <= 79)
//	{
//		printf("C");
//	}
//	else if (t >= 60 && t <= 69)
//	{
//		printf("D");
//	}
//	else if (t >= 0 && t <= 59)
//	{
//		printf("E");
//	}
//	return 0;
//}


