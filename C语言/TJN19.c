#define _CRT_SECURE_NO_WARNINGS

//
//
//
//#include <stdio.h>    // 包含标准输入输出函数库
//#include <stdbool.h>  // 包含bool类型定义
//#include <stdlib.h>   // 包含内存分配和释放函数
//
//// 检查项链b是否是项链a的旋转
//// 参数：a-原项链, b-待检查项链, n-项链长度
//// 返回值：如果b是a的旋转则返回true,否则返回false
//bool xuanzhuan(int* a, int* b, int n) 
//{
//    // 将a拼接成两倍长度的临时数组，用于检查所有可能的旋转情况
//    // 例如a = [1,2,3]，则temp = [1,2,3,1,2,3]
//    int* temp = (int*)malloc(2 * n * sizeof(int));
//    // 填充临时数组
//    for (int i = 0; i < n; i++) 
//    {
//        temp[i] = a[i];          // 前半部分复制a
//        temp[i + n] = a[i];      // 后半部分再次复制a
//    }
//
//    // 检查所有可能的旋转（共n种可能）
//    for (int i = 0; i < n; i++) 
//    {
//        bool match = true;       // 标记是否匹配
//        // 检查从位置i开始的n个元素是否与b匹配
//        for (int j = 0; j < n; j++) 
//        {
//            if (temp[i + j] != b[j]) 
//            {  // 发现不匹配的元素
//                match = false;          // 标记为不匹配
//                break;                  // 退出内层循环
//            }
//        }
//        if (match) 
//        {               // 如果找到匹配的旋转
//            free(temp);            // 释放临时数组内存
//            return true;           // 返回匹配成功
//        }
//    }
//
//    free(temp);    // 释放临时数组内存
//    return false;  // 所有旋转都不匹配，返回失败
//}
//
//// 生成项链a的翻转版本（沿对称轴旋转180度）
//// 参数：a-原项链, xuanzhuan-存储翻转结果的数组, n-项链长度
//void fanzhuan(int* a, int* xuanzhuan, int n) 
//{
//    // 对于环形结构的翻转，将元素逆序排列
//    // (n - 1 - i + n) % n 确保索引在有效范围内
//    for (int i = 0; i < n; i++) 
//    {
//        xuanzhuan[i] = a[(n - 1 - i + n) % n];
//    }
//}
//
//int main() 
//{
//    int T;                  // 测试用例数量
//    scanf("%d", &T);        // 读取测试用例数量
//
//    while (T--) 
//    {           // 循环处理每个测试用例
//        int n;              // 项链长度
//        scanf("%d", &n);    // 读取项链长度
//
//        // 为项链A和B分配内存
//        int* A = (int*)malloc(n * sizeof(int));
//        int* B = (int*)malloc(n * sizeof(int));
//
//        // 读取项链A的元素
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &A[i]);
//        }
//        // 读取项链B的元素
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &B[i]);
//        }
//
//        // 检查A的所有旋转是否与B匹配
//        bool result = xuanzhuan(A, B, n);
//
//        // 如果不匹配，检查A的翻转后的所有旋转是否与B匹配
//        if (!result) 
//        {
//            int* arr = (int*)malloc(n * sizeof(int));  // 存储A的翻转结果
//            fanzhuan(A, arr, n);                       // 生成A的翻转版本
//            result = xuanzhuan(arr, B, n);             // 检查翻转后的旋转是否匹配
//            free(arr);                                 // 释放翻转数组内存
//        }
//        // 输出结果
//        printf("%s\n", result ? "Yes" : "No");
//        // 释放项链A和B的内存
//        free(A);
//        free(B);
//    }
//    return 0;
////}





