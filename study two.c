#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	} 
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,}, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("*arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int count = 0;
int jump(int n)
{
	if (n == 0)
	{
		count++;
		return count;
	}
	else if (n == 1)
	{
		count++;
		return count;
	}
	else
	{
		jump(n - 1);
		jump(n - 2);
	}
}
int main()
{
	int n = 10;
	scanf("%d", &n);
	jump(n);
	printf("%d\n", count);
	return 0;
}