#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
//int main(void)//�Ƚ�����������ȵ����Ĵ�С
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a>b)
//	{
//		if(a>c)
//		{
//			if(b>c)
//				printf("%d>%d>%d\n",a,b,c);
//			else
//			printf("%d>%d>%d\n",a,c,b);
//		}
//		else
//		{
//		    printf("%d>%d>%d\n",c,a,b);
//		}
//	}
//	else
//	{
//	    if(a<c)
//		{
//		    if(b<c)
//				printf("%d>%d>%d\n",c,b,a);
//			else
//				printf("%d>%d>%d\n",b,c,a);
//		}
//		else
//		{
//		    printf("%d>%d>%d\n",b,a,c);
//		}
//	}
//	return 0;
//}
//int main(void)//��ʦ�İ汾
//{
//	int a, b, c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//	   int tmp = a;
//	   a = b;
//	   b = tmp;
//	}
//	if(a<c)
//	{
//	   int tmp = a;
//	   a = c;
//	   c = tmp;
//	}
//	if(b<c)
//	{
//	   int tmp = b;
//	   b = c;
//	   c = tmp;
//	}
//	printf("%d,%d,%d",a,b,c);
//	return 0;
//}


//int main(void)
//{
//	int a = 3;
//	while(a<=100)
//	{
//	     printf("%d,",a);
//	     a += 3;
//	}
//	return 0;
//}
//int main(void)//�������1��100��3�ı���
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//	    if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//int main(void)//շת������������������Լ��
//{
//	int m,n,r;
//	scanf("%d%d",&m,&n);
//	while(m%n)//���m%nΪ0������ѭ�������m%n��0������Ϊ�棬ѭ��ִ��
//	{
//	   r = m%n;
//	   m = n;
//	   n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


////�ж�����
////1.�ܱ�4�����Ҳ��ܱ�100�����Ľ���ͨ���ꣻ2.�ܱ�400�����Ľ���������
////����ͳ��Ϊ����
//int main(void)//�ж�1000-2000����Щ������
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	   if(year%4==0&&year%100!=0)
//		   {
//			   printf("%d ",year);
//			   count++;
//	       }
//	   else if(year%400==0)
//	       {
//	           printf("%d ",year);
//		       count++;
//	       }
//	}
//	printf("\n%d\n",count);
//	return 0;
//}
//int main(void)//�Ľ��汾
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	if(((year%4==0)&&(year%100!=0))||(year%400==0))
//	{
//	   printf("%d ",year);
//	   count++;
//	}
//	}
//	printf("\n%d\n",count);
//	return 0;
//}


//int main(void)//��ӡ100-200�������
//{
//	//�Գ���������ֻ�ܱ�1���䱾������
//	//��һ����i����2��i-1֮�䣨����2��i-1�����е��������i�ܱ�������ĳһ������������ôi��������
//	int i = 0;
//	int count = 0;
//	for(i=100;i<=200;i++)
//	{ 
//		int j = 0;
//		for(j=2;j<i;j++)
//		{
//		    if(i%j==0)
//				break;
//		}
//		if(i==j)
//	    {
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}
//int main(void)//�Ż��汾:sqrt()��ѧ�⺯������ͷ�ļ�#include<math.h>;ż��������������
//{
//	int i = 0;
//	int count = 0;
//	for(i=101;i<=200;i+=2)
//	{ 
//		int j = 0;
//		for(j=2;j<=sqrt((float)i);j++)
//		{
//		    if(i%j==0)
//				break;
//		}
//		if(j>sqrt((float)i))
//	    {
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}


//int main(void)//����1-100���ж��ٸ�9
//{
//	int i = 0;
//	int count = 0;
//	for(i=1;i<=100;i++)
//	{
//	   if(i%10==9)
//	      count++;
//	   if(i/10==9)
//		  count++;
//	}
//	printf("count = %d\n",count);
//	return 0;
//}


//int main(void)//����1/1-1/2+1/3-1/4+.....+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//	   sum += flag*1.0/i;//C�����еĳ�����������Ϊ�����ͣ�����������Ϊ������
//	   flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//int main(void)//�������ʮ�����е����ֵ
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};//����������ⶨ��
//	int i = 0;
//	int max = arr[0];//�ȼ���arr�еĵ�һ����Ϊ���ֵ
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<sz;i++)//��Ϊ�Ѿ������˵�һ����Ϊ���ֵ������i=1
//	{
//	   if(arr[i]>max)
//	   {
//	      max = arr[i];
//	   }
//	}
//	printf("max = %d\n",max);
//	return 0;
//}


//int main(void)//��ӡ�žų˷���
//{
//	int i = 0;//i��ʾ������j��ʾ����
//	for(i=1;i<=9;i++)//ȷ����ӡ9��
//	{
//		int j = 0;
//	    for(j=1;j<=i;j++)
//		{
//		   printf("%d*%d=%-2d ",i,j,i*j);//%2d��ʾ��ӡ��λ���Ҷ����粻����λ�Կո���棬%-2d���������
//		}
//		printf("\n");//���д�ӡ���֮��һ��
//	}
//	return 0;
//}


////��������Ϸ
//void menu(void)
//{
//	printf("#################################\n");
//	printf("####   1.play       0.exit   ####\n");
//	printf("#################################\n");
//}
//void game(void)
//{
//	//1.���������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ���������������������ߵ�
//	//time():C�����л�ȡʱ��ĺ���������һ��������(��long)������ͷ�ļ�#include<time.h>
//	
//	ret = rand()%100+1;//rand()��������ͷ�ļ�#include<stdlib.h>,rand()����������Ϊ����һ����Χ��0-32767����������������ʹ�ö�ε������ɵ�����ͬ
//	//printf("%d\n",ret);
//	while(1)
//	{
//	  printf("�������\n");
//	  scanf("%d",&guess);
//	  if(guess>ret)
//		  {
//			  printf("�´���\n");
//	      }
//	  else if(guess<ret)
//	      {
//			  printf("��С��\n");
//	      }
//	  else
//		  {
//			  printf("��ϲ�㣬�¶���\n");
//			  break;
//	      }
//	}
//}
//int main(void)
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	  menu();
//	  scanf("%d",&input);
//	  switch(input)
//	  {
//	  case 1:
//		  game();
//		  break;
//	  case 0:
//		  printf("�˳���Ϸ\n");
//		  break;
//	  default:
//		  printf("ѡ�����\n");
//		  break;
//	  }
//	} while(input);
//	return 0;
//}


int main(void)//3�������Զ��ػ�
{
	char input[20] = {0};
	//shutdown -s -t 60:60���ػ�
	//shutdown -a:ȡ���ػ�
	system("shutdown -s -t 180");
again:
	printf("��ע�⣬��ĵ��Խ���3�����ڹػ���������룺����������ȡ���ػ�\n������>:");
	scanf("%s",input);
	if(strcmp(input,"������") == 0)//strcmp����ͷ�ļ�#include<string.h>
	{
	   system("shutdown -a");
	}
	else
	{
	   goto again;
	}
	return 0;
}