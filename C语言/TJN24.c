#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  





//
//#include <stdio.h>
//#include <string.h> 
//int hanshu2(int a)
//{
//	if (a == 0) return 0;
//	if (a == 1) return 0;
//	if (a == 2) return 1;
//	else
//	{
//		int p = 1;
//		for (int i = 2; i * i <= a; i++)
//		{
//			if (a % i == 0)
//			{
//				p = 0;
//				break;
//			}
//		}
//		return p;
//	}
//}
//int hanshu(char n[])
//{
//	int count = 0;
//	int c = strlen(n);
//	for (int m = 1; m <= c; m++)
//	{
//		for (int i = 0; i + m - 1 < c; i++)
//		{
//			int num = 0;
//			for (int j = i, k = 1; k <= m; k++, j++)
//			{
//				if (k <= m) num *= 10;
//				num = num + n[j] - '0';
//			}
//			if (hanshu2(num) == 1) count++;
//		}
//	}
//	return count;
//}
//int  main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		char  n[10];
//		scanf("%s", n);
//		printf("%d\n", hanshu(n));
//	}
//	return 0;
//}






//
//#include <stdio.h>    // 包含标准输入输出库，用于输入输出操作
//#include <string.h>   // 包含字符串处理库，用于 strlen 等字符串函数
//
//// 判断一个整数是否为素数的函数
//int hanshu2(int a)
//{
//    if (a == 0) return 0;  // 0不是素数，返回0
//    if (a == 1) return 0;  // 1不是素数，返回0
//    if (a == 2) return 1;  // 2是素数，返回1
//    else
//    {
//        int p = 1;         // 假设是素数，初始化为1
//        // 从2到sqrt(a)检查是否有因子
//        for (int i = 2; i * i <= a; i++)
//        {
//            if (a % i == 0)  // 如果能被i整除，不是素数
//            {
//                p = 0;       // 标记为非素数
//                break;       // 跳出循环
//            }
//        }
//        return p;  // 返回判断结果，1表示素数，0表示非素数
//    }
//}
//
//// 计算整数n中所有符合条件的素数区间数量的函数
//int hanshu(char n[])
//{
//    int count = 0;               // 计数器，记录符合条件的区间数量
//    int c = strlen(n);           // 获取数字字符串的长度（位数）
//
//    // 遍历所有可能的子串长度m（从1位到c位）
//    for (int m = 1; m <= c; m++)
//    {
//        // 遍历所有可能的起始位置i，确保子串不会超出范围
//        for (int i = 0; i + m - 1 < c; i++)
//        {
//            int num = 0;  // 存储当前子串转换后的整数
//
//            // 将子串从字符转换为整数
//            for (int j = i, k = 1; k <= m; k++, j++)
//            {
//                if (k <= m) num *= 10;  // 左移一位（乘以10）
//                num = num + n[j] - '0'; // 加上当前数字字符对应的数值
//            }
//
//            // 如果当前子串是素数，计数器加1
//            if (hanshu2(num) == 1) count++;
//        }
//    }
//    return count;  // 返回符合条件的区间总数
//}
//
//int  main()
//{
//    int T;                // 测试用例的数量
//    scanf("%d", &T);      // 读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        char  n[10];      // 存储输入的数字字符串（最多9位，因n≤10^9）
//        scanf("%s", n);   // 读取数字字符串
//
//        // 调用函数计算并输出结果
//        printf("%d\n", hanshu(n));
//    }
//    return 0;  // 程序正常结束
//}






//#include<stdio.h>
//#include<math.h>
//int hanshu(int k)
//{
//    if (k < 2)return 0;
//    else if (k == 2)return 1;
//    else
//    {
//        if (k % 2 == 0) return 0;
//        else
//        {
//            for (int i = 3; i <= sqrt(k); i += 2)
//            {
//                if (k % i == 0) return 0;
//            }
//            return 1;
//        }
//    }
//}
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, flag = 0;
//        scanf("%d", &n);
//        int a = sqrt(n);
//        for (int i = 2; i <= a; i++)
//        {
//            int j = n / i;
//            if (i * j == n && hanshu(i) == 1 && hanshu(j) == 1&&i!=j)
//            {
//                flag = 1;
//            }
//            if (flag == 1)
//            {
//                printf("Yes\n");
//                break;
//            }
//        }
//        if (flag == 0) printf("No\n");
//    }
//    return 0;
//}

 

