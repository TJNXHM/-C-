#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sz[] = { 73,72,99 };
//	int arr = sizeof(sz) / sizeof(sz[0]);
//	while (i < arr)
//	{
//		printf("%c\n", sz[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int xh = 0;
//	float y = 0.0f;
//	float s = 0.0f;
//	float w = 0.0f;
//	scanf(" %d;%f,%f,%f",&xh,&y,&s,&w);
//	printf("fghjkls %d %.2f  %.2f  %.2f\n",xh,y,s,w);
//	return 0;
//}
//int main()
//{
//	int s[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &s[i]);
//		i++;
//	}
//	int f = 1;
//	int max = s[0];
//	while (f < 4)
//	{
//		if (s[f] > max)
//			max = s[f];
//		f++;
//	}
//	printf("%d", max);
//	return 0;
//
//}
//int main()
//{
//	int r = 0;
//	int v = 0;
//	scanf("%d", &r);
//	v = 3.14 * r * r;
//}
//int main()
//{
//	int a = 0;
//	for (int a = 1; a <= 10; a++)
//		printf("%d  ", a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int n = 0;
//	int sum = 0; 
//	int ret = 1;
//	scanf("%d", &n);
//	for (n=1;n<=3;n++)
//	{
//		ret = 1;
//		for(a = 1; a <= n; a++)
//		{
//			ret = ret * a;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int arr[] = { 1,2,3,4,6,7,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 7;
	int k = 0;
	for (k = 0; k <= sz; k++)
	{
		if (arr[k]==i)
		{
			printf("%d", k);
			
		}
		
	}
	
}
//int main()
//{
//	
//		int arr[] = { 1,2,3,4,5,6,7,8,9 };
//		int left = 0;
//		int right = 8;
//		int mid = (left + right) / 2;
//	while (left <= right)
//{
//		if (mid < right)
//		{
//			right = mid;
//		}
//		if (mid > left)
//		{
//			left = mid;
//		}
//		else
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "qwertyuiop";
//	char arr2[] = "##########";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		right--;
//		left++;
//
//	}
//
//}
// 第一个小游戏
//#include<stdlib.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("********	1.play     ********\n");
//	printf("********	0.exit	   ********\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand()%100+1;
//	while (1)
//	{
//		printf("猜数字\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了");
//				break;
//		}
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("选择错误，请重新选择\n");
//				break;
//		}
//	} while (input);
//	return 0;
//
//}定时关机
//#include<string.h>
//int main()
//{
//	char sb[] = {0};
//	system("shutdown -s -t 600");
//	again:
//	printf("请在一分钟之内输入我是猪，否则电脑将关机"); 
//	scanf("%s", &sb);
//	if (strcmp(sb, "我是猪") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}
