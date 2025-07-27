#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

//int main()
//{
//    int mum1 = 0;
//    int mum2 = 0;
//    scanf("%d %d", &mum1, &mum2); // Fixed: Removed 'int' before scanf  
//    int sum = mum1 + mum2;
//    printf("%d \n", sum);
//    return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2); // Fixed: Removed 'int' before scanf  
//	int sum = num1 + num2;
//	printf("%d \n", sum);
//	return 0;
//}
//int main()
//{
//	char ch[] = "uiiojoi";
//	char ch2[] = { 's','d','d', '\0' };
//    #define _CRT_SECURE_NO_WARNINGS
//    #include <stdio.h>  

//int main()
//{
//	printf("\a\a\a\a\a\a\a\a\a\a");
//	printf("\a\a\a\a\a\a\a\a\a\a");
//	printf("\a\a\a\a\a\a\a\a\a\a");
//	printf("\a\a\a\a\a\a\a\a\a\a
//}
//EOF

 

 //
 //int max(int x, int y) 
 //{  
 //    if (x > y)  
 //        return x;  
 //    else  
 //        return y;  
 //}  

 //int main()  
 //{  
 //    int a = 0;  
 //    int b = 0;  
 //    scanf("%d%d", &a, &b);
 //    int r = max(a, b);  
 //    printf("%d\n", r);  
 //    return 0;  
 //}


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//		if (x > 0)
//			y = 1;
//		else if (x = 0)
//			y = 0;
//		else
//			y = -1;
//			printf("%d\n", y);
//
//			return 0;
//}

//int main()
//{
//	int s = 7.0/ 9;
//	printf("%f.4\n", s);
//	return 0;
//}
//int main()
//{
//		int a[99] = {467};
//	printf("%d\n", sizeof(a)/sizeof(a[0]));
//	return 0;
//}
//int main()
//{
//	int a[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	a[8] = ('s');
//	int s = 0;
//	printf("%d\n",s);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sb = a / b;
//	int sa = a % b;
//	printf("%d    %d\n", sb,sa);
//}
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int s = getchar();
//	printf("%c\n", s);
//	return 0;
//
//}
//int main()
//{
//	char passward[] = { 0 };
//	printf("ÇëÊäÈëÃÜÂë");
//	scanf("%s", passward);
//	getchar();
//	printf("ÇëÈ·ÈÏÃÜÂë(Y/N)")£»
//		int ret = getchar();
//	if("==ret")
//}
//int main()
//{
//	
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}
int main()
{
char password[] = { 0 };
printf("ÇëÊäÈëÃÜÂë");
scanf("%s", password);
printf("ÇëÈ·ÈÏÃÜÂë");
int ret = getchar();
if ('Y'==ret)
printf("yes\n");
else 
printf("no\n");
return 0;
}