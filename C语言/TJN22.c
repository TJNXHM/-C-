#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  




// 
//#include <stdbool.h> 
//#include <stdio.h>
//#include <string.h>
//
//int cnt1, cnt2, len;
//char str[210];
//
//int main()
//{
//    while (gets(str) != NULL)
//    {
//        bool books[30] = { 0 };
//        cnt1 = cnt2 = 0;
//        len = strlen(str);
//        for (int i = 0; i < len; i++)
//        {
//            if (str[i] == ' ')
//            {
//                cnt1++; continue;
//            }
//            if (str[i] >= 97)  str[i] -= 32;
//            if (!books[str[i] - 'A']) cnt2++;
//            books[str[i] - 'A'] = true;
//        }
//        if (cnt1 >= 10 || cnt2 >= 11)   puts("No");
//        else   puts("Yes");
//    }
//    return 0;
////}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h> 
//int hanshu2(const void* a, const void* b)
//{
//    return *(const char*)a - *(const char*)b;
//} 
//int hanshu1(const void* a, const void* b)
//{
//    return strcmp(*(const char**)a, *(const char**)b);
//}  
//void get(char* str, char* sig)
//{
//    size_t len = strlen(str); 
//    if (len > 0 && str[len - 1] == '\n')
//    {
//        str[len - 1] = '\0';
//        len--;
//    } 
//    strncpy(sig, str, 10);  
//    sig[10] = '\0';   
//    qsort(sig, len, 1, hanshu2);
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    getchar();  
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        getchar();   
//        char strs[100][11] = { 0 };   
//        char sigs[100][11] = { 0 };
//        int group[100] = { 0 };
//        int size[100] = { 0 };
//        int count = 0; 
//        for (int i = 0; i < n; i++)
//        { 
//            if (fgets(strs[i], 11, stdin) == NULL)
//            {
//                break; 
//            }
//
//            get(strs[i], sigs[i]); 
//            int found = 0; 
//            for (int j = 0; j < count; j++)
//            {
//                if (strcmp(sigs[i], sigs[group[j]]) == 0)
//                {
//                    group[i] = j;
//                    size[j]++;
//                    found = 1;
//                    break;
//                }
//            } 
//            if (!found && count < 100)
//            {
//                group[i] = count;
//                size[count] = 1;
//                count++;
//            }
//        }
//         
//        int max_size = 0;
//        int max_index = 0;
//        for (int i = 0; i < count; i++)
//        {
//            if (size[i] > max_size)
//            {
//                max_size = size[i];
//                max_index = i;
//            }
//        } 
//        printf("%d\n", max_size);
//        for (int i = 0; i < n; i++)
//        {
//            if (group[i] == max_index)
//            {
//                printf("%s\n", strs[i]);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h> 
//int compare(const void* a, const void* b)
//{
//    return *(char*)a - *(char*)b;  
//} 
//void get(char* str, char* sig)
//{
//    strcpy(sig, str);               
//    qsort(sig, strlen(sig), 1, compare);  
//} 
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        getchar(); 
//        char strs[100][11];     
//        char sigs[100][11];    
//        int group[100];       
//        int  size[100] = { 0 };  
//        int  count = 0;     
//        for (int i = 0; i < n; i++)
//        { 
//            fgets(strs[i], 11, stdin); 
//            get(strs[i], sigs[i]); 
//            int found = 0;
//            for (int j = 0; j < count; j++)
//            { 
//                if (strcmp(sigs[i], sigs[group[j]]) == 0)
//                {
//                    group[i] = j;       
//                    size[j]++;    
//                    found = 1;
//                    break;
//                }
//            } 
//            if (!found)
//            {
//                group[i] = count; 
//                size[count] = 1; 
//                count++;          
//            }
//        } 
//        int max1 = 0;
//        int max2 = 0;
//        for (int i = 0; i < count; i++)
//        { 
//            if (size[i] > max1)
//            {
//                max1 = size[i];
//                max2 = i;
//            }
//        } 
//        printf("%d\n", max1); 
//        for (int i = 0; i < n; i++)
//        {
//            if (group[i] == max2)
//            {
//                printf("%s\n", strs[i]);
//            }
//        }
//        printf("\n");  
//    } 
//    return 0;
//}


