#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  


//#include <stdio.h>
//#include <stdbool.h>
//#include <math.h>
//
//// 判断一个数是否为素数
//bool is_prime(int n) {
//    if (n <= 1) {
//        return false;
//    }
//    if (n == 2) {
//        return true;
//    }
//    if (n % 2 == 0) {
//        return false;
//    }
//    for (int i = 3; i <= sqrt(n); i += 2) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//// 检查一个数是否为截尾素数
//bool is_truncatable_prime(int p) {
//    int temp = p;
//    while (temp > 0) {
//        if (!is_prime(temp)) {
//            return false;
//        }
//        temp /= 10; // 去掉最后一位数字
//    }
//    return true;
//}
//
//int main() {
//    int count = 0;
//    int num = 2;
//    int results[83]; // 已知共有83个这样的素数
//
//    // 收集所有满足条件的素数
//    while (count < 83) {
//        if (is_prime(num) && is_truncatable_prime(num)) {
//            results[count++] = num;
//        }
//        num++;
//    }
//
//    // 按要求格式输出结果
//    for (int i = 0; i < 83; i++) {
//        printf("%d %d\n", i + 1, results[i]);
//    }
//
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[3];
//    for (int i = 0; i < 3; i++)
//    {
//        arr[i] = a % 10;
//        a /= 10;
//    }
//    if (arr[0] == arr[1] && arr[0] != arr[2] || arr[0] == arr[2] && arr[0] != arr[1] || arr[2] == arr[1] && arr[0] != arr[2])
//        printf("Yes");
//    else printf("No");
//    return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x, y;
//    scanf("%lf", &x);
//    if (x >= 0 && x < 10)
//    {
//        y = cos(x + 3.0);
//        printf("%.5lf", y);
//    }
//    else if (x >= 10 && x < 20)
//    {
//        y = pow(cos(x + 7.5), 2);
//        printf("%.5lf", y);
//    }
//    else if (x >= 20 && x < 30)
//    {
//        y = pow(cos(x + 4.0), 4);
//        printf("%.5lf", y);
//    }
//    else printf("Not define");
//}
//
//

//
//#include<stdio.h>
//int main()
//{
//	printf("%09d", 3 );
//	return 0;
//}






//#include <stdio.h>   // 包含标准输入输出库，用于输入输出函数
//#include <stdlib.h>  // 包含标准库，提供一些通用功能（此处未直接使用，但包含是允许的）
//
//int main()  // 程序主函数，程序入口点
//{
//    int n, i, j, z;  // 声明整型变量：n（测试用例数量），i、j、z（循环计数器）
//    scanf("%d", &n);  // 从标准输入读取n的值，即测试用例的数量
//    while (n--)  // 循环处理n个测试用例，每处理一个n减1，直到n为0
//    {
//        int a, flag = 1;  // 声明变量：a（当前测试用例的输入值），flag（标记是否找到符合条件的组合，初始为1表示未找到）
//        scanf("%d", &a);  // 读取当前测试用例的输入值a
//        int min;  // 声明变量min，用于存储符合条件的组合中i+j+z的最小值
//        if (a % 11 != 0)  // 若a不能被11整除，直接输出0（因为后续计算基于a/11，不满足整除则无有效组合）
//        {
//            printf("0\n");
//        }
//        else  // 若a能被11整除，继续处理
//        {
//            a = a / 11;  // 将a除以11，简化后续计算（原问题可能转化为该值的组合问题）
//            // 三层循环寻找i、j、z的非负整数组合，使得i + 91*j + 101*z = a
//            for (i = 0; i <= a; i++)  // i从0开始，最大不超过a（因为i为非负整数，且单独i不能超过a）
//            {
//                for (j = 0; j * 91 <= a; j++)  // j从0开始，91*j不超过a（避免无效循环）
//                {
//                    for (z = 0; z * 101 <= a; z++)  // z从0开始，101*z不超过a（避免无效循环）
//                    {
//                        if ((i + j * 91 + z * 101) == a)  // 若当前i、j、z满足等式
//                        {
//                            flag = 0;  // 标记为找到有效组合
//                            min = i + j + z;  // 计算当前组合的和i+j+z，暂存为min
//                            break;  // 跳出z的循环
//                        }
//                    }
//                    if (flag == 0)  // 若已找到有效组合，跳出j的循环
//                    {
//                        break;
//                    }
//                }
//                if (flag == 0)  // 若已找到有效组合，跳出i的循环
//                {
//                    break;
//                }
//            }
//            printf("%d\n", min);  // 输出找到的最小和min（若未找到，min未初始化，此处存在逻辑隐患）
//        }
//    }
//    return 0;  // 程序正常结束，返回0
//}



