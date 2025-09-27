#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[12] = { 0 };
//        scanf("%s", arr1);
//        int len = strlen(arr1), count = 0, flag = 0;
//        for (int i = 0; i < len; i++)
//        {
//            if (arr1[i] != 'A')
//            {
//                if (arr1[i] == 'J' || arr1[i] == 'Q' || arr1[i] == 'K')
//                {
//                    count += 10;
//                }
//                else if ('2' <= arr1[i] && arr1[i] < '10')
//                {
//                    count += arr1[i] - '0';
//                }
//                else if (arr1[i] == '1' && arr1[i + 1] == '0')
//                {
//                    count += 10;
//                }
//                if (count > 21)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//        for (int i = 0; i < len; i++)
//        {
//            if (arr1[i] == 'A')
//            {
//                if (count + 11 <= 21) count += 11;
//                else if (count + 11 > 21 && count + 10 <= 21) count += 10;
//                else if (count + 10 > 21 && count + 1 <= 21) count += 1;
//                else if (count + 1 > 21)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//        if (flag) printf("Boom\n");
//        else printf("%d\n", count);
//    }
//    return 0;
//}





 





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int sum = 0, cntA = 0;
//		char s[11];
//		scanf("%s", s);
//		int len = strlen(s);
//		for (int i = 0; i < len;)
//		{
//			if (s[i] >= '2' && s[i] <= '9')
//			{
//				sum += s[i] - '0';
//				i++;
//			}
//			else if (s[i] == '1' && s[i + 1] == '0')
//			{
//				sum += 10;
//				i += 2;
//			}
//			else if (s[i] == 'A')
//			{
//				cntA++;
//				i++;
//			}
//			else
//			{
//				sum += 10;
//				i++;
//			}
//		}
//		int cntone = 0, cntten = 0;
//		for (int i = 0; i < cntA; i++)
//		{
//			if (sum + 1 <= 21)
//			{
//				sum++;
//				cntone++;
//			}
//			else
//			{
//				sum++;
//			}
//		}
//		for (int i = 0; i < cntone; i++)
//		{
//			if (sum + 9 <= 21)
//			{
//				sum += 9;
//				cntten++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		for (int i = 0; i < cntten; i++)
//		{
//			if (sum + 1 <= 21)
//			{
//				sum++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (sum > 21) printf("Boom\n");
//		else printf("%d\n", sum);
//	}
//	return 0;
//}
//



