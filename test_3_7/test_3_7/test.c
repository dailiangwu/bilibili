#define _CRT_SECURE_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main(void)
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//	putchar(ch);
//	}
//	return 0;
//}


//int main(void)
//{
//	int ret = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);
//	getchar();//����������еĻ��з�
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}


//int main(void)//ֻ��������ַ����������ַ������
//{
//	char ch;
//	while((ch=getchar()) != EOF)
//	{
//	if(ch < '0'||ch > '9')
//		continue;
//	putchar(ch);
//	//putchar('\n');
//	}
//	return 0;
//}


//int main(void)//�������1-10
//{
//	int i;
//	for(i=1; i<=10; i++)
//	{
//	    if(i == 5)
//	    continue;//continue��break
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i;
//	for(i=0; i<10; i++)
//	{
//	printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//	     int j = 0;
//	     for(j=0;j<10;j++)
//	       {
//	             printf("hehe\n");
//	       }
//	}
//	return 0;
//}


//int main(void)
//{
//	int x;
//	int y;
//	for(x=0,y=0;x<2&&y<5;++x,y++)
//	{
//	   printf("hehe\n");
//	}
//	return 0;
//}


//int main(void)//����n�Ľ׳�,��δ������������
//{
//	int n = 0;
//	int i = 0;
//	printf("����������������Ϊn��ֵ:>");
//	scanf("%d", &n);
//	//getchar();
//	for(i=n-1;i>0;i--)
//	{
//	    n = n*i;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(i=1;i<=n;i++)
//	{
//	ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}


//int main(void)//����1��10�Ľ׳˵ĺ�
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		ret = 1;//ע����һ�����Ҫ��
//		for(i=1;i<=n;i++)
//	    {
//	       ret = ret * i;
//	    }
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main(void)
//{
//	int i = 0;
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while(n<=10)
//	{
//		ret = 1;
//		for(i=1;i<=n;i++)
//	    {
//	      ret = ret * i;
//	    }
//		sum = sum + ret;
//		n++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main(void)//�Ľ��汾
//{
//	int n = 1;
//	int ret = 1;
//	int sum = 0;
//	while(n<=10)
//	{
//	  ret = ret * n;
//      sum = sum + ret;
//      n++;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main(void)
//{
//	int arr[] = {1,2,3,4,5};
//	char arr2[] = "hello";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//int main(void)//���ֲ��ҵ�ʵ��
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =7;//���������ҵ���Ϊ7
//	int left = 0;//���±�
//	int sz = sizeof(arr)/sizeof(arr[0]);//Ԫ�ظ���
//	int right = sz-1;//���±�
//	while(left<=right)
//	{
//	int mid = (left+right)/2;//�м��±�
//	if(arr[mid]>k)
//	{
//	    right = mid-1;
//	}
//	else if(arr[mid]<k)
//	{
//	    left = mid+1;
//	}
//	else
//	{
//	    printf("�ҵ��ˣ��±��ǣ�%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//	{
//	printf("�Ҳ���\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//	    arr2[left] = arr1[left];
//	    arr2[right] = arr1[right];
//	    printf("%s\n", arr2);
//		Sleep(1000);//��һ��ִ����Ϻ���Ϣһ�룺S��д��1000���룬����ͷ�ļ�#include <windows.h>
//		system("cls");//system()��һ��ִ��ϵͳ����ĺ�����cls�����Ļ������ͷ�ļ�#include <stdlib.h>
//	    left++;
//	    right--;
//	}
//	printf("%s\n", arr2);//��Ϊ���һ�δ�ӡҲ��cls��գ����Լ��ϴ���
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	char password[20];
//	printf("����������\n");
//	for(i=3;i>0;i--)
//	{
//			scanf("%s",password);
//			if(strcmp(password,"123456")==0)//�Ƚ������ַ����Ƿ���Ȳ�����==,Ҫ�ú���strcmp(str1,str2)
//			  {
//			     printf("��½�ɹ�\n");
//			     break;
//		   	  }
//			else
//			  {
//			     printf("�������\n");
//		 	  }
//	}
//	return 0;
//}


int main(void)//����if���������ݵĲ���
{
	int i = 0;
	for(i=0;i<10;i++)
	{
	   if(i=0)
	   {
		   printf("%d,", i);
	   }
	   else
	   {
	       printf("hehe,");
	   }
	}
	return 0;
}