//
//
//#include <stdio.h>
//#include <string.h>  
//char hanshu1(char c)
//{ 
//    char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8','q','p','y','w','u','9' };
//    char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8','b','d','h','m','n','6' };
//
//    for (int i = 0; i < sizeof(char1) / sizeof(char1[0]); i++)
//    {
//        if (char1[i] == c)
//        {
//            return char2[i];
//        }
//    }
//    return c;  
//} 
//void hanshu2(char* str)
//{
//    int length = strlen(str);
//    for (int i = 0; i < length / 2; i++)
//    { 
//        char temp = str[i];
//        str[i] = str[length - i - 1];
//        str[length - i - 1] = temp;
//    }
//} 
//int main()
//{
//    char str[21]; 
//    while (fgets(str, sizeof(str), stdin) != NULL)
//    { 
//        str[strcspn(str, "\n")] = '\0';  
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            str[i] = hanshu1(str[i]);
//        } 
//        hanshu2(str); 
//        printf("%s\n", str);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>    // 引入标准输入输出库，用于输入输出操作
//#include <string.h>   // 引入字符串处理库，用于字符串相关函数
//
//// 函数hanshu1：对单个字符进行特定映射转换
//char hanshu1(char c)
//{
//    // 定义字符映射表1，存储需要被替换的字符
//    char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8','q','p','y','w','u','9' };
//    // 定义字符映射表2，存储对应的替换字符（与char1位置一一对应）
//    char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8','b','d','h','m','n','6' };
//
//    // 遍历字符映射表，查找匹配的字符并返回对应替换字符
//    for (int i = 0; i < sizeof(char1) / sizeof(char1[0]); i++)
//    {
//        if (char1[i] == c)  // 如果找到匹配的字符
//        {
//            return char2[i]; // 返回对应的替换字符
//        }
//    }
//    return c;  // 如果没有找到匹配的字符，返回原字符
//}
//
//// 函数hanshu2：将字符串反转
//void hanshu2(char* str)
//{
//    int length = strlen(str);  // 获取字符串长度
//    // 遍历字符串前半部分，与后半部分对称位置的字符交换
//    for (int i = 0; i < length / 2; i++)
//    {
//        char temp = str[i];  // 临时保存当前字符
//        // 交换当前字符与对称位置的字符
//        str[i] = str[length - i - 1];
//        str[length - i - 1] = temp;
//    }
//}
//
//int main()
//{
//    char str[21];  // 定义字符数组，用于存储输入的字符串（最多20个字符）
//
//    // 循环读取输入的字符串，直到文件结束（Ctrl+Z终止输入）
//    while (fgets(str, sizeof(str), stdin) != NULL)
//    {
//        // 去除字符串中的换行符，确保处理正确
//        str[strcspn(str, "\n")] = '\0';
//
//        // 遍历字符串每个字符，使用hanshu1进行转换
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            str[i] = hanshu1(str[i]);
//        }
//
//        // 使用hanshu2将转换后的字符串反转
//        hanshu2(str);
//
//        // 输出处理后的字符串
//        printf("%s\n", str);
//    }
//    return 0;  // 程序正常结束
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[21] = { 0 };
//	char arr2[21] = { 0 };
//	while ((scanf("%s", arr)) == 1)
//	{
//		int a = strlen(arr); 
//		char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8' };
//		char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8' };
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < 15;j++)
//			{  
//				if (arr[i] == char1[j])
//				{
//					arr2[i] = char2[j];
//					continue;
//				}
//				else if (arr[i] == char2[j])  arr2[i]=char1[j];
//			}
//		}
//		 
//		    for (int i = 0; i < a/2 ; i++)
//		    {
//		        char temp = arr2[i];   
//		        arr2[i] =arr2[a - i - 1];
//		        arr2[a - i - 1] = temp;
//		    } 
//
//		printf("%s\n",arr2);
//	}
//	return 0;
//}





