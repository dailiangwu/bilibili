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
//	printf("请输入密码:>");
//	scanf("%s", password);
//	getchar();//清除缓冲区中的换行符
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}


//int main(void)//只输出数字字符，非数字字符不输出
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


//int main(void)//输出数字1-10
//{
//	int i;
//	for(i=1; i<=10; i++)
//	{
//	    if(i == 5)
//	    continue;//continue或break
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


//int main(void)//计算n的阶乘,尚未考虑溢出的情况
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入任意数字作为n的值:>");
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


//int main(void)//计算1到10的阶乘的和
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for(n=1;n<=10;n++)
//	{
//		ret = 1;//注意这一句的重要性
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
//int main(void)//改进版本
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


//int main(void)//二分查找的实现
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =7;//在数组中找的数为7
//	int left = 0;//左下标
//	int sz = sizeof(arr)/sizeof(arr[0]);//元素个数
//	int right = sz-1;//右下标
//	while(left<=right)
//	{
//	int mid = (left+right)/2;//中间下标
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
//	    printf("找到了，下标是：%d\n",mid);
//		break;
//	}
//	}
//	if(left>right)
//	{
//	printf("找不到\n");
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
//		Sleep(1000);//上一步执行完毕后休息一秒：S大写，1000毫秒，引用头文件#include <windows.h>
//		system("cls");//system()是一个执行系统命令的函数；cls清空屏幕；引用头文件#include <stdlib.h>
//	    left++;
//	    right--;
//	}
//	printf("%s\n", arr2);//因为最后一次打印也被cls清空，所以加上此行
//	return 0;
//}


//int main(void)
//{
//	int i = 0;
//	char password[20];
//	printf("请输入密码\n");
//	for(i=3;i>0;i--)
//	{
//			scanf("%s",password);
//			if(strcmp(password,"123456")==0)//比较两个字符串是否相等不能用==,要用函数strcmp(str1,str2)
//			  {
//			     printf("登陆成功\n");
//			     break;
//		   	  }
//			else
//			  {
//			     printf("密码错误\n");
//		 	  }
//	}
//	return 0;
//}


int main(void)//关于if括号中内容的猜想
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