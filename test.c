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
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d\n", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	
//	while (line<20000)
//	{
//		printf("��һ�д���,%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//		printf("��offer\n");
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
	//int a = 0;//ԭ������������ �����д���Ķ��ǲ���
	//int b = ~a;//����0�������ֽ�32���� ��ô����ԭ����
	//printf("%d\n", b);//000000000000000000000000000000000000  
	//return 0;// ~ �Ƕ�����ȡ�� ��õ�11111111111111111111111111111111��ԭ��
//}��������ԭ�뷴�����һλ��������ȡ���õ� ��10000000000000000000000000000000
//�������ɷ����1�õ�10000000000000000000000000000001
 //������ԭ����ڲ��� ������ͬ

 //int main()
//{
	//int a = 10;
	//int b = a++;//����++����ʹ�ã���++ 10 11
	//int b = ++a;//ǰ��++����++����ʹ�� 11 11
	//int b = a--;//����--,��ʹ�ã���-- 9 10
	//int b = --a;//����--,��--����ʹ�� 9 9
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
//	int a = 0;//��0Ϊ�� 0Ϊ�� &&�߼��� ȫ������ ||�߼��� ��������
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
//	max = (a > b ? a : b);//expָ���Ǳ��ʽ������exp1��a > b�� ������a > bΪ����ִ��exp2��a������ִ��exp3��b��
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
//	arr[4];//[]���±����ò�����
//	int a = 10;
//	int b = 10;
//	int sum = Add(a, b);//�����Ǻ������ò�����
//	return 0;
//}
//int main()
//{
//	 register int a = 10;//�ֲ�����-�Զ����� �����a����ɼĴ�������ָregister
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a = %d\n", a);
//}
//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� ����Դ�ļ����޷�ʹ��
//static ���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ��������-> �ڲ���������


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
//#define Max(X,Y) (X>Y?X:Y) //����� 
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
//	int* p = &a;//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//*p �����ò�����
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
//	struct book b1 = { "C���Գ������",55 };
//	strcpy(b1.name, "C++");//strcpy - string copy �ַ������� - �⺯�� - string.h
////	struct book* pd = &b1;
////	printf("����:%s\n", (*pd).name);
////	printf("����:%d\n", (*pd).price);
////	printf("����:%s\n", pd->name);
//	printf("����:%s\n", b1.name);
////	printf("�۸�:%d\n", b1.price);
////	b1.price = 15;
////	printf("�޸ĺ�ļ۸�:%d\n", b1.price);
//	return 0;
//}
// int main()
//{
//	int age = 100;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		 
//	}
//	else if (18 <= age && age < 28)//else ִ�оͽ�ԭ��
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("����ͬ��");
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num)// = ��ֵ ==�ж����
//	{
//		printf("�Ǻ�\n");
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
//		printf("%d������\n", num1);
//	}
//	else
//	{
//		printf("%d��������\n", num1);
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//	    printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = getchar();//getchar ��ȡ�ַ�����int��ʽ���б���
//	//while((ch = getchar()) != EOF)//end of file EOF
//	//{
//	putchar(ch);//��ӡ�ַ�
//	//}
//	printf("%c\n", ch);
//	return 0;
//}