//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 计算最少需要添加的数码数量，以及对应的结果字符串
//int findMinAdditions(const char* s, char** result) 
//{
//    int len = strlen(s);
//    // 检查原数是否已经是7的倍数
//    long long num = 0;
//    for (int i = 0; i < len; i++) 
//    {
//        num = (num * 10 + (s[i] - '0')) % 7;
//    }
//    if (num == 0) 
//    {
//        *result = (char*)malloc(len + 1);
//        strcpy(*result, s);
//        return 0;
//    }
//
//    // 尝试添加1个数码
//    for (int pos = 0; pos <= len; pos++) 
//    {
//        for (int d = 0; d <= 9; d++) 
//        {
//            // 计算添加d到pos位置后的数模7是否为0
//            long long prefix = 0;
//            for (int i = 0; i < pos; i++) 
//            {
//                prefix = (prefix * 10 + (s[i] - '0')) % 7;
//            }
//
//            long long suffix = 0;
//            long long power = 1;
//            for (int i = len - 1; i >= pos; i--) 
//            {
//                suffix = (suffix + (s[i] - '0') * power) % 7;
//                power = (power * 10) % 7;
//            }
//
//            // 修正计算公式，确保正确计算添加数字后的模7结果
//            long long total = (prefix * 10 % 7 * power % 7 + d * power % 7 + suffix) % 7;
//            if (total < 0) total += 7;
//
//            if (total == 0) 
//            {
//                // 构造结果字符串
//                *result = (char*)malloc(len + 2);
//                if (pos > 0) strncpy(*result, s, pos);
//                (*result)[pos] = d + '0';
//                strcpy(*result + pos + 1, s + pos);
//                return 1;
//            }
//        }
//    }
//
//    // 如果需要添加2个数码
//    // 计算当前数模7的值
//    long long current = 0;
//    for (int i = 0; i < len; i++) 
//    {
//        current = (current * 10 + (s[i] - '0')) % 7;
//    }
//
//    // 计算需要添加的两位数，使整个数是7的倍数
//    // 修正计算方式：(current * 100 + x) % 7 == 0 => x = (7 - (current * 100 % 7)) % 7
//    long long current_mult100_mod7 = (current * (100 % 7)) % 7; // 100 mod 7 = 2，优化计算
//    int needed = (7 - current_mult100_mod7) % 7;
//
//    // 确保结果是两位数（如果needed小于10，前面补0）
//    *result = (char*)malloc(len + 3);
//    strcpy(*result, s);
//    sprintf(*result + len, "%02d", needed);
//
//    return 2;
//}
//
//int main() 
//{
//    char s[10001];
//    while (scanf("%s", s) == 1) 
//    {
//        char* result = NULL;
//        int minAdd = findMinAdditions(s, &result);
//        printf("%d\n%s\n", minAdd, result);
//        free(result);
//    }
//    return 0;
//}