//
//
//#include<stdio.h>
//#include<string.h>
//
//int main() {
//    int p;
//    while (scanf("%d", &p) == 1) {
//        // 存储 2^i % p (i从1到p-1)
//        int arr[100003] = { 0 };
//        int len = p - 1;  // 有效元素个数为p-1
//        int current = 2;  // 初始值2^1
//        for (int i = 0; i < len; i++) {  // 用0下标开始存储，避免越界
//            arr[i] = current % p;
//            current = (current * 2) % p;  // 计算下一个2^(i+1)，取模防止溢出
//        }
//
//        // 对arr进行冒泡排序（升序）
//        for (int j = 0; j < len - 1; j++) {  // 控制轮数
//            int sorted = 1;
//            for (int i = 0; i < len - 1 - j; i++) {  // 每轮比较次数
//                if (arr[i] > arr[i + 1]) {
//                    int t = arr[i];
//                    arr[i] = arr[i + 1];
//                    arr[i + 1] = t;
//                    sorted = 0;
//                }
//            }
//            if (sorted) break;  // 优化：已排序则退出
//        }
//
//        // 生成目标数组：1,2,...,p-1
//        int target[100003] = { 0 };
//        for (int i = 0; i < len; i++) {
//            target[i] = i + 1;
//        }
//
//        // 比较排序后的arr与target是否一致
//        int isSame = 1;
//        for (int i = 0; i < len; i++) {
//            if (arr[i] != target[i]) {
//                isSame = 0;
//                break;
//            }
//        }
//
//        if (isSame) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//// 函数无返回值，改为void类型
//void hanshu(int arr[], int n) {
//    if (n <= 0) return; // 处理空数组情况
//
//    // 1. 找到数组中的最大值max
//    int max = arr[1]; // 有效元素从arr[1]开始
//    for (int i = 2; i <= n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//
//    // 2. 创建计数数组（大小max+1）
//    int* count = (int*)calloc(max + 1, sizeof(int));
//    if (count == NULL) {
//        printf("内存分配失败\n");
//        return;
//    }
//
//    // 3. 统计每个元素的出现次数
//    for (int i = 1; i <= n; i++) {
//        count[arr[i]]++;
//    }
//
//    // 4. 计算前缀和
//    for (int i = 1; i <= max; i++) {
//        count[i] += count[i - 1];
//    }
//
//    // 5. 构建结果数组（大小n，对应arr[1..n]）
//    int* result = (int*)malloc(n * sizeof(int));
//    if (result == NULL) {
//        free(count);
//        printf("内存分配失败\n");
//        return;
//    }
//
//    // 6. 从后向前填充result，修正下标为count[val]-1
//    for (int i = n; i >= 1; i--) {
//        int val = arr[i];
//        int pos = count[val] - 1; // 关键修正：下标-1
//        result[pos] = val;
//        count[val]--;
//    }
//
//    // 7. 复制结果到arr[1..n]（与原数组有效元素位置匹配）
//    memcpy(arr + 1, result, n * sizeof(int)); // 从arr[1]开始复制
//
//    // 释放内存
//    free(count);
//    free(result);
//}
//
//int main() {
//    int p;
//    while (scanf("%d", &p) == 1) {
//        if (p <= 1) { // 特殊情况：p=1时无1~p-1
//            printf("No\n");
//            continue;
//        }
//        int arr[100003] = { 0 };
//        int j = 2 % p;
//        int n = p - 1; // 元素个数为p-1，存在arr[1..p-1]
//
//        // 生成2^i % p的结果
//        for (int i = 1; i < p; i++) {
//            arr[i] = j;
//            j = (j * 2LL) % p; // 防止溢出
//        }
//
//        // 调用计数排序
//        hanshu(arr, n);
//
//        // 判断排序后是否为1~p-1的连续序列
//        int flag = 1;
//        for (int i = 1; i < p; i++) {
//            if (arr[i] != i) {
//                flag = 0;
//                break;
//            }
//        }
//
//        printf(flag ? "Yes\n" : "No\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	{
//		char T;
//		while (scanf("%c", &T) == 1)
//		{
//			int t = T - 'A' + 1;
//			int b1 = 2 * t - 1;
//			int b2 = 2 * t - 1;
//			for (int i = 1; i <= t; i++)
//			{
//				for (int j = b1; j > 0; j--)
//				{
//					printf(" ");
//				}
//				b1--;
//				int p = 2 * i - 1;
//				for (int j = 1; j <= p; j++)
//				{
//					if (j <= i) printf("%c", 'A' + j - 1);
//					else printf("%c", 'A' + p - j);
//				}
//				puts("");
//			}
//			for(int i=1;i<=t;i++)
//			{ 
//				for (int J = 1; J <= b1; J++) printf(" ");
//				b1--; 
//				int p = 2 * i - 1;
//				for (int j = 1; j <= p; j++)
//				{
//					if (j <= i) printf("%c", 'A' + j - 1);
//					else printf("%c", 'A' + p - j);
//				} 
//				for (int j = b2; j >=1; j--)
//				{
//					printf(" ");
//				}
//				b2 -= 2; 
//				for (int j = 1; j <= p; j++)
//				{
//					if (j <= i) printf("%c", 'A' + j - 1);
//					else printf("%c", 'A' + p - j);
//				}
//				puts(""); 
//			} 
//		}
//	}
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	char T;
//	while (scanf("%c", &T) == 1)
//	{
//		int t = T - 'A' + 1;
//		int b1 = 2 * t - 1;
//		for (int i = 1; i <= t; i++)
//		{
//			for (int j = 0; j < b1; j++) printf(" ");
//			b1--;
//			for (int j = 1; j <= 2 * i - 1; j++)
//			{
//				if (j <= i) printf("%c", 'A' + j - 1);
//				else printf("%c", 'A' + 2 * i - 1 - j);
//			}
//			puts(" ");
//		}
//		int b2 = t - 1;
//		int c = 2 * t - 1;
//		for (int i = 1; i <= t; i++)
//		{
//			for (int j = 0; j < b2; j++) printf(" ");
//			b2--;
//			for (int j = 1; j <= 2 * i - 1; j++)
//			{
//				if (j <= i) printf("%c", 'A' + j - 1);
//				else printf("%c", 'A' + 2 * i - 1 - j);
//			}
//			for (int j = 1; j <= c; j++)
//			{
//				printf(" ");
//			}
//			c -= 2;
//			for (int j = 1; j <= 2 * i - 1; j++)
//			{
//				if (j <= i) printf("%c", 'A' + j - 1);
//				else printf("%c", 'A' + 2 * i - 1 - j);
//			}
//			puts(" ");
//		}
//	}
//	return 0;





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



