#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h> 
//char a[110][15];   
//int cnt[110]; 
//int len[110]; 
//void sort(char arr[], int n) 
//{
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++) 
//	{
//		for (j = 0; j < n - i - 1; j++) 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//} 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{ 
//		int n;
//		scanf("%d", &n); 
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s", a[i]);
//			len[i] = strlen(a[i]);
//		} 
//		int max  = 1; 
//		int pos = 0; 
//		for (int i = 0; i < n; i++)
//		{ 
//			for (int j = i + 1; j < n; j++)
//			{ 
//				char temp[15];
//				for (int k = 0; k < len[j]; k++)
//				{
//					temp[k] = a[j][k];
//				} 
//				sort(a[j], len[j]);
//				bool  same = true; 
//				if (len[i] != len[j])
//				{
//					 same = false;
//				}
//				else 
//				{
//					for (int k = 0; k < len[i]; k++)
//					{
//						if (a[i][k] != a[j][k]) 
//						{
//							 same = false;
//							break;
//						}
//					}
//				} 
//				if ( same)
//				{
//					cnt[i]++;
//				} 
//				for (int k = 0; k < len[j]; k++) 
//				{
//					a[j][k] = temp[k];
//				}
//			} 
//			if (cnt[i] + 1 > max ) 
//			{
//				max = cnt[i] + 1;
//				pos = i;
//			}
//		}  
//		printf("%d\n", max) ;
//		printf("%s\n", a[pos]); 
//		for (int j = pos + 1; j < n; j++)
//		{
//			char temp[15] = { '\0' };
//			for (int k = 0; k < len[j]; k++) 
//			{
//				temp[k] = a[j][k];
//			}
//			sort(a[j], len[j]);
//			bool  same = true;
//			if (len[pos] != len[j]) 
//			{
//				 same = false;
//			}
//			else
//			{
//				for (int k = 0; k < len[pos]; k++)
//				{
//					if (a[j][k] != a[pos][k]) 
//					{
//						 same = false;
//						break;
//					}
//				}
//			}
//			if ( same) {
//				printf("%s\n", temp);
//			}
//		} 
//		puts(""); 
//		for (int i = 0; i < 110; i++) 
//		{
//			cnt[i] = 0;
//			for (int j = 0; j < 15; j++) 
//			{
//				a[i][j] = '\0';
//			}
//		}
//	} 
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h> 
//
//char a[110][15];
//int cnt[110];
//int len[110]; 
//void sort(char arr[], int n) 
//{
//    int i, j, temp;
//    for (i = 0; i < n - 1; i++) 
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() 
//{
//    int t;
//    scanf("%d", &t);
//    while (t--) 
//    {
//        int n;
//        scanf("%d", &n); 
//        for (int i = 0; i < 110; i++)
//        {
//            cnt[i] = 0;
//            len[i] = 0;
//            for (int j = 0; j < 15; j++) 
//            {
//                a[i][j] = '\0';
//            }
//        } 
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%s", a[i]);
//            len[i] = strlen(a[i]);
//        } 
//        int max = 1;
//        int pos = 0; 
//        for (int i = 0; i < n; i++)
//        { 
//            char sorted_i[15];
//            strcpy(sorted_i, a[i]);
//            sort(sorted_i, len[i]); 
//            for (int j = i + 1; j < n; j++) 
//            { 
//                char sorted_j[15];
//                strcpy(sorted_j, a[j]);
//                sort(sorted_j, len[j]); 
//                bool same = true;
//                if (len[i] != len[j]) 
//                {
//                    same = false;
//                }
//                else 
//                { 
//                    for (int k = 0; k < len[i]; k++) 
//                    {
//                        if (sorted_i[k] != sorted_j[k])
//                        {
//                            same = false;
//                            break;
//                        }
//                    }
//                } 
//                if (same) 
//                {
//                    cnt[i]++;
//                }
//            } 
//            if (cnt[i] + 1 > max) 
//            {
//                max = cnt[i] + 1;
//                pos = i;
//            }
//        } 
//        printf("%d\n", max); 
//        printf("%s\n", a[pos]); 
//        char sorted_pos[15];
//        strcpy(sorted_pos, a[pos]);
//        sort(sorted_pos, len[pos]); 
//        for (int j = 0; j < n; j++)
//        {
//            if (j == pos) continue;  
//            char sorted_j[15];
//            strcpy(sorted_j, a[j]);
//            sort(sorted_j, len[j]); 
//            bool same = true;
//            if (len[pos] != len[j]) 
//            {
//                same = false;
//            }
//            else
//            {
//                for (int k = 0; k < len[pos]; k++)
//                {
//                    if (sorted_j[k] != sorted_pos[k]) 
//                    {
//                        same = false;
//                        break;
//                    }
//                }
//            } 
//            if (same) 
//            {
//                printf("%s\n", a[j]);
//            }
//        } 
//        puts("");  
//    }
//    return 0;
//}