//
//#include<stdio.h> 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		long long  a;
//		scanf("%lld", &a);
//		int zhu = 0;
//		for (long long  x = 1; x <= a - 1; x++)
//		{
//			long long  fenzi = a * x;
//			long long fenmu = a - x;
//			if (fenzi % fenmu == 0)
//			{
//				long long  t  = fenzi / fenmu;
//				if (t  > x) 
//				{
//					zhu++;
//				}
//			}
//		}
//		printf("%d\n", zhu);
//	} 
//	return 0;
//}

//
//
//#include<stdio.h>  // 包含标准输入输出库，用于输入输出操作
//int main()
//{
//    int t;  // 定义变量t，用于存储测试用例的数量
//    scanf("%d", &t);  // 从标准输入读取测试用例数量t
//    while (t--)  // 循环处理每个测试用例，t--表示每处理完一个测试用例就将t减1
//    {
//        long long  a;  // 定义变量a，用于存储当前测试用例的数值，使用long long防止溢出
//        scanf("%lld", &a);  // 从标准输入读取当前测试用例的数值a
//        int zhu = 0;  // 定义变量zhu，用于计数符合条件的解的数量，初始化为0
//
//        // 循环遍历可能的x值，根据方程推导x的取值范围是1到a-1
//        for (long long x = 1; x <= a - 1; x++)
//        {
//            long long  fenzi = a * x;  // 计算分子：a乘以x
//            long long fenmu = a - x;  // 计算分母：a减去x
//
//            // 检查分子是否能被分母整除，如果能整除则可能是一个解
//            if (fenzi % fenmu == 0)
//            {
//                long long  t = fenzi / fenmu;  // 计算y的值（这里变量名t与测试用例数量变量重名，不推荐）
//
//                // 根据方程推导，y必须大于x才是有效的正整数解
//                if (t > x)
//                {
//                    zhu++;  // 找到一个有效解，计数器加1
//                }
//            }
//        }
//
//        printf("%d\n", zhu);  // 输出当前测试用例的解的数量
//    }
////    return 0;  // 程序正常结束
//}





