#define _CRT_SECURE_NO_WARNINGS 1

//1.��ʱ����
//������ǰ��ʱ�䣬����Ӣ�ĵĶ���������������
//ʱ����ʱh�ͷ�m��ʾ����Ӣ�ĵĶ����У���һ��ʱ��ķ����ǣ�
//���mΪ0����ʱ��������Ȼ����ϡ�o'clock������3:00������three o'clock����
//���m��Ϊ0����ʱ��������Ȼ�󽫷ֶ���������5 : 30������five thirty����
//ʱ�ͷֵĶ���ʹ�õ���Ӣ�����ֵĶ���������0~20������
//0 : zero, 1 : one, 2 : two, 3 : three, 4 : four, 5 : five, 6 : six, 7 : seven, 8 : eight, 9 : nine, 10 : ten, 
//11 : eleven, 12 : twelve, 13 : thirteen, 14 : fourteen, 15 : fifteen, 16 : sixteen, 17 : seventeen, 18 : eighteen, 
//19 : nineteen, 20 : twenty��30����thirty��40����forty��50����fifty��
//���ڴ���20С��60�����֣����ȶ���ʮ������Ȼ���ټ��ϸ�λ������31���ȶ�30�ټ�1�Ķ�����������thirty one����
//������Ĺ���21 : 54������twenty one fifty four����9 : 07������nine seven����0 : 15������zero fifteen����


//#include<stdio.h>
//int main()
//{
//	char t[24][60] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten",
//					"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
//					"eighteen","nineteen","twenty","thirty","forty","fifty" };
//	int h, m;
//	scanf("%d %d", &h, &m);
//	if (m == 0)
//	{
//		if (h <= 20)
//			printf("%s o'clock", t[h]);
//		else
//			printf("%s %s o'clock", t[20], t[h % 10]);
//	}
//	else
//	{
//		if (m <= 20 && h <= 20)
//		{
//			printf("%s %s", t[h], t[m]);
//		}
//		else if (m > 20 && h <= 20 && m % 10 != 0)
//		{
//			printf("%s %s %s", t[h], t[m / 10 + 18], t[m % 10]);
//		}
//		else if (m > 20 && h <= 20 && m % 10 == 0)
//		{
//			printf("%s %s", t[h], t[m / 10 + 18]);
//		}
//		else
//		{
//			printf("%s %s %s %s", t[20], t[h % 10], t[m / 10 + 18], t[m % 10]);
//		}
//	}
//	return 0;
//}


//2.FJ���ַ���
//FJ��ɳ����д������һЩ�ַ�����
//A1 = ��A��
//A2 = ��ABA��
//A3 = ��ABACABA��
//A4 = ��ABACABADABACABA��
//�� ��
//�����ҳ����еĹ��ɲ�д���е�����AN��



//#include <stdio.h>
//char c[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//void A(int n)
//{
//	if (n == 1)
//	{
//		printf("A");
//	}
//	else
//	{
//		A(n - 1);
//		printf("%c", c[n - 1]);
//		A(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	A(n);
//	return 0;
//}



//3.�ַ����Ա�
//�����������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
//1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
//2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
//3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
//4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
//����ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	char b[100];
//	int l1, l2;
//	gets(a);
//	gets(b);
//	l1 = strlen(a);
//	l2 = strlen(b);
//	if (l1 != l2)
//	{
//		printf("1");
//	}
//	else
//	{
//		if (strcmp(a, b) == 0)
//			printf("2");
//
//		else
//		{
//			strcpy(a, strlwr(a));
//			strcpy(b, strlwr(b));
//			if (strcmp(a, b) == 0)
//			{
//				printf("3");
//			}
//			else
//			{
//				printf("4");
//			}
//		}
//	}
//	return 0;
//}

//4.ʱ��ת��
//����һ������Ϊ��λ��ʱ��t��Ҫ���á�<H>:<M> : <S>���ĸ�ʽ����ʾ���ʱ�䡣<H>��ʾʱ�䣬<M>��ʾ���ӣ���<S>��ʾ�룬
//���Ƕ���������û��ǰ���ġ�0�������磬��t = 0����Ӧ����ǡ�0 : 0 : 0������t = 3661���������1 : 1 : 1����

//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	int H = 0;
//	int M = 0;
//	int S = 0;
//	H = (int)(t / 3600);
//	M = (int)(t % 3600) / 60;
//	S = (int)(t % 3600) % 60;
//	printf("%d:%d:%d\n", H, M, S);
//	return 0;
//}