//#include<stdio.h>      // 标准输入输出库
//#include<string.h>     // 字符串处理库（提供strcpy等函数）
//#include<stdbool.h>    // 布尔类型库（提供bool、true、false）
//
//// 全局变量定义
//char a[110][15];       // 存储所有输入的字符串（最多110个，每个最长14字符+结束符）
//int cnt[110];          // 记录每个字符串所在组的其他字符串数量
//int len[110];          // 记录每个字符串的长度
//
//// 冒泡排序函数：对字符数组按ASCII码从小到大排序
//void sort(char arr[], int n)
//{
//    int i, j, temp;
//    // 外层循环：控制排序轮次（共n-1轮）
//    for (i = 0; i < n - 1; i++)
//    {
//        // 内层循环：每轮比较未排序部分（每轮减少一个比较对象）
//        for (j = 0; j < n - i - 1; j++)
//        {
//            // 若前一个字符大于后一个，交换位置
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int t;                  // 测试用例数量
//    scanf("%d", &t);        // 读取测试用例数量
//    while (t--)             // 循环处理每个测试用例
//    {
//        int n;              // 当前测试用例的字符串数量
//        scanf("%d", &n);    // 读取字符串数量
//
//        // 初始化全局数组（避免上一个测试用例的残留数据影响）
//        for (int i = 0; i < 110; i++)
//        {
//            cnt[i] = 0;             // 计数器清零
//            len[i] = 0;             // 长度记录清零
//            for (int j = 0; j < 15; j++)
//            {
//                a[i][j] = '\0';     // 字符串数组清空
//            }
//        }
//
//        // 读取当前测试用例的所有字符串并记录长度
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%s", a[i]);      // 读取字符串
//            len[i] = strlen(a[i]);  // 计算并存储字符串长度
//        }
//
//        int max = 1;        // 最大组的大小（至少为1，即字符串本身）
//        int pos = 0;        // 最大组中第一个出现的字符串的索引
//
//        // 遍历每个字符串，统计其所在组的大小
//        for (int i = 0; i < n; i++)
//        {
//            // 复制第i个字符串并排序（用于比较）
//            char sorted_i[15];
//            strcpy(sorted_i, a[i]);   // 复制原字符串
//            sort(sorted_i, len[i]);   // 对复制的字符串排序
//
//            // 与后续字符串比较，判断是否同组
//            for (int j = i + 1; j < n; j++)
//            {
//                // 复制第j个字符串并排序
//                char sorted_j[15];
//                strcpy(sorted_j, a[j]);
//                sort(sorted_j, len[j]);
//
//                bool same = true;     // 标记是否为同一组
//                if (len[i] != len[j]) // 长度不同则一定不同组
//                {
//                    same = false;
//                }
//                else
//                {
//                    // 长度相同则比较排序后的每个字符
//                    for (int k = 0; k < len[i]; k++)
//                    {
//                        if (sorted_i[k] != sorted_j[k])
//                        {
//                            same = false;
//                            break;  // 有一个字符不同则不同组
//                        }
//                    }
//                }
//                if (same)  // 若同组，增加第i个字符串的计数
//                {
//                    cnt[i]++;
//                }
//            }
//
//            // 更新最大组信息（若当前组更大）
//            if (cnt[i] + 1 > max)  // +1是因为cnt只记录了其他元素，需包含自身
//            {
//                max = cnt[i] + 1;
//                pos = i;            // 记录当前组第一个出现的字符串索引
//            }
//        }
//
//        // 输出最大组的大小
//        printf("%d\n", max);
//        // 输出最大组中第一个出现的字符串
//        printf("%s\n", a[pos]);
//
//        // 准备用于比较的"基准字符串"（排序后的第一个字符串）
//        char sorted_pos[15];
//        strcpy(sorted_pos, a[pos]);
//        sort(sorted_pos, len[pos]);
//
//        // 遍历所有字符串，输出与基准同组的其他字符串（按输入顺序）
//        for (int j = 0; j < n; j++)
//        {
//            if (j == pos) continue;  // 跳过已输出的第一个字符串
//
//            // 对当前字符串排序并与基准比较
//            char sorted_j[15];
//            strcpy(sorted_j, a[j]);
//            sort(sorted_j, len[j]);
//
//            bool same = true;
//            if (len[pos] != len[j])  // 长度不同则不同组
//            {
//                same = false;
//            }
//            else
//            {
//                // 比较排序后的字符
//                for (int k = 0; k < len[pos]; k++)
//                {
//                    if (sorted_j[k] != sorted_pos[k])
//                    {
//                        same = false;
//                        break;
//                    }
//                }
//            }
//            if (same)  // 若同组则输出
//            {
//                printf("%s\n", a[j]);
//            }
//        }
//        puts("");  // 每个测试用例后输出一个空行
//    }
//    return 0;
//}



