#include <stdio.h>
#include <stdlib.h>
//int main()
//{
  //int num1 = 0;
  //int num2 = 0;
  //int sum = 0;
  //scanf("%d%d",&num1,&num2);
  //sum = num1 + num2;
  //printf("sum = %d\n",sum);
	//return 0;
//}


//枚举常量enum Sex
//  {
//  MALE,
//  FEMALE,
//  SECRET
//  };
//int main()
//{
// enum Sex s = MALE;
// printf("%d\n",MALE);//0
// printf("%d\n",FEMALE);//1
// printf("%d\n",SECRET);//2
// return 0;
//}


//int main()
//{
//	int dogs;
//	printf("How many dogs do you have?\n");
//	scanf("%d",&dogs);
//	printf("So you have %d dog(s)!\n",dogs);
//return 0;
//}


//int main()
//{
//	printf("%c\n",'A');
//	printf("%c\n",65);
//	printf("%c\n",'\101');
//	printf("%c\n",'\x41');
//	return 0;
//}


/*int main()
{
	float a;
	float b;
	printf("Please enter any number.\n");
	scanf("%f",&a);
	b = 2.54*a;
	printf("%f inch = %f cm\n",a,b);
		return 0;
}*/


//if语句int main()
//{
//	int input;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)\n");
//	scanf("%d",&input);
//	if(input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//return 0;
//}


//while循环int main()
//{
//	int line = 0;
//	while(line < 20000)
//	{
//	line++;
//    printf("敲第%d行代码\n", line);
//	}
//	printf("good offer\n");
//return 0;
//}


//数组int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个int类型的数组，名叫arr，可存十个int类型的数据
//	//char ch[20];//定义一个char类型的数组，名叫ch，可存20个字符
//	//float arr2[5];
//	printf("%d\n",arr[3]);
//	while(i<10)
//	{
//	printf("%d ",arr[i]);
//	i++;
//	}
//return 0;
//}


//移位操作符int main()
//{
//	int a = 2;//int申请的空间为4byte=32bit，在该空间中2存储的方式为00000000000000000000000000000010
//	int b = a<<1;//向左移一位                                      00000000000000000000000000000100（左边溢出的废弃，右边空缺的补0）
//	printf("%d\n",b);
//return 0;
//}


//int main()
//{
//	int a = 10;
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int sz;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//a的()可省略，int不可
//	printf("%d\n",sizeof(arr));//数组的大小
//	sz = sizeof(arr)/sizeof(arr[0]);//数组元素个数=数组大小/数组中一个元素的大小
//	printf("%d\n",sz);
//	return 0;
//}