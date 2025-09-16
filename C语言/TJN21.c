#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//
//
//
//#include <stdio.h>
//#include <string.h> 
//int K, len;
//char str[1010] = { 0 };
//int main()
//{
//    scanf("%d", &K);
//    while (K--)
//    {
//        scanf("%s", str + 1);
//        len = strlen(str + 1);
//        int flag, i, j, k;
//        int n = len / 2, ans = 0;
//        for (i = n; i >= 1; i--)               
//        {
//            for (j = 1; j <= len + 1 - 2 * i; j++)  
//            {
//                flag = 1;                      
//                for (k = j; k < j + i; k++)     
//                {
//                    if (str[k] != str[k + i]) 
//                    {
//                        flag = 0;
//                        break;  
//                    }
//                }
//                if (flag == 1) 
//                {
//                    ans = 2 * i; break;
//                }   
//            }
//            if (flag == 1)  break;
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}

 
//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[1010] = { 0 }, arr2[1010] = { 0 };
//        int arr3[28] = { 0 };
//        scanf("%s %s", arr1 + 1, arr2 + 1);
//        int a = strlen(arr1 + 1), count = 0;
//        for (int i = 1; i <= a; i++)
//        {
//            arr3[arr1[i] - 'a']++;
//            arr3[arr2[i] - 'a']++;
//        }
//        for (int i = 0; i <= 26; i++)
//        {
//            if (arr3[i] != 0) count++;
//        }
//        if (count == 2 * a) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h> 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char arr1[1001], arr2[1001];
//        scanf("%s", arr1);
//        scanf("%s", arr2);
//        char map[256] = { 0 };  
//        int used[256] = { 0 };  
//        int valid = 1; 
//        for (int i = 0; i < strlen(arr1); i++)
//        {
//            char p = arr1[i];
//            char c = arr2[i];
//            if (map[p] == 0)
//            { 
//                if (used[c]) 
//                {
//                    valid = 0;
//                    break;
//                }
//                map[p] = c;
//                used[c] = 1;
//            }
//            else 
//            { 
//                if (map[p] != c) 
//                {
//                    valid = 0;
//                    break;
//                }
//            }
//        } 
//        if (valid) 
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
//
//#include <stdio.h>   // 包含标准输入输出库，用于输入输出操作
//#include <string.h>  // 包含字符串处理库，用于字符串相关函数
//
//int main()
//{
//    int T;                  // 定义变量T，用于存储测试用例的数量
//    scanf("%d", &T);        // 从标准输入读取测试用例数量T 
//    while (T--)             // 循环执行T次测试用例
//    {
//        char arr1[1001], arr2[1001];  // 定义两个字符数组，用于存储输入的两个字符串
//        scanf("%s", arr1);            // 读取第一个字符串到arr1
//        scanf("%s", arr2);            // 读取第二个字符串到arr2
//
//        char map[256] = { 0 };        // 定义映射数组，存储字符之间的映射关系（初始化为0）
//        int used[256] = { 0 };        // 定义标记数组，记录字符是否已被映射（0表示未使用，1表示已使用）
//        int valid = 1;                // 定义有效性标记，1表示当前映射有效，0表示无效
//
//        // 遍历第一个字符串的每个字符
//        for (int i = 0; i < strlen(arr1); i++)
//        {
//            char p = arr1[i];         // 获取arr1当前位置的字符
//            char c = arr2[i];         // 获取arr2当前位置的字符
//
//            if (map[p] == 0)          // 如果p尚未建立映射
//            {
//                if (used[c])          // 检查c是否已被其他字符映射
//                {
//                    valid = 0;        // 若已被使用，标记为无效
//                    break;            // 跳出循环
//                }
//                map[p] = c;           // 建立p到c的映射
//                used[c] = 1;          // 标记c已被使用
//            }
//            else                      // 如果p已建立映射
//            {
//                if (map[p] != c)      // 检查当前映射是否与之前的映射一致
//                {
//                    valid = 0;        // 若不一致，标记为无效
//                    break;            // 跳出循环
//                }
//            }
//        }
//
//        if (valid)                   // 根据有效性标记输出结果
//        {
//            printf("Yes\n");          // 映射有效，输出"Yes"
//        }
//        else
//        {
//            printf("No\n");           // 映射无效，输出"No"
//        }
//    }
//    return 0;                        // 程序正常结束
//}


