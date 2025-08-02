#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//int getmax(int x ,int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = getmax(a, b);
//	printf("%d\n", m);
//	return 0;
//}
//void  jiaohuan(int*px, int*py)
//{
//	int zhi = 0;
//	zhi = *px;
//	*px = *py;
//	*py = zhi;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d b=%d", a, b);
//	jiaohuan(&a,&b);
//	printf("交换后a=%d b=%d", a, b);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if(i%j==0 )
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d   ", i);
//		}
//	}
//	return 0;
//}
//#include<math.h>
//int add(int n)
//{
//	int j = 0;
//	for (j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (add(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2000; i++)
//	{
//		if (((i % 100 != 0) && (i % 4 == 0)) || (i % 400 == 0))
//			printf("%d   ", i);
//	}
//	return 0;
//}
//
//找数字
//int game(int arr[], int k, int i)
//{
//	int left = 0;
//	int right = i - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = sizeof(arr) / sizeof(arr[0]);
//	int k = 54;
//	int ret =game(arr,k,i );
//	if (ret==k)
//		printf("找到了  %d\n",ret);
//	else if(ret ==-1)
//		printf("没找到\n");
//	return 0;
//}
//void game(unsigned int n)
//{
//	if (n > 9)
//	{
//		game(n / 10);
//	}
//	printf("%d\n", n % 10);
//
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u",&a);
//	game(a);
//	return 0;
//
//}
//斐波拉契数列 递归
//int fblq(a)
//{
//	if (a <=2)
//	return 1;
//	else
//		return (fblq(a - 1) + fblq(a - 2));
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	fblq(a);
//	printf("%d", fblq(a));
//	return 0;
//}
//斐波拉契数列 迭代
int main()
{
	int a = 1;
	int b = 1;
	int c = 0;
	int d = 0;
	int f = 0;
	scanf("%d", &d);
	while (f < d-2)
	{
		f++;
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d", c);
	
}