//#include<stdio.h>   // 引入标准输入输出库
//#include<string.h>  // 引入字符串处理库
//
//int main()
//{
//    int T;                  // 定义变量T，用于存储测试用例的数量
//    scanf("%d", &T);        // 从输入读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        int sum = 0, cntA = 0;  // sum存储总点数，cntA统计A的数量
//        char s[11];             // 存储每张牌的字符串，最大长度10
//        scanf("%s", s);         // 读取当前测试用例的牌组
//        int len = strlen(s);    // 获取牌组字符串的长度
//
//        // 遍历牌组字符串，计算基础点数（不处理A）
//        for (int i = 0; i < len;)
//        {
//            // 如果是2-9的牌，直接加上对应的点数
//            if (s[i] >= '2' && s[i] <= '9')
//            {
//                sum += s[i] - '0';  // 字符转数字
//                i++;
//            }
//            // 如果是10，加上10点（注意占两个字符位置）
//            else if (s[i] == '1' && s[i + 1] == '0')
//            {
//                sum += 10;
//                i += 2;  // 跳过'10'两个字符
//            }
//            // 如果是A，先不加点数，只统计数量
//            else if (s[i] == 'A')
//            {
//                cntA++;
//                i++;
//            }
//            // 处理J、Q、K，都算10点
//            else
//            {
//                sum += 10;
//                i++;
//            }
//        }
//
//        // 处理A的点数计算（A可以是1、10或11点）
//        int cntone = 0, cntten = 0;  // 辅助计数变量
//
//        // 第一步：先将所有A按1点计算
//        for (int i = 0; i < cntA; i++)
//        {
//            if (sum + 1 <= 21)  // 如果加1后不超过21
//            {
//                sum++;
//                cntone++;       // 记录按1点计算的A的数量
//            }
//            else
//            {
//                sum++;  // 即使超过也先加上1点（后续会调整）
//            }
//        }
//
//        // 第二步：尝试将按1点计算的A转换为10点（总共11点）
//        for (int i = 0; i < cntone; i++)
//        {
//            // 加9相当于将1点变成10点（1+9=10）
//            if (sum + 9 <= 21)
//            {
//                sum += 9;
//                cntten++;  // 记录转换为10点的A的数量
//            }
//            else
//            {
//                break;  // 如果超过21则停止转换
//            }
//        }
//
//        // 第三步：尝试将部分A再增加1点（从10到11点）
//        for (int i = 0; i < cntten; i++)
//        {
//            if (sum + 1 <= 21)  // 如果加1后不超过21
//            {
//                sum++;  // 变成11点
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        // 根据最终点数输出结果
//        if (sum > 21)
//            printf("Boom\n");  // 超过21点输出Boom
//        else
//            printf("%d\n", sum);  // 否则输出总点数
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch;
//	int cnt = 0;
//	int first = 0;
//	int line = 1;
//	while (scanf("%c", &ch)==1) 
//	{
//		if (!first) printf("00000"); 
//		first++;
//		if (ch <= 15) printf(" 0%X", ch); 
//		else printf(" %X", ch);
//		cnt++;
//		if (cnt == 16) 
//		{ 
//			puts("");
//			cnt = 0; 
//			printf("%05X", line); 
//			line++;
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include<string.h>  // 引入字符串处理库，虽然本程序未直接使用，但包含是允许的
//
//int main()
//{
//    char ch;         // 定义字符变量ch，用于存储读取到的字符
//    int cnt = 0;     // 定义计数器cnt，用于统计已输出的字符个数，初始化为0
//    int first = 0;   // 定义标志变量first，用于标记是否是第一个输出的字符，初始化为0
//    int line = 1;    // 定义行号变量line，用于记录当前输出的行号，初始化为1
//
//    // 循环读取字符，直到读取失败（如遇到文件结束符EOF）
//    while (scanf("%c", &ch) == 1)
//    {
//        // 如果是第一次输出（first为0），则先打印"00000"作为第一行的地址前缀
//        if (!first) printf("00000");
//        first++;  // 将first自增，标记已处理过第一个字符
//
//        // 如果字符的ASCII值小于等于15（0x0F），则输出" 0X"格式（带前导零）
//        if (ch <= 15) printf(" 0%X", ch);
//        // 否则直接输出" X"格式（不带前导零）
//        else printf(" %X", ch);
//
//        cnt++;  // 计数器自增，记录已输出的字符数
//
//        // 当已输出16个字符时（一行满）
//        if (cnt == 16)
//        {
//            puts("");  // 输出换行符，换到下一行
//            cnt = 0;   // 重置计数器为0
//            // 输出当前行号作为地址前缀，格式为5位十六进制数（不足补零）
//            printf("%05X", line);
//            line++;    // 行号自增，准备下一行
//        }
//    }
//    return 0;
//}
//
////
//
//
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch;
//	int cnt = 0;
//	int first = 0;
//	int line = 1;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (!first) printf("00000");
//		first++;
//		if (ch <= 15) printf(" 0%X", ch);
//		else printf(" %X", ch);
//		cnt++;
//		if (cnt == 16)
//		{
//			puts("");
//			cnt = 0;
//			printf("%05X", line);
//			line++;
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int gcd(int a, int b);  //取最大公因数的函数
//int X[100], Y[100];
//int main()
//{
//	int o; scanf("%d", &o);
//	while (o--)
//	{
//		int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
//		int cnt = 0;
//		if (a == 1 && c == 1)     //a和c都为1的情况
//		{
//			//也就相当于两个等差数列  首项依次为左边取值全为b的倍数 右边取值全为d的倍数
//			cnt = 1000000000 / (b * d / gcd(b, d));       //相关实例见代码最后的举例部分
//		}
//		else if (a == 1 || c == 1)    //a和c其中一个为1 --q取a为等差数列
//		{
//			if (c == 1)
//			{
//				int t = a, T = b;
//				a = 1; c = t; b = d; d = T;  //相当于交换x和y   //也就是在一个1的情况下都取左边为等差数列，右边为指数函数数列
//			}
//			int y = d;
//			while (y <= 1000000000)
//			{
//				//调试			printf("here y=%d\n",y);
//				if (y % b == 0) cnt++;
//				y = y * c + d;
//			}
//		}
//		else if (a != 1 && c != 1)       //a和c都不为1  暴力枚举
//		{
//			int x = b, y = d;
//			int q1 = 1, q2 = 1;
//			while (x <= 1000000000)
//			{
//				//调试			printf("here x=%d\n",x);
//				X[q1] = x;
//				x = x * a + b;
//				q1++;
//			}
//			while (y <= 1000000000)
//			{
//				//调试			printf("here y=%d\n",y);
//				Y[q2] = y;
//				y = y * c + d;
//				q2++;
//			}
//			for (int i = 1; i < q1; i++)
//			{
//				for (int j = 1; j < q2; j++)
//				{
//					if (X[i] == Y[j]) cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
//int gcd(int a, int b)
//{
//	int t;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//
///*
//  //第一种情况 在20范围内 2的等差数列 3的等差数列   按照题意0不考虑
//  2 4 6 8 10 12 14 16 18 20
//  3 6 9 12 15 18 20
//  6 12 18--相等的情况 既是2的倍数又是3的倍数-----找到两者的最小公倍数6 (int)20/6=3
//
//  2 4 6 8 10 12 14 16 18 20
//  4 8 12 16 20
//  两者最小公倍数4   20/4=5
//
//
//  第二种情况
//  全判断即可    一边为b的n倍  另一半的取值不考虑，只要%b==0则cnt+1
//
//
//  第三种情况
//  找出两个数组暴力枚举即可
//
// */






