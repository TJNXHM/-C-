#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//#include <stdio.h>
//#define MOD 1000000007  
//long long comb3(int n)
//{
//    if (n < 3) return 0;
//    long long res = (long long)n * (n - 1) % MOD;
//    res = res * (n - 2) % MOD;
//    res = res * 166666668 % MOD;
//    return res;
//}
//
//int main()
//{
//    int N;
//    while (scanf("%d", &N) == 1 && N != 0)
//    {
//        int count0 = N / 3;
//        int count1 = (N + 2) / 3;
//        int count2 = (N + 1) / 3;
//        long long case1 = comb3(count0);
//        long long case2 = comb3(count1);
//        long long case3 = comb3(count2);
//        long long case4 = (long long)count0 * count1 % MOD;
//        case4 = case4 * count2 % MOD;
//
//        long long total = (case1 + case2 + case3 + case4) % MOD;
//        printf("%lld\n", total);
//    }
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
//		int M, i;
//		int n = 1;
//		int flag = 0;
//		scanf("%d", &M);
//		for (i = 1; i <= M; i++) 
//		{
//			n %= M;
//			if (n == 0) 
//			{
//				flag = 1;
//				break;
//			}
//			n = n * 10 + 1;
//		}
//		if (flag == 1) 
//		{
//			printf("%d\n", i);
//		}
//		if (flag == 0) 
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}



//
//#include <stdio.h>
//
//const int N = 35;
//__int64 YHtriangle[N][N];
//
//void printangle()
//{
//    for (int i = 0; i < N; i++)
//        YHtriangle[i][0] = YHtriangle[i][i] = 1;
//    for (int i = 2; i < N; i++)
//        for (int j = 1; j < i; j++)
//            YHtriangle[i][j] = YHtriangle[i - 1][j - 1] + YHtriangle[i - 1][j];
//}
//
//int main()
//{
//    printangle();
//    int K, n, m;
//    scanf("%d", &K);
//    while (K--)
//    {
//        bool tags;
//        scanf("%d %d", &n, &m);
//        tags = (n - m) % 2;
//        if (tags)  puts("0");
//        else       printf("%I64d\n", YHtriangle[n][(n - m) / 2]);
//    }
//    return 0;
//}


//#include<stdbool.h>
//#include <stdio.h>
//#define N 35
//long long arr[N][N];   
//void hanshu()
//{ 
//    for (int i = 0; i < N; i++)
//        arr[i][0] = arr[i][i] = 1; 
//    for (int i = 2; i < N; i++)
//        for (int j = 1; j < i; j++)
//            arr[i][j] = arr[i - 1][j - 1] +arr[i - 1][j];
//} 
//int main()
//{
//    hanshu();
//    int K, n, m;
//    scanf("%d", &K); 
//    while (K--)
//    {
//        bool tags;
//        scanf("%d %d", &n, &m);
//        tags = (n - m) % 2; 
//        if (tags)
//            puts("0");
//        else
//            printf("%lld\n", arr[n][(n - m) / 2]);  
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a = 0;
//
//    while (scanf("%d", &a) == 1 && a != 0)
//    {
//        int t = a, k = a, sum = 0, count = 0;
//        while (k)
//        {
//            k /= 10;
//            count++;
//        }
//        while (t)
//        {
//            sum += pow(t % 10, count);
//            t /= 10;
//        }
//        if (a == sum) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--) 
//	{
//		int n, i = 0, j;
//		scanf("%d", &n);
//		char a[25] = {0}; 
//		if (n == 0)printf("0\n");
//		else 
//		{
//			while (n != 0) 
//			{
//				if (n % 3 == 0) 
//				{
//					a[i] = '0';
//					n /= 3;
//				}
//				else if (n % 3 == 1)
//				{
//					a[i] = '1';
//					n /= 3;
//				}
//				else 
//				{
//					a[i] = '-';
//					n = n / 3 + 1;
//				}
//				i++;
//			}
//			for (j = i - 1; j >= 0; j--)
//			{
//				printf("%c", a[j]);
//			}
//			printf("\n");
//		}
//	}
//}