//
//#include <stdio.h>
//#include <string.h>
//
//int hanshu(char* s) 
//{
//    int len = strlen(s); 
//    long long a = (long long)len * (len + 1) / 2;
//    long long b = 0; 
//    for (int i = 0; i < len; ) 
//    {
//        char c = s[i];
//        int j = i; 
//        while (j < len && s[j] == c) 
//        {
//            j++;
//        } 
//        int k = j - i; 
//        b += (long long)k * (k - 1) / 2;
//        i = j;
//    } 
//    return a - b;
//} 
//int main() 
//{
//    char s[151]; 
//    while (scanf("%s", s) == 1) 
//    {
//        printf("%d\n", hanshu(s)-1);
//    }
//    return 0;
//}
//


// 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 比较两个字符串，用于qsort
//int str_cmp(const void* a, const void* b) {
//    return strcmp(*(const char**)a, *(const char**)b);
//}
//
//// 检查字符串是否已存在于数组中（用于去重）
//int exists(const char** arr, int count, const char* str) {
//    for (int i = 0; i < count; i++) {
//        if (strcmp(arr[i], str) == 0) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int hanshu(char* s) {
//    int len = strlen(s);
//    int capacity = 1000; // 初始容量
//    int count = 0;
//    char** results = (char**)malloc(capacity * sizeof(char*));
//    if (!results) return 0; // 内存分配失败
//
//    for (int i = 0; i <= len; ++i) {
//        for (int j = i; j <= len; ++j) {
//            // 跳过删除整个字符串的情况
//            if (i == 0 && j == len) continue;
//
//            // 计算新字符串长度并分配内存
//            int new_len = len - (j - i);
//            char* new_str = (char*)malloc(new_len + 1);
//            if (!new_str) continue;
//
//            // 构建新字符串
//            int pos = 0;
//            for (int k = 0; k < len; ++k) {
//                if (k < i || k >= j) {
//                    new_str[pos++] = s[k];
//                }
//            }
//            new_str[pos] = '\0'; // 字符串结束符
//
//            // 检查是否已存在，不存在则添加到结果集
//            if (!exists(results, count, new_str)) {
//                // 如果容量不足则扩容
//                if (count >= capacity) {
//                    capacity *= 2;
//                    char** temp = (char**)realloc(results, capacity * sizeof(char*));
//                    if (!temp) break;
//                    results = temp;
//                }
//                results[count++] = new_str;
//            }
//            else {
//                free(new_str); // 已存在则释放内存
//            }
//        }
//    }
//
//    // 保存结果数量
//    int result_count = count;
//
//    // 释放所有分配的内存
//    for (int i = 0; i < count; i++) {
//        free(results[i]);
//    }
//    free(results);
//
//    return result_count;
//}
//
//int main() {
//    char s[151];
//    while (scanf("%s", s) == 1) {
//        printf("%d\n", hanshu(s));
//    }
//    return 0;
//}
// 
//
//#include <stdio.h>
//#include <string.h>
//#include <limits.h> 
//int hanshu (const char* s, int n, int k) 
//{
//    int total = 0;
//    int repeat = n / k;  
//
//    for (int i = 0; i < k; i++) 
//    { 
//        int count[26] = { 0 };
//        for (int j = 0; j < repeat; j++) 
//        {
//            char c = s[i + j * k];
//            count[c - 'a']++;
//        } 
//        int max  = 0;
//        for (int c = 0; c < 26; c++) 
//        {
//            if (count[c] > max ) 
//            {
//                max  = count[c];
//            }
//        } 
//        total += (repeat - max );
//    }
//
//    return total;
//}
//
//int main() 
//{
//    char s[10001];
//    while (scanf("%s", s) == 1) 
//    {  
//        int n = strlen(s);
//        int min  = INT_MAX; 
//        for (int k = 1; k <= n / 2; k++) 
//        {
//            if (n % k == 0) 
//            {   
//                int mod = hanshu(s, n, k);
//                if (mod < min ) 
//                {
//                    min  = mod;
//                }
//            }
//        }
//
//        printf("%d\n", min );
//    }
//    return 0;
//}
//

