#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//scanf("%d%d", &num1, &num2);
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
////
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//enum sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	
////	enum sex L = MALE;
//	printf("%d\n", L);
//	return 0;
//}
 
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\x21');
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d\n", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	
//	while (line<20000)
//	{
//		printf("敲一行代码,%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("好offer\n");
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int top[10] = {1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", top[i]);
//		i++;
//	}
//	char ch[20];
//	float gear[5];
//	return 0;
//}
//
//
//#include <stdio.h>

//int main() 
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a ^ b;
//	//printf("%d\n", c);
//	int a = 10;
//	a &= 2;
//	printf("%d\n",a);
//	return 0;  
//}
//0110
//0010
//0010
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int arr[10] = {0};
//	int size = 0;
//	printf("%d\n", sizeof(arr));
//	size = sizeof(arr) / sizeof(arr[0]);
//	printf("size = %d\n", size);
//	
//	/*int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));*/
//	return 0;
//int main()
//{
//	printf("abd\nabc");
//	return 0;
//}
//int main()
//{
//#define a 10
//	int arr[a] = {1,2,3,4,5,6,7,8,9};
//	printf("%d\n", arr[0]);
//		return 0;
//}

//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = Max(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
//#include <stdio.h>

//int main()
//{
	//int a = 0;//原码→反码→补码 计算中储存的都是补码
	//int b = ~a;//例如0的是四字节32比特 那么他的原码是
	//printf("%d\n", b);//000000000000000000000000000000000000  
	//return 0;// ~ 是二进制取反 则得到11111111111111111111111111111111的原码
//}反码是由原码反码除第一位不变其他取反得到 即10000000000000000000000000000000
//补码则由反码加1得到10000000000000000000000000000001
 //正整数原码等于补码 负数则不同

 //int main()
//{
	//int a = 10;
	//int b = a++;//后置++，先使用，再++ 10 11
	//int b = ++a;//前置++，先++，再使用 11 11
	//int b = a--;//后置--,先使用，再-- 9 10
	//int b = --a;//先置--,先--，再使用 9 9
	//printf("a = %d b = %d\n", a, b);
	//return 0;
//}

//int main()
//{
//	int a = (int)4.54;
//	printf("%d\n", a);
//	return 0;
//} 
//int main()
//{
//	int a = 0;//非0为真 0为假 &&逻辑与 全真则真 ||逻辑或 有真则真
//	int b = 0;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//exp指的是表达式，即是exp1（a > b） 其中若a > b为真则执行exp2（a，否则执行exp3（b）
//	printf("%d\n", max);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4];//[]是下标引用操作符
//	int a = 10;
//	int b = 10;
//	int sum = Add(a, b);//（）是函数引用操作符
//	return 0;
//}
//int main()
//{
//	 register int a = 10;//局部变量-自动变量 建议把a定义成寄存器变量指register
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用 出了源文件就无法使用
//static 修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的连接属性
//外部链接属性-> 内部链接属性


//
//int main()
// {
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("%d\n",g_val);
//	return 0;
//}
//extern int Add(int, int);
//
//int main()
//{
//	int sum1 = 10;
//	int sum2 = 20;
//	int sum = Add(sum1, sum2);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//	    return x;
//	else
//		return y;
//}
//#define Max(X,Y) (X>Y?X:Y) //定义宏 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;//有一种变量是用来存放地址的-指针变量
//	//*p 解引用操作符
//	*p = 20;
//	printf("%d\n", a);
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//}  
//struct book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name, "C++");//strcpy - string copy 字符串拷贝 - 库函数 - string.h
////	struct book* pd = &b1;
////	printf("书名:%s\n", (*pd).name);
////	printf("书名:%d\n", (*pd).price);
////	printf("书名:%s\n", pd->name);
//	printf("书名:%s\n", b1.name);
////	printf("价格:%d\n", b1.price);
////	b1.price = 15;
////	printf("修改后的价格:%d\n", b1.price);
//	return 0;
//}
// int main()
//{
//	int age = 100;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		 
//	}
//	else if (18 <= age && age < 28)//else 执行就近原则
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("与天同寿");
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num)// = 赋值 ==判断相等
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int num1 = 0;
//	scanf("%d", &num1);
//	if (0 == num1 % 2)
//	{
//		printf("%d是整数\n", num1);
//	}
//	else
//	{
//		printf("%d不是整数\n", num1);
//	}
//	return 0;
//}
//int main()
//{
//	int math = 1;
//	while (1 <= math && 100 >= math)
//	{
//		if (1 == math % 2)
//		{
//			printf("%d\n", math);
//		}
//	math++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
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
//	    printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();//getchar 获取字符并以int形式进行保存
//	//while((ch = getchar()) != EOF)//end of file EOF
//	//{
//	putchar(ch);//打印字符
//	//}
//	printf("%c\n", ch);
//	return 0;
//}