//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);  // 输入测试用例的数量 T
//    while (T--)
//    {      // 循环处理每个测试用例，T-- 表示处理一个用例后 T 减 1
//        int n, i = 0, j;
//        scanf("%d", &n);  // 输入当前要转换的十进制整数 n
//        char a[25] = {0};   // 定义字符数组 a，用于存储平衡三进制的每一位（初始化为全空）
//        if (n == 0)printf("0\n");  // 特殊情况：n 为 0 时，直接输出 "0"
//        else 
//        {
//            while (n != 0) 
//            {  // 当 n 不为 0 时，循环计算每一位
//                if (n % 3 == 0) 
//                {  // 若 n 能被 3 整除
//                    a[i] = '0';  // 当前位为 '0'
//                    n /= 3;      // n 除以 3，更新商
//                }
//                else if (n % 3 == 1)
//                {  // 若 n 除以 3 余 1
//                    a[i] = '1';  // 当前位为 '1'
//                    n /= 3;      // n 除以 3，更新商
//                }
//                else 
//                {  // 若 n 除以 3 余 2（此时需要表示为 -1，即 '-'）
//                    a[i] = '-';  // 当前位为 '-'
//                    n = n / 3 + 1;   // 商加 1（因为余 2 等价于 "余 -1 且商加 1"）
//                }
//                i++;  // 下一位的索引加 1
//            }
//            for (j = i - 1; j >= 0; j--) 
//            {  // 逆序输出字符数组（因为计算时是从低位到高位存储的）
//                printf("%c", a[j]);
//            }
//            printf("\n");  // 每个用例的输出换行
//        }
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        char a[12] = { 0 }, b[12] = {0};
//        scanf("%s %s", a, b);
//        int len1 = strlen(a), len2 = strlen(b);
//        long long sum2 = 0;
//        if (len1 > len2)
//        {
//            int len3 = len1 - len2;
//            long long sum = 0;
//            for (int i = 0; i < len1 - len2; i++)
//            {
//                sum += pow((a[i] - '0'), len1 - 1);
//            }
//            for (int i = 0; i < len2; i++)
//            {
//                sum += ((((a[i + len3] - '0') + (b[i] - '0')) % 10), len2 - i - 1);
//            }
//            sum2 = sum;
//        }
//        else 
//        {
//            int len3 = len2 - len1;
//            long long sum = 0;
//            for (int i = 0; i < len2 - len1; i++)
//            {
//                sum += pow((a[i] - '0'), len2 - 1);
//            }
//            for (int i = 0; i < len1; i++)
//            {
//                sum += ((((a[i + len3] - '0') + (b[i] - '0')) % 10), len1 - i - 1);
//            }
//            sum2 = sum;
//        }
//        printf("%lld\n", sum2);
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch[32];
//    int sh[32];
//    int k;
//    while (scanf("%s", ch) != EOF)
//    {
//        scanf("%d", &k);
//        int i, j  , len ,max ,flag = 0;
//        len = strlen(ch);
//        for (i = 0; i < len; i++)
//        {
//            if ((ch[i] >= '0') && (ch[i] <= '9')) sh[i] = ch[i] - '0';
//            if ((ch[i] >= 'A') && (ch[i] <= 'F')) sh[i] = ch[i] - 'A' + 10;
//        }
//        max = sh[0]; 
//        for (j = 0; j < len - 1; j++)
//        {
//            if (sh[j] < sh[j + 1]) max = sh[j + 1];
//        } 
//        for (i = max + 1; i <= 16; i++)
//        {
//            long long m = 1;
//            long long s = 0;
//            for (j = len - 1; j >= 0; j--)
//            {
//                s = s + m * sh[j];
//                m = m * i;
//            }
//            if (s == k)
//            {
//                flag = i;
//                break;
//            }
//        }
//        if (flag != 0) printf("%d\n", flag);
//        if (flag == 0) printf("Impossible\n");
//    }
//}


//
//#include<stdio.h> 
//int hanshu(int m)
//{
//    return (m % 2 == 0) || (m % 5 == 0);
//} 
//int main() 
//{
//    int K;
//    scanf("%d", &K); 
//    while (K--) 
//    {
//        int M;
//        scanf("%d", &M); 
//        if (M == 1) 
//        {
//            printf("1\n");
//            continue;
//        } 
//        if (hanshu(M))
//        {
//            printf("0\n");
//            continue;
//        } 
//        int r  = 1;  
//        int n;
//        for (n = 1; n <= M; n++) 
//        {
//            if (r  == 0) 
//            {
//                break;   
//            } 
//            r  = (r  * 10 + 1) % M;
//        } 
//        if (n <= M) 
//        {
//            printf("%d\n", n);
//        }
//        else {
//            printf("0\n");
//        }
//    } 
//    return 0;
//}