//#include <stdio.h> 
//long long gcd(long long a, long long b)
//{
//    while (b != 0) 
//    {
//        long long temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k); 
//        if (m == k) 
//        {
//            printf("0\n");
//            continue;
//        } 
//        long long num  = 0; 
//        long long d  = 1;   
//        for (int i = k - 1; i >= m; i--) 
//        { 
//            long long a = n;
//            long long b = n - i; 
//            long long new_num = num  * b + a * d ;
//            long long new_d = d  * b; 
//            long long g = gcd(new_num, new_d );
//            num  = new_num / g;
//            d  = new_d / g;
//        } 
//        if (d  == 1) 
//        {
//            printf("%lld\n", num  );
//        }
//        else {
//            printf("%lld/%lld\n", num , d );
//        }
//    }
//    return 0;
//}



//#include <stdio.h> 
//
//// 计算两个数的最大公约数（用于分数化简）
//long long gcd(long long a, long long b)
//{
//    while (b != 0)
//    {
//        long long temp = b;  // 临时保存b的值
//        b = a % b;           // 用a除以b的余数更新b
//        a = temp;            // 用原来的b更新a
//    }
//    return a;  // 循环结束时，a即为最大公约数
//}
//
//int main()
//{
//    int T;                  // 测试用例的数量
//    scanf("%d", &T);        // 读取测试用例数量
//    while (T--)             // 循环处理每个测试用例
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k);  // 读取当前测试用例的n(总灯数)、m(初始亮灯数)、k(目标亮灯数)
//
//        // 若初始亮灯数已等于目标，无需按键，直接输出0
//        if (m == k)
//        {
//            printf("0\n");
//            continue;  // 跳过后续计算，处理下一个测试用例
//        }
//
//        long long num = 0;   // 存储当前累加和的分子
//        long long d = 1;     // 存储当前累加和的分母（初始为1，即0/1）
//
//        // 从k-1逆向循环到m，累加每一步的期望值（递推关系的实现）
//        for (int i = k - 1; i >= m; i--)
//        {
//            // 当前步骤的期望值为 n/(n-i)，其中a是分子，b是分母
//            long long a = n;
//            long long b = n - i;
//
//            // 分数加法：将当前累加和(num/d)与新项(a/b)相加
//            // 公式：num/d + a/b = (num*b + a*d) / (d*b)
//            long long new_num = num * b + a * d;  // 新分子
//            long long new_d = d * b;              // 新分母
//
//            // 计算新分子和新分母的最大公约数，用于化简分数
//            long long g = gcd(new_num, new_d);
//            num = new_num / g;  // 化简后的分子
//            d = new_d / g;      // 化简后的分母
//        }
//
//        // 根据分母是否为1，输出整数或分数
//        if (d == 1)
//        {
//            printf("%lld\n", num);  // 分母为1时直接输出分子（整数）
//        }
//        else
//        {
//            printf("%lld/%lld\n", num, d);  // 输出最简分数
//        }
//    }
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    long long* a = (long long*)malloc(n * sizeof(long long));
//    long long sum = 0;
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &a[i]);
//        sum += a[i];
//    }
//
//    // 特殊情况：n=2时不符合题意（题目n≥3），但按题意n≥3，此处处理n=2防止除0
//    if (n == 2) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//
//    // 目标值T = 总和 / (n-2)，必须为整数
//    if (sum % (n - 2) != 0) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//    long long T = sum / (n - 2);
//
//    // 计算所有元素与T的差距总和（用于验证s是否符合条件）
//    long long total_gap = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] > T) {  // 元素大于目标值，无法通过加1达到
//            printf("0\n");
//            free(a);
//            return 0;
//        }
//        total_gap += (T - a[i]);
//    }
//
//    // 统计满足条件的(a_i, a_j)对数：a_i + a_j == total_gap
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i] + a[j] == total_gap) {
//                count++;
//            }
//        }
//    }
//
//    printf("%d\n", count);
//    free(a);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//int cmp( void* a, void* b) 
//{
//    return strcmp(*( char**)a, *( char**)b);
//} 
//int main() 
//{
//    char s[155];
//    while (scanf("%s", s) != EOF) 
//    {
//        int n = strlen(s);
//        int total = n * (n + 1) / 2; 
//        char** strs = (char**)malloc(total * sizeof(char*));
//        int idx = 0; 
//        for (int i = 0; i < n; i++) 
//        {
//            for (int j = i; j < n; j++)
//            {
//                int len = i + (n - 1 - j); 
//                if (len == 0)
//                {
//                    continue;
//                }
//                strs[idx] = (char*)malloc(len + 1);
//                int pos = 0; 
//                for (int k = 0; k < i; k++) 
//                {
//                    strs[idx][pos++] = s[k];
//                } 
//                for (int k = j + 1; k < n; k++) 
//                {
//                    strs[idx][pos++] = s[k];
//                }
//                strs[idx][pos] = '\0';
//                idx++;
//            }
//        } 
//        qsort(strs, idx, sizeof(char*), cmp); 
//        int count = 0;
//        if (idx > 0) 
//        {
//            count = 1;
//            for (int i = 1; i < idx; i++) 
//            {
//                if (strcmp(strs[i], strs[i - 1]) != 0)
//                {
//                    count++;
//                }
//            }
//        } 
//        printf("%d\n", count); 
//        for (int i = 0; i < idx; i++) 
//        {
//            free(strs[i]);
//        }
//        free(strs);
//    }
//    return 0;
//}






//#include <stdio.h>      // 标准输入输出库
//#include <stdlib.h>     // 内存分配函数（malloc/free）
//#include <string.h>     // 字符串处理函数（strcmp/strlen）
//
//// 比较函数：用于qsort对字符串数组排序（按字典序）
//int cmp(void* a, void* b)
//{
//    // 将void*转换为char**，再解引用得到字符串指针，最后用strcmp比较
//    return strcmp(*(char**)a, *(char**)b);
//}
//
//int main()
//{
//    char s[155];                 // 存储输入的字符串（最长150字符）
//    while (scanf("%s", s) != EOF) // 循环读取多组测试用例
//    {
//        int n = strlen(s);       // 计算当前字符串长度
//        // 计算所有可能的非空删除区间总数：n*(n+1)/2（i从0到n-1，j从i到n-1）
//        int total = n * (n + 1) / 2;
//        // 动态分配字符串数组，用于存储所有删除后生成的字符串
//        char** strs = (char**)malloc(total * sizeof(char*));
//        int idx = 0;             // 记录有效字符串的个数（排除空串后）
//
//        // 枚举所有可能的删除区间[i..j]（i≤j，即删除从i到j的连续字符）
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i; j < n; j++)
//            {
//                // 计算删除[i..j]后剩余字符串的长度：
//                // 左边保留[0..i-1]（长度i），右边保留[j+1..n-1]（长度n-1-j）
//                int len = i + (n - 1 - j);
//
//                if (len == 0)    // 若剩余长度为0（删除了整个字符串），跳过（不计入结果）
//                {
//                    continue;
//                }
//
//                // 为当前剩余字符串分配内存（+1用于存储结束符'\0'）
//                strs[idx] = (char*)malloc(len + 1);
//                int pos = 0;     // 记录当前字符串的写入位置
//
//                // 复制左边部分[0..i-1]到结果字符串
//                for (int k = 0; k < i; k++)
//                {
//                    strs[idx][pos++] = s[k];
//                }
//
//                // 复制右边部分[j+1..n-1]到结果字符串
//                for (int k = j + 1; k < n; k++)
//                {
//                    strs[idx][pos++] = s[k];
//                }
//
//                strs[idx][pos] = '\0'; // 字符串结束符
//                idx++;                 // 有效字符串计数+1
//            }
//        }
//
//        // 对所有有效字符串排序（便于去重）
//        qsort(strs, idx, sizeof(char*), cmp);
//
//        // 统计不同字符串的数量
//        int count = 0;
//        if (idx > 0)  // 若存在有效字符串
//        {
//            count = 1; // 至少有1个不同的字符串
//            // 遍历排序后的字符串，相邻比较去重
//            for (int i = 1; i < idx; i++)
//            {
//                // 若当前字符串与前一个不同，计数+1
//                if (strcmp(strs[i], strs[i - 1]) != 0)
//                {
//                    count++;
//                }
//            }
//        }
//
//        printf("%d\n", count); // 输出结果
//
//        // 释放动态分配的内存（避免内存泄漏）
//        for (int i = 0; i < idx; i++)
//        {
//            free(strs[i]);
//        }
//        free(strs);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<stdlib.h>
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    long long sum = 0;
//    int* ans = (int*)malloc(sizeof(int));
//    for (int i = 0; i < n; ++i) 
//    {
//        scanf("%d", &ans[i]);
//        sum += ans[i];
//    }
//    if (sum % (n - 2) == 0) 
//    {
//        long long k = sum / (n - 2);
//        int cnt = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            if (ans[i] > k)
//            {
//                cnt++;
//            }
//        }
//        if (cnt == 0)
//        {
//            printf("%lld", (long long)n * (n - 1) / 2);
//        }
//        else if (cnt == 1) 
//        {
//            printf("%d", n - 1);
//        }
//        else if (cnt == 2) 
//        {
//            printf("1");
//        }
//        else 
//        {
//            printf("0");
//        }
//    }
//    else 
//    {
//        printf("0");
//    }
//    return 0;
//}
// 