//
//#include <stdio.h>
//#include <string.h>
//
//int N, cnt, p, maxP;
//char name[22][20], maxPeople[20];
//char flag[5] = { 'E','N','D' };
//
//int main()
//{
//    scanf("%d", &N);
//    while (N--)
//    {
//        cnt = 0;
//        scanf("%s", name[0]);                            
//        while (1)
//        {
//            scanf("%s", name[++cnt]);
//            if (strcmp(name[cnt], flag) == 0)    break;  
//        }
//
//        for (int i = cnt - 1; i > 0; i--)              
//        {
//            for (int j = 1; j < i; j++)
//            {
//                if (strcmp(name[j], name[j + 1]) > 0)
//                {
//                    char t[20] = { 0 };
//                    strcpy(t, name[j]);
//                    strcpy(name[j], name[j + 1]);
//                    strcpy(name[j + 1], t);
//                }
//            }
//        }
//        p = maxP = 1;                        
//        strcpy(maxPeople, name[1]);
//        for (int i = 2; i < cnt; i++)
//        {
//            if (strcmp(name[i], name[i - 1]) == 0)    
//            {
//                p++;
//                if (p > maxP)                        
//                {
//                    maxP = p;
//                    strcpy(maxPeople, name[i]);
//                }
//            }
//            else
//                p = 1;                               
//        }
//        printf("%s\n", maxPeople);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include <string.h>  // 引入字符串处理库，用于字符串比较、复制等操作
//
//// 全局变量定义
//int N, cnt, p, maxP;               // N：测试用例数量；cnt：记录人数；p：当前名字出现次数；maxP：最大出现次数
//char name[22][20], maxPeople[20];  // name：存储名字的二维数组；maxPeople：出现次数最多的名字
//char flag[5] = { 'E','N','D' };    // 用于判断结束的标志（实际应为字符串"END"，这里初始化方式不规范）
//
//int main()
//{
//    scanf("%d", &N);  // 读取测试用例的数量
//    while (N--)       // 循环处理每个测试用例，N递减至0时结束
//    {
//        cnt = 0;      // 重置计数器，记录当前测试用例中的名字数量
//        // 读取起始标识（应为"START"），存储在name[0]中
//        scanf("%s", name[0]);
//        while (1)     // 无限循环，用于读取后续名字，直到遇到"END"
//        {
//            // 先将计数器加1，再读取名字存储到对应位置
//            scanf("%s", name[++cnt]);
//            // 比较当前读取的名字是否为"END"，如果是则跳出循环
//            if (strcmp(name[cnt], flag) == 0)    break;
//        }
//
//        // 冒泡排序：对读取的名字（除了START和END）按字典序从小到大排序
//        for (int i = cnt - 1; i > 0; i--)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                // 比较相邻两个名字的字典序，如果前者大于后者则交换
//                if (strcmp(name[j], name[j + 1]) > 0)
//                {
//                    char t[20] = { 0 };  // 临时字符串用于交换
//                    strcpy(t, name[j]);
//                    strcpy(name[j], name[j + 1]);
//                    strcpy(name[j + 1], t);
//                }
//            }
//        }
//
//        // 初始化：默认第一个名字出现次数为1，是出现次数最多的
//        p = maxP = 1;
//        strcpy(maxPeople, name[1]);
//
//        // 遍历排序后的名字，统计每个名字出现的次数，找出出现次数最多的名字
//        for (int i = 2; i < cnt; i++)
//        {
//            // 如果当前名字与前一个名字相同，说明是同一个人，计数加1
//            if (strcmp(name[i], name[i - 1]) == 0)
//            {
//                p++;
//                // 如果当前计数超过最大计数，更新最大计数和对应的名字
//                if (p > maxP)
//                {
//                    maxP = p;
//                    strcpy(maxPeople, name[i]);
//                }
//            }
//            else  
//                p = 1;  // 如果当前名字与前一个不同，重置计数为1
//        }
//
//        // 输出当前测试用例中出现次数最多的名字
//        printf("%s\n", maxPeople);
//    }
////    return 0;  // 程序正常结束
//}

