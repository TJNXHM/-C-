#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  



//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//long long pow_mod(long long base, long long exp, long long mod)
//{
//    long long result = 1;
//    base %= mod;
//    while (exp > 0)
//    {
//        if (exp & 1)
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        exp >>= 1;
//    }
//    return result;
//}
//
//void get_prime_factors(int n, int factors[], int* count)
//{
//    *count = 0;
//    int temp = n;
//    for (int i = 2; i * i <= temp; i++)
//    {
//        if (temp % i == 0)
//        {
//            factors[*count] = i;
//            (*count)++;
//            while (temp % i == 0)
//            {
//                temp /= i;
//            }
//        }
//    }
//    if (temp > 1)
//    {
//        factors[*count] = temp;
//        (*count)++;
//    }
//}
//
//int is_primitive_root(int p)
//{
//    if (p == 2) return 1;
//
//    int p_minus_1 = p - 1;
//    int factors[100];
//    int count;
//    get_prime_factors(p_minus_1, factors, &count);
//
//    for (int i = 0; i < count; i++)
//    {
//        int d = p_minus_1 / factors[i];
//        if (pow_mod(2, d, p) == 1)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int p;
//    while (scanf("%d", &p) == 1)
//    {
//        if (is_primitive_root(p))
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//    return 0;
//}


//
//// 包含标准输入输出库，用于printf、scanf等函数
//#include <stdio.h>
//// 包含标准库，提供内存分配等功能
//#include <stdlib.h>
//// 包含数学库，虽然本代码未直接使用数学函数，但可能为后续扩展预留
//#include <math.h>
//
///**
// * 计算 (base^exp) % mod 的值，使用快速幂算法提高效率
// * @param base 底数
// * @param exp 指数
// * @param mod 模数
// * @return 计算结果
// */
//long long pow_mod(long long base, long long exp, long long mod)
//{
//    long long result = 1;  // 初始化结果为1
//    base %= mod;           // 对底数取模，防止初始值过大
//
//    // 快速幂算法：通过二进制分解指数，减少乘法次数
//    while (exp > 0)
//    {
//        // 如果指数当前位为1，则将结果乘以当前底数并取模
//        if (exp & 1)
//        {
//            result = (result * base) % mod;
//        }
//        // 底数自乘并取模，相当于指数左移一位
//        base = (base * base) % mod;
//        // 指数右移一位（整除2）
//        exp >>= 1;
//    }
//    return result;  // 返回计算结果
//}
//
///**
// * 计算一个数的所有不同质因数
// * @param n 要分解的数
// * @param factors 存储质因数的数组
// * @param count 质因数的个数（通过指针返回）
// */
//void get_prime_factors(int n, int factors[], int* count)
//{
//    *count = 0;         // 初始化质因数计数为0
//    int temp = n;       // 使用临时变量存储n，避免修改原变量
//
//    // 从2开始检查可能的质因数
//    for (int i = 2; i * i <= temp; i++)
//    {
//        // 如果i是temp的因数
//        if (temp % i == 0)
//        {
//            factors[*count] = i;  // 将i存入质因数数组
//            (*count)++;           // 计数加1
//
//            // 去除所有相同的质因数
//            while (temp % i == 0)
//            {
//                temp /= i;
//            }
//        }
//    }
//
//    // 如果剩余的temp大于1，说明它本身也是一个质因数
//    if (temp > 1)
//    {
//        factors[*count] = temp;
//        (*count)++;
//    }
//}
//
///**
// * 判断2是否是素数p的原根
// * @param p 待判断的素数
// * @return 1表示是原根，0表示不是
// */
//int is_primitive_root(int p)
//{
//    // 特殊情况：2的原根是1，但这里直接返回1（根据原根定义）
//    if (p == 2) return 1;
//
//    int p_minus_1 = p - 1;  // 计算p-1，原根的阶必须为p-1
//    int factors[100];       // 存储p-1的质因数
//    int count;              // 质因数的个数
//
//    // 获取p-1的所有质因数
//    get_prime_factors(p_minus_1, factors, &count);
//
//    // 检查2对于p-1的所有质因数分解后的指数是否满足原根条件
//    for (int i = 0; i < count; i++)
//    {
//        int d = p_minus_1 / factors[i];  // 计算p-1除以每个质因数的结果
//
//        // 如果2^d ≡ 1 mod p，则2不是p的原根
//        if (pow_mod(2, d, p) == 1)
//        {
//            return 0;
//        }
//    }
//
//    // 所有条件都满足，2是p的原根
//    return 1;
//}
//
//int main() {
//    int p;  // 存储输入的素数
//
//    // 循环读取输入，直到输入结束
//    while (scanf("%d", &p) == 1)
//    {
//        // 判断2是否是p的原根，并输出结果
//        if (is_primitive_root(p))
//        {
//            printf("Yes\n");  // 是原根
//        }
//        else
//        {
//            printf("No\n");   // 不是原根
//        }
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, m, k, arr1[101] = { 0 }, arr2[101] = { 0 };
//        scanf("%d %d %d", &n, &m, &k);
//        int x, y, count1 = 0, count2 = 0;
//        for (int i = 1; i <= k; i++)
//        {
//            scanf("%d %d", &x, &y);
//            arr1[x] = 1;
//            arr2[y] = 1;
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            if (arr1[i] == 0) count1++;
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            if (arr2[i] == 0) count2++;
//        }
//        int sum = count1 * m + count2 * n - count1 * count2;
//        printf("%d\n", sum);
//    }
//    return 0;
//}