//
//#include <stdio.h>
//#include <stdlib.h> 
//int gcd(int a, int b) 
//{
//    int t;
//    while (b != 0)
//    {
//        t = a % b;
//        a = b;
//        b = t;
//    }
//    return a;
//} 
//int lcm(int a, int b) 
//{
//    return a / gcd(a, b) * b;  
//} 
//long long pow_mod(long long base, long long exp, long long mod) {
//    long long result = 1;
//    base %= mod;
//    while (exp > 0)
//    {
//        if (exp % 2 == 1)
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        exp /= 2;
//    }
//    return result;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d); 
//        int count = 0;
//        const long long MAX = 1000000000LL; 
//        if (a == 1 && c == 1)
//        { 
//            if (b == d) 
//            { 
//                if (b == 0) 
//                {
//                    count = 0;  
//                }
//                else 
//                {
//                    count = MAX / b;
//                }
//            }
//            else 
//            { 
//                int g = gcd(b, d);
//                if (b % g != 0 || d % g != 0)
//                {
//                    count = 0;
//                }
//                else 
//                {
//                    long long l = lcm(b, d);
//                    if (l > MAX)
//                    {
//                        count = 0;
//                    }
//                    else
//                    {
//                        count = MAX / l;
//                    }
//                }
//            }
//        }
//        else if (a == 1) 
//        { 
//            long long y = d;  
//            while (y <= MAX) 
//            {
//                if (y % b == 0) 
//                {
//                    count++;
//                } 
//                if (y > (MAX - d) / c) 
//                {
//                    break;
//                }
//                y = y * c + d;
//            }
//        }
//        else if (c == 1) 
//        { 
//            long long x = b;  
//            while (x <= MAX)
//            {
//                if (x % d == 0) 
//                {
//                    count++;
//                } 
//                if (x > (MAX - b) / a) 
//                {
//                    break;
//                }
//                x = x * a + b;
//            }
//        }
//        else { 
//            if (a > c)
//            { 
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0; 
//                long long x = b;
//                while (x <= MAX)
//                {
//                    set[size++] = x;
//                    if (x > (MAX - b) / a) 
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                } 
//                long long y = d;
//                while (y <= MAX) 
//                { 
//                    int left = 0, right = size - 1;
//                    while (left <= right) 
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == y)
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < y)
//                        {
//                            left = mid + 1;
//                        }
//                        else 
//                        {
//                            right = mid - 1;
//                        }
//                    } 
//                    if (y > (MAX - d) / c) 
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                } 
//                free(set);
//            }
//            else 
//            { 
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0; 
//                long long y = d;
//                while (y <= MAX) 
//                {
//                    set[size++] = y;
//                    if (y > (MAX - d) / c) 
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                } 
//                long long x = b;
//                while (x <= MAX) 
//                { 
//                    int left = 0, right = size - 1;
//                    while (left <= right) 
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == x) 
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < x) 
//                        {
//                            left = mid + 1;
//                        }
//                        else 
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    if (x > (MAX - b) / a) 
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                }
//
//                free(set);
//            }
//        }
//
//        printf("%d\n", count);
//    }
//
//    return 0;
//}
//
//
//