//
//
//#include <stdio.h>      // 包含标准输入输出函数库
//#include <string.h>     // 包含字符串处理函数库
//#include <limits.h>     // 包含整数类型极限值定义（如INT_MAX）
//
//// 函数功能：计算将字符串s转换为长度为k的子串重复n/k次所需的修改次数
//// 参数：
////   s - 输入的字符串
////   n - 字符串s的长度
////   k - 子串的长度
//// 返回值：所需的最少修改次数
//int hanshu(const char* s, int n, int k)
//{
//    int total = 0;                  // 存储总修改次数
//    int repeat = n / k;             // 计算子串需要重复的次数（总长度/子串长度）
//
//    // 遍历子串中的每个位置（0到k-1）
//    for (int i = 0; i < k; i++)
//    {
//        // 统计该位置在所有重复中出现的各个字符的次数（26个小写字母）
//        int count[26] = { 0 };      // 初始化计数数组，默认为0
//
//        // 遍历每个重复的子串，统计当前位置(i)的字符出现次数
//        for (int j = 0; j < repeat; j++)
//        {
//            // 获取第j个重复子串中第i个位置的字符
//            char c = s[i + j * k];
//            // 对应字符的计数加1（'a'-'a'=0, 'b'-'a'=1, ..., 'z'-'a'=25）
//            count[c - 'a']++;
//        }
//
//        // 找到当前位置出现次数最多的字符的次数
//        int max = 0;
//        for (int c = 0; c < 26; c++)
//        {
//            if (count[c] > max)
//            {
//                max = count[c];    // 更新最大出现次数
//            }
//        }
//
//        // 该位置需要修改的次数 = 总重复次数 - 最多出现次数
//        // （保留出现次数最多的字符，修改其他字符）
//        total += (repeat - max);
//    }
//
//    return total;   // 返回总修改次数
//}
//
//int main()
//{
//    char s[10001];  // 定义存储输入字符串的数组，最大长度10000
//
//    // 循环读取输入字符串，直到文件结束（EOF）
//    while (scanf("%s", s) == 1)
//    {
//        int n = strlen(s);          // 获取字符串长度
//        int min = INT_MAX;         // 初始化最小修改次数为整数最大值
//
//        // 检查所有可能的子串长度k（k必须能整除n且重复次数>1）
//        // k的范围：1到n/2（保证重复次数至少为2）
//        for (int k = 1; k <= n / 2; k++)
//        {
//            if (n % k == 0)         // k必须是n的约数（保证能整除）
//            {
//                // 计算当前k对应的修改次数
//                int mod = hanshu(s, n, k);
//                // 更新最小修改次数
//                if (mod < min)
//                {
//                    min = mod;
//                }
//            }
//        }
//
//        // 输出最小修改次数
//        printf("%d\n", min);
//    }
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h>
//#include <limits.h> 
//int arr1[26][26]; 
//void hanshu() 
//{
//    for (int i = 0; i < 26; i++) 
//    {
//        for (int j = 0; j < 26; j++) 
//        {
//            int d = (j - i + 26) % 26;
//            arr1[i][j] = (d < 26 - d) ? d : 26 - d;
//        }
//    }
//} 
//int main() 
//{ 
//    hanshu(); 
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char t[1001], c[1001];
//        scanf("%s %s", t, c);
//        int n = strlen(t); 
//        int  tnum[1001], cnum[1001];
//        for (int i = 0; i < n; i++) 
//        {
//            tnum[i] = t[i] - 'a';
//            cnum[i] = c[i] - 'a';
//        } 
//        int min = INT_MAX; 
//        for (int k = 0; k <= n / 2; k++) 
//        { 
//            for (int sign = 0; sign < 2; sign++)
//                {
//                int shift = sign ? (n - k) : k;
//                if (shift == 0 || shift == n) continue; 
//                int s = (k < n - k) ? k : n - k;
//                int total = s; 
//                for (int i = 0; i < n; i++) 
//                {
//                    int x = (i + shift) % n;
//                    total += arr1[tnum[x]][cnum[i]];
//                } 
//                if (total < min) 
//                {
//                    min = total;
//                }
//            }
//        } 
//        int total = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            total += arr1[tnum[i]][cnum[i]];
//        }
//        if (total < min) 
//        {
//            min = total;
//        } 
//        printf("%d\n", min);
//    } 
//    return 0;
//}