//
//
//#include <stdio.h>    // 标准输入输出库
//#include <stdlib.h>   // 标准库，包含内存分配等函数
//#include <string.h>   // 字符串处理库
//
//// 函数功能：计算最少需要添加的数码数量，以及对应的结果字符串
//// 参数：s-输入的数字字符串，result-输出的结果字符串（需要在堆上分配内存）
//// 返回值：最少需要添加的数码数量
//int findMinAdditions(const char* s, char** result)
//{
//    int len = strlen(s);  // 获取输入字符串的长度
//
//    // 第一步：检查原数是否已经是7的倍数
//    long long num = 0;
//    for (int i = 0; i < len; i++)
//    {
//        // 计算整个数对7取模，使用逐步计算避免大整数溢出
//        num = (num * 10 + (s[i] - '0')) % 7;
//    }
//
//    // 如果原数已经是7的倍数，直接返回原字符串
//    if (num == 0)
//    {
//        *result = (char*)malloc(len + 1);  // 分配内存（包含终止符）
//        strcpy(*result, s);                // 复制原字符串
//        return 0;                          // 需要添加0个数字
//    }
//
//    // 第二步：尝试添加1个数码使结果成为7的倍数
//    // 遍历所有可能的插入位置（0到len，共len+1个位置）
//    for (int pos = 0; pos <= len; pos++)
//    {
//        // 尝试插入0-9这10个数字
//        for (int d = 0; d <= 9; d++)
//        {
//            // 计算插入位置前半部分的数值对7取模
//            long long prefix = 0;
//            for (int i = 0; i < pos; i++)
//            {
//                prefix = (prefix * 10 + (s[i] - '0')) % 7;
//            }
//
//            // 计算插入位置后半部分的数值对7取模
//            long long suffix = 0;
//            long long power = 1;  // 记录10的幂次对7的模
//            for (int i = len - 1; i >= pos; i--)
//            {
//                suffix = (suffix + (s[i] - '0') * power) % 7;
//                power = (power * 10) % 7;  // 更新幂次
//            }
//
//            // 计算插入数字d后整个数对7的模
//            // 公式推导：整个数 = prefix * 10^(k+1) + d * 10^k + suffix
//            // 其中k是suffix部分的位数
//            long long total = (prefix * 10 % 7 * power % 7 + d * power % 7 + suffix) % 7;
//            if (total < 0) total += 7;  // 确保结果非负
//
//            // 如果模为0，说明找到符合条件的解
//            if (total == 0)
//            {
//                // 构造结果字符串（原长度+1个字符）
//                *result = (char*)malloc(len + 2);
//                if (pos > 0) strncpy(*result, s, pos);  // 复制前缀部分
//                (*result)[pos] = d + '0';               // 插入数字d
//                strcpy(*result + pos + 1, s + pos);     // 复制后缀部分
//                return 1;                               // 需要添加1个数字
//            }
//        }
//    }
//
//    // 第三步：如果添加1个数字不行，则添加2个数字（数学证明最多需要添加2个）
//    // 重新计算当前数对7的模
//    long long current = 0;
//    for (int i = 0; i < len; i++)
//    {
//        current = (current * 10 + (s[i] - '0')) % 7;
//    }
//
//    // 计算需要添加的两位数，使整个数是7的倍数
//    // 数学原理：(原数 * 100 + x) % 7 == 0 => x = (7 - (原数 * 100 % 7)) % 7
//    // 100 mod 7 = 2，所以可以优化计算
//    long long current_mult100_mod7 = (current * (100 % 7)) % 7;
//    int needed = (7 - current_mult100_mod7) % 7;  // 计算需要添加的数值
//
//    // 确保结果是两位数（如果needed小于10，前面补0）
//    *result = (char*)malloc(len + 3);  // 分配内存（原长度+2个数字+终止符）
//    strcpy(*result, s);                // 复制原字符串
//    sprintf(*result + len, "%02d", needed);  // 添加计算出的两位数
//
//    return 2;  // 需要添加2个数字
//}
//
//int main()
//{
//    char s[10001];  // 存储输入的数字字符串，最大长度10000
//    // 循环读取输入，直到没有输入为止
//    while (scanf("%s", s) == 1)
//    {
//        char* result = NULL; 
//        int minAdd = findMinAdditions(s, &result);
//        // 输出结果
//        printf("%d\n%s\n", minAdd, result);
//        free(result);  // 释放动态分配的内存，避免内存泄漏
//    }
//    return 0;
//}