//
//#include<stdio.h>  // 引入标准输入输出库，用于输入输出操作
//
//// 定义一个函数hanshu，判断一个数是否能被2或5整除
//int hanshu(int m)
//{
//    // 如果m是2的倍数或者5的倍数，返回真(非0)，否则返回假(0)
//    return (m % 2 == 0) || (m % 5 == 0);
//}
//
//// 主函数，程序入口
//int main()
//{
//    int K;  // 定义变量K，用于存储测试用例的数量
//    scanf("%d", &K);  // 从标准输入读取K的值
//
//    // 循环K次，处理每个测试用例
//    while (K--)
//    {
//        int M;  // 定义变量M，用于存储当前测试用例的数值
//        scanf("%d", &M);  // 从标准输入读取M的值
//
//        // 如果M等于1，直接输出1并继续下一个循环
//        if (M == 1)
//        {
//            printf("1\n");
//            continue;
//        }
//
//        // 如果M能被2或5整除，输出0并继续下一个循环
//        if (hanshu(M))
//        {
//            printf("0\n");
//            continue;
//        }
//
//        int r = 1;  // 定义变量r并初始化为1，用于计算余数
//        int n;      // 定义变量n，用于记录位数
//
//        // 循环计算由n个1组成的数除以M的余数
//        for (n = 1; n <= M; n++)
//        {
//            // 如果余数为0，说明当前n个1组成的数能被M整除，跳出循环
//            if (r == 0)
//            {
//                break;
//            }
//            // 更新余数：(当前余数*10 + 1)再对M取余
//            r = (r * 10 + 1) % M;
//        }
//
//        // 如果找到能被M整除的n(且n不超过M)，输出n
//        if (n <= M)
//        {
//            printf("%d\n", n);
//        }
//        // 否则输出0
//        else {
//            printf("0\n");
//        }
//    }
//    return 0;  // 程序正常结束，返回0
//}




//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        char a[12] = { 0 }, b[12] = { 0 };
//        scanf("%s %s", a, b); 
//        int len1 = strlen(a), len2 = strlen(b);
//        long long result = 0; 
//        int i = len1 - 1, j = len2 - 1;
//        int wei = 0;   
//        while (i >= 0 || j >= 0)
//        {
//            int awei = (i >= 0) ? (a[i] - '0') : 0;
//            int bwei = (j >= 0) ? (b[j] - '0') : 0; 
//            int he = (awei + bwei) % 10; 
//            result += he * (long long)pow(10, wei); 
//            i--;
//            j--;
//           wei++;
//        } 
//        printf("%lld\n", result);
//    }
//    return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//    int t, n, m, a, k;
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d", &m);
//        int b = 1;
//        while (1)
//        {
//            b++;
//            n = m;
//            int flag = 1;
//            a = n % b;
//            n = n / b;
//            while (n != 0)
//            {
//                k = n % b;
//                n = n / b;
//                if (a >= k)
//                {
//                    flag = 0;
//                    break;
//                }
//                a = k;
//            }
//            if (flag == 1) break;
//        }
//        printf("%d\n", b);
//    }
//    return 0;
//}
//