//
//
//#include<stdio.h>
//#include<string.h>
// 
//int hanshu2(char* str1, char* str2)
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int max = 0; 
//    for (int k = 1; k <= len1 && k <= len2; k++) 
//    {
//        int match = 1;
//        for (int i = 0; i < k; i++)
//        {
//            if (str1[len1 - k + i] != str2[i]) 
//            {
//                match = 0;
//                break;
//            }
//        }
//        if (match) 
//        {
//            max = k;
//        }
//    }
//    return max;
//} 
//void hanshu(char* str1, char* str2, char* result) 
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int overlap = hanshu2(str1, str2); 
//    strcpy(result, str1); 
//    strcat(result, &str2[overlap]);
//} 
//int main() 
//{
//    char str1[202] = { 0 }, str2[202] = { 0 };
//    while (scanf("%s %s", str1, str2) == 2) 
//    {
//        char res1[404] = { 0 }, res2[404] = { 0 }; 
//        hanshu(str1, str2, res1);
//        hanshu(str2, str1, res2); 
//        int len1 = strlen(res1);
//        int len2 = strlen(res2); 
//        if (len1 < len2) 
//        {
//            printf("%s\n", res1);
//        }
//        else if (len1 > len2) 
//        {
//            printf("%s\n", res2);
//        }
//        else 
//        { 
//            if (strcmp(res1, res2) < 0) 
//            {
//                printf("%s\n", res1);
//            }
//            else 
//            {
//                printf("%s\n", res2);
//            }
//        }
//    }
//    return 0;
////}
//#include<stdio.h>
//int arr[51];
//int main()
//{
//	int t;
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i < 51; i++)
//	{ 
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	scanf("%d", &t);
//	while (t--) 
//	{
//		int n;
//		scanf("%d", &n); 
//		int count = 0;
//		for (int i = 1; i < 50; i++) 
//		{
//			for (int j = i; j < 50; j++) 
//			{
//				for (int k = j; k <= 50; k++) 
//				{
//					 if (n == arr[i] + arr[j] + arr[k]) 
//					 {
//						count++;
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//
//	}
//	return 0;
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
//        int arr[10002] = { 0 }, n;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        long long sum1 = 0, max = 0, sum2 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            max = (max > arr[i] ? max : arr[i]);
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (arr[i] == max) break;
//            sum1 += arr[i];
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum2 += arr[i];
//        }
//        long long sum3 = sum2 - sum1 - max + arr[0];
//        long long a = sum1 + sum2 - max, b = sum2 - arr[n - 1], c = sum2 - arr[0], d = sum3 + sum2 - max, min = 0;
//        min = (a <= b) ? a : b;
//        min = (min <= c) ? min : c;
//        min = (min <= d) ? min : d;
//        printf("%lld\n", min);
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//long  long  hanshu1(long long a)
//{
//    long long  sum = 0;
//    while (a != 0)
//    {
//        sum += a % 10;
//        a /= 10;
//    }
//    return sum;
//}
//long long hanshu2(long long n)
//{
//    for (int x = 2; x * x <= n; x++)
//    {
//        if (n % x == 0)
//        {
//            int y = n / x;
//            if (y == 1) continue;
//            if (hanshu1(n) == hanshu1(x) * hanshu1(y))
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long L, R, k, count = 0;
//        scanf("%lld %lld", &L, &R);
//        for (long long i = L; i <= R; i++)
//        {
//            if (hanshu2(i)) count++;
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>
//#include <stdbool.h>
//
//// 计算数字n的数码和
//long long digit_sum(long long n) {
//    long long sum = 0;
//    while (n > 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//// 判断n是否满足数码积性
//bool has_property(long long n) {
//    // 小于4的数不可能表示为两个大于1的数的乘积
//    if (n < 4) return false;
//
//    long long s_n = digit_sum(n);
//
//    // 检查所有可能的因子对(x,y)
//    for (long long x = 2; x * x <= n; x++) {
//        if (n % x == 0) {  // x是n的因子
//            long long y = n / x;
//            if (y == 1) continue;  // y必须大于1
//
//            long long s_x = digit_sum(x);
//            long long  s_y = digit_sum(y);
//
//            if (s_x * s_y == s_n) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//// 计算[L, R]区间内满足数码积性的数的个数
//int count_in_range(int L, int R) {
//    long long  count = 0;
//    for (long long n = L; n <= R; n++) {
//        if (has_property(n)) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    long long  T;
//    scanf("%d", &T);
//
//    while (T--) {
//        long long L, R;
//        scanf("%lld %lld", &L, &R);
//        printf("%lld\n", count_in_range(L, R));
//    }
//
//    return 0;
//}





//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//// 判断一个数是否在序列Y中
//bool isInY(long long x, int c, int d, long long max_limit) {
//    if (x == 0) return true; // 0是初始值，但我们会在主函数中排除
//
//    // 处理c=1的特殊情况（线性增长）
//    if (c == 1) {
//        if (d == 0) return false; // 题目中d是正整数，这里只是防御性判断
//        if ((x % d) != 0) return false;
//        return true;
//    }
//
//    // 处理c>1的情况（指数增长）
//    long long y = 0;
//    while (y < x) {
//        y = c * y + d;
//        if (y == x) return true;
//        if (y > max_limit) break;
//    }
//    return false;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    const long long MAX_LIMIT = 1000000000;
//
//    while (T--) {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//
//        long long count = 0;
//        long long x = 0;
//
//        // 生成序列X并检查是否在Y中
//        while (1) {
//            x = a * x + b; // 计算下一个值
//            if (x > MAX_LIMIT) break; // 超出范围，停止
//            if (x < 1) continue; // 只统计>=1的数
//
//            // 检查x是否在序列Y中
//            if (isInY(x, c, d, MAX_LIMIT)) {
//                count++;
//            }
//
//            // 防止无限循环（当a=1时是线性增长，需要特殊处理）
//            if (a == 1) {
//                // 计算剩余步数，避免逐个计算
//                if (x > MAX_LIMIT - b) break;
//            }
//            else if (x > MAX_LIMIT / a) {
//                // 防止下一步计算溢出
//                break;
//            }
//        }
//
//        printf("%lld\n", count);
//    }
//    return 0;
//}




