#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//将字符串倒序（非函数）
//int main()
//{
//	char arr[] = "abcdefghi" ;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 2;
//		while (left < right)
//		{
//			char temp =arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++;
//			right--;
//		}
//		printf("%s", arr);
//}

//将字符串倒序（递归一）超繁
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1)='\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//
//}
//
//
//int main()
//{       
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n ", arr);
//	return 0;
//}
//int my_strlen(char*arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//
//	}
//	return count;
//}
//
//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
// 	arr[right] = tmp;
//	if (left < right)
//		reverse(arr, left + 1, right - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = my_strlen(arr) - 1; 
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

//int abc(unsigned int n)
//{
//	if (n > 9)
//		return abc(n / 10) + n % 10;
// else
//	return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = abc(n);
//	printf("%d\n", sum);
//	return 0;
//}


//求k的n次方
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//strlen 和 sizeoof的区别
//int main()
//{
//	char a[] = "as d";
//	printf("%d      ",strlen(a));
//	printf("%d",sizeof(a));
//	return 0;
//}

int main()
{
	int a[] = {1,2,3,4,5,6,7};
	int b[] = {2,3,4,5,6,7,8};
	int c = sizeof(a) / sizeof(a[0]);
	int d = 0;
	for (d=0; d < c; d++)
	{
		int tmp = a[d];
		a[d] = b[d];
		b[d] = tmp;
	}

	int e = 0;
	for (e; e < c; e++)
	{
		printf("%d  ", a[e]);
	}
	printf("\n");
	int f = 0;
	for (e=0; e < c; e++)
	{
		printf("%d   ", b[e]);
	}

	return 0;
}