//#include<stdio.h>  // 包含标准输入输出库，用于输入输出函数
//
//int main()  // 主函数，程序入口点
//{
//    // 声明变量：t表示测试用例数量，n用于临时计算，m是输入的数，a和k用于比较
//    int t, n, m, a, k;
//
//    scanf("%d", &t);  // 读取测试用例的数量
//
//    while (t--)  // 循环处理每个测试用例，t递减直到0
//    {
//        scanf("%d", &m);  // 读取当前测试用例的数值m
//        int b = 1;  // 初始化变量b，用于表示要寻找的进制
//
//        while (1)  // 无限循环，直到找到符合条件的进制
//        {
//            b++;  // 进制从2开始尝试（因为初始值为1，自增后为2）
//            n = m;  // 将m赋值给n，用n进行计算操作，保留原始m的值
//            int flag = 1;  // 标志位，1表示当前进制可能符合条件，0表示不符合
//
//            a = n % b;  // 计算n在b进制下的最后一位数字
//            n = n / b;  // 去掉n在b进制下的最后一位
//
//            while (n != 0)  // 继续处理剩余的数字位
//            {
//                k = n % b;  // 取下一位数字
//                n = n / b;  // 去掉已经处理的位
//
//                // 检查当前位是否大于前一位，如果不是则不符合条件
//                if (a >= k)
//                {
//                    flag = 0;  // 标记为不符合条件
//                    break;  // 跳出当前循环
//                }
//                a = k;  // 更新前一位数字，为下一次比较做准备
//            }
//
//            if (flag == 1) break;  // 如果当前进制符合条件，跳出寻找进制的循环
//        }
//
//        printf("%d\n", b);  // 输出找到的最小符合条件的进制
//    }
//    return 0;  // 程序正常结束
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
//        int m;
//        scanf("%d", &m);
//        int result = 0;  // 存储结果，默认0表示未找到
//
//        // 从2到100依次检查每个进制
//        for (int b = 2; b <= 100; b++)
//        {
//            int n = m;  // 每次检查新进制时，使用原始的m值
//            if (n == 0) break;
//
//            int first_digit = n % b;  // 获取第一个数字
//            n /= b;
//            int flag = 1;  // 假设符合条件
//
//            // 检查剩余所有数字
//            while (n > 0)
//            {
//                int current_digit = n % b;
//                if (current_digit != first_digit)
//                {
//                    flag = 0;  // 发现不同数字，标记不符合
//                    break;
//                }
//                n /= b;
//            }
//
//            // 如果找到符合条件的进制，记录并退出循环
//            if (flag == 1)
//            {
//                result = b;
//                break;
//            }
//        }
//
//        printf("%d\n", result);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, m, a = 0,b=1,flag2=0;
//        scanf("%d", &m);
//        while (1)
//        {
//            b++;
//            n = m;
//            if (b > 100) break;
//            int a = n % b, k = 0, flag = 1;
//            n /= b;
//            while (n)
//            {
//                k = n % b;
//                n /= b;
//                if (k != a)
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag) 
//            {
//                flag2 = flag;
//                break;
//            }
//        }
//        if (b <= 100 && flag2==1) printf("%d\n", b);
//        else printf("0\n");
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr), b = 1, max = 0, a,flag2=0;
//        while (1)
//        {
//            int sum = arr[len - 1] - '0', i = 1, flag = 0;
//            i++;
//            a = i;
//            if (len >= 2)
//            {
//                for (int j = len - 2; j >= 0; j--)
//                {
//                    sum += (arr[j] - '0') * a;
//                    a *= i;
//                }
//                if (sum == 2021)
//                {
//                    flag = 1;
//                    flag2 = flag;
//                    break;
//                }
//                if (sum > 2021)
//                {
//                    flag2 = flag;
//                    break;
//                }
//            }
//            else
//            {
//                flag2 = flag;
//                break;
//            }
//            
//        }
//        if (flag2) printf("%d\n", a);
//        else printf("0");
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h> 
//long long hanshu(const char* arr, int len, int b)
//{
//    long long sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int d = arr[i] - '0';
//        if (d >= b) return -1;
//        sum = sum * b + d;
//        if (sum > 2021 || sum < 0) return -1;
//    }
//    return sum;
//}
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr);
//        if (len == 1)
//        {
//            int num = arr[0] - '0';
//            if (num == 2021)
//            {
//                printf("%d\n", num + 1);
//            }
//            else
//            {
//                printf("0\n");
//            }
//            continue;
//        }
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max)
//            {
//                max = digit;
//            }
//        }
//        int min = -1;
//        for (int b = max + 1; ; b++)
//        {
//            long long v = hanshu(arr, len, b);
//            if (v == -1)
//            {
//                break;
//            }
//            if (v == 2021)
//            {
//                min = b;
//                break;
//            }
//        }
//        printf("%d\n", (min != -1) ? min : 0);
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <string.h>  
//long long hanshu ( char* arr, int len, int b)
//{
//    long long sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int d = arr[i] - '0';
//        if (d >= b) return -1;  
//        if (sum > (2021 - d) / b) 
//        {
//            return -1;
//        } 
//        sum = sum * b + d;
//        if (sum > 2021) return -1;
//    }
//    return sum;
//} 
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr); 
//        if (len == 1)
//        {
//            int num = arr[0] - '0';  
//            printf("0\n");
//            continue;
//        } 
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max )
//            {
//                max = digit;
//            }
//        }
//
//        int min = -1;
//        int low = max  + 1;
//        int high = 2021; 
//        while (low <= high) 
//        {
//            int mid = low + (high - low) / 2; 
//            long long val = hanshu(arr, len, mid);
//
//            if (val == 2021) 
//            {
//                min  = mid;
//                high = mid - 1;  
//            }
//            else if (val < 2021 && val != -1)
//            {
//                low = mid + 1;  
//            }
//            else 
//            {
//                high = mid - 1; 
//            }
//        } 
//        printf("%d\n", (min  != -1) ? min  : 0);
//    }
//    return 0;
//}




