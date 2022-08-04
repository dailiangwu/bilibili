#include <stdio.h>
#include <string.h>
//int main(void)//指针的大小
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


////结构体:自己创造出来的一种类型，用于描述复杂对象
//struct Book
//{
//	char name[20];
//	int price;
//};//类似于定义函数，这里定义了一个名叫Book的结构体类型（末尾记得加分号）
//int main(void)
//{
//	struct Book b1 = {"C语言程序设计", 55};//此处利用上面定义的结构体类型，创建一个该类型的变量
//	struct Book* pd = &b1;//结构体类型的指针的定义
//	printf("书名：%s\n",(*pd).name);
//	printf("价格：%d\n",(*pd).price);
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	printf("书名：%s\n", pd->name);
//	printf("价格：%d\n", pd->price);
//	b1.price = 15;
//	printf("修改后的价格：%d\n", b1.price);
//	strcpy(b1.name, "C++程序设计");//头文件sting.h 函数strcpy
//	printf("书名：%s\n", b1.name);
//	return 0;	
//}


//int main(void)
//{
//	int a = -2;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}


//int main(void)//多重else if
//{
//	int age;
//	printf("请输入你的年龄（一个数字）\n");
//	scanf("%d", &age);
//	if(age<18)
//		printf("未成年\n");
//	else if(age>=18 && age<28)
//		printf("青年\n");
//	else if(age>=28 && age<50)
//		printf("壮年\n");
//	else if(age>=50 && age<90)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	return 0;
//}


//int main(void)//else会与离其最近的且尚未匹配的if进行匹配，与是否对齐无关
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
//int main(void)//注意这段代码与上一段的区别
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


//int main(void)//判断奇偶
//{
//	int a;
//	printf("请输入任意数字\n");
//	scanf("%d", &a);
//	if(1 == a%2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}


//int main(void)//输出1-100中的奇数
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
//int main(void)//另一种方式
//{
//	int i = 1;
//	while(i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}


//int main(void)//switch语句
//{
//	int day;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//	    break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
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


//int main(void)//打印1到10
//{
//	int i = 1;
//	while(i <= 10)
//	{
//	printf("%d ", i);
//	i++;
//	}
//	return 0;
//}


//int main(void)//break:条件满足，直接终止所有循环
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


//int main(void)//continue:跳过本次循环该该关键词之后的内容直接开始下一次循环(注意:需要判定能否进入下一次循环)
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
//	putchar(ch);//putchar()与printf("%c", )作用相同
//	return 0;
//}
//int main(void)//若把一个字符型数据赋值给一个整型变量，该整型变量获得的值是这个字符型数据对应的ASCII码值
//{
//	int a;
//	a = 'A';
//	printf("%d\n", a);
//	return 0;
//}
//int main(void)//这段程序表明判断一个整型数据是否和一个字符型数据相等就是判断这个整型数据是否和这个字符型数据所对应的ASCII码值相等
//{
//	if(65 == 'A')//这里65 == 'A'可用-1 == EOF代替
//		printf("Y\n");
//	else
//		printf("N\n");
//	return 0;
//}
int main(void)//输入ctrl+z结束循环
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
	     putchar(ch);
	}
	return 0;
}