//
//#include<stdio.h>
//// 包含标准输入输出库，用于输入输出操作
//
//#define N 1000005
//// 定义宏N为1000005，作为数组的大小上限
//
//int a[N] = { 0 };
//// a数组用于标记非素数，a[i]=1表示i不是素数，初始值全为0
//
//int b[N] = { 0 };
//// b数组用于存储找到的素数，按顺序存放
//
//int f[N] = { 0 };
//// f数组用于标记内部素数并存储前缀和，f[i]表示[0,i]范围内内部素数的个数
//
//void hanshu1()
//// 函数hanshu1：预处理生成素数表、标记内部素数并计算前缀和
//{
//    int i, j, k = 0;
//    // k用于记录已找到的素数个数
//
//    a[0] = 1, a[1] = 1;
//    // 0和1不是素数，标记为1
//
//    for (i = 2; i < N; i++)
//        // 埃拉托斯特尼筛法生成素数表
//    {
//        if (a[i] == 0)  // 如果i是素数
//            b[k++] = i;  // 将i存入素数数组b，并递增素数计数k
//
//        for (j = 0; j < k; j++)
//            // 标记当前素数的倍数为非素数
//        {
//            if (i * b[j] > N)  // 超出数组范围则跳出
//                break;
//            a[i * b[j]] = 1;  // 标记i*b[j]为非素数
//
//            if (i % b[j] == 0)  // 避免重复标记，优化筛法
//                break;
//        }
//    }
//
//    for (i = 0; i < k - 1; i++)
//        // 遍历素数数组，寻找内部素数
//    {
//        int m = (b[i] + b[i + 1]) / 2;  // 计算两个连续素数的平均值
//        if (a[m] == 1)  // 如果平均值不是素数（a[m]=1表示非素数）
//            f[m] = 1;   // 标记m为内部素数
//    }
//
//    for (i = 0; i < N; i++)
//        // 计算前缀和，方便快速查询区间内内部素数的个数
//    {
//        f[i] += f[i - 1];  // f[i] = 前i-1个的和 + 当前f[i]的值
//        // 注：当i=0时f[-1]会越界，但通常编译器会将其视为0处理
//    }
//}
//
//void hanshu2()
//// 函数hanshu2：处理单个测试用例，查询并输出结果
//{
//    int a, b;
//    scanf("%d%d", &a, &b);  // 读取区间[a,b]
//    printf("%d\n", f[b] - f[a - 1]);  // 利用前缀和计算区间内内部素数的个数
//}
//
//int main()
//// 主函数：程序入口
//{
//    int T;
//    scanf("%d", &T);  // 读取测试用例数量T
//    hanshu1();  // 调用预处理函数，生成所需数据
//
//    while (T--)  // 循环处理每个测试用例
//    {
//        hanshu2();  // 处理并输出当前测试用例的结果
//    }
//
//    return 0;  // 程序正常结束
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 3000000 
//int arr[N + 10] = { 1,1 };
//char b[1000];
//int a[10][N / 3 + 10];
//int main()
//{
//	int i, j, k, count; 
//	for (i = 2; i <= N; i++) 
//	{ 
//		if (arr[i] == 0)
//		{
//			for (j = 2; j * i <= N; j++) 
//			{
//				arr[i * j] = 1;
//			}
//		}
//	} 
//	count = 1;
//	for (i = 2; i <= N; i++) 
//	{
//		if (arr[i] == 0)
//		{
//			int t;
//			t = i;
//			j = 0;
//			memset(b, '\0', sizeof(b)); 
//			while (t > 0) 
//			{
//				b[j] = (t % 10) + '0';
//				t /= 10;
//				j++;
//			} 
//			for (k = j - 1; k >= 0; k--) 
//			{ 
//				count++;
//			} 
//			if (count > 1000000) 
//				break;
//		}
//	} 
//	for (i = 0; i <= 9; i++) 
//	{ 
//		for (j = 2; j < count; j++) 
//		{
//			a[i][j] += a[i][j - 1];
//		}
//	} 
//	int T;
//	scanf("%d", &T); 
//	while (T--) 
//	{
//		int L, R, d;
//		scanf("%d %d %d", &L, &R, &d); 
//		printf("%d\n", a[d][R] - a[d][L - 1]);
//	} 
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 3000000 
//int arr[N + 10] = { 1,1 };
//char b[1000];
//int a[10][N / 3 + 10];
//int main()
//{
//	int i, j, k, count; 
//	for (i = 2; i <= N; i++) 
//	{ 
//		if (arr[i] == 0)
//		{
//			for (j = 2; j * i <= N; j++)
//			{
//				arr[i * j] = 1;
//			}
//		}
//	} 
//	count = 1;
//	for (i = 2; i <= N; i++)
//	{
//		if (arr[i] == 0)
//		{
//			int t;
//			t = i;
//			j = 0;
//			memset(b, '\0', sizeof(b)); 
//			while (t > 0) 
//			{
//				b[j] = (t % 10) + '0';
//				t /= 10;
//				j++;
//			} 
//			for (k = j - 1; k >= 0; k--) 
//			{ 
//				a[b[k] - '0'][count]++;
//				count++;
//			} 
//			if (count > 1000000)  
//				break;
//		}
//	} 
//	for (i = 0; i <= 9; i++) 
//	{ 
//		for (j = 2; j < count; j++) 
//		{
//			a[i][j] += a[i][j - 1];
//		}
//	} 
//	int T;
//	scanf("%d", &T); 
//	while (T--) 
//	{
//		int L, R, d;
//		scanf("%d %d %d", &L, &R, &d); 
//		printf("%d\n", a[d][R] - a[d][L - 1]);
//	} 
//	return 0;
//}