//
//#include <stdio.h>      // 包含标准输入输出库
//#include <string.h>     // 包含字符串处理库
//
//// 函数功能：将b进制的数字串arr转换为十进制数
//// 参数：arr-数字字符串，len-字符串长度，b-进制
//// 返回值：转换后的十进制数，若转换过程中出现异常则返回-1
//long long hanshu(char* arr, int len, int b)
//{
//    long long sum = 0;  // 存储转换后的十进制值
//    for (int i = 0; i < len; i++)  // 遍历数字串的每个字符
//    {
//        int d = arr[i] - '0';  // 将字符转换为对应的数字
//
//        // 如果数字大于等于进制b，说明不符合该进制规则，返回-1
//        if (d >= b) return -1;
//
//        // 检查是否会溢出（提前判断，避免sum*b + d超过2021）
//        if (sum > (2021 - d) / b)
//        {
//            return -1;
//        }
//
//        // 累加计算十进制值
//        sum = sum * b + d;
//
//        // 如果计算结果超过2021，返回-1
//        if (sum > 2021) return -1;
//    }
//    return sum;  // 返回转换后的十进制值
//}
//
//int main()
//{
//    char arr[102];  // 存储输入的数字字符串，最大长度101+1
//    // 循环读取输入，直到没有更多输入
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr);  // 获取字符串长度
//
//        // 特殊情况：如果字符串长度为1
//        if (len == 1)
//        {
//            // 单个数字无法表示2021（因为最小进制是2，单个数字最大为1，小于2021）
//            printf("0\n");
//            continue;
//        }
//
//        // 找到数字串中最大的数字
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max)
//            {
//                max = digit;
//            }
//        }
//
//        int min = -1;  // 存储最小符合条件的进制，初始为-1表示未找到
//        // 进制的最小值为最大数字+1（因为进制必须大于所有数字）
//        int low = max + 1;
//        // 进制的最大值设为2021（因为更大的进制转换后的值会小于2021）
//        int high = 2021;
//
//        // 二分查找符合条件的最小进制
//        while (low <= high)
//        {
//            int mid = low + (high - low) / 2;  // 计算中间值，避免溢出
//
//            // 调用函数计算该进制下的十进制值
//            long long val = hanshu(arr, len, mid);
//
//            // 如果转换后的值等于2021
//            if (val == 2021)
//            {
//                min = mid;       // 记录当前进制
//                high = mid - 1;   // 尝试寻找更小的进制
//            }
//            // 如果转换后的值小于2021且有效
//            else if (val < 2021 && val != -1)
//            {
//                low = mid + 1;    // 需要增大进制
//            }
//            // 其他情况（值大于2021或无效）
//            else
//            {
//                high = mid - 1;   // 需要减小进制
//            }
//        }
//
//        // 输出结果：如果找到则输出最小进制，否则输出0
//        printf("%d\n", (min != -1) ? min : 0);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int arr1[1002] = { 0 }, arr2[1003] = { 0 };
//    while (scanf("%s", arr1) == 1)
//    {
//        arr2[0] ='b';
//        strcpy(arr2 + 1, arr1);
//        int len = strlen(arr2), sum = 0;
//        for (int i = len - 1; i >= 0; i--)
//        {
//            int d = arr2[i];
//            sum = sum * 26 + d;
//        }
//        int h = sum % 1000000007;
//        printf("%d\n", h);
//    }
//    return 0;
//}