//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数，用于qsort排序
//int compare(const void* a, const void* b) {
//    long long num1 = *(long long*)a;
//    long long num2 = *(long long*)b;
//    return (num1 > num2) - (num1 < num2);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    long long* a = (long long*)malloc(n * sizeof(long long));
//    long long sum = 0;
//
//    // 读取数组并计算总和
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &a[i]);
//        sum += a[i];
//    }
//
//    // 检查2*sum是否能被n整除
//    if ((2 * sum) % n != 0) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//
//    long long target_sum = (2 * sum) / n;
//
//    // 排序数组，为后续双指针查找做准备
//    qsort(a, n, sizeof(long long), compare);
//
//    long long count = 0;
//    int left = 0, right = n - 1;
//
//    // 使用双指针查找和为target_sum的元素对
//    while (left < right) {
//        long long current_sum = a[left] + a[right];
//
//        if (current_sum == target_sum) {
//            // 处理有重复元素的情况
//            if (a[left] == a[right]) {
//                // 计算从相同元素中选2个的组合数
//                long long m = right - left + 1;
//                count += m * (m - 1) / 2;
//                break;  // 已处理完所有相同元素
//            }
//            else {
//                // 统计左侧相同元素的数量
//                int left_count = 1;
//                while (left + left_count < right && a[left + left_count] == a[left]) {
//                    left_count++;
//                }
//
//                // 统计右侧相同元素的数量
//                int right_count = 1;
//                while (right - right_count > left && a[right - right_count] == a[right]) {
//                    right_count++;
//                }
//
//                count += (long long)left_count * right_count;
//
//                // 移动指针跳过已统计的元素
//                left += left_count;
//                right -= right_count;
//            }
//        }
//        else if (current_sum < target_sum) {
//            left++;
//        }
//        else {
//            right--;
//        }
//    }
//
//    printf("%lld\n", count);
//    free(a);
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//void hanshu(char arr1[], char arr2[], char result[],int len1,int len2)
//{
//    int j = 0,count=0;
//    for (int i = len1 - 1; i >= 0; i--)
//    {
//        if (arr1[i] == arr2[j])
//        {
//            count++;
//            j++;
//        }
//        else break;
//    }
//    char arr3[202] = { 0 };
//    for (int i = count; i < len2; i++)
//    {
//        strcpy(arr3, arr1);
//        arr1[len1 + i - count + 1] = arr2[i];
//        strcpy(result, arr1);
//        strcpy(arr1, arr3);
//    }
//}
//int main()
//{
//    char arr1[202] = { 0 }, arr2[202] = { 0 };
//    while (scanf("%s", arr1) == 1 && scanf("%s", arr2) == 1)
//    {
//        char result1[202] = { 0 }, result2[202] = { 0 };
//        int len1 = strlen(arr1), len2 = strlen(arr2);
//         hanshu(arr1, arr2, result1,len1,len2);
//         hanshu(arr2, arr1, result2,len1,len2);
//        if (strlen(result1) < strlen(result2)) printf("%s\n", result1);
//        else if (strlen(result1) > strlen(result2)) printf("%s\n", result2);
//        else
//        {
//            if (strcmp(result1, result2) < 0) printf("%s\n", result1);
//            else printf("%s\n", result2);
//        }
//    }
//    return 0;
//}