//
//
//// 包含标准输入输出库，用于printf、scanf等函数
//#include <stdio.h>
//
///**
// * 计算两个整数的最大公约数（GCD）
// * 使用欧几里得算法（辗转相除法）
// * @param x 第一个整数
// * @param y 第二个整数
// * @return x和y的最大公约数
// */
//int gcd(int x, int y) {
//    // 递归终止条件：当y为0时，返回x（此时x是最大公约数）
//    // 否则递归计算gcd(y, x%y)
//    return y > 0 ? gcd(y, x % y) : x;
//}
//
//int main()
//{
//    int T, a, b, n, k;  // T：测试用例数量；a,b：公式中的固定参数；n：迭代次数；k：用于存储最大公约数
//    scanf("%d", &T); // 读取测试用例数量
//    while (T--)   // 循环处理每个测试用例，T递减至0时结束
//    {
//        int ai, bi;                      // ai：当前迭代的分子；bi：当前迭代的分母
//        scanf("%d %d %d", &a, &b, &n);     // 读取a、b的值和迭代次数n
//        ai = a, bi = b;                 // 初始化第一轮迭代的分子分母为a和b
//        k = gcd(ai, bi);                 // 计算当前分子分母的最大公约数
//        ai /= k, bi /= k;                   // 对分数进行约分，保持最简形式
//        // 从第二轮开始迭代（共n-1次），因为第一轮已经初始化
//        for (int i = 1; i < n; i++)
//        {
//            int p = ai;                  // 临时保存当前分子，用于后续计算
//            ai = bi * a;                   // 更新分子：根据公式计算新的分子
//            bi = bi * b + p;               // 更新分母：根据公式计算新的分母
//            k = gcd(ai, bi);              // 计算新分子分母的最大公约数
//            ai /= k, bi /= k;            // 约分，保持分数为最简形式
//        }
//        // 输出最终结果，格式为"分子/分母"
//        printf("%d/%d\n", ai, bi);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int hanshu(int a, int b)
//{
//	while (a != 0)
//	{
//		int t = b % a;
//		b = a;
//		a = t;
//	}
//	return b;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b, n, a1, b1;
//		scanf("%d %d %d", &a, &b, &n);
//		int k=hanshu(a, b);
//		a1 = a / k;
//		b1 = b / k;
//		for (int i = 1; i < n; i++)
//		{
//			int p = a1;
//			a1 = a * b1;
//			b1 = b * b1 + p;
//			int j=hanshu(a1, b1);
//			a1 /= j;
//			b1 /= j;
//		}
//		printf("%d/%d\n", a1, b1);
//	}
//}
//
//
//#include <stdio.h>
//
//int main() {
//    int K;
//    scanf("%d", &K); 
//    while (K--) 
//    {
//        int x1, y1, x2, y2;
//        int x3, y3, x4, y4; 
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
//        scanf("%d %d %d %d", &x3, &y3, &x4, &y4); 
//        if (x1 > x2) 
//        {
//            int temp = x1;
//            x1 = x2;
//            x2 = temp;
//        }
//        if (y1 > y2) 
//        {
//            int temp = y1;
//            y1 = y2;
//            y2 = temp;
//        }
//        if (x3 > x4)
//        {
//            int temp = x3;
//            x3 = x4;
//            x4 = temp;
//        }
//        if (y3 > y4) 
//        {
//            int temp = y3;
//            y3 = y4;
//            y4 = temp;
//        }  
//        int left = x1;
//        int right = x2;
//        int bottom = y1;
//        int top = y2;
//
//        int left2 = x3;
//        int right2 = x4;
//        int bottom2 = y3;
//        int top2 = y4; 
//        if (left < right2 && right > left2 && bottom < top2 && top > bottom2) 
//        {
//            printf("Yes\n");
//        }
//        else 
//        {
//            printf("No\n");
//        }
//    }
//
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int x1, y1, x2, y2,x3,y3,x4,y4;
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
//		int max1, max2, min1, min2;
//		if (x1 < x3)
//		{
//			max1 = x3;
//		}
//		else max1 = x1;
//		if (y1 < y3)
//		{
//			max2 = y3;
//		}
//		else max2 = y1;
//		if (x2 < x4)
//		{
//			min1 = x2;
//		}
//		else min1 = x4;
//		if (y2 < y4)
//		{
//			min2 = y2;
//		}
//		else min2=y4;
//		if (max1 < min1 && max2 < min2)
//		{
//			printf("Yes\n");
//		}
//		else printf("No\n");
//	}
//	return 0;
////}