//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[1002] = { 0 }, arr2[1003] = { 0 };
//     long long p = 1000000007;  
//
//    while (scanf("%s", arr1) == 1)
//    {
//        arr2[0] = 'b';                
//        strcpy(arr2 + 1, arr1);      
//        int len = strlen(arr2);
//        long long sum = 0;         
//        for (int i = 0; i < len; i++)
//        { 
//            int d = arr2[i] - 'a'; 
//            sum = (sum * 26 + d) % p;
//        } 
//        printf("%lld\n", sum);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int T, z, j, x, flag, m, n, arr[100];
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		for (z = 2; z <= n + 1; z++) 
//		{
//			m = n;
//			x = 0;
//			while (m != 0)
//			{
//				arr[x++] = m % z;
//				if (arr[0] == 0)
//				{
//					break; 
//				}
//				m /= z;
//			}
//			if (arr[0] == 0) 
//			{
//				continue;
//			}
//			flag = 1;
//			for (j = 0; j < x / 2; j++)
//			{
//				if (arr[j] != arr[x - j - 1]) 
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag)
//			{
//				printf("%d\n", z);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//
//#include<stdio.h>  // 包含标准输入输出库，用于输入输出操作
//
//int main()
//{
//    // 定义所需变量：
//    // T：测试用例数量
//    // z：当前尝试的进制
//    // j：循环计数器，用于检查回文
//    // x：记录当前进制下数字的位数
//    // flag：标记是否为回文数，1表示是，0表示不是
//    // m：临时变量，用于计算数字在当前进制下的表示
//    // n：输入的十进制数
//    // arr[100]：存储数字在当前进制下的每一位
//    int T, z, j, x, flag, m, n, arr[100];
//
//    scanf("%d", &T);  // 读取测试用例数量T
//
//    while (T--)  // 循环处理每个测试用例，T递减至0时结束
//    {
//        scanf("%d", &n);  // 读取当前要处理的十进制数n
//
//        // 从最小的进制2开始尝试，直到找到最小的符合条件的进制
//        for (z = 2; z <= n + 1; z++)
//        {
//            m = n;  // 将n赋值给临时变量m，避免直接修改n
//            x = 0;  // 初始化位数计数器为0
//
//            // 将m转换为z进制，并将每一位存储到arr数组中
//            while (m != 0)
//            {
//                arr[x++] = m % z;  // 取余得到当前位，并存入数组，x自增记录位数
//
//                // 检查第一位是否为0（存在前导0），如果是则跳出循环
//                if (arr[0] == 0)
//                {
//                    break;
//                }
//                m /= z;  // 除以进制，处理下一位
//            }
//
//            // 如果存在前导0，跳过当前进制
//            if (arr[0] == 0)
//            {
//                continue;
//            }
//            
//            flag = 1;  // 初始化标记为1，假设是回文数
//
//            // 检查数组是否为回文（对称）
//            for (j = 0; j < x / 2; j++)
//            {
//                // 比较对称位置的元素，如果不相等则不是回文数
//                if (arr[j] != arr[x - j - 1])
//                {
//                    flag = 0;  // 标记为不是回文数
//                    break;     // 跳出循环，无需继续比较
//                }
//            }
//
//            // 如果是回文数，输出当前进制并跳出循环
//            if (flag)
//            {
//                printf("%d\n", z);
//                break;
//            }
//        }
//    }
//    return 0;  // 程序正常结束
//}


//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long  n;
//        scanf("%lld", &n);
//        for (int b = 2;; b++)
//        {
//            int m = n, x = 0, arr[100] = { 0 }, count = 0, arr2[100] = { 0 };
//            while (m)
//            {
//                arr[x++] = m % b;
//                if (m % b == 0) count++;
//                m /= n;
//                if (arr[0] == 0) break;
//            }
//            if (arr[0] == 0)continue;
//            for (int i = 0; i < b; i++)
//            {
//                arr2[arr[i]]++;
//            }
//            int flag = 1;
//            for (int j = 0; j < b; j++)
//            {
//                if (count != 0)
//                {
//                    if (arr2[j] != count)
//                    {
//                        flag = 0;
//                        break;
//                    }
//                }
//                else
//                {
//                    if (arr2[j] != arr2[j + 1] || arr[j] != count)
//                    {
//                        flag = 0;
//                        break;
//                    }
//                }
//            }
//            if (flag)
//            {
//                printf("%d\n", b);
//                break;
//            }
//        }
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h> 
//int hanshu(long long n, int b) 
//{
//    if (n == 0) 
//    { 
//        return 1;
//    } 
//    int count[100] = { 0 }; 
//    int max  = -1;
//    long long m = n; 
//    while (m > 0) 
//    {
//        int d = m % b;
//        count[d ]++;
//        if (d > max ) 
//        {
//            max  = d;
//        }
//        m /= b;
//    } 
//    int f = -1;
//    for (int i = 0; i <= max ; i++) 
//    {
//        if (count[i] > 0) 
//        {
//            if ( f  == -1) 
//            {
//               f = count[i];
//            }
//            else if (count[i] != f)
//            {
//                return 0;  
//            }
//        }
//    } 
//    return 1;
//} 
//int hanshu2(long long n) 
//{
//    if (n == 0) 
//    {
//        return 2;  
//    } 
//    for (int b = 2; ; b++) 
//    {
//        if (hanshu(n, b))
//        {
//            return b;
//        }
//    }
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        long long n;
//        scanf("%lld", &n);
//        printf("%d\n",hanshu2(n));
//    } 
//    return 0;
//}