//
//
//#include <stdio.h>      // 引入标准输入输出库，用于输入输出操作
//#include <string.h>     // 引入字符串处理库，用于字符串相关函数
//#include <limits.h>     // 引入限制库，用于获取整数类型的极限值（如INT_MAX）
//
//int arr1[26][26];      // 定义一个26x26的全局数组，用于存储字母之间的某种距离
//
//// 函数声明：用于初始化arr1数组
//void hanshu()
//{
//    // 双重循环遍历26x26的数组（对应26个英文字母）
//    for (int i = 0; i < 26; i++)
//    {
//        for (int j = 0; j < 26; j++)
//        {
//            // 计算j相对于i的偏移量（确保结果为非负数）
//            int d = (j - i + 26) % 26;
//            // 取偏移量的最小值（正向或反向，例如a到c的距离是2，也可以看作24的反向距离，取较小的2）
//            arr1[i][j] = (d < 26 - d) ? d : 26 - d;
//        }
//    }
//}
//
//int main()
//{
//    hanshu();          // 调用函数初始化arr1数组
//
//    int T;             // 定义变量T，表示测试用例的数量
//    scanf("%d", &T);   // 从标准输入读取测试用例数量
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        char t[1001], c[1001];  // 定义两个字符数组，分别存储原始字符串t和目标字符串c
//        scanf("%s %s", t, c);   // 读取两个字符串
//
//        int n = strlen(t);      // 计算字符串长度（假设t和c长度相同）
//
//        // 定义两个整数数组，用于存储字符对应的数字（a->0, b->1, ..., z->25）
//        int tnum[1001], cnum[1001];
//
//        // 将字符转换为对应的数字
//        for (int i = 0; i < n; i++)
//        {
//            tnum[i] = t[i] - 'a';  // 字符转数字（'a'的ASCII码减去'a'得到0，以此类推）
//            cnum[i] = c[i] - 'a';
//        }
//
//        int min = INT_MAX;  // 初始化最小值为整数的最大值，用于后续比较
//
//        // 循环尝试不同的k值（可能是分割点或偏移量相关）
//        for (int k = 0; k <= n / 2; k++)
//        {
//            // 尝试两种符号（0和1），可能代表不同的处理方式
//            for (int sign = 0; sign < 2; sign++)
//            {
//                // 根据符号计算偏移量shift
//                int shift = sign ? (n - k) : k;
//
//                // 如果偏移量为0或n（相当于没有偏移），则跳过
//                if (shift == 0 || shift == n) continue;
//
//                // 计算s为k和n-k中的较小值
//                int s = (k < n - k) ? k : n - k;
//                int total = s;  // 初始化总代价为s
//
//                // 计算偏移后的总代价
//                for (int i = 0; i < n; i++)
//                {
//                    // 计算偏移后的索引位置
//                    int x = (i + shift) % n;
//                    // 累加偏移后字符转换的代价（使用arr1数组中存储的预计算值）
//                    total += arr1[tnum[x]][cnum[i]];
//                }
//
//                // 更新最小值
//                if (total < min)
//                {
//                    min = total;
//                }
//            }
//        }
//
//        // 计算不进行偏移时的总代价
//        int total = 0;
//        for (int i = 0; i < n; i++)
//        {
//            total += arr1[tnum[i]][cnum[i]];
//        }
//
//        // 如果不偏移的代价更小，则更新最小值
//        if (total < min)
//        {
//            min = total;
//        }
//
//        // 输出最小代价
//        printf("%d\n", min);
//    }
//    return 0;
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
//        char arr1[102] = { 0 }, arr2[102] = { 0 };
//        scanf("%s", arr1+1);
//        scanf("%s", arr2+1);
//        int len = (strlen(arr1) < strlen(arr2)) ? strlen(arr1) : strlen(arr2);
//        int shu1[27] = { 0 } ,shu2[27] = { 0 },sum=0;
//        for (int i = 1; i <= len; i++)
//        { 
//            for (int k = 1; k <= len - i + 1; k++)
//            {
//                shu1[arr1[i + k] - 'a']++;
//                shu2[arr2[i + k] - 'a']++;
//            }
//            int count = 0 ;
//            for (int j = 0; j < 26; j++)
//            {
//                if (shu1[j] == shu2[j]) count++;
//            }
//            if (count == len - i + 1) sum++;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}