//#include <stdio.h>
//int main() 
//{
//	int T, t;
//	int out[12] = { 0 }; 
//	int in[4] = { 0 };
//	scanf("%d", &T);
//	while (T--) 
//	{
//		//输入 
//		int cnt, i;
//		int max = 0, max0 = 0, max2 = 0, max3 = 0;
//		int maxn1 = 0, maxn2 = 0;
//		scanf("%d %d %d %d", &out[0], &out[1], &out[2], &out[3]);
//		scanf("%d %d %d %d", &out[11], &in[0], &in[1], &out[4]);
//		scanf("%d %d %d %d", &out[10], &in[3], &in[2], &out[5]);
//		scanf("%d %d %d %d", &out[9], &out[8], &out[7], &out[6]);
//		//挪动外圈 
//		for (cnt = 0; cnt < 12; cnt++) 
//		{
//			t = out[11];//我这里是顺时针转动，所以先把out【11】存起来，以免被out【10】覆盖后丢失
//			for (i = 10; i >= 0; i--) 
//			{
//				out[i + 1] = out[i];
//			}
//			out[0] = t;//把之前的out【11】放到out【0】的位置上
//			if (out[0] + out[1] + out[2] > max3) max3 = out[0] + out[1] + out[2];//外面那连续三个数最大和
//			if (out[0] + out[1] > max2) max2 = out[0] + out[1]; //外边连续两个数最大和
//		}
//		//判断内部最大
//		for (i = 0; i < 4; i++) 
//		{
//			if (in[i] > maxn1) maxn1 = in[i];//内部一个最大数
//			if (in[i] + in[(i + 1) % 4] > maxn2) maxn2 = in[i] + in[(i + 1) % 4];//内部连续两个数最大和。这里对4取模，当i=3时，与in【3】配对的就是in【0】，省去分类讨论
//		}
//		//情况一：外圈3+内圈1
//		max3 += maxn1;
//		//情况二：外圈2+内圈2
//		max2 += maxn2;
//		//情况三：内圈4;
//		max0 = in[0] + in[1] + in[2] + in[3];
//
//		//判定三种情况的最大值
//		if (max3 >= max2 && max3 >= max0) max = max3;
//		else if (max2 >= max3 && max2 >= max0) max = max2;
//		else if (max0 >= max2 && max0 >= max3) max = max0;
//
//		printf("%d\n", max);
//
//	}
//	return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int arr1[6], arr2[14];
//        scanf("%d %d %d %d", &arr2[1], &arr2[2], &arr2[3], &arr2[4]);
//        scanf("%d %d %d %d", &arr2[12], &arr1[1], &arr1[2], &arr2[5]);
//        scanf("%d %d %d %d", &arr2[11], &arr1[4], &arr1[3], &arr2[6]);
//        scanf("%d %d %d %d", &arr2[10], &arr2[9], &arr2[8], &arr2[7]);
//        int max3 = 0, max2 = 0;
//        for (int i = 1; i <= 11; i++)
//        {
//            int t = arr2[12];
//            for (int j = 11; j > 0; j--)
//            {
//                arr2[j + 1] = arr2[j];
//            }
//            arr2[1] = t;
//            int nei3 = arr2[1] + arr2[2] + arr2[3];
//            int nei2 = arr2[1] + arr2[2];
//            if (nei3 > max3) max3 = nei3;
//            if (nei2 > max2) max2 = nei2;
//        }
//        int maxnei2 = 0, maxnei1 = 0;
//        arr1[5] = arr1[1];
//        for (int i = 1; i <= 4; i++)
//        {
//            int neinei = arr1[i] + arr1[i + 1];
//            if (neinei > maxnei2) maxnei2 = neinei;
//            if (arr1[i] > maxnei1) maxnei1 = arr1[i];
//        }
//        int zu1 = max3 + maxnei1;
//        int zu2 = max2 + maxnei2; 
//        int max;
//        int zu3 = arr1[1] + arr1[2] + arr1[3] + arr1[4]; 
//        if (zu3 >= zu2 && zu3 >= zu1) max = zu3;
//        else if (zu2 >= zu3 && zu2 >= zu1) max = zu2;
//        else if (zu1 >= zu2 && zu1 >= zu3) max = zu1;
//
//        printf("%d\n", max);
//
//    }
//    return 0;
//} 
//
// 
// 
//
//
//#include <stdio.h>
//int main()
//{
//	int T, t;
//	int out[12] = { 0 };
//	int in[4] = { 0 };
//	scanf("%d", &T);
//	while (T--)
//	{
//		int cnt, i;
//		int max = 0, max0 = 0, max2 = 0, max3 = 0;
//		int maxn1 = 0, maxn2 = 0;
//		scanf("%d %d %d %d", &out[0], &out[1], &out[2], &out[3]);
//		scanf("%d %d %d %d", &out[11], &in[0], &in[1], &out[4]);
//		scanf("%d %d %d %d", &out[10], &in[3], &in[2], &out[5]);
//		scanf("%d %d %d %d", &out[9], &out[8], &out[7], &out[6]);
//		for (cnt = 0; cnt < 12; cnt++)
//		{
//			t = out[11];
//			for (i = 10; i >= 0; i--)
//			{
//				out[i + 1] = out[i];
//			}
//			out[0] = t;
//			if (out[0] + out[1] + out[2] > max3) max3 = out[0] + out[1] + out[2];
//			if (out[0] + out[1] > max2) max2 = out[0] + out[1];
//		}
//		for (i = 0; i < 4; i++)
//		{
//			if (in[i] > maxn1) maxn1 = in[i];
//			if (in[i] + in[(i + 1) % 4] > maxn2) maxn2 = in[i] + in[(i + 1) % 4];
//		}
//		max3 += maxn1;
//		max2 += maxn2;
//		max0 = in[0] + in[1] + in[2] + in[3];
//		if (max3 >= max2 && max3 >= max0) max = max3;
//		else if (max2 >= max3 && max2 >= max0) max = max2;
//		else if (max0 >= max2 && max0 >= max3) max = max0;
//
//		printf("%d\n", max);
//
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h> 
//
//long long cube(long long num) 
//{
//    return num * num * num;
//}
//
//long long square(long long num) 
//{
//    return num * num;
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        long long n, m;
//        scanf("%lld %lld", &n, &m); 
//        long long max_x = (long long)sqrt(m) + 1;
//        int found = 0; 
//        for (long long x = -max_x; x <= max_x; x++) 
//        {
//            long long x_sq = square(x); 
//            if (x_sq > m) continue; 
//            long long y_sq = m - x_sq;
//            if (y_sq < 0) continue; 
//            long long y = (long long)sqrt(y_sq); 
//            if (square(y) != y_sq) continue; 
//            for (int sign = 1; sign >= -1; sign -= 2) 
//            {
//                long long y_val = y * sign; 
//                if (x > y_val) continue; 
//                if (cube(x) + cube(y_val) == n) 
//                {
//                    printf("%lld %lld\n", x, y_val);
//                    found = 1;
//                    goto end;  
//                }
//            }
//        }
//    end:
//        if (!found) 
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}




