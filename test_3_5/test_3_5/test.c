#include <stdio.h>
#include <string.h>
//int main(void)//ָ��Ĵ�С
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%p\n", &d);
//	//printf("%p\n", pd);
//	//*pd = 5.5;
//	//printf("%lf\n", *pd);
//	//printf("%lf\n", d);
//
//
//	//int a = 10;
//	//int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	//*p = 50;
//	//printf("a = %d\n", a);
//	return 0;
//}


////�ṹ��:�Լ����������һ�����ͣ������������Ӷ���
//struct Book
//{
//	char name[20];
//	int price;
//};//�����ڶ��庯�������ﶨ����һ������Book�Ľṹ�����ͣ�ĩβ�ǵüӷֺţ�
//int main(void)
//{
//	struct Book b1 = {"C���Գ������", 55};//�˴��������涨��Ľṹ�����ͣ�����һ�������͵ı���
//	struct Book* pd = &b1;//�ṹ�����͵�ָ��Ķ���
//	printf("������%s\n",(*pd).name);
//	printf("�۸�%d\n",(*pd).price);
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	printf("������%s\n", pd->name);
//	printf("�۸�%d\n", pd->price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	strcpy(b1.name, "C++�������");//ͷ�ļ�sting.h ����strcpy
//	printf("������%s\n", b1.name);
//	return 0;	
//}


//int main(void)
//{
//	int a = -2;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}


//int main(void)//����else if
//{
//	int age;
//	printf("������������䣨һ�����֣�\n");
//	scanf("%d", &age);
//	if(age<18)
//		printf("δ����\n");
//	else if(age>=18 && age<28)
//		printf("����\n");
//	else if(age>=28 && age<50)
//		printf("׳��\n");
//	else if(age>=50 && age<90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//	return 0;
//}


//int main(void)//else�����������������δƥ���if����ƥ�䣬���Ƿ�����޹�
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		if(b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//		return 0;
//}
//int main(void)//ע����δ�������һ�ε�����
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		{
//			if(b == 2)
//				printf("hehe\n");
//	    }
//	else
//			printf("haha\n");
//		return 0;
//}
//int main(void)
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)
//		{
//			if(b == 2)
//			printf("hehe\n");
//			else
//			printf("haha\n");
//	    }
//	return 0;
//}


//int main(void)//�ж���ż
//{
//	int a;
//	printf("��������������\n");
//	scanf("%d", &a);
//	if(1 == a%2)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//}


//int main(void)//���1-100�е�����
//{
//	int i = 1;
//	while(i <= 100)
//	{
//		if(i%2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main(void)//��һ�ַ�ʽ
//{
//	int i = 1;
//	while(i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//int main(void)//switch���
//{
//	int day;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//	    break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main(void)
//{
//	int day;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main(void)
//{
//	int n = 1;
//	int m = 2;
//	switch(n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch(n)
//		{
//case 1:
//			n++;
//case 2:
//	m++;
//	n++;
//	break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main(void)//��ӡ1��10
//{
//	int i = 1;
//	while(i <= 10)
//	{
//	printf("%d ", i);
//	i++;
//	}
//	return 0;
//}


//int main(void)//break:�������㣬ֱ����ֹ����ѭ��
//{
//	int i = 1;
//	while(i <= 10)
//	{
//		if(5 == i)
//			break;
//	printf("%d ", i);
//	i++;
//	}
//	return 0;
//}


//int main(void)//continue:��������ѭ���øùؼ���֮�������ֱ�ӿ�ʼ��һ��ѭ��(ע��:��Ҫ�ж��ܷ������һ��ѭ��)
//{
//	int i = 0;
//	while(i <= 9)
//	{
//	i++;
//	if(i == 5)
//		continue;
//	printf("%d ", i);
//	}
//	return 0;
//}


//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	printf("%c\n", ch);
//	return 0;
//}
//int main(void)
//{
//	int ch;
//	ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);//putchar()��printf("%c", )������ͬ
//	return 0;
//}
//int main(void)//����һ���ַ������ݸ�ֵ��һ�����ͱ����������ͱ�����õ�ֵ������ַ������ݶ�Ӧ��ASCII��ֵ
//{
//	int a;
//	a = 'A';
//	printf("%d\n", a);
//	return 0;
//}
//int main(void)//��γ�������ж�һ�����������Ƿ��һ���ַ���������Ⱦ����ж�������������Ƿ������ַ�����������Ӧ��ASCII��ֵ���
//{
//	if(65 == 'A')//����65 == 'A'����-1 == EOF����
//		printf("Y\n");
//	else
//		printf("N\n");
//	return 0;
//}
int main(void)//����ctrl+z����ѭ��
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
	     putchar(ch);
	}
	return 0;
}