//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>  
//int hanshu2(char** sub1 , int count, char* sub) 
//{
//    for (int i = 0; i < count; i++) 
//    {
//        if (strcmp(sub1[i], sub) == 0) 
//        {
//            return 1;
//        }
//    }
//    return 0;
//} 
//int hanshu1(char* str, char** subs ) 
//{
//    int len = strlen(str);
//    int count = 0;
//    char sub[100 + 1];    
//    for (int i = 0; i < len; i++) 
//    {
//        for (int j = i; j < len; j++) 
//        { 
//            int subLen = j - i + 1;
//            strncpy(sub, str + i, subLen);
//            sub[subLen] = '\0'; 
//            if (!hanshu2(subs , count, sub)) 
//            {
//                subs [count] = (char*)malloc(subLen + 1);
//                strcpy(subs [count], sub);
//                count++;
//            }
//        }
//    }
//    return count;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char s1[101], s2[101];
//        fgets(s1, 101, stdin);
//        fgets(s2, 101, stdin);
//        char* subs1[5000] = { 0 };
//        char* subs2[5000] = { 0 };
//        int count1 = hanshu1(s1, subs1);
//        int count2 = hanshu1(s2, subs2);
//        int count = 0;
//        for (int i = 0; i < count1; i++) 
//        {
//            if (hanshu2(subs2, count2, subs1[i])) 
//            {
//                count++;
//            }
//        } 
//        printf("%d\n", count); 
//        for (int i = 0; i < count1; i++) 
//        {
//            free(subs1[i]);
//        }
//        for (int i = 0; i < count2; i++)
//        {
//            free(subs2[i]);
//        }
//    } 
//    return 0;
//}