//
//#include<stdio.h>
//int main()
//{
//    char an;  // 存储输入的大写字母
//    // 循环读取输入的字符，直到文件结束(EOF)
//    while (scanf("%c", &an) != EOF)
//    {
//        // 计算输入字母对应的等级d（如'A'→1，'B'→2...）
//        int d = an - 'A' + 1;
//        // 计算一个中间变量e（值为2*d-1，未直接使用）
//        int e = 2 * d - 1;
//        int i, j, k;  // 循环控制变量
//        char ch[150][150];  // 二维数组用于存储要打印的字符图案
//
//        // 初始化二维数组的第一部分（前d行，每行前d列）为空格
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // 初始化二维数组的第三部分（行索引3d-1到4d-2，每行前d列）为空格
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // 核心逻辑：向二维数组中填充字母，形成对称图案
//        for (i = 0; i < d; i++)
//        {
//            // 填充第一部分和第三部分的水平方向字母（中间区域）
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[i][j] = an - i;  // 第一部分第i行的中间区域填充字母
//                ch[4 * d - 2 - i][j] = an - i;  // 第三部分对应行的中间区域填充字母
//            }
//
//            // 填充第二部分的垂直方向字母（左右两侧）
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[k][d + i] = an - i;  // 第二部分第d+i列的左侧垂直区域填充字母
//                ch[k][3 * d - 2 - i] = an - i;  // 第二部分第3d-2-i列的右侧垂直区域填充字母
//            }
//
//            // 填充第一部分和第三部分的垂直方向字母（左侧和右侧）
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[j][i] = an - i;  // 第一部分第i列的垂直区域填充字母
//                ch[j][4 * d - 2 - i] = an - i;  // 第三部分第4d-2-i列的垂直区域填充字母
//            }
//
//            // 填充第二部分的水平方向字母（上下两侧）
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[d + i][k] = an - i;  // 第二部分第d+i行的上侧水平区域填充字母
//                ch[3 * d - 2 - i][k] = an - i;  // 第二部分第3d-2-i行的下侧水平区域填充字母
//            }
//        }
//
//        // 打印第一部分图案（共d行，每行打印前3d-1列）
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 每行结束后换行
//        }
//
//        // 打印第二部分图案（共2d-2行，每行打印全部4d-1列）
//        for (i = d; i < 3 * d - 1; i++)
//        {
//            for (j = 0; j < 4 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 每行结束后换行
//        }
//
//        // 打印第三部分图案（共d行，每行打印前3d-1列）
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // 每行结束后换行
//        }
//
//    }
//    return 0;  // 程序正常结束
//}