//#include <stdio.h>      // 标准输入输出库
//#include <stdlib.h>     // 标准库，包含内存分配等函数
//
//// 计算两个整数的最大公约数(GCD)，使用辗转相除法
//int gcd(int a, int b)
//{
//    int t;
//    while (b != 0)
//    {
//        t = a % b;   // 取余数
//        a = b;       // 更新a为b
//        b = t;       // 更新b为余数
//    }
//    return a;        // 当b为0时，a就是最大公约数
//}
//
//// 计算两个整数的最小公倍数(LCM)
//// 公式：LCM(a,b) = (a*b) / GCD(a,b)，先除后乘避免溢出
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
//
//// 计算(base^exp) % mod的结果，使用快速幂算法提高效率
//long long pow_mod(long long base, long long exp, long long mod) {
//    long long result = 1;
//    base %= mod;  // 先对base取模，减小计算量
//    while (exp > 0)
//    {
//        if (exp % 2 == 1)  // 如果指数是奇数，将当前base乘入结果
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;  // base平方
//        exp /= 2;  // 指数减半
//    }
//    return result;
//}
//
//int main()
//{
//    int T;                  // 测试用例数量
//    scanf("%d", &T);        // 读取测试用例数量
//
//    while (T--)             // 循环处理每个测试用例
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);  // 读取四个参数
//
//        int count = 0;                          // 计数：相同数的个数
//        const long long MAX = 1000000000LL;     // 范围上限：10^9
//
//        // 情况1：两个序列都是等差数列（a=1且c=1）
//        if (a == 1 && c == 1)
//        {
//            // 两个数列都是首项为0，公差分别为b和d的等差数列
//            // 实际有效项从b和d开始（因为0不在[1,MAX]范围内）
//
//            if (b == d)  // 公差相等，数列完全相同
//            {
//                if (b == 0)  // 特殊情况：公差为0，所有项都是0（不在统计范围内）
//                {
//                    count = 0;
//                }
//                else  // 计算[MAX范围内有多少个b的倍数]
//                {
//                    count = MAX / b;
//                }
//            }
//            else  // 公差不同，寻找两个等差数列的公共项
//            {
//                int g = gcd(b, d);  // 求公差的最大公约数
//
//                // 检查是否存在公共项（数学上总是存在的，这里可能是冗余判断）
//                if (b % g != 0 || d % g != 0)
//                {
//                    count = 0;
//                }
//                else
//                {
//                    // 两个等差数列的公共项构成新的等差数列，公差为LCM(b,d)
//                    long long l = lcm(b, d);
//                    if (l > MAX)  // 最小公倍数超过范围，没有公共项
//                    {
//                        count = 0;
//                    }
//                    else  // 计算[MAX范围内有多少个LCM的倍数]
//                    {
//                        count = MAX / l;
//                    }
//                }
//            }
//        }
//        // 情况2：序列X是等差数列（a=1），序列Y是等比类数列（c≠1）
//        else if (a == 1)
//        {
//            // X的通项公式：x = k*b（k=1,2,...）
//            // 遍历Y序列，检查每个元素是否是b的倍数
//            long long y = d;  // Y序列的第一个有效项（y0=0不计入）
//
//            while (y <= MAX)
//            {
//                if (y % b == 0)  // 如果y是b的倍数，说明是公共项
//                {
//                    count++;
//                }
//
//                // 防止下一次计算溢出：如果y*c + d > MAX，则退出循环
//                if (y > (MAX - d) / c)
//                {
//                    break;
//                }
//                y = y * c + d;  // 计算Y序列的下一项
//            }
//        }
//        // 情况3：序列Y是等差数列（c=1），序列X是等比类数列（a≠1）
//        else if (c == 1)
//        {
//            // Y的通项公式：y = k*d（k=1,2,...）
//            // 遍历X序列，检查每个元素是否是d的倍数
//            long long x = b;  // X序列的第一个有效项（x0=0不计入）
//
//            while (x <= MAX)
//            {
//                if (x % d == 0)  // 如果x是d的倍数，说明是公共项
//                {
//                    count++;
//                }
//
//                // 防止下一次计算溢出
//                if (x > (MAX - b) / a)
//                {
//                    break;
//                }
//                x = x * a + b;  // 计算X序列的下一项
//            }
//        }
//        // 情况4：两个序列都是等比类数列（a≠1且c≠1）
//        else {
//            // 策略：将较短的序列存入数组，再遍历较长的序列并二分查找
//            if (a > c)  // a更大，X序列增长更快，长度更短，优先存储X
//            {
//                // 动态分配数组存储X序列的元素
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0;  // 记录X序列元素个数
//
//                // 生成X序列并存储
//                long long x = b;
//                while (x <= MAX)
//                {
//                    set[size++] = x;
//                    // 防止溢出，提前退出
//                    if (x > (MAX - b) / a)
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                }
//
//                // 遍历Y序列，在X序列中二分查找是否存在相同元素
//                long long y = d;
//                while (y <= MAX)
//                {
//                    // 二分查找
//                    int left = 0, right = size - 1;
//                    while (left <= right)
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == y)  // 找到相同元素
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < y)  // 中间值太小，向右查找
//                        {
//                            left = mid + 1;
//                        }
//                        else  // 中间值太大，向左查找
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    // 防止溢出，提前退出
//                    if (y > (MAX - d) / c)
//                    {
//                        break;
//                    }
//                    y = y * c + d;  // 计算Y序列的下一项
//                }
//
//                free(set);  // 释放动态分配的内存
//            }
//            else  // c更大或相等，Y序列增长更快，优先存储Y
//            {
//                // 动态分配数组存储Y序列的元素
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0;  // 记录Y序列元素个数
//
//                // 生成Y序列并存储
//                long long y = d;
//                while (y <= MAX)
//                {
//                    set[size++] = y;
//                    // 防止溢出，提前退出
//                    if (y > (MAX - d) / c)
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                }
//
//                // 遍历X序列，在Y序列中二分查找是否存在相同元素
//                long long x = b;
//                while (x <= MAX)
//                {
//                    // 二分查找
//                    int left = 0, right = size - 1;
//                    while (left <= right)
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == x)  // 找到相同元素
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < x)  // 中间值太小，向右查找
//                        {
//                            left = mid + 1;
//                        }
//                        else  // 中间值太大，向左查找
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    // 防止溢出，提前退出
//                    if (x > (MAX - b) / a)
//                    {
//                        break;
//                    }
//                    x = x * a + b;  // 计算X序列的下一项
//                }
//
//                free(set);  // 释放动态分配的内存
//            }
//        }
//
//        printf("%d\n", count);  // 输出当前测试用例的结果
//    }
//
//    return 0;
//}




 