//#include <stdio.h>    // 标准输入输出库
//#include <stdlib.h>   // 标准库，包含内存分配等函数
//#include <string.h>   // 字符串处理库
//#define N 3000000     // 定义常量N，用于素数筛选的上限
//
//// 全局数组定义
//int arr[N + 10] = { 1, 1 };  // 素数标记数组，初始0和1为非素数(1表示非素数)
//char b[1000];              // 临时存储素数的字符形式
//int a[10][N / 3 + 10];     // 二维数组，a[d][pos]表示数字d在位置pos前出现的次数
//
//int main()
//{
//    int i, j, k, count;    // 声明循环变量和计数变量
//
//    // 埃氏筛法筛选素数
//    for (i = 2; i <= N; i++)
//    {
//        // 如果i是素数(未被标记)
//        if (arr[i] == 0)
//        {
//            // 标记i的所有倍数为非素数
//            for (j = 2; j * i <= N; j++)
//            {
//                arr[i * j] = 1;
//            }
//        }
//    }
//
//    count = 1;  // 记录当前素数字符串的位置(从1开始计数)
//
//    // 遍历所有素数，构建素数字符串并统计数字出现次数
//    for (i = 2; i <= N; i++)
//    {
//        // 如果i是素数
//        if (arr[i] == 0)
//        {
//            int t;
//            t = i;          // 临时保存当前素数
//            j = 0;          // 字符串索引
//            memset(b, '\0', sizeof(b));  // 清空字符数组b
//             
//            // 将素数转换为字符形式(逆序存储)
//            while (t > 0)
//            {
//                b[j] = (t % 10) + '0';  // 取最后一位数字并转为字符
//                t /= 10;                // 移除最后一位
//                j++;
//            }
//
//            // 逆序遍历字符数组，得到正确的数字顺序
//            for (k = j - 1; k >= 0; k--)
//            {
//                // 记录当前位置出现的数字
//                a[b[k] - '0'][count]++;
//                count++;  // 位置递增
//
//                // 达到题目要求的最大位置(1000000)则停止
//                if (count > 1000000)
//                    break;
//            }
//            // 达到最大位置后退出外层循环
//            if (count > 1000000)
//                break;
//        }
//    }
//
//    // 构建前缀和数组，方便快速计算区间内的数字出现次数
//    for (i = 0; i <= 9; i++)
//    {
//        for (j = 2; j < count; j++)
//        {
//            a[i][j] += a[i][j - 1];  // 累加前面的计数，形成前缀和
//        }
//    }
//
//    // 处理测试用例
//    int T;
//    scanf("%d", &T);  // 读取测试用例数量
//
//    while (T--)  // 循环处理每个测试用例
//    {
//        int L, R, d;
//        scanf("%d %d %d", &L, &R, &d);  // 读取区间[L,R]和数字d
//
//        // 利用前缀和计算区间内d出现的次数并输出
//        printf("%d\n", a[d][R] - a[d][L - 1]);
//    }
//
//    return 0;
//}






//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define N 1000005
//int arr1[N];
//int arr2[N]; 
//void hanshu(int n)
//{
//	for (int i = 0; i < n; i++)
//	{ 
//		arr1[i] = 0;
//	}
//	arr1[0] = 1;
//	arr1[1] = 1;
//	for (int i = 2; i <= n / i; i++) 
//	{
//		if (arr1[i] == 0)
//		{
//			for (int j = i * i; j <= n; j += i)
//				arr1[j] = 1;
//		}
//	}
//}
//int f(long long l, long long r)
//{
//	for (int i = 0; i <= r - l; i++) 
//	{ 
//		arr2[i] = 0;
//	}
//	int max = sqrt(r) + 5; 
//	hanshu(max);
//	for (int i = 2; i < max; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			long long temp = l / i * i; 
//			if (temp < l)
//				temp += i;
//			if (temp == i)
//				temp += i; 
//			for (int j = temp; j <= r; j += i)
//			{
//				arr2[j - l] = 1;
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i <= r - l; i++) 
//	{
//		if (arr2[i] == 0 && (i + l) > 1)
//			cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		long long int l, r;
//		scanf("%lld %lld", &l, &r);
//		printf("%d\n", f(l, r));
//	}
//}




//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define len 100000   
//
//int hanshu(int arr1[], int arr2[],int L,int R)
//{
//	int* prefix = (int*)calloc(len, sizeof(int));
//	arr1[0] = 1;
//	arr1[1] = 1;
//	int count = 0;
//	for (int i = 2; i < len; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			for (int j = 1; i * j < len; j++)
//			{
//				arr1[i * j] = 1;
//			}
//		}
//	} 
//	for (int i = 0; i < len; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			prefix[i] = prefix[i - 1] + 1;
//		}
//		else prefix[i] = prefix[i - 1];
//	}
//	return prefix[R] - prefix[L - 1];
//}
//int main()
//{
//	int* arr1 = (int*)calloc(len ,sizeof(int));
//	int* arr2 = (int*)calloc(len ,sizeof(int));
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int L, R;
//		scanf("%d %d", &L, &R);
//		int count = hanshu(arr1, arr2,L,R);
//		printf("%d\n", count);
//	}
//	return 0;
//}
//
//
//
//
//
//
//// 