//
//#include<stdio.h>
//int arr[1000] = { 0 };
//
//void hanshu()
//{
//    arr[0] = 1;
//    arr[1] = 2;
//    for (int i = 2; i < 1000; i++)
//    {
//        if (arr[i - 1] > 1000000000 - arr[i - 2])
//        {
//            arr[i] = arr[i - 1] + arr[i - 2];
//        }
//    }
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    hanshu();
//    while (T--)
//    {
//        int n, count = 0;
//        scanf("%d", &n);
//        for (int i = 0; arr[i] < n; i++)
//        {
//            for (int j = i; arr[i] + arr[j] < n; j++)
//            {
//                for (int k = j; arr[k] + arr[i] + arr[j] <= n; k++)
//                {
//                    if (arr[i] + arr[j] + arr[k] == n)count++;
//                    break;
//                }
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
////}
//
//
//
//
//
//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>   
//int hanshu(char arr1[])
//{
//    int sum = 0;
//    for (int i = 17; i >= 0; i--)
//    {
//        int a;
//        if (i == 0)
//        {
//            if (arr1[17 - i] == 'X' || arr1[17 - i] == 'x')
//                a = 10;
//            else
//                a = arr1[17 - i] - '0';
//        }
//        else
//        {
//            a = arr1[17 - i] - '0';
//        }
//        sum += a * (int)pow(2, i);
//    }
//    return (sum % 11 == 1) ? 1 : 0;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[19] = { 0 };
//        char result[19] = { 0 };
//        scanf("%s", arr1);
//        memset(result, '-', 18);
//        result[18] = '\0';
//        for (int i = 0; i < 18; i++)
//        {
//            char t = arr1[i];
//            int found = 0;
//            if (i < 17) {
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;
//                    if (hanshu(arr1))
//                    {
//                        if (j != (t - '0')) {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;
//                    if (hanshu(arr1))
//                    {
//                        if ((t != 'X' && t != 'x') && (j != (t - '0')))
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                        else if ((t == 'X' || t == 'x') && j != 10)
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//                if (!found)
//                {
//                    arr1[i] = 'X';
//                    if (hanshu(arr1))
//                    {
//                        if (t != 'X' && t != 'x')
//                        {
//                            result[i] = 'X';
//                            found = 1;
//                        }
//                    }
//                }
//            }
//            arr1[i] = t;
//        }
//        printf("%s\n", result);
//    }
//    return 0;
//}