//
//
//#include<stdio.h>
//#include<math.h>
//char str[20];
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%s", str);
//		int sum = 0;
//		for (int i = 0, j = 17; i <= 17; i++, j--)
//		{
//			if (str[i] == 'X') str[i] = 10 + '0';
//			sum += (str[i] - '0') * pow(2, j);
//		}
//		if (sum % 11 == 1)    printf("Yes\n");
//		else printf("No\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        char arr[19] = { 0 };
//        int arr2[19] = { 0 }, arr3[19] = { 0 };
//        scanf("%s", arr);
//        for (int i = 0; i < 17; i++)
//        {
//            arr2[i] = arr[i] - '0';
//        }
//        if (arr[17] > 57) arr2[17] = 10;
//        else arr2[17] = arr[17] - '0';
//        for (int i = 0; i < 17; i++)
//        {
//            int t = arr2[i];
//            for (int j = 16; j >= i; j--)
//            {
//                t = (t * 2) % 11;
//            }
//            arr3[i] = t;
//        }
//        arr3[17] = arr2[17];
//        int sum = 0;
//        for (int i = 0; i < 18; i++)
//        {
//            sum += arr3[i];
//        }
//        if (sum % 11 == 1) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}


//
//#include<stdio.h> 
//int main()
//{
//	char c;
//	while (scanf("%c", &c) == 1 && c != '#')
//	{
//		int n = c - 'A' + 1;
//		char matrix[60][60];
//		for (int l = 1; l <= n; l++)
//		{
//			matrix[l][1] = c - l + 1;
//		}
//		for (int l = 1; l <= n; l++)
//		{
//			int flag = 0;
//			for (int col = 2; col <= n; col++)
//			{
//				if (matrix[l][col - 1] == c || flag == 1)
//				{
//					matrix[l][col] = matrix[l][col - 1] - 1;
//					flag = 1;
//				}
//				else if (matrix[l][col - 1] == 'A')
//				{
//					matrix[l][col] = matrix[l][col - 1] + 1;
//					flag = 0;
//				}
//				else
//				{
//					matrix[l][col] = matrix[l][col - 1] + 1;
//				}
//
//			}
//		}
//		for (int l = n + 1; l < 2 * n; l++)
//		{
//			for (int col = 1; col <= n; col++)
//			{
//				matrix[l][col] = matrix[2 * n - l][col];
//			}
//		}
//		for (int col = n + 1; col < 2 * n; col++)
//		{
//			for (int l = 1; l < 2 * n; l++)
//			{
//				matrix[l][col] = matrix[l][2 * n - col];
//			}
//		}
//		for (int l = 1; l < 2 * n; l++)
//		{
//			for (int col = 1; col < 2 * n; col++)
//			{
//				printf("%c", matrix[l][col]);
//			}
//			printf("\n");
//		}
//	}
//}