//#include<stdio.h>  // 引入标准输入输出库，用于输入输出操作
//int main()  // 主函数，程序的入口点
//{
//    int t;  // 声明变量t，用于存储测试用例的数量
//    scanf("%d", &t);  // 从标准输入读取一个整数，存入t中
//    while (t--)  // 循环执行t次，每次循环后t的值减1
//    {
//        int n, m;  // 声明变量n(图形大小)和m(辅助计算变量)
//        int i, j, k;  // 声明循环控制变量i、j、k
//        int h = 0;  // 声明并初始化变量h，用于控制空格输出数量
//        scanf("%d", &n);  // 从标准输入读取一个整数，存入n中，确定图形大小
//        m = n - 1;  // 计算m的值为n-1，用于后续边界线长度计算
//
//        // 打印图形顶部的横线
//        for (i = 0; i < m; i++)  // 循环m次
//        {
//            printf("-");  // 输出一个短横线
//        }
//        printf("\n");  // 输出换行符，结束当前行
//
//        // 打印顶部斜线行
//        printf("\\");  // 输出一个反斜杠(注意转义字符的使用)
//        for (i = 0; i < m - 2; i++)  // 循环m-2次
//        {
//            printf(" ");  // 输出空格
//        }
//        printf("/");  // 输出一个正斜杠
//        printf("\n");  // 输出换行符，结束当前行
//
//        h = 0;  // 重置h的值为0
//
//        // 打印上半部分的星号三角形
//        // 循环次数为n/2-2，控制上半部分的行数
//        for (i = n / 2 - 2; i > 0; i--)
//        {
//            k = 1 + 2 * (i - 1);  // 计算当前行星号的数量
//            // 打印行首的空格
//            for (j = 0; j <= h; j++)
//            {
//                printf(" ");
//            }
//            printf("\\");  // 输出反斜杠
//            // 打印星号
//            for (j = 0; j < k; j++)
//            {
//                printf("*");
//            }
//            printf("/");  // 输出正斜杠
//            printf("\n");  // 换行
//            h++;  // 增加空格计数，下一行将多输出一个空格
//        }
//
//        h = 0;  // 重置h的值为0
//
//        // 打印下半部分的图形
//        // 循环次数为n/2-1，控制下半部分的行数
//        for (i = 0; i < n / 2 - 1; i++)
//        {
//            k = i;  // 计算当前行中间空格的数量
//            // 打印行首的空格
//            for (j = h; j < n / 2 - 2; j++)
//            {
//                printf(" ");
//            }
//            printf("/");  // 输出正斜杠
//
//            // 如果k>0，打印中间的空格
//            if (k > 0)
//            {
//                for (j = 0; j < k; j++)
//                {
//                    printf(" ");
//                }
//            }
//
//            printf("*");  // 输出中间的星号
//
//            // 如果k>0，打印中间的空格
//            if (k > 0)
//            {
//                for (j = 0; j < k; j++)
//                {
//                    printf(" ");
//                }
//            }
//
//            printf("\\");  // 输出反斜杠
//            printf("\n");  // 换行
//            h++;  // 增加空格计数
//        }
//
//        // 打印图形底部的横线
//        for (i = 0; i < m; i++)
//        {
//            printf("-");
//        }
//        printf("\n");  // 换行
//        printf("\n");  // 再换行，用于分隔不同测试用例的图形
//    }
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int k, i, j;
//    while (scanf("%d", &k) ==1)
//    {
//        if (k == 0)
//            break;
//        else
//        {
//            for (j = 1; j <= k - 1; j++)
//                printf(" ");
//            printf("1\n");
////            if (k > 1)
////            {
//////                for (i = 2; i <= k; i++)
//////                {
//////                    for (j = 1; j <= k - i; j++)
//////                        printf(" ");
//////                    for (j = 1; j <= i - 1; j++)
//////                        printf("%d", j);
//////                    printf("+");
//////                    for (j = i - 1; j >= 1; j--)
//////                        printf("%d", j);
//////                    printf("\n");
//////                }
//////            }
//////        }
////////    }
////////    return 0;
////////}
////

