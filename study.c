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
//#include <stdio.h>
//#include <string.h>
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
//	//while((ch = getchar()) != EOF)//end of file EOF �ļ�������־
//	//{
//	putchar(ch);//��ӡ�ַ�
//	//}
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;*/
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������;>");
//	scanf("%s", password);
//	printf("%s", password);
//	while ((getchar()) != '\n');
//	printf("��ȷ�ϣ�Y/N��;>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			printf("haha\n");
//		printf("hehe\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0; 
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int sum = 1;
//	int n;
//	int ret = 0;
//	scanf("%d", &n);
//	int i = n;
//	for(;i>0;i--)
//	{
//		for (n=i; n > 0; n--)
//		{
//			sum = n * sum;
//		}
//		ret = ret + sum;
//		sum = 1;
//	}
//	printf("n�Ľ׳���%d", ret);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ� %d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���\n");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0; 
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		system("cls");//ִ��ϵͳ����ĺ���-cls - �����Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==���������Ƚ��ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��½�ɹ�\n");
//				break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("�������,���Ժ�����\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (m % n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//��������n�־���
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++) 
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <time.h>
//void menu()
//{
//	printf("***************************\n");
//	printf("****  1.play   0.exit  ****\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int ret = rand();
//	int guess = 0;
//	/*srand((unsigned int)time(NULL));*///��ʱ����������������������ʼ��
//	ret = rand()%100+1;//����1-100֮�������
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("�Ƿ�ʼ��Ϸ:>");
//		scanf("%d", &input);
//			switch(input)
//			{
//			case 1:
//				game();
//			    break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
//			    break;
//			}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	printf("hello bit\n");
//	goto again;
//again:
//	printf("���\n");
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ����������:��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//
//int is_prime(int n)
//{
//	int i = 2;
//	for (; i <= sqrt(n); i++)
//	{
//		if(n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int C = 0;
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			C++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", C);
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 = 0))
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int blinary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int p = 0;
//	int right = sz - 1;
//    while (left <= right)
//	{
//		p = (left + right) / 2;
//		if (k == arr[p])
//		{
//			return p;
//		}
//		else if (k > arr[p])
//		{
//			left = p + 1;
//		}
//		else
//		{
//			right = p - 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = blinary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���;%d\n", ret);
//	}
//	return 0;
//}
// int main()
//{
//	printf("%d ", printf("%d", printf("%d", 43)));
//	return 0;
//} 
//#include "add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

#include <stdio.h> //stack overflowջ���
//int main()
//{
//    printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != 0)
//	{
//		count++;
//		str++;
//	}
//	return count;
// }
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}
int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//102334155
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	for (int i = 0; i < n-2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}

int main()
{
	int a = 1;
	int n = 0;
	int sum = 1;
	scanf("%d\n", &n);
	for (; a<= n ; a++)
	{
		sum = sum + (sum + 1);
	}
	printf("ret = %d\n", sum);
	return 0;
}