//#include<stdio.h>
//int main()
//{
//    char K;
//    while (scanf("%c", &K) == 1)
//    {
//        int d = K - 'A' + 1, arr[150][150];
//        for (int i = 1; i <= d; i++)
//        {
//            for (int j = i, k = 1; k <= d; j++, k++)
//            {
//                if (j <= d)
//                {
//                    arr[i][d - k + 1] = arr[i][d + k - 1] = j;
//                }
//                else
//                {
//                    arr[i][d - k + 1] = arr[i][d + k - 1] = 2 * d - j;
//                }
//            }
//        }
//        for (int i = 1; i <= d; i++)
//        {
//            for (int j = i, k = 1; k <= d; j++, k++)
//            {
//                if (j <= d)
//                {
//                    arr[2 * d - i][d - k + 1] = arr[2 * d - i][d + k - 1] = j;
//                }
//                else
//                {
//                    arr[2 * d - i][d - k + 1] = arr[2 * d - i][d + k - 1] = 2 * d - j;
//                }
//            }
//        }
//        for (int i = 1; i <= 2 * d - 1; i++)
//        {
//            for (int j = 1; j <= 2 * d - 1; j++)
//            {
//                printf("%c", arr[i][j] + 'A' - 1);
//            }
//            puts("");
//        }
//    }
//    return 0;
//}







//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* arr = (int*)calloc(n + 2, sizeof(int));
//    int* arr2 = (int*)calloc(n + 2, sizeof(int)); 
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    int l, r, d; 
//        for (int i = 1; i <= n; i++)
//        {
//            arr2[i] = arr[i] - arr[i - 1];
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            scanf("%d %d %d", &l, &r, &d);
//            arr2[l] += d;
//            arr2[r + 1] -= d;
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            arr2[i] += arr2[i - 1];
//        }   
//        for (int i = 1; i <= n; i++)
//        {
//            arr2[i] += arr2[i - 1];
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            printf("%d ", arr2[i]);
//        }
//        puts("");
//        free(arr);
//        free(arr2); 
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, arr[1003], arr2[1003], arr3[1003] = { 0 };
//        scanf("%d", &n);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr2[i]);
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            int t = arr[1];
//            for (int j = 1; j <= n; j++)
//            {
//                if (j < n)
//                {
//                    arr[j] = arr[j + 1];
//                }
//                else arr[j] = t;
//            }
//            int flag = 1;
//            for (int k = 1; k <= n; k++)
//            {
//                if (arr[k] != arr2[k])
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag == 1)
//            {
//                printf("Yes\n");
//                goto jieshu;
//            }
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            arr3[i] = arr[n - i + 1];
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            int t = arr3[1];
//            for (int j = 1; j <= n; j++)
//            {
//                if (j < n)
//                {
//                    arr3[j] = arr3[j + 1];
//                }
//                else arr3[j] = t;
//            }
//            int flag = 1;
//            for (int k = 1; k <= n; k++)
//            {
//                if (arr3[k] != arr2[k]) flag = 0;
//            }
//            if (flag == 1)
//            {
//                printf("Yes\n");
//                goto jieshu;
//            }
//        }
//        printf("No\n");
//    jieshu:;
//    }
//    return 0;
//}





