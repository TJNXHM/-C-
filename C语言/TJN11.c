#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  



//#include <stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    ");
//}


//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%c%c%c", a, a, a);
//    printf("%c%c%c", a, a, a);
//    printf("%c%c%c", a, a, a);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    int i, j;
//    int n = 3;  //设包括对角线在内的上半部分有n行
//    for (i = 1; i <= n; i++)  //打印第1行到对角线(第n行)
//    {
//        for (j = 0; j < n - i; j++)
//            printf(" "); //先打印每行的空格，第i行有n-i个空格
//        for (j = 0; j < 2 * i - 1; j++)
//            printf("%c", ch);   //再打印每行的字符，第i行有2*i-1个
//        printf("\n");    //打印完每行空格和字符，要换行
//    }
//    for (i = 1; i < n; i++)  //对角线以下部分只有n-1行，从1到n-1
//    {
//        for (j = 0; j < i; j++)
//            printf(" ");  //每行前面的空格依次增加1个，第i行有i个空格
//        for (j = 0; j < 2 * (n - i) - 1; j++)
//            printf("%c", ch);  //每行的字符依次减少2个，第i行有2*(n-i)-1个
//        printf("\n");
//    }
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    int i, j, k, b = 3;
//    for (i = 0; i < b; i++)
//    {
//        for (j = 0; j < b-i-1; j++)printf(" ");
//        for (k = 0; k < 2 * (i + 1) - 1; k++)printf("%c", a);
//        printf("\n");
//    }
//    for (i = 1; i < b; i++)
//    {
//        for (k = 0; k < i; k++) printf(" ");
//        for (j = 0; j < 2*(b - i)-1; j++)printf("%c", a);
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h> 
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    int b;
//    if (a >= 0) b = a + 0.5;
//    else b = a - 0.5;
//    printf("%d", &b);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    long long a = 0;
//    double b, c, d;
//    scanf("%lld;%lf,%lf,%lf", &a, &b, &c, &d);
//    printf("The each subject score of No. %lld is %.2lf, %.2lf, %.2lf.", a, b, c, d);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    long long a, b;
//    scanf("a=%lld,b=%lld", &a, &b);
//    long long c = a;
//    a = b;
//    b = c;
//    printf("a=%lld,b=%lld", a, b);
//    return 0;
//}