//#include<stdio.h>
//#include<math.h> 
//long long cube(long long num)
//{
//    return num * num * num;
//}
//long long square(long long num)
//{
//    return num * num;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long n, m;
//        scanf("%lld %lld", &n, &m);
//        long long max = 10000;
//        int found = 0;
//        for (long long x = -max; x <= max; x++)
//        {
//            long long x3 = cube(x);
//            if (x3 > n + cube(max) || x3 < n - cube(max))
//            {
//                continue;
//            }
//            long long y3 = n - x3;
//            long long y = (long long)round(pow(fabs(y3), 1.0 / 3));
//            long long y2[2] = { y, -y };
//            for (int i = 0; i < 2; i++)
//            {
//                long long y = y2[i];
//                if (cube(y) != y3)
//                {
//                    continue;
//                }
//                if (square(x) + square(y) == m && x <= y)
//                {
//                    printf("%lld %lld\n", x, y);
//                    found = 1;
//                    goto end;
//                }
//            }
//        }
//    end:
//        if (!found)
//        {
//            printf("0\n");
//        }
//    }
//    return 0;
//}
//
//
//
//#include<stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include<math.h>    // 引入数学库，用于pow()和round()等数学函数
//
//// 计算一个数的立方
//long long cube(long long num)
//{
//    return num * num * num;  // 返回num的三次方
//}
//
//// 计算一个数的平方
//long long square(long long num)
//{
//    return num * num;  // 返回num的二次方
//}
//
//int main()
//{
//    int T;  // 定义变量T，用于存储测试用例的数量
//    scanf("%d", &T);  // 从标准输入读取测试用例数量
//
//    // 循环处理每个测试用例，T--表示每次循环后T减1，直到T为0
//    while (T--)
//    {
//        long long n, m;  // 定义变量n和m，用于存储每个测试用例的输入值
//        scanf("%lld %lld", &n, &m);  // 读取n和m的值
//
//        long long max = 10000;  // 定义搜索范围的最大值
//        int found = 0;  // 标记是否找到符合条件的解，0表示未找到
//
//        // 在[-max, max]范围内遍历可能的x值
//        for (long long x = -max; x <= max; x++)
//        {
//            long long x3 = cube(x);  // 计算x的立方
//
//            // 剪枝操作：如果x³超出可能的范围，则跳过当前x
//            if (x3 > n + cube(max) || x3 < n - cube(max))
//            {
//                continue;  // 跳过当前循环，继续下一个x
//            }
//
//            long long y3 = n - x3;  // 计算y³的值（因为x³ + y³ = n）
//
//            // 计算y的近似值：对y³的绝对值开三次方后四舍五入
//            long long y = (long long)round(pow(fabs(y3), 1.0 / 3));
//
//            // 考虑y的正负两种可能（因为立方根可能有正负两种情况）
//            long long y2[2] = { y, -y };
//
//            // 检查两种可能的y值
//            for (int i = 0; i < 2; i++)
//            {
//                long long y = y2[i];  // 取出当前要检查的y值
//
//                // 验证y³是否等于预期的y3，排除近似计算的误差
//                if (cube(y) != y3)
//                {
//                    continue;  // 不符合则跳过
//                }
//
//                // 检查是否满足x² + y² = m且x <= y的条件
//                if (square(x) + square(y) == m && x <= y)
//                {
//                    printf("%lld %lld\n", x, y);  // 输出找到的解
//                    found = 1;  // 标记为已找到解
//                    goto end;  // 跳转到循环结束的标签处
//                }
//            }
//        }
//
//    end:  // 循环结束的标签
//        if (!found)  // 如果未找到解
//        {
//            printf("0\n");  // 输出0
//        }
//    }
//    return 0;  // 程序正常结束
//}