//
//#include <stdio.h>  
//int main()   
//{
//    char x;  
//    while (scanf("%c", &x) != EOF)
//    { 
//        const int t = x - 'A' + 1; 
//        int b1 = 2 * t - 1;   
//        int b2 = 2 * t - 1;   
//        for (int i = 1; i <= t; i++)
//        { 
//            for (int b = 1; b <= b1; b++)   printf(" ");
//            b1--;  
//            int p = 2 * i - 1;  
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i)   
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            }
//            puts("");   
//        }
//         
//        for (int i = 1; i <= t; i++)
//        { 
//            for (int b = 1; b <= b1; b++)   printf(" ");
//            b1--;   
//            int p = 2 * i - 1;   
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i) 
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            } 
//            for (int l = b2; l >= 1; l--)  printf(" ");
//            b2 -= 2;  
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i)  
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            }
//
//            puts("");  
//        }
//    }
//    return 0; 
//}

//
//
//#include<stdio.h>
//int main()
//{
//    char an;
//    while (scanf("%c", &an) != EOF) 
//    {
//        int d = an - 'A' + 1;
//        int e = 2 * d - 1;
//        int i, j, k;
//        char ch[150][150];
//        for (i = 0; i < d; i++) 
//        {
//            for (j = 0; j < d; j++) 
//            {
//                ch[i][j] = ' ';
//            }
//        }
//        for (i = 3 * d - 1; i < 4 * d - 1; i++) 
//        {
//            for (j = 0; j < d; j++) 
//            {
//                ch[i][j] = ' ';
//            }
//        }
//        for (i = 0; i < d; i++) 
//        {
//            for (j = d + i; j < 3 * d - 1 - i; j++) 
//            {
//                ch[i][j] = an - i;
//                ch[4 * d - 2 - i][j] = an - i;
//            }
//            for (k = i; k < 4 * d - 1 - i; k++) 
//            {
//                ch[k][d + i] = an - i;
//                ch[k][3 * d - 2 - i] = an - i;
//            }
//            for (j = d + i; j < 3 * d - 1 - i; j++) 
//            {
//                ch[j][i] = an - i;
//                ch[j][4 * d - 2 - i] = an - i;
//            }
//            for (k = i; k < 4 * d - 1 - i; k++) 
//            {
//                ch[d + i][k] = an - i;
//                ch[3 * d - 2 - i][k] = an - i;
//            }
//        }
//        for (i = 0; i < d; i++) 
//        {
//            for (j = 0; j < 3 * d - 1; j++) 
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");
//        }
//        for (i = d; i < 3 * d - 1; i++) 
//        {
//            for (j = 0; j < 4 * d - 1; j++) 
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");
//        }
//        for (i = 3 * d - 1; i < 4 * d - 1; i++) 
//        {
//            for (j = 0; j < 3 * d - 1; j++) 
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//
//} 
////
// 
//#include<stdio.h>  // 包含标准输入输出库，用于输入输出函数
//int main()  // 主函数，程序入口点
//{
//    char an;  // 声明字符变量an，用于存储输入的大写字母
//    // 循环读取输入字符，直到文件结束(EOF)
//    while (scanf("%c", &an) != EOF)
//    {
//        // 将输入字符转换为对应的数值d，如'A'→1, 'B'→2, ..., 'Z'→26
//        int d = an - 'A' + 1;
//        // 计算辅助变量e，值为2*d-1（用于后续计算）
//        int e = 2 * d - 1;
//        // 声明循环控制变量i, j, k
//        int i, j, k;
//        // 声明二维字符数组ch，用于存储要打印的图案
//        char ch[150][150];
//
//        // 初始化图案上部分区域为空格
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // 初始化图案下部分区域为空格
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // 核心逻辑：填充图案的字符内容
//        for (i = 0; i < d; i++)
//        {
//            // 填充上下方向的水平线条
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[i][j] = an - i;  // 上部分水平线条
//                ch[4 * d - 2 - i][j] = an - i;  // 下部分水平线条
//            }
//
//            // 填充左右方向的垂直线条
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[k][d + i] = an - i;  // 左部分垂直线条
//                ch[k][3 * d - 2 - i] = an - i;  // 右部分垂直线条
//            }
//
//            // 填充左右方向的水平线条
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[j][i] = an - i;  // 左部分水平线条
//                ch[j][4 * d - 2 - i] = an - i;  // 右部分水平线条
//            }
//
//            // 填充上下方向的垂直线条
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[d + i][k] = an - i;  // 上部分垂直线条
//                ch[3 * d - 2 - i][k] = an - i;  // 下部分垂直线条
//            }
//        }
//
//        // 打印图案的上部分
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 换行
//        }
//
//        // 打印图案的中间部分
//        for (i = d; i < 3 * d - 1; i++)
//        {
//            for (j = 0; j < 4 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 换行
//        }
//
//        // 打印图案的下部分
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 换行
//        }
//
//    }
//    return 0;  // 程序正常结束
//}



#include<stdio.h>
int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        int n, k1;
        scanf("%d %d", &n, &k1);
        int arr1[11][11];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        int k2, m;
        scanf("%d %d", &k2, &m); 
        int arr2[11][11];
        for (int i = 1; i <= k2; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        int arr3[11][11] ;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int sum = 0;
                for (int k = 1; k <= k1; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }
        for (int i = 1; i <= n; i++)
        { 
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        } 
    }
    return 0;
}