//#include <stdio.h>
//#include<ctype.h>
//int main()
//{
//    while (1)
//    {
//        char a = 0;
//        scanf("%c", &a);
//        getchar();
//        char b = tolower(a);
//        printf("%c", b);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    printf("|%10s|%15s|\n", "姓名", "成绩");
//    printf("|%10s|%15d|\n", "张三", 95);
//    printf("|%10s|%15d|\n", "李四", 88);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    int num = 123;
//    printf("|%15d|\n", num);
//    printf("|%-15d|\n", num);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int num1 = 123;
//    int num2 = 123456789;
//    printf("|%15d|\n", num1);
//    printf("|%15d|\n", num2);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float a=0, c=0, d=0, e=0;
//    float b = 0;
//    for (int m = 0; m < n; m++)
//    {
//        scanf("%f", &a);
//        if (b < a)b = a;
//        if (a < c)c = a;
//        d += a; 
//    }
//    e = d / n;
//    printf("%f %f %f", b, c, e);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    float a, b, c;
//    scanf("%f %f", &a, &b);
//    c = (a * b) / (a + b);
//    printf("%f", c);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//    char expression[51];
//    // 读取输入的表达式
//    scanf("%s", expression);
//
//    double num1, num2;
//    char op;
//    // 从字符串中解析出操作数1、运算符、操作数2
//    if (sscanf(expression, "%lf%c%lf", &num1, &op, &num2) != 3) {
//        printf("Invalid operation!\n");
//        return 0;
//    }
//
//    // 判断运算符是否合法
//    if (op != '+' && op != '-' && op != '*' && op != '/') {
//        printf("Invalid operation!\n");
//        return 0;
//    }
//
//    double result;
//    // 根据不同运算符进行计算
//    if (op == '+') {
//        result = num1 + num2;
//    }
//    else if (op == '-') {
//        result = num1 - num2;
//    }
//    else if (op == '*') {
//        result = num1 * num2;
//    }
//    else if (op == '/') {
//        // 处理除法时除数为 0 的情况
//        if (num2 == 0.0) {
//            printf("Wrong!Division by zero!\n");
//            return 0;
//        }
//        result = num1 / num2;
//    }
//
//    // 按照要求格式输出结果，各数小数点后保留 4 位
//    printf("%.4lf%c%.4lf=%.4lf\n", num1, op, num2, result);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    for (int a = 1; a <= 9; a++)
//    {
//        for (int b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%2d ", a, b, a * b);
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <stdio.h>
//
//int main()
//{
//    int z, c;
//    double b = 0;
//    scanf("%d", &z);
//    for (int n = 1; n <= z; n++)
//    {
//        if (n % 2 == 0)
//        {
//            c = -n;
//        }
//        else
//        {
//            c = -(n - 1) + 2 * n - 1;
//        }
//        b=b+(1.0 / c);
//    }
//    printf("%.3lf", b);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    long long count = 0;
//    for (int a = 1; a <= n; a++)
//    {
//        for (int b = 1; b <= a; b++)
//        {
//            count += b;
//        }
//    }
//    printf("%lld", count);
//    return 0;
//}
//
//#include <stdio.h> 
//int main()
//{
//    int count = 0;
//    long long n;
//    scanf("%lld", &n);
//    n = llabs(n);
//    int sum = 0;
//    if (n == 0)printf("%d", sum);
//    else
//    {
//        for (n; n > 0; n /= 10)
//        {
//            count += (n % 10);
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


//#include <stdio.h>
//int  hanshu(int a)
//{
//    for (a; a != 0; a / 10)
//    {
//        if (a % 10 == 9)return 1;
//        else break;
//    }
//    return 0;
//}
//int main()
//{
//    int n = 2019, b = 1, count = 0;
//    for (b; b <= n; b++)
//    {
//        if (hanshu(b))count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//#include <stdio.h>
//int hanshu(int a)
//{
//    int b, c=0;
//    int d = a;
//    for (a; a != 0; a /= 10)
//    {
//        b = a % 10;
//        c += b * b * b;
//    }
//    if (d == c) return 1;
//    else return 0;
//}
//int main()
//{
//    int m, n, a;
//    while ((scanf("%d %d", &m, &n)) ==2 )
//    {
//        int count = 0;
//        for (a = m; a <= n; a++)
//        {
//            if (hanshu(a))
//            {
//                printf("%d ", a);
//                count++;
//            }
//        }
//        if (count == 0)printf("no");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int K;
//    long long count = 0, n;
//    scanf("%d", &K);
//    for (n = 1; (1 + n) * n / 2 <=K; n++)
//    {
//        count += (n * n);
//    }
//    count += ((K - ((n-1) * n / 2)) * n);
//    printf("%lld", count);
//    return 0;
//}
 