//#include <stdio.h>
//#include <stdlib.h> 
//int main()
//{
//    int n; 
//    long long sum = 0;
//    scanf("%d", &n);
//    int* ans = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d", &ans[i]);
//        sum += ans[i];
//    }
//    if (sum % (n - 2) != 0)   printf("0\n");
//    long long k = sum / (n - 2);
//    int cnt = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (ans[i] > k)
//        {
//            cnt++;
//            if (cnt > 2)
//            {
//                printf("0\n");
//                free(ans);
//                return 0;
//            }
//        }
//    }
//    if (cnt == 0)        printf("%lld\n",(long long) n * (n - 1) / 2);
//    else if (cnt == 1)   printf("%d\n", n - 1);
//    else                 printf("1\n");
//    free(ans);
//    return 0;
//}
// 








//#include <stdio.h>
//#include <stdlib.h> 
//int main()
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        int n;
//        scanf("%d", &n);
//        int* arr = (int*)malloc(n * sizeof(int));  
//        for (int i = 0; i < n; i++)   scanf("%d", &arr[i]);
//        int total = 0;
//        int max  = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            total += arr[i];
//            if (arr[i] > max )
//            {
//                max  = arr[i];
//            }
//        } 
//        int result = 2 * total - max ;
//        printf("%d\n", result); 
//        free(arr);
//    } 
//    return 0;
//}