//
////代码1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, count = 0, i = 0, max = 0, arr[34] = { 0 };
//        scanf("%d", &n);
//        while (n)
//        {
//            arr[i++] = n % 2;
//            n /= 2;
//        }
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == 1) count++;
//            max = (max < count) ? count : max;
//            if (arr[j] != 1) count = 0;
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}
//

 
//
//#include <stdio.h>      // 引入标准输入输出库，用于输入输出操作
//#include <stdlib.h>     // 引入标准库，提供一些通用函数
//#include <string.h>     // 引入字符串处理库，用于字符串操作
//#include <math.h>       // 引入数学库，提供数学运算函数（虽然本代码未直接使用）
//
//// 函数功能：判断数字n在b进制下的所有系数是否出现次数相同
//// 参数：n-待判断的数字，b-进制基数
//// 返回值：1-满足条件，0-不满足条件
//int hanshu(long long n, int b)
//{
//    if (n == 0)
//    {
//        // 特殊情况：数字0在任何进制下都只有一个系数0，满足条件
//        return 1;
//    }
//    int count[100] = { 0 };  // 用于记录每个系数出现的次数，初始化全为0
//    int max = -1;           // 用于记录最大的系数值
//    long long m = n;         // 临时变量，用于计算，避免修改原n的值
//
//    // 循环计算n在b进制下的每个系数
//    while (m > 0)
//    {
//        int d = m % b;       // 计算当前位的系数（余数）
//        count[d]++;         // 对应系数的计数加1
//        if (d > max)
//        {
//            max = d;        // 更新最大系数值
//        }
//        m /= b;              // 去掉已经处理的最低位
//    }
//
//    int f = -1;              // 用于记录第一个非零计数（作为标准次数）
//    // 检查所有出现过的系数的计数是否相同
//    for (int i = 0; i <= max; i++)
//    {
//        if (count[i] > 0)    // 如果该系数出现过
//        {
//            if (f == -1)
//            {
//                f = count[i]; // 记录第一个系数的出现次数作为标准
//            }
//            else if (count[i] != f)
//            {
//                return 0;    // 发现次数不同，返回不满足
//            }
//        }
//    }
//    return 1;                // 所有系数出现次数相同，返回满足
//}
//
//// 函数功能：寻找满足条件的最小基数b
//// 参数：n-待处理的数字
//// 返回值：最小的满足条件的基数
//int hanshu2(long long n)
//{
//    if (n == 0)
//    {
//        // 特殊情况：0的最小满足基数是2（题目样例规定）
//        return 2;
//    }
//    // 从最小的基数2开始逐个尝试
//    for (int b = 2; ; b++)
//    {
//        // 检查当前基数是否满足条件
//        if (hanshu(n, b))
//        {
//            return b;        // 找到最小基数，返回
//        }
//    }
//}
//
//int main()
//{
//    int T;                  // 用于存储测试用例的数量
//    scanf("%d", &T);        // 读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        long long n;        // 用于存储每个测试用例的数字
//        scanf("%lld", &n);  // 读取数字
//        // 计算并输出满足条件的最小基数
//        printf("%d\n", hanshu2(n));
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <string.h>
//
//int T, n, n1, i, j;
//int max;
//int arr1[20], arr2[135];
//void hanshu()
//{
//    max = 0;
//    memset(arr1, 0, sizeof(arr1));
//    memset(arr2, 0, sizeof(arr2));
//    for (i = 2; i <= 16; i++)
//    {
//        n1 = n;
//        while (n1)
//        {
//            arr1[i] += n1 % i;
//            n1 /= i;
//        }
//        arr2[arr1[i]]++;
//        if (max < arr2[arr1[i]])     max = arr2[arr1[i]];
//    }
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        hanshu();
//        printf("%d\n", max);
//        for (i = 1; i < 135; i++)
//        {
//            if (arr2[i] == max)
//            {
//                printf("%d", i);
//                for (j = 2; j <= 16; j++)
//                    if (arr1[j] == i)
//                        printf(" %d", j);
//                puts("");
//            }
//        }
//    }
//    return 0;
//}