//#include <stdio.h>
//long long hanshu(long long a)
//{
//    while (a != 0)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//    }
//}
//int main()
//{
//    long long n;
//    scanf("%lld", &n);
//    for (int a = 1; a <= n; a++)
//    {
//        hanshu(a);
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) != 0)
//    {
//        for (n; n > 0; n--)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) == 1)
//        for (a; a > 0; a--)
//        {
//            for (int n = a; n > 0; n--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{ 
//    int a;
//    while (scanf("%d", &a) ==1)
//    {
//        int i = 1;
//        for (i; i <= a; i++)
//        {
//            int d = i;
//            for (int b = (a - i); b > 0; b--)
//            {
//                printf(" ");
//            }
//            for (d; d > 0; d--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while (scanf("%d", &a) == 1)
//    {
//        int c = a+1;
//        int i = 1;
//        for (i; i <= c; i++)
//        {
//            int d = i;
//            for (int b = (c - i); b > 0; b--)
//            {
//                printf(" ");
//            }
//            for (d; d > 0; d--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        int f = 1;
//        for (f; f <= c - 1; f++)
//        {
//            int d = f;
//            for (d; d > 0; d--)
//            {
//                printf(" ");
//            }
//            for (int b = (c  - f); b > 0; b--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d",&a)==1))
//    {
//        for (int i = a; i >= 0; i--)
//        {
//            for (int b = 0; b <= i; b++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int b = a; b > 0; b--)
//        {
//            for (int c = a - b + 1; c >= 0; c--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        int b = n + 1;
//        for (b; b >= 0; b--)
//        {
//            for (int a = 0; a < 2 * b; a++)
//            {
//                printf(" ");
//            }
//            for (int c = 0; c <= n - b; c++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int d = n; d >= 1; d--)
//        {
//            for (int e = 0; e < (n + 1 - d) * 2; e++)
//            {
//                printf(" ");
//            }
//            for (int f = 0; f < d; f++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int num;
//    int i, j, k;
//    while (scanf("%d", &num) != EOF)
//        //将火箭图案从中间分开 上部分一个大循环 下部分一个循环
//    {
//        for (i = 0; i <= num; i++)//上部分循环从此开始  此处确定了上部分循环的行数
//        {
//            for (j = 0; j < num - i; j++)//此处为先开始打印空格
//            {
//                printf("  ");
//            }
//            for (k = 0; k <= i; k++)//此处打印图案*
//            {
//                printf("*");
//            }
//            printf("\n");//至此一次大循环完成 打印了一行的图形 在此换行
//        }
//        for (i = 0; i < num; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (k = 0; k < num - i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) == 1)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == j || i == a - j - 1)printf("*");
//                else printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            if (a == 1 || a == n)
//            {
//                for (int b = 0; b < n; b++)
//                {
//                    printf("* ");
//                }
//            }
//            else
//            {
//                for (int c = 1; c <= n; c++)
//                {
//                    if (c == 1 || c == n)printf("* ");
//                    else printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            if (a == n)
//            {
//                for (int b = 0; b < n; b++)
//                {
//                    printf("* ");
//                }
//            }
//            else
//            {
//                for (int c = 1; c <= n; c++)
//                {
//                    if (c == 1 || c == a)
//                    {
//                        printf("* ");
//                    }
//                    else printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
 

//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            for (int b = 1; b <= a; b++)
//            {
//                printf("%d ", b);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int c = 1; 
//    int n = 0; 
//    scanf("%d", &n);
//    int d = 3 * n; 
//    for (int i = 1; i <= n; i++)
//    {
//        for (int a = d - 1; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) 
//        {
//            printf("*     "); 
//        }
//        printf("\n");
//        for (int a = d - 2; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//        for (int a = d - 3; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//        d = d - 3;
//    }
//    while (c <= n)
//    {
//        for (int i = 1; i <= (6 * n - 1) / 2; i++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//        c++;
//    }
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int m = n;
//    for (int a = 0; a < n; a++)
//    {
//        for (int d = 0; d < 2 + 3 * (n-a - 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("*     ");
//        }
//        printf("\n");
//        for (int d = 1; d < 2 + 3 * (n-a - 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//        for (int d = 2; d < 2 + 3 * (n -a- 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//    }
//    for (int c = 0; c < n; c++)
//    {
//        for (int f = 0; f < 2 + 3 * (n - 1); f++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//
//    }
//    return 0;
//}