//
//#include<stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include<string.h>  // 引入字符串处理库，用于字符串操作函数
//#include<math.h>    // 引入数学库，用于幂运算函数pow
//
//// 函数功能：验证身份证号是否符合校验公式
//// 参数：arr1[] - 存储身份证号的字符数组
//// 返回值：1表示符合校验公式，0表示不符合
//int hanshu(char arr1[])
//{
//    int sum = 0;  // 用于存储计算总和
//
//    // 循环计算前18位与对应权重(2^i)的乘积之和
//    // i从17到0，表示公式中的指数i（对应身份证号的a17到a0）
//    for (int i = 17; i >= 0; i--)
//    {
//        int a;  // 存储当前位的数值
//
//        // 处理最后一位（校验位，i=0对应a0）
//        if (i == 0)
//        {
//            // 如果是'X'或'x'，表示数值10
//            if (arr1[17 - i] == 'X' || arr1[17 - i] == 'x')
//                a = 10;
//            else
//                // 否则转换为对应的数字
//                a = arr1[17 - i] - '0';
//        }
//        else
//        {
//            // 前17位直接转换为数字
//            a = arr1[17 - i] - '0';
//        }
//
//        // 累加当前位数值与2^i的乘积
//        sum += a * (int)pow(2, i);
//    }
//
//    // 校验总和模11是否等于1，是则返回1，否则返回0
//    return (sum % 11 == 1) ? 1 : 0;
//}
//
//int main()
//{
//    int T;  // 存储测试用例的数量
//    scanf("%d", &T);  // 读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        char arr1[19] = { 0 };  // 存储输入的身份证号（18位+结束符）
//        char result[19] = { 0 }; // 存储结果，初始化为18个'-'
//
//        scanf("%s", arr1);  // 读取身份证号字符串
//        memset(result, '-', 18);  // 将结果数组初始化为18个'-'
//        result[18] = '\0';  // 添加字符串结束符
//
//        // 遍历身份证号的每一位（0到17位）
//        for (int i = 0; i < 18; i++)
//        {
//            char t = arr1[i];  // 保存当前位的原始字符
//            int found = 0;     // 标记是否找到正确的字符
//
//            // 处理前17位（数字位）
//            if (i < 17) {
//                // 尝试将当前位替换为0-9中的每个数字
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;  // 替换当前位为数字j
//
//                    // 如果替换后符合校验公式
//                    if (hanshu(arr1))
//                    {
//                        // 且与原始字符不同（确保是修正错误）
//                        if (j != (t - '0')) {
//                            result[i] = '0' + j;  // 记录正确的数字
//                            found = 1;            // 标记已找到
//                            break;                // 跳出循环
//                        }
//                    }
//                }
//            }
//            // 处理第18位（校验位，可能是数字或X）
//            else
//            {
//                // 先尝试0-9的数字
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;  // 替换当前位为数字j
//
//                    // 如果替换后符合校验公式
//                    if (hanshu(arr1))
//                    {
//                        // 原始字符不是X，且替换的数字与原始不同
//                        if ((t != 'X' && t != 'x') && (j != (t - '0')))
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                        // 原始字符是X，但替换的数字不是10（X代表10）
//                        else if ((t == 'X' || t == 'x') && j != 10)
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//
//                // 如果没找到合适的数字，尝试替换为X
//                if (!found)
//                {
//                    arr1[i] = 'X';  // 替换当前位为X
//
//                    // 如果替换后符合校验公式
//                    if (hanshu(arr1))
//                    {
//                        // 且原始字符不是X
//                        if (t != 'X' && t != 'x')
//                        {
//                            result[i] = 'X';  // 记录正确的字符为X
//                            found = 1;
//                        }
//                    }
//                }
//            }
//
//            arr1[i] = t;  // 恢复当前位的原始字符，不影响下一位的检测
//        }
//
//        printf("%s\n", result);  // 输出当前测试用例的结果
//    }
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h> 
//#define MAX_N 10000001   
//int result[MAX_N];
//int hanshu1(int n)
//{
//    int sum = 0;
//    while (n > 0)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//void hanshu2()
//{
//    memset(result, 0, sizeof(result));
//    for (int x = 2; x < MAX_N; x++)
//    {
//        int sx = hanshu1(x);
//        for (int y = x; ; y++)
//        {
//            long long n = (long long)x * y;
//            if (n >= MAX_N) break;
//            if (y == 1) continue;
//            int sy = hanshu1(y);
//            int sn = hanshu1(n);
//
//            if (sn == sx * sy)
//            {
//                result[n] = 1;
//            }
//        }
//    }
//    int count = 0;
//    for (int i = 1; i < MAX_N; i++)
//    {
//        if (result[i]) count++;
//        result[i] = count;
//    }
//}
//
//int main()
//{
//    hanshu2();
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int L, R;
//        scanf("%d %d", &L, &R);
//        printf("%d\n", result[R] - result[L - 1]);
//    }
//    return 0;
//}



