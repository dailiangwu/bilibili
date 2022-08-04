#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[4] = {'b','i','t','\0'};
//	char arr2[10] = "hello bit";
//	int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",strlen(arr));
//	printf("%s\n",arr);//字符串如果按上述形式定义必须加'\0','\0'为转义字符(算一个字符)表示字符串结束
//	printf("%d\n",strlen(arr2));
//	printf("%s\n",arr2);
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",arr3[5]);
//	return 0;
//}


//int main()//按位与、或、异或
//{
//	int a = 10;
//	int b = 11;
//	int c = a&b;
//	int d = a|b;
//	int e = a^b;
//	printf("%d\n",c);
//	printf("%d\n",d);
//	printf("%d\n",e);
//	return 0;
//}


//int main(void)
//{
//	printf("%d\n",'\101');
//	printf("%c\n",'\101');
//	printf("%d\n",'\x41');
//	printf("%c\n",'\x41');
//	printf("%d\n",65);
//	printf("%c\n",65);
//return 0;
//}


//int main(void)
//{
//	int a = 12;
//	int b = 34;
//	printf("%d\n%d\n", a, b);
//return 0;
//}


//int main(void)
//{
//	int n, n2, n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n * n * n;
//	printf("n = %d, n squared = %d, n cubed = %d", n, n2, n3);
//return 0;
//}


//int main(void)//求较大值
//{
//	int num1, num2;
//	scanf("%d %d", &num1, &num2);
//	if(num1 > num2)
//		printf("较大值为%d\n", num1);
//	else
//		printf("较大值为%d\n", num2);
//return 0;
//}


//int Max(int x, int y)//定义一个函数求较大值
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//int main(void)
//{
//	int num1, num2;
//	int max;
//	scanf("%d %d", &num1, &num2);
//	max = Max(num1, num2);//用max接受函数Max的返回值
//	printf("较大值为%d\n",max);
//	return 0;
//}


//int main(void)//strlen只统计字符串中显示的字符的长度
//{
//	int arr[] = {1, 2, 3, 4, 5};
//	char arr2[] = "hello";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr2));
//return 0;
//}


//int main(void)//~对一个数的二进制按位取反
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}


//int main(void)//前置++与后置++
//{
//	int a = 10;
//	//int b = a ++;
//	int b = ++a;
//	printf("%d %d\n", a, b);
//return 0;
//}


//int main(void)
//{
//	int a = 100;
//	int b = 45;
//	int max;
//	max = (a > b? a: b);
//	printf("%d\n", max);
//return 0;
//}


//int Add(int x, int y)//这个程序没搞明白
//{
//int z = 0;
//z = x + y;
//return z;
//}
//int main(void)
//{
//	int a, b;
//	int sum;
//	scanf("%d\n", &a);
//	getchar();
//	scanf("%d\n",&b);
//	getchar();
//	sum = Add(a, b);
//	printf("%d\n", sum);
//    return 0;
//}


//int main(void)
//{
//	char ch = 65;
//	printf("%c\n", ch);
//	return 0;
//}


//int main(void)
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("b = %d\n",b);
//	return 0;
//}


//int main(void)
//{
//	int a = -1;
//	int b = -2;
//	int num1, num2, num3;
//	num1 = a & b;
//	num2 = a | b;
//	num3 = a ^ b;
//	printf("%d\n", num1);
//	printf("%d\n", num2);
//	printf("%d\n", num3);
//	return 0;
//}


//#define MAX(X, Y) (X>Y?X:Y)//宏
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//return 0;
//}


int main()
{
	int a = 10;
	int* p;
	p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 50;//*解引用操作符：找到地址p所指向的的那个对象（或者说找到在地址p的那个对象）
	printf("%d\n", a);
	printf("%d\n", sizeof(p));
	return 0;
}