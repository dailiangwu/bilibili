#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
//int main(void)//比较三个互不相等的数的大小
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
//int main(void)//老师的版本
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
//int main(void)//输出数字1到100中3的倍数
//{
//	int i;
//	for(i=1;i<=100;i++)
//	{
//	    if(i%3==0)
//			printf("%d ",i);
//	}
//	return 0;
//}


//int main(void)//辗转相除法求两正整数最大公约数
//{
//	int m,n,r;
//	scanf("%d%d",&m,&n);
//	while(m%n)//如果m%n为0，跳出循环；如果m%n非0，条件为真，循环执行
//	{
//	   r = m%n;
//	   m = n;
//	   n = r;
//	}
//	printf("%d\n",n);
//	return 0;
//}


////判断闰年
////1.能被4整除且不能被100整除的叫普通闰年；2.能被400整除的叫世纪闰年
////两者统称为闰年
//int main(void)//判断1000-2000中哪些是闰年
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
//int main(void)//改进版本
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


//int main(void)//打印100-200间的素数
//{
//	//试除法：素数只能被1和其本身整除
//	//把一个数i除以2到i-1之间（包括2和i-1）所有的数，如果i能被这其中某一个数整除，那么i不是素数
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
//int main(void)//优化版本:sqrt()数学库函数需引头文件#include<math.h>;偶数不可能是素数
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


//int main(void)//数字1-100中有多少个9
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


//int main(void)//计算1/1-1/2+1/3-1/4+.....+1/99-1/100
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//	   sum += flag*1.0/i;//C语言中的除法，若想商为浮点型，被除数必须为浮点型
//	   flag = -flag;
//	}
//	printf("%lf\n",sum);
//	return 0;
//}


//int main(void)//输出任意十个数中的最大值
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};//该数组可任意定义
//	int i = 0;
//	int max = arr[0];//先假设arr中的第一个数为最大值
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<sz;i++)//因为已经假设了第一个数为最大值，所以i=1
//	{
//	   if(arr[i]>max)
//	   {
//	      max = arr[i];
//	   }
//	}
//	printf("max = %d\n",max);
//	return 0;
//}


//int main(void)//打印九九乘法表
//{
//	int i = 0;//i表示行数，j表示列数
//	for(i=1;i<=9;i++)//确定打印9行
//	{
//		int j = 0;
//	    for(j=1;j<=i;j++)
//		{
//		   printf("%d*%d=%-2d ",i,j,i*j);//%2d表示打印两位且右对齐如不足两位以空格代替，%-2d则是左对齐
//		}
//		printf("\n");//该列打印完毕之后换一行
//	}
//	return 0;
//}


////猜数字游戏
//void menu(void)
//{
//	printf("#################################\n");
//	printf("####   1.play       0.exit   ####\n");
//	printf("#################################\n");
//}
//void game(void)
//{
//	//1.生成随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成七点
//	//time():C语言中获取时间的函数，返回一个长整型(即long)，需引头文件#include<time.h>
//	
//	ret = rand()%100+1;//rand()函数需引头文件#include<stdlib.h>,rand()函数的作用为生成一个范围在0-32767的随机数；如果单独使用多次调用生成的数相同
//	//printf("%d\n",ret);
//	while(1)
//	{
//	  printf("请猜数字\n");
//	  scanf("%d",&guess);
//	  if(guess>ret)
//		  {
//			  printf("猜大了\n");
//	      }
//	  else if(guess<ret)
//	      {
//			  printf("猜小了\n");
//	      }
//	  else
//		  {
//			  printf("恭喜你，猜对了\n");
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
//		  printf("退出游戏\n");
//		  break;
//	  default:
//		  printf("选择错误\n");
//		  break;
//	  }
//	} while(input);
//	return 0;
//}


int main(void)//3分钟内自动关机
{
	char input[20] = {0};
	//shutdown -s -t 60:60秒后关机
	//shutdown -a:取消关机
	system("shutdown -s -t 180");
again:
	printf("请注意，你的电脑将在3分钟内关机，如果输入：“我是猪”就取消关机\n请输入>:");
	scanf("%s",input);
	if(strcmp(input,"我是猪") == 0)//strcmp需引头文件#include<string.h>
	{
	   system("shutdown -a");
	}
	else
	{
	   goto again;
	}
	return 0;
}