//
//#include <stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include <string.h>  // 引入字符串处理库，用于内存初始化函数memset
//#define MAX_N 10000001  // 定义宏MAX_N为10000001，作为数组的最大长度和数据范围上限
//
//int result[MAX_N];  // 定义全局数组result，用于存储预处理的结果
//
//// 函数hanshu1：计算一个整数的各位数字之和
//int hanshu1(int n)
//{
//    int sum = 0;  // 初始化和为0
//    while (n > 0)  // 当n大于0时，循环提取各位数字
//    {
//        sum += n % 10;  // 取n的个位数字并累加到sum
//        n /= 10;        // 去掉n的个位数字
//    }
//    return sum;  // 返回各位数字之和
//}
//
//// 函数hanshu2：预处理所有符合条件的数字并统计数量
//void hanshu2()
//{
//    memset(result, 0, sizeof(result));  // 将result数组所有元素初始化为0
//
//    // 外层循环：遍历可能的乘数x（从2开始）
//    for (int x = 2; x < MAX_N; x++)
//    {
//        int sx = hanshu1(x);  // 计算x的各位数字之和，存储在sx中
//
//        // 内层循环：遍历可能的乘数y（从x开始，避免重复计算）
//        for (int y = x; ; y++)
//        {
//            long long n = (long long)x * y;  // 计算乘积n，使用long long避免溢出
//            if (n >= MAX_N) break;  // 当n超过范围上限时，跳出内层循环
//
//            if (y == 1) continue;  // 若y为1则跳过（因x从2开始，此条件实际不会触发）
//
//            int sy = hanshu1(y);  // 计算y的各位数字之和，存储在sy中
//            int sn = hanshu1(n);  // 计算乘积n的各位数字之和，存储在sn中
//
//            // 若n的各位和等于x与y的各位和的乘积，则标记n为符合条件
//            if (sn == sx * sy)
//            {
//                result[n] = 1;  // 将result[n]设为1，表示n符合条件
//            }
//        }
//    }
//
//    // 计算前缀和，将result数组转换为"到当前索引为止符合条件的数字总数"
//    int count = 0;  // 计数器，记录符合条件的数字总数
//    for (int i = 1; i < MAX_N; i++)
//    {
//        if (result[i]) count++;  // 若当前数字符合条件，计数器加1
//        result[i] = count;       // 将当前累计数存入result[i]
//    }
//}
//
//int main()
//{
//    hanshu2();  // 调用hanshu2进行预处理，生成结果数组
//
//    int T;  // 定义变量T，表示测试用例数量
//    scanf("%d", &T);  // 读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        int L, R;  // 定义变量L和R，表示查询的区间范围
//        scanf("%d %d", &L, &R);  // 读取区间的左右端点
//
//        // 输出区间[L, R]内符合条件的数字数量（利用前缀和计算）
//        printf("%d\n", result[R] - result[L - 1]);
//    }
//
//    return 0;  // 程序正常结束
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long arr1[100000] = { 0 }, arr2[100000] = { 0 };
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        for (long long i = 1; arr1[i] < 1000000000; i++)
//        {
//            arr1[i] = a * arr1[i - 1] + b;
//        }
//        for (long long i = 1; arr2[i] < 1000000000; i++)
//        {
//            arr2[i] = a * arr2[i - 1] + b;
//        }
//        long long a1 = strlen(arr1);
//        long long b1 = strlen(arr2), count = 0;
//        for (long long i = 0; i < a1; i++)
//        {
//            for (long long j = 0; j < b1; j++)
//            {
//                if (arr1[i] == arr2[j]) count++;
//            }
//        }
//        printf("%lld\n", count);
//    }
//}
//
// 
////  
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h> 
//bool hanshu(long long x, int c, int d, long long max ) 
//{
//    if (x == 0) return true;   
//    if (c == 1) 
//    {
//        if (d == 0) return false; 
//        if ((x % d) != 0) return false;
//        return true;
//    } 
//    long long y = 0;
//    while (y < x) 
//    {
//        y = c * y + d;
//        if (y == x) return true;
//        if (y > max ) break;
//    }
//    return false;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//     long long MAX  = 1000000000; 
//    while (T--) 
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d); 
//        long long count = 0;
//        long long x = 0; 
//        while (1) 
//        {
//            x = a * x + b;  
//            if (x > MAX ) break; 
//            if (x < 1) continue;   
//            if (hanshu(x, c, d, MAX )) 
//            {
//                count++;
//            } 
//            if (a == 1) 
//            { 
//                if (x > MAX   - b) break;
//            }
//            else if (x > MAX  / a) 
//            { 
//                break;
//            }
//        } 
//        printf("%lld\n", count);
//    }
//    return 0;
//}
//



//
//
//第二种
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h> 
//
//bool hanshu(long long x, int c, int d, long long max)
//{
//    if (x == 0) return true;
//
//    // 处理c=0的特殊情况
//    if (c == 0) {
//        if (d == x) return true;
//        return false;
//    }
//
//    // 处理c=1的特殊情况（等差数列）
//    if (c == 1) {
//        // 当d=0时，序列是0,0,0,...，只有x=0才满足
//        if (d == 0) return x == 0;
//        // 序列是0, d, 2d, 3d,...，需要x是d的倍数且非负
//        return x % d == 0 && x / d >= 0;
//    }
//
//    long long y = 0;
//    while (true)
//    {
//        if (y == x) return true;
//        // 计算下一项
//        long long next_y = c * y + d;
//        // 检查是否溢出或超过最大值
//        if (next_y > max || next_y < y) break;
//        y = next_y;
//    }
//    return false;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    long long MAX = 1000000000;
//    while (T--)
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        long long count = 0;
//        long long x = 0;
//        while (true)
//        {
//            // 计算下一项
//            long long next_x = a * x + b;
//            // 检查是否溢出或超过最大值
//            if (next_x > MAX || (a > 0 && next_x < x)) break;
//            x = next_x;
//
//            if (x < 1) continue;
//            if (hanshu(x, c, d, MAX))
//            {
//                count++;
//            }
//
//            // 检查是否会进入无限循环
//            if (a == 1) {
//                // 当a=1且b=0时，x不再变化，避免无限循环
//                if (b == 0) break;
//                // 检查下一步是否会超过MAX
//                if (b > 0 && x > MAX - b) break;
//            }
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//}