//问题F代办
//
//#include <stdio.h>   // 包含标准输入输出库，用于输入输出操作
//#include <string.h>  // 包含字符串处理库，用于 strlen等字符串函数 
//int main()
//{
//    // 定义字符数组存储输入的字符串，大小1010可容纳最长1000字符的字符串加结束符
//    char input[1010] = { '\0' };
//
//    // 循环读取输入的字符串，直到没有输入（scanf返回值不等于1）
//    while (scanf("%s", input) == 1)
//    {
//        int len = strlen(input);  // 获取输入字符串的长度
//        int io[27] = { 0 };       // 定义数组存储26个小写字母的出现次数，初始化为0
//
//        // 统计每个字符出现的次数
//        for (int i = 0; i < len; i++)
//        {
//            for (int j = 0; j < 26; j++)
//            {
//                // 判断当前字符是否与第j个字母('a'+j)匹配
//                if (input[i] == 'a' + j)
//                {
//                    io[j]++;  // 对应字母的计数加1
//                    break;    // 找到匹配的字母，退出内层循环
//                }
//            }
//        }
//
//        // 定义数组存储每个出现次数对应的字母数量（即有多少个字母出现了j次）
//        int onetwo[1005] = { 0 };
//
//        // 统计每个出现次数对应的字母数量
//        for (int i = 0; i < 26; i++)
//        {
//            for (int j = 1; j <= 1000; j++)
//            {
//                if (io[i] == j)  // 如果第i个字母出现了j次
//                {
//                    onetwo[j]++;  // 出现j次的字母数量加1
//                }
//            }
//        }
//
//        int flag[1100] = { 0 };  // 存储所有出现次数最多的频次值
//        int count = 0;           // 记录有多少个频次具有相同的最大出现次数
//        int max = 1;             // 记录最大的频次出现次数，初始化为1
//        int breakio = 0;         // 用于控制跳出多层循环的标志
//
//        // 找到出现次数最多的频次值（即有多少个字母具有相同频次）
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (onetwo[i] > max)
//            {
//                max = onetwo[i];  // 更新最大出现次数
//            }
//        }
//
//        // 收集所有出现次数等于max的频次值
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (onetwo[i] == max)
//            {
//                flag[count] = i;  // 存储该频次值
//                count++;          // 计数加1
//            }
//        }
//
//        // 输出结果：找到最小的目标频次值，并输出该频次及对应的字母
//        for (int i = 0; i < 26; i++)
//        {
//            for (int j = 0; j <= 1000; j++)
//            {
//                // 找到第一个出现的、非零的目标频次值
//                if ((io[i] == flag[j]) && (io[i] != 0))
//                {
//                    int inflag = flag[j];  // 记录目标频次值
//                    printf("%d", inflag);  // 输出频次值
//
//                    // 按字典序输出所有具有该频次的字母
//                    for (int k = 0; k < 26; k++)
//                    {
//                        if (io[k] == inflag)
//                        {
//                            printf(" %c", 'a' + k);  // 输出字母，前面加空格分隔
//                        }
//                    }
//
//                    breakio = 1;  // 设置标志，准备跳出外层循环
//                    break;        // 跳出当前循环
//                }
//            }
//            if (breakio == 1)  // 如果已经找到并输出结果，跳出外层循环
//            {
//                break;
//            }
//        }
//
//        printf("\n");  // 输出换行，准备处理下一个测试用例
//    }
//
//    return 0;  // 程序正常结束
//}
//
//   

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[1005];
//    while ((scanf("%s", arr1)) == 1)
//    {
//        int len = strlen(arr1);
//        int count[26] = { 0 };  
//        for (int i = 0; i < len; i++)
//        {
//            count[arr1[i] - 'a']++;
//        } 
//        int f [1001] = { 0 };  
//        for (int i = 0; i < 26; i++)
//        {
//            if (count[i] > 0)
//            {
//                f [count[i]]++;
//            }
//        } 
//        int max   = 0;
//        int t  = 0;
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (f  [i] > max  )
//            {
//                max  = f [i];
//                t = i;
//            }
//        } 
//        printf("%d", t ); 
//        int first = 1;
//        for (int i = 0; i < 26; i++)
//        {
//            if (count[i] == t )
//            {
//                if (first)
//                {
//                    printf(" %c", 'a' + i);
//                    first = 0;
//                }
//                else
//                {
//                    printf(" %c", 'a' + i);
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>  
//
//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	char arr[1010] = { 0 };
//	while (K--)
//	{
//		scanf("%s", arr+1);
//		int len=strlen(arr+1);
//		int a=0,flag;
//		for (int i = len/2; i >= 1; i--)
//		{
//			for (int j = 1; j <= len + 1 - 2*i; j++)
//			{ 
//				flag = 1;
//				for (int k = j; k < i+j; k++)
//				{ 
//					if (arr[k] != arr[k + i])
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					 a = 2 * i;
//					goto  here;
//				}
//			}
//		}
//		here:
//		printf("%d\n", a);
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<limits.h>
//#include<string.h>
//
//int hanshu(char arr1[], int k, int n)
//{
//	int  count =0;
//	for (int i = 0; i < k; i++)
//	{
//		int arr2[26] = {0};
//		for (int j = 0; j < n/k; j++)
//		{
//			arr2[arr1[i + k * j] - 'a']++;
//		}
//		int max = 0;
//		for (int l = 0; l < 26; l++)
//		{
//			if (arr2[l] > max) max = arr2[l];
//		}
//		count += (n / k - max);
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[10010] = { 0 };
//	while ((scanf("%s", arr1)) == 1)
//	{
//		int min = INT_MAX;
//		int n = strlen(arr1);
//		for (int k = 1; k <= n / 2; k++)
//		{
//			if (n % k == 0)
//			{
//				int mod = hanshu(arr1, k, n);
//				if (mod < min) min = mod;
//			}
//		}
//		printf("%d\n", min);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[1005];
//	while ((scanf("%s", arr1)) == 1)
//	{
//		int len = strlen(arr1), arr2[27] = { 0 }, arr3[1005] = { 0 };
//		for (int i = 0; i < len; i++)
//		{ 
//				arr2[arr1[i] - 'a']++; 
//		}
//		for (int i = 0; i < 26; i++)
//		{
//			if(arr2[i]>0)
//			{
//				arr3[arr2[i]]++;
//			}
//		}
//		int max = 0,n=0; 
//		for (int j = 0; j < 1005; j++)
//		{
//			if (arr3[j] > max)
//			{
//				max = arr3[j]; 
//				n = j;
//			}
//		}
//		printf("%d", n); 
//		for (int i = 0; i < 26; i++)
//		{
//			if (arr2[i] == n)
//			{    
//				 printf(" %c", 'a' + i);  
//			}
//		} 
//		printf("\n");
//	}
//	return 0;
//}


 
#include <stdbool.h> 
#include <stdio.h>
#include <string.h>

int cnt1, cnt2, len;
char str[210];

int main()
{
    while (gets(str) != NULL)
    {
        bool books[30] = { 0 };
        cnt1 = cnt2 = 0;
        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                cnt1++; continue;
            }
            if (str[i] >= 97)  str[i] -= 32;
            if (!books[str[i] - 'A']) cnt2++;
            books[str[i] - 'A'] = true;
        }
        if (cnt1 >= 10 || cnt2 >= 11)   puts("No");
        else   puts("Yes");
    }
    return 0;
}