//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int arr[10002] = { 0 }, n;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        long long sum1 = 0, max1 = 0, max2 = 0, sum2 = 0;
//        long long sum11 = 0, sum22 = 0, maxsum1 = 0, maxsum2 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum11 += arr[i];
//            if (sum11<arr[i + 1] && sum11>maxsum1)
//            {
//                maxsum1 = sum11;
//                max1 = arr[i + 1];
//            }
//            else break;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum22 += arr[i];
//            if (sum22<arr[i + 1] && sum11>maxsum2)
//            {
//                maxsum2 = sum22;
//                max2 = arr[i + 1];
//            }
//            else break;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum2 += arr[i];
//        }
//        long long a = sum2 - arr[n - 1], b = maxsum1 + sum2 - max1, c = sum2 - arr[0], d = maxsum2 + sum2 - max2, min = 0;
//        min = (a <= b) ? a : b;
//        min = (min <= c) ? min : c;
//        min = (min <= d) ? min : d;
//        printf("%lld\n", min);
//    }
//    return 0;
//}
//
//
//
//
//#include <stdio.h>
//#include <string.h> 
//int main() 
//{
//    int t, n;
//    scanf("%d", &t);
//    char s[9];
//    int x, y;
//    while (t--) 
//    {
//        scanf("%d", &n);
//        int a[4] = { 0, 0, 0, 0 }; 
//        int z = 0;  
//        int l;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%s", s);
//            if (s[0] == 'L') 
//            {
//                z = (z + 3) % 4;
//            }
//            else if (s[0] == 'R')
//            {
//                z = (z + 1) % 4;
//            }
//            else if (s[0] == 'B') 
//            {
//                z = (z + 2) % 4;
//            }
//            else if (s[0] == 'F') 
//            {
//                scanf("%d", &l);
//                a[z] += l;
//            }
//        }
//        x = a[1] - a[3];
//        y = a[0] - a[2];
//        printf("%d %d\n", x, y);
//    }
//    return 0;
//}