//
//
//#include <stdio.h> 
//int oula(int n) 
//{ 
//    if (n == 1) 
//    {
//        return 0;
//    } 
//    int result = n;   
//    if (n % 2 == 0) 
//    {
//        result -= result / 2;    
//        while (n % 2 == 0) 
//        {
//            n /= 2;
//        }
//    } 
//    for (int i = 3; i * i <= n; i += 2)
//    {
//        if (n % i == 0) 
//        {
//            result -= result / i;   
//            while (n % i == 0) 
//            {
//                n /= i;
//            }
//        }
//    } 
//    if (n > 1) {
//        result -= result / n;   
//    }
//
//    return result;
//} 
//int main() 
//{
//    int n; 
//    while (scanf("%d", &n) == 1 && n != 0) 
//    {
//        printf("%d\n", oula(n));
//    }
//    return 0;
//}  



#include <stdio.h>
#include <stdlib.h>   
int gcd(int a, int b) 
{
    a = abs(a);
    b = abs(b);
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int ttt;
    scanf("%d", &ttt);  
    while (ttt--)
    {
        int a, b, c, d, e, f;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        int dg = a * c * (f + e);
        int gf = d * f * (a + b);
        int cache = gcd(dg, gf);   
        printf("%d %d\n", dg / cache, gf / cache);
    }
    return 0;
}
