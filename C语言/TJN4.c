#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//void swap(int *x, int* y)
//{
//	int xh = 0;
//    xh=*x;
//	*x = *y;
//	*y=xh;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d  %d  %d", &a, &b, &c);
//	if (a < b)
//		swap(&a, &b);
//	if (a < c)
//		swap(&a,& c);
//	if (b<c)
//		swap(&b, &c);
//
//	printf("%d   %d   %d",a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = ((a < b) ?  a : b);
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("%d", min);
//			break;
//		}
//		else min--;
//	}
//求数组中最大数
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,-10 };
//	int i = 0;
//	int b = a[0];
//	for (i; i < 11; i++)
//	{
//		if (b < a[i])
//			b = a[i];
//	}
//	printf("%d", b);
//	return 0;
//}
//乘法口诀表
//int main()
//{
//	int a = 1;
//	
//	for (a; a < 10; a++)
//	{
//		int b = 1;
//		for (b; b <= a; b++)
//			printf("%d*%d=%-2d  ", a, b, a * b);
//			printf("\n");
//	}
//	return 0;
//}
// 冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof (arr) / sizeof (arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d  ", arr[i]);
//	return 0;
//}