//
//
//#include <stdio.h>   // 引入标准输入输出库，用于scanf、printf等函数
//#include <string.h>  // 引入字符串处理库，用于memset等内存操作函数
//
//// 全局变量定义
//int T, n, n1, i, j;  // T表示测试用例数量，n是输入的整数，n1用于临时计算，i和j是循环变量
//int max;             // 用于记录出现次数最多的数码和的次数
//int arr1[20];        // 存储每个进制(2-16)对应的数码和，下标表示进制
//int arr2[135];       // 存储每个数码和出现的次数，下标表示数码和的值
//
//// 自定义函数：计算不同进制下的数码和并统计出现次数
//void hanshu()
//{
//    max = 0;                  // 初始化最大出现次数为0
//    memset(arr1, 0, sizeof(arr1));  // 将arr1数组所有元素清零
//    memset(arr2, 0, sizeof(arr2));  // 将arr2数组所有元素清零
//
//    // 遍历2到16进制
//    for (i = 2; i <= 16; i++)
//    {
//        n1 = n;               // 将n的值赋给临时变量n1，避免修改原变量n
//        // 计算当前进制i下的数码和
//        while (n1)
//        { 
//            arr1[i] += n1 % i;  // 累加当前位的数码（n1对i取余）
//            n1 /= i;            // 去掉已经处理的最低位
//        }
//        arr2[arr1[i]]++;        // 对应数码和的出现次数加1
//
//        // 更新最大出现次数
//        if (max < arr2[arr1[i]])
//            max = arr2[arr1[i]];
//    }
//}
//
//// 主函数：程序入口
//int main()
//{
//    scanf("%d", &T);  // 读取测试用例的数量T
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        scanf("%d", &n);  // 读取当前测试用例的整数n
//        hanshu();         // 调用函数计算数码和及出现次数
//
//        printf("%d\n", max);  // 输出最多出现的次数
//
//        // 遍历所有可能的数码和（1到134）
//        for (i = 1; i < 135; i++)
//        {
//            // 如果当前数码和i的出现次数等于最大次数
//            if (arr2[i] == max)
//            {
//                printf("%d", i);  // 输出数码和的值
//
//                // 遍历2到16进制，找出该数码和对应的所有进制
//                for (j = 2; j <= 16; j++)
//                    if (arr1[j] == i)
//                        printf(" %d", j);  // 输出对应的进制
//
//                puts("");  // 换行，准备输出下一个结果
//            }
//        }
//    }
//    return 0;  // 程序正常结束
//}









//
////代码2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, count = 0, i = 0, max = 0, arr[34] = { 0 };
//        scanf("%d", &n); 
//        if (n == 0)
//        {
//            printf("0\n");
//            continue;
//        }
//        while (n)
//        {
//            arr[i++] = n % 2;
//            n /= 2;
//        }
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == 1)
//            {
//                count++; 
//                if (count > max)
//                    max = count;
//            }
//            else
//            {
//                count = 0;
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}
//
// //代码3
//#include <stdio.h> 
//int main()
//{
//    int K, t;
//    int n;
//    int count, max ;
//    scanf("%d", &K);
//    while (K--)
//    {
//        count  = max = 0;
//        scanf("%d", &n);
//        while (n)
//        {
//            t = n % 2;
//            if (t == 1)    count++;
//            else
//            {
//                if (count > max )   max = count ;
//                count = 0;
//            }
//            n /= 2;
//        }
//        if (count > max )   max  = count;
//        printf("%d\n", max );
//    }
//    return 0;
//}
//

////代码4
//#include <stdio.h> 
//int main()
//{
//    int K;
//    scanf("%d", &K); 
//    while (K--)
//    {
//        int n;
//        scanf("%d", &n); 
//        int count = 0;
//        int max = 0; 
//        if (n == 0)
//        {
//            printf("0\n");
//            continue;
//        } 
//        while (n > 0)
//        {
//            if (n & 1)  
//            {
//                count++;
//                if (count > max)
//                    max = count;
//            }
//            else
//            {
//                count = 0;
//            }
//            n >>= 1;   
//        } 
//        printf("%d\n", max);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--) {
//        long long n;
//        scanf("%I64d", &n);
//        int t, cnt = 0, max = 0;
//        while (n) {
//            t = n % 2;
//            if (t == 1)cnt++;
//            else {
//                cnt = 0;
//            }
//            n /= 2;
//            if (cnt > max)max = cnt;
//        }
//        printf("%d\n", max);
//    }
//}




#include<stdio.h>
#include<math.h>
int hanshu(int a)
{
    if (a < 2) return 0;
    else if (a = 2) return 1;
    else if (a > 2)
    {
        if (a % 2 == 0) return 0;
        else
        {
            for (int i = 3; i < sqrt(a); i += 2)
            {
                if (a % i == 0) return 0;
            }
        }
    }
    else return 1;
}
int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        int n, a, flag = 1;
        scanf("%d", &n);
        while (n)
        {
            a = n % 10;
            n /= 10;
            if (hanshu(a)) continue;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}