//#include <stdio.h>
//#include <stdlib.h>
//
//int ansA, ansB;
//int diceA[5], diceB[5];
//
//void compere(int* dice, int* ans)
//{
//    if (dice[0] == dice[1] && dice[1] == dice[2])
//        ans = dice[0] * 100;
//    else if (dice[0] == dice[1])
//        ans = dice[0] * 10 + dice[2];
//    else if (dice[1] == dice[2])
//        ans = dice[1] * 10 + dice[0];
//    else if (dice[0] == dice[2])
//        ans = dice[0] * 10 + dice[1];
//    else
//        ans = (dice[0] - 1) % 6 + (dice[1] - 1) % 6 + (dice[2] - 1) % 6;
//}
//
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        for (int i = 0; i < 3; i++) {
//            scanf("%d", &diceA[i]);
//            if (diceA[i] == 1)  diceA[i] = 7;
//        }
//        for (int i = 0; i < 3; i++) {
//            scanf("%d", &diceB[i]);
//            if (diceB[i] == 1)  diceB[i] = 7;
//        }
//        compere(diceA, ansA);
//        compere(diceB, ansB);
//        if (ansA > ansB)       puts("Alice");
//        else if (ansA < ansB)  puts("Bob");
//        else                   puts("Draw");
//    }
//    return 0;
//}



 
//#include <stdlib.h> 
//int hanshu(int* a)
//{
//    if (a[0] == a[1])
//    {
//        if (a[0] == a[2])
//        {
//            if (a[0] == 1)
//                return 100 * 7;
//            else
//                return 100 * a[0];
//        }
//        else
//        {
//            if (a[0] == 1)
//                return 10 * 7 + a[2];
//            else if (a[2] == 1)
//                return 10 * a[0] + 7;
//            else
//                return 10 * a[0] + a[2];
//        }
//    }
//    else if (a[0] == a[2])
//    {
//        if (a[0] == 1)
//            return 10 * 7 + a[1];
//        else if (a[1] == 1)
//            return 10 * a[0] + 7;
//        else
//            return 10 * a[0] + a[1];
//    }
//    else if (a[1] == a[2])
//    {
//        if (a[1] == 1)
//            return 10 * 7 + a[0];
//        else if (a[0] == 1)
//            return 10 * a[1] + 7;
//        else
//            return 10 * a[1] + a[0];
//    }
//    else
//        return a[0] + a[1] + a[2];
//} 
//int main()
//{
//    int k;
//    scanf("%d", &k);
//    while (k--)
//    {
//        int a[3], b[3];
//        scanf("%d %d %d", &a[0], &a[1], &a[2]);
//        scanf("%d %d %d", &b[0], &b[1], &b[2]);
//
//        int num1 = hanshu(a);
//        int num2 = hanshu(b); 
//        if (num1 > num2)
//            printf("Alice\n");
//        else if (num1 < num2)
//            printf("Bob\n");
//        else
//            printf("Draw\n");
//    }
//    return 0;
//}
 



#include <stdlib.h>  // 包含标准库函数，这里主要用于输入输出函数

// 自定义函数：计算骰子组合的权重值，用于比较大小
// 参数：int* a - 指向包含3个骰子点数的数组
// 返回值：int - 计算出的权重值，值越大表示组合越强
int hanshu(int* a)
{
    // 检查第一个和第二个骰子是否相同
    if (a[0] == a[1])
    {
        // 第一个和第二个相同，再检查是否和第三个也相同（三个都相同：豹子）
        if (a[0] == a[2])
        {
            // 豹子：根据规则1，1点优先级最高(用7表示)，其他按点数本身
            if (a[0] == 1)
                return 100 * 7;  // 1点豹子，权重为100*7
            else
                return 100 * a[0];  // 其他点数豹子，权重为100*点数
        }
        else
        {
            // 只有前两个相同：对子，第三个不同
            if (a[0] == 1)
                // 对子是1点(优先级7)，加上第三个骰子的优先级值
                return 10 * 7 + (a[2] == 1 ? 7 : a[2]);
            else if (a[2] == 1)
                // 第三个骰子是1点(优先级7)，加上对子的点数
                return 10 * a[0] + 7;
            else
                // 既不是1点对子，第三个也不是1点，按正常点数计算
                return 10 * a[0] + a[2];
        }
    }
    // 第一个和第二个不同，检查第一个和第三个是否相同（对子）
    else if (a[0] == a[2])
    {
        if (a[0] == 1)
            // 对子是1点(优先级7)，加上第二个骰子的优先级值
            return 10 * 7 + (a[1] == 1 ? 7 : a[1]);
        else if (a[1] == 1)
            // 第二个骰子是1点(优先级7)，加上对子的点数
            return 10 * a[0] + 7;
        else
            // 正常情况，对子点数*10加上另一个点数
            return 10 * a[0] + a[1];
    }
    // 前两种都不是，检查第二个和第三个是否相同（对子）
    else if (a[1] == a[2])
    {
        if (a[1] == 1)
            // 对子是1点(优先级7)，加上第一个骰子的优先级值
            return 10 * 7 + (a[0] == 1 ? 7 : a[0]);
        else if (a[0] == 1)
            // 第一个骰子是1点(优先级7)，加上对子的点数
            return 10 * a[1] + 7;
        else
            // 正常情况，对子点数*10加上另一个点数
            return 10 * a[1] + a[0];
    }
    else
        // 三个都不相同（点子），按规则计算总和（这里实际应该用优先级转换后再求和）
        // 注意：原代码这里有缺陷，没有正确转换1点的优先级
        return (a[0] == 1 ? 7 : a[0]) + (a[1] == 1 ? 7 : a[1]) + (a[2] == 1 ? 7 : a[2]);
}

int main()
{
    int k;  // 游戏次数
    scanf("%d", &k);  // 读取游戏次数

    // 循环处理每一次游戏
    while (k--)
    {
        int a[3], b[3];  // 分别存储Alice和Bob的三个骰子点数

        // 读取Alice的三个骰子点数
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        // 读取Bob的三个骰子点数
        scanf("%d %d %d", &b[0], &b[1], &b[2]);

        // 计算Alice和Bob骰子组合的权重值
        int num1 = hanshu(a);
        int num2 = hanshu(b);

        // 比较权重值，判断胜负
        if (num1 > num2)
            printf("Alice\n");  // Alice的权重更大，Alice赢
        else if (num1 < num2)
            printf("Bob\n");    // Bob的权重更大，Bob赢
        else
            printf("Draw\n");   // 权重相等，平局
    }
    return 0;
}