//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int findMinAdditions(const char* s, char** result)
//{
//    int len = strlen(s);
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
//    for (int pos = 0; pos <= len; pos++)
//    {
//        for (int d = 0; d <= 9; d++)
//        {
//            long long prefix = 0;
//            for (int i = 0; i < pos; i++)
//            {
//                prefix = (prefix * 10 + (s[i] - '0')) % 7;
//            }
//            long long suffix = 0;
//            long long power = 1;
//            for (int i = len - 1; i >= pos; i--)
//            {
//                suffix = (suffix + (s[i] - '0') * power) % 7;
//                power = (power * 10) % 7;
//            }
//            long long total = (prefix * 10 % 7 * power % 7 + d * power % 7 + suffix) % 7;
//            if (total < 0) total += 7;
//
//            if (total == 0)
//            {
//                *result = (char*)malloc(len + 2);
//                if (pos > 0) strncpy(*result, s, pos);
//                (*result)[pos] = d + '0';
//                strcpy(*result + pos + 1, s + pos);
//                return 1;
//            }
//        }
//    }
//    long long current = 0;
//    for (int i = 0; i < len; i++)
//    {
//        current = (current * 10 + (s[i] - '0')) % 7;
//    }
//    long long current_mult100_mod7 = (current * (100 % 7)) % 7;
//    int needed = (7 - current_mult100_mod7) % 7;
//    *result = (char*)malloc(len + 3);
//    strcpy(*result, s);
//    sprintf(*result + len, "%02d", needed);
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
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char s[10010];
//	scanf("%s", s);
//	int r = 0;
//	for (int i = 0; s[i] != '\0'; i++)
//	{
//		r = (r * 10 + (s[i] - '0')) % 7;
//	}
//	if (r == 0)
//	{
//		printf("0\n");
//		printf("%s", s);
//	}
//	else {
//		for (int d = 0; d <= 9; d++)
//		{
//			if ((r * 10 + d) % 7 == 0)
//			{
//				printf("1\n%s%d\n", s, d);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//
//
//#include <stdio.h>
//#include <string.h> 
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    for (int t = 1; t <= T; t++)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        char arr[27];
//        for (int i = 0; i < n; i++)
//        {
//            arr[i] = 'A' + i;
//        }
//        arr[n] = '\0';
//        int c[100];
//        for (int i = 0; i < m; i++)
//        {
//            scanf("%d", &c[i]);
//        }
//        printf("#%d:\n", t);
//        for (int i = 0; i < m; i++)
//        {
//            int shi = c[i];
//            if (shi == 0)
//            {
//                printf("%s\n", arr);
//                continue;
//            }
//            shi %= n;
//            if (shi < 0)
//            {
//                int left = -shi;
//                char temp[27];
//                strncpy(temp, arr + left, n - left);
//                strncpy(temp + (n - left), arr, left);
//                temp[n] = '\0';
//                strcpy(arr, temp);
//            }
//            else
//            {
//                char temp[27];
//                strncpy(temp, arr + (n - shi), shi);
//                strncpy(temp + shi, arr, n - shi);
//                temp[n] = '\0';
//                strcpy(arr, temp);
//            }
//            printf("%s\n", arr);
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr[1003] = { 0 }, arr2[1003] = { 0 }, arr3[200] = { 0 };
//        scanf("%s", arr);
//        scanf("%s", arr2); 
//        for (int i = 0; i < strlen(arr); i++)
//        {
//            if (arr3[arr[i]] == 0)
//            {
//                arr3[arr[i]] = arr2[i];
//            }
//            else
//            {
//                if (arr3[arr[i]] != arr2[i])
//                {
//                    printf("No\n"); 
//                    goto jieshu;
//                }
//            }
//        } 
//        int flag = 1;
//        for (int i = 97; i <= 122; i++)
//        {
//            for (int j = i+1; j <= 122; j++)
//            {
//                if (arr3[i] == arr3[j]&&arr3[i]!=0)
//                {
//                    printf("No\n");
//                    flag = 0;
//                    goto jieshu;
//                }
//            }
//        }
//        if (flag) printf("Yes\n");
//    jieshu:;
//    }
//    return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1003] = { 0 };
//    while (scanf("%s",arr) == 1)
//    {
//        int arr2[28] = { 0 };
//        int arr3[1003] = { 0 };
//        for (int i = 0; i < strlen(arr); i++)
//        {
//            arr2[arr[i] - 'a' + 1]++;
//        }
//        for (int i = 1; i < 27; i++)
//        {
//           if(arr2[i]>0)  arr3[arr2[i]]++;
//        }
//        int max = 0,t=0;
//        for (int i = 1; i < 1003; i++)
//        {
//            if (max < arr3[i])
//            {
//                max = arr3[i];
//                t = i;
//            }
//        }
//        int first = 1;
//        printf("%d ", t); 
//        for (int i = 1; i < 27; i++)
//        {
//            if (arr2[i] == t)
//            {
//                if (first)
//                {
//                    printf("%c ",'a'+i-1);
//                    first = 0;
//                }
//                else
//                {
//                    printf("%c ", 'a' + i - 1);
//                }
//            }
//        }
//        puts("");
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#define MOD 1000000007  
//long long comb3(int n)
//{
//    if (n < 3) return 0;   
//    long long res = (long long)n * (n - 1) * (n - 2)/6 % MOD; 
//    return res;
//} 
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
//        long long total = (case1 + case2 + case3 + case4) % MOD;
//        printf("%lld\n", total);
//    }
//    return 0;
//}