////将现有的三角形进行整体复制
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char arr[800][800] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int y = 3 * pow(2, n - 1) - 1;//y表示顶点在第一行的下标值
//    arr[0][y] = '*';
//    arr[1][y - 1] = '*';
//    arr[1][y + 1] = '*';
//    arr[2][y - 2] = '*';
//    arr[2][y + 2] = '*';
//    arr[2][y] = '*';
//    //第一次循环，将[最上面的最小的三角形]赋值到对应其[左下的三角形]位置和[右下的三角形]位置
//    //如果有第二次循环，则将由[三个小三角形构成的三角形]赋值到左下和右下。
//    for (int i = 1; i < n; i++)//n表示复制n-1次
//    {
//        int rang = (3 * pow(2, i - 1) - 1);
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
//            }
//        }
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
//            }
//        }
//    }
//    //打印树叶
//    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
//    {
//        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
//        {
//            if (arr[i][j] == '*')
//                printf("%c", arr[i][j]);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    //打印树干
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < y; j++)
//            printf(" ");
//        printf("*\n");
//    }
//    return 0;
//}


// 程序功能：根据输入的n值，生成由多个三角形复制组合而成的分形图案（类似谢尔宾斯基三角形）
#include<stdio.h>
#include<math.h>  // 用于pow函数计算幂次方
int main()
{
    char arr[800][800] = { 0 };  // 定义800x800的字符数组，用于存储图案，初始化为0（空字符）
    int n = 0;                   // 存储用户输入的复制次数参数
    scanf("%d", &n);             // 从键盘读取n值，决定分形的复杂度

    // 计算最顶端三角形顶点在第一行的列坐标
    // 公式推导：每次复制后宽度翻倍减1，n=1时顶点在第2列(0开始)，n=2时在第5列，以此类推
    int y = 3 * pow(2, n - 1) - 1;

    // 初始化最基础的小三角形（n=1时的图案）
    arr[0][y] = '*';                  // 第0行y列放置顶点
    arr[1][y - 1] = '*';              // 第1行y-1列放置左点
    arr[1][y + 1] = '*';              // 第1行y+1列放置右点
    arr[2][y - 2] = '*';              // 第2行y-2列放置左下点
    arr[2][y + 2] = '*';              // 第2行y+2列放置右下点
    arr[2][y] = '*';                  // 第2行y列放置中点

    // 循环复制三角形，共复制n-1次（n=1时不进入循环）
    // 每次循环将当前已有的三角形复制到左下和右下位置，形成更大的分形结构
    for (int i = 1; i < n; i++)
    {
        // 计算当前三角形的范围（高度和宽度）
        // rang值为当前三角形的最大行索引（从0开始），也等于底边半宽
        int rang = (3 * pow(2, i - 1) - 1);

        // 复制当前三角形到左下位置
        // x1遍历当前三角形的行（0到rang）
        for (int x1 = 0; x1 <= rang; x1++)
        {
            // y1遍历当前三角形的列（从y-rang到y+rang）
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                // 将当前位置的字符复制到左下位置
                // 新行坐标：原行 + rang + 1（下移rang+1行）
                // 新列坐标：原列 - rang - 1（左移rang+1列）
                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
            }
        }

        // 复制当前三角形到右下位置
        for (int x1 = 0; x1 <= rang; x1++)
        {
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                // 将当前位置的字符复制到右下位置
                // 新行坐标：原行 + rang + 1（下移rang+1行）
                // 新列坐标：原列 + rang + 1（右移rang+1列）
                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
            }
        }
    }

    // 打印三角形图案（树叶部分）
    // 外层循环控制行数：从0到最大行索引（3*2^(n-1)-1）
    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
    {
        // 内层循环控制列数：从0到最大列索引（3*2^n - 2）
        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
        {
            if (arr[i][j] == '*')  // 如果数组中是'*'，则打印星号
                printf("%c", arr[i][j]);
            else                   // 否则打印空格
                printf(" ");
        }
        printf("\n");  // 一行打印完后换行
    }

    // 打印树干部分
    // 共打印n行树干
    for (int i = 0; i < n; i++)
    {
        // 打印树干前的空格（使树干居中）
        for (int j = 0; j < y; j++)
            printf(" ");
        printf("*\n");  // 打印树干的一个星号并换行
    }

    return 0;  // 程序正常结束
}