//#include <stdio.h>
//int main() {
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int n, i, k;
//        scanf("%d", &n);
//        int a[10001];
//        int x1[10001] = { 0 };
//        int x2[10001] = { 0 };
//        for (i = 1; i <= n; i++) {
//            scanf("%d", &a[i]);
//        }
//        for (i = 1; i <= n; i++) {
//            x1[i] = x1[i - 1] + a[i];//前缀和
//        }
//        for (i = n; i >= 1; i--) {
//            x2[i] = x2[i + 1] + a[i];//后缀和
//        }
//        // 纯顺时针
//        int right = x1[n - 1];
//        // 纯逆时针
//        int left = x2[2];
//        int min = (right < left) ? right : left;
//        // 混合走法
//        for (k = 2; k <= n - 1; k++) {//遍历寻找最小权和
//            int sum1 = x1[k - 1];//顺时针加到第k节点前
//            int sum2 = x2[k + 1];//逆时针加到第k节点后
//            // 情况A：1→k→1→n→...→k+1
//            int cost = 2 * sum1 + sum2;
//            if (cost < min) {
//                min = cost;
//            }
//            // 情况B：1→n→...→k→1→2→...→k-1
//            cost = 2 * sum2 + sum1;
//            if (cost < min) {
//                min = cost;
//            }
//        }
//        printf("%d\n", min);
//    }
//    return 0;
//}



//#include <stdio.h>
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, i, k;
//        scanf("%d", &n);
//        int a[10001], arr1[10001] = { 0 }, arr2[10001] = { 0 };
//        for (i = 1; i <= n; i++) scanf("%d", &a[i]);
//        for (i = 1; i <= n; i++) arr1[i] = arr1[i - 1] + a[i];
//        for (i = n; i >= 1; i--) arr2[i] = arr2[i + 1] + a[i];
//        int right = arr1[n - 1], left = arr2[2], min = right < left ? right : left;
//        for (k = 2; k <= n - 1; k++) 
//        {
//            int sum1 = arr1[k - 1], sum2 = arr2[k + 1];
//            int sum = 2 * sum1 + sum2;
//            if (sum < min) min = sum;
//            sum = 2 * sum2 + sum1;
//            if (sum < min) min = sum;
//        }
//        printf("%d\n", min);
//    }
//    return 0;
//}





 