//#include<stdio.h>
//#define N 1000005
//int a[N] = { 0 };
//int b[N] = { 0 };
//int f[N] = { 0 };
//void hanshu1()
//{
//	int i, j, k = 0;
//	a[0] = 1, a[1] = 1;
//	for (i = 2; i < N; i++)
//	{
//		if (a[i] == 0)b[k++] = i;
//		for (j = 0; j < k; j++)
//		{
//			if (i * b[j] > N)break;
//			a[i * b[j]] = 1;
//			if (i % b[j] == 0)break;
//		}
//	}
//	for (i = 0; i < k - 1; i++)
//	{
//		int m = (b[i] + b[i + 1]) / 2;
//		if (a[m] == 1)f[m] = 1;
//	}
//	for (i = 0; i < N; i++)
//	{
//		f[i] += f[i - 1];
//	}
//}
//void hanshu2()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", f[b] - f[a - 1]);
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	hanshu1();
//	while (T--)
//	{
//		hanshu2();
//	}
//}


//
//
//#include <stdio.h>    // 标准输入输出库
//#include <stdlib.h>   // 标准库（此处未直接使用）
//#include <string.h>   // 字符串操作库（用于memset）
//#define N 3000000     // 定义最大范围N（用于筛选素数）
//int arr[N + 10] = { 1, 1 };  // 素数标记数组：arr[i]=0表示素数，初始化为{1,1}（0和1不是素数）
//char b[1000];              // 临时存储素数的每一位数字（字符形式）
//int a[10][N / 3 + 10];     // 二维数组：a[d][k]表示前k个素数中数字d出现的总次数（前缀和）
//
//int main()
//{
//    int i, j, k, count;    // 临时变量：i,j,k用于循环，count记录素数的序号（从1开始）
//
//    // 第一步：用埃氏筛法筛选素数（标记非素数）
//    for (i = 2; i <= N; i++)
//    {
//        if (arr[i] == 0)  // 若i是素数，则标记其所有倍数为非素数
//        {
//            for (j = 2; j * i <= N; j++)
//            {
//                arr[i * j] = 1;  // i*j是合数，标记为1
//            }
//        }
//    }
//
//    // 第二步：收集前100万个素数，统计每个数字在素数中的出现次数
//    count = 1;  // 素数序号从1开始（第1个素数是2）
//    for (i = 2; i <= N; i++)
//    {
//        if (arr[i] == 0)  // 若i是素数
//        {
//            int t;
//            t = i;  // 临时存储当前素数
//            j = 0;  // 记录数字位数的索引
//            memset(b, '\0', sizeof(b));  // 清空字符数组b（避免残留数据）
//
//            // 提取素数i的每一位数字，存入字符数组b（逆序，如123存为['3','2','1']）
//            while (t > 0)
//            {
//                b[j] = (t % 10) + '0';  // 取个位数字，转为字符（如3→'3'）
//                t /= 10;  // 去掉个位
//                j++;      // 位数索引+1
//            }
//
//            // 遍历字符数组b（逆序恢复原数字顺序），统计每个数字的出现次数
//            for (k = j - 1; k >= 0; k--)
//            {
//                // b[k]是当前位的字符（如'1'），转为数字d = b[k] - '0'
//                // a[d][count]++：第count个素数中出现了数字d，计数+1
//                a[b[k] - '0'][count]++;
//                count++;  // 素数序号+1（处理下一个素数）
//                if (count > 1000000)  // 只处理前100万个素数
//                    break;
//            }
//            if (count > 1000000)
//                break;  // 达到100万个素数，退出循环
//        }
//    }
//
//    // 第三步：对每个数字d，计算前缀和（便于快速查询区间和）
//    for (i = 0; i <= 9; i++)  // 遍历0-9每个数字
//    {
//        for (j = 2; j < count; j++)  // 从第2个素数开始累加（前缀和逻辑）
//        {
//            a[i][j] += a[i][j - 1];  // a[i][j] = 前j个素数中数字d的总次数
//        }
//    }
//
//    // 第四步：处理查询，输出结果
//    int T;  // 测试用例数量
//    scanf("%d", &T);
//    while (T--)  // 循环处理每个测试用例
//    {
//        int L, R, d;  // 查询：[L, R]区间的素数中，数字d出现的次数
//        scanf("%d %d %d", &L, &R, &d);
//        // 利用前缀和计算：区间和 = 前R个素数的总次数 - 前L-1个素数的总次数
//        printf("%d\n", a[d][R] - a[d][L - 1]);
//    }
//
//    return 0;
//}






//
//
//#include<stdio.h> 
//#include<string.h>
//#define N 1000000
//
//int T, arr[5 * N] = { 1,1 }, arr2[11][N] ,arr3[1000];
//int main()
//{
//    for (int i = 2; i < 5 * N; i++)
//    {
//        if (arr[i] == 0)
//        {
//            for (int j = 2; j * i <= 5 * N; j++)
//            {
//                arr[i * j] = 1;
//            }
//        }
//    }
//    int count = 1;
//    for (int i = 2; i < 5 * N; i++)
//    { 
//        if (arr[i] == 0)
//        { 
//            int t = i, j = 1 ;
//            memset(arr3, 0, sizeof(arr3));
//            while (t)
//            {
//                arr3[j++] = t % 10;
//                t /= 10;
//            }
//            for (int k = j - 1; k > 0; k--)
//            {
//                arr2[arr3[k]][count++]++;
//            }
//            if (count > 1000000)
//                break;
//        }
//    }
//    for (int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j < count-1; j++)
//        {
//            arr2[i][j + 1] += arr2[i][j];
//        }
//    }
//    scanf("%d", &T);
//    while (T--)
//    {
//        int L, R, d;
//        scanf("%d %d %d", &L, &R, &d);
//       
//        printf("%d\n", arr2[d][R] - arr2[d][L - 1]);
//    }
//    return 0;
//}