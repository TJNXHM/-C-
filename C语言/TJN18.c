#define _CRT_SECURE_NO_WARNINGS
   
//
//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int sum1 = 0;
//        int a = 0;
//        for (int i = 0; i < 17; i++)
//        {
//            scanf("%d", &a);
//            int sum2 = 1;
//            for (int j = 0; j < i; j++)
//            {
//                sum2 *= 2;
//            }
//            sum1 = sum1 + a * sum2;
//        }
//        scanf("%d", &a);
//
//        if (a > 9) a = 10;
//        int sum3 = 1;
//        for (int j = 0; j < 18; j++)
//        {
//            sum3 *= 2;
//        }
//        sum1 += sum3;
//        if (sum1 % 11 == 1) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <math.h>
//
//void swap(int& x, int& y) {
//    int t;
//    t = x, x = y, y = t;
//}
//
//int main()
//{
//    int K, x, y, z;
//    scanf("%d", &K);
//    while (K--)
//    {
//        scanf("%d %d", &x, &y);
//        if (x == y) { puts("None"); continue; }      // 等腰三角形没有勾股数
//        if (x > y)   swap(x, y);
//        x *= x, y *= y;
//
//        z = y - x;
//        z = sqrt(z);
//        if ((z * z) == (y - x)) { printf("%d\n", z); continue; }  // z作直角边
//        z = y + x;
//        z = sqrt(z);
//        if ((z * z) == (y + x)) { printf("%d\n", z); continue; }  // z作斜边
//        puts("None");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int a, b, c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b);
//        //其他为斜边
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b) c = c2;
//        //b为斜边
//        int d2 = sqrt(b * b - a * a);
//        if (d2 * d2 == b * b - a * a) d = d2;
//        //a为斜边
//        int e2 = sqrt(a * a - b * b);
//        if (e2 * e2 == a * a - b * b) e = e2;
//        if (c == 0 && d == 0 && e == 0)
//        {
//            printf("None\n");
//            continue;
//        }
//        else
//        {
//            int t = 100000;
//            if (c < t) t = c;
//            if (d < t) t = d;
//            if (e < t) t = e;
//            printf("%d\n", t);
//        }
//    }
//    return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    int a, b;
//    scanf("%d", &K);
//    while (K--)
//    { 
//        int c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b); 
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b)
//            c = c2; 
//        if (b > a) 
//        {  
//            int d2 = sqrt(b * b - a * a);
//            if (d2 * d2 == b * b - a * a)
//                d = d2;
//        } 
//        if (a > b) 
//        {  
//            int e2 = sqrt(a * a - b * b);
//            if (e2 * e2 == a * a - b * b)
//                e = e2;
//        } 
//        int arr[3] = { 0 };
//        int count = 0;
//        if (c != 0) arr[count++] = c;
//        if (d != 0) arr[count++] = d;
//        if (e != 0) arr[count++] = e;
//        if (count == 0) 
//        {
//            printf("None\n");
//        }
//        else 
//        { 
//            int min = arr[0];
//            for (int i = 1; i < count; i++) 
//            {
//                if (arr[i] < min)
//                {
//                    min = arr[i];
//                }
//            }
//            printf("%d\n", min);
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h> 
//int main()
//{
//	char c;
//	while (scanf("%c", &c) ==1 && c != '#') 
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
//
//#include<stdio.h>   // 包含标准输入输出库，用于输入输出操作
//#include<math.h>    // 包含数学库，虽然代码中未直接使用数学函数，但可能用于后续扩展
//
//int main()          // 主函数，程序的入口点
//{
//    char c;         // 定义字符变量c，用于存储输入的字符
//
//    // 循环读取字符，直到遇到文件结束符(EOF)或输入'#'为止
//    while (scanf("%c", &c) != EOF && c != '#')
//    {
//        // 计算n的值，例如输入'A'时n=1，'B'时n=2，以此类推
//        int n = c - 'A' + 1;
//
//        // 定义一个60x60的字符矩阵，用于存储要输出的字符图形
//        char matrix[60][60];
//
//        // 第一阶段：填充矩阵的第一列（1到n行）
//        for (int l = 1; l <= n; l++)
//        {
//            // 第一列第l行的字符为：输入字符c减去(l-1)，例如c='C'，l=1时为'C'，l=2时为'B'
//            matrix[l][1] = c - l + 1;
//        }
//
//        // 第二阶段：填充矩阵的第1到n行，从第2列到第n列
//        for (int l = 1; l <= n; l++)
//        {
//            int flag = 0;  // 标志位：0表示字符还在递增阶段，1表示已开始递减
//
//            // 从第2列开始填充到第n列
//            for (int col = 2; col <= n; col++)
//            {
//                // 如果前一列是最大字符（输入的c），或者已经开始递减
//                if (matrix[l][col - 1] == c || flag == 1)
//                {
//                    // 当前列字符为前一列字符减1（递减）
//                    matrix[l][col] = matrix[l][col - 1] - 1;
//                    flag = 1;  // 标记为已开始递减
//                }
//                // 如果前一列是'A'（最小字符）
//                else if (matrix[l][col - 1] == 'A')
//                {
//                    // 当前列字符为前一列字符加1（开始递增）
//                    matrix[l][col] = matrix[l][col - 1] + 1;
//                    flag = 0;  // 标记为递增阶段
//                }
//                // 其他情况（默认处于递增阶段）
//                else
//                {
//                    // 当前列字符为前一列字符加1
//                    matrix[l][col] = matrix[l][col - 1] + 1;
//                }
//            }
//        }
//
//        // 第三阶段：利用行对称填充n+1到2n-1行（上半部分镜像到下半部分）
//        for (int l = n + 1; l < 2 * n; l++)
//        {
//            for (int col = 1; col <= n; col++)
//            {
//                // 第l行的内容与第(2n-l)行相同（对称行）
//                matrix[l][col] = matrix[2 * n - l][col];
//            }
//        }
//
//        // 第四阶段：利用列对称填充n+1到2n-1列（左半部分镜像到右半部分）
//        for (int col = n + 1; col < 2 * n; col++)
//        {
//            for (int l = 1; l < 2 * n; l++)
//            {
//                // 第col列的内容与第(2n-col)列相同（对称列）
//                matrix[l][col] = matrix[l][2 * n - col];
//            }
//        }
//
//        // 输出整个矩阵（2n-1行，2n-1列）
//        for (int l = 1; l < 2 * n; l++)
//        {
//            for (int col = 1; col < 2 * n; col++)
//            {
//                printf("%c", matrix[l][col]);  // 打印每个字符
//            }
//            printf("\n");  // 每行结束后换行
//        }
//    }
//    return 0;  // 程序正常结束
//}
//
//#include <stdio.h>
//#include <string.h>  // 包含字符串处理函数库，用于memset函数
//
//int main()
//{
//    int k;
//    scanf("%d", &k);  // 从标准输入读取测试用例数量k
//
//    // 循环处理每个测试用例
//    while (k--)
//    {
//        int n;               // 存储当前测试用例的元素个数
//        int c[10];           // 用于存储去重后的元素
//        memset(c, 0, sizeof(c));  // 将数组c的所有元素初始化为0
//
//        int m, j = 0, sum = 1;  // m临时存储输入元素，j用于循环，sum记录不同元素的数量
//        scanf("%d", &n);        // 读取当前测试用例的元素个数n
//        scanf("%d", &m);        // 读取第一个元素
//        c[0] = m;               // 将第一个元素存入数组c的第一个位置
//
//        // 循环读取剩余的n-1个元素，并进行去重处理
//        for (int i = 1; i < n; i++)
//        {
//            scanf("%d", &m);  // 读取下一个元素
//
//            // 只处理不超过4种不同元素的情况
//            if (sum <= 4)
//            {
//                // 检查当前元素m是否已存在于数组c中
//                for (j = 0; j < sum; j++)
//                {
//                    if (m == c[j])  // 如果找到相同元素，跳出循环
//                        break;
//                }
//
//                // 如果没有找到相同元素（j等于当前不同元素的数量）
//                if (j >= sum)
//                {
//                    c[sum] = m;  // 将新元素存入数组c
//                    sum++;       // 不同元素的数量加1
//                }
//            }
//        }
//
//        // 根据不同元素的数量判断输出结果
//        if (sum <= 3)
//        {
//            printf("Yes\n");  // 不同元素数量不超过3，输出Yes
//        }
//        else if (sum == 4)
//        {
//            // 检查4个元素是否能分成两组，每组的和相等
//            if (c[0] + c[1] == c[2] + c[3] ||
//                c[0] + c[2] == c[1] + c[3] ||
//                c[0] + c[3] == c[1] + c[2])
//            {
//                printf("Yes\n");  // 满足条件，输出Yes
//            }
//            else
//            {
//                printf("No\n");   // 不满足条件，输出No
//            }
//        }
//        else
//        {
//            printf("No\n");  // 不同元素数量超过4，输出No
//        }
//    }
//    return 0;  // 程序正常结束
//}
 

//
//#include <stdio.h>
//#include <stdlib.h> 
//int n, t;
//int num[5]; 
//int cmp1(const void* p1, const void* p2) 
//{          
//    return *(int*)p1 - *(int*)p2;
//}  
//void exchange()                                  
//{
//    for (int i = 0; i < 4; i++)
//    {
//        num[i] = n % 10;
//        n /= 10;
//    }
//} 
//int rise()
//{
//    qsort(num, 4, sizeof(num[0]), cmp1);             
//    t = 0;
//    for (int k = 0; k < 4; k++)                 
//        t = t * 10 + num[k];
//    return t;
//}
//int drop()
//{
//    t = 0;
//    for (int k = 3; k >= 0; k--)                 
//        t = t * 10 + num[k];
//    return t;
//} 
//void solve()
//{
//    exchange();
//    int A = rise();
//    int B = drop();
//    n = B - A;
//} 
//int main()
//{
//    while (scanf("%d", &n) ==1 && n != 0)
//    {
//        int cnt = 0;
//        while (n != 6174)
//        {
//            solve();
//            cnt++;
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
//}
 


//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* (arr) = (int*)malloc((n + 1) * sizeof(int));
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int l, r, d;
//    for (int i = 1; i <= m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d);
//        for (int j = l; j <= r; j++)
//        {
//            arr[j] += d;
//        }
//    }
//    int count = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            count += arr[j];
//        }
//        printf(" %d", count);
//    }
//    printf("\n");
//    free(arr);
//    return 0;
//}

//
//#include <stdio.h>  // 包含标准输入输出库，用于输入输出操作
//#include<>
//// 定义一个常量kSum，值为81，用于限定查找范围
//const int kSum = 81;
//
//// 定义一个Max函数，用于返回两个整数中的较大值
//int Max(int x, int y) {
//    return x < y ? y : x;  // 使用三目运算符实现：如果x小于y则返回y，否则返回x
//}
//
//int main()
//{
//    int K, n;  // 声明变量K(测试用例数量)和n(待判断的数字)
//    scanf("%d", &K);  // 从标准输入读取K的值
//
//    // 循环处理K个测试用例，每次循环后K的值减1，直到K为0
//    while (K--)
//    {
//        bool flag = true;  // 声明标志变量flag，初始化为true，表示默认结果为"Yes"
//        scanf("%d", &n);  // 从标准输入读取当前测试用例的数字n
//
//        // 循环查找是否存在符合条件的i，i的起始值为0和n-kSum中的较大值，结束值为n-1
//        // 这样限制范围是因为一个数的各位数字之和最大不会超过81(对于较大的数)
//        for (int i = Max(0, n - kSum); i < n; i++)
//        {
//            int t = i, iSum = 0;  // t用于临时存储i的值，iSum用于计算i的各位数字之和
//
//            // 计算i的各位数字之和
//            while (t) {
//                iSum += (t % 10);  // 取t的最后一位数字并加到iSum
//                t /= 10;  // 去掉t的最后一位数字
//            }
//
//            // 检查如果i加上它的各位数字之和等于n，则说明n不是"自守数"
//            if (i + iSum == n) {
//                flag = false;  // 将标志设为false
//                break;  // 跳出循环，无需继续查找
//            }
//        }
//
//        // 根据flag的值输出结果
//        if (flag) puts("Yes");  // 如果flag为true，输出"Yes"表示n是自守数
//        else puts("No");  // 否则输出"No"表示n不是自守数
//    }
//    return 0;  // 程序正常结束
//}
//
//
//#include <stdio.h>
//#include <stdbool.h>
//
//// 检查项链b是否是项链a的旋转
//bool isRotation(int* a, int* b, int n) {
//    // 将a拼接成两倍长度，用于检查所有可能的旋转
//    int* temp = (int*)malloc(2 * n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        temp[i] = a[i];
//        temp[i + n] = a[i];
//    }
//
//    // 检查所有可能的旋转
//    for (int i = 0; i < n; i++) {
//        bool match = true;
//        for (int j = 0; j < n; j++) {
//            if (temp[i + j] != b[j]) {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            free(temp);
//            return true;
//        }
//    }
//
//    free(temp);
//    return false;
//}
//
//// 生成项链a的翻转版本
//void reverseNecklace(int* a, int* reversed, int n) {
//    for (int i = 0; i < n; i++) {
//        reversed[i] = a[n - 1 - i];
//    }
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//
//        int* A = (int*)malloc(n * sizeof(int));
//        int* B = (int*)malloc(n * sizeof(int));
//
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &A[i]);
//        }
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &B[i]);
//        }
//
//        // 检查A的所有旋转是否与B匹配
//        bool result = isRotation(A, B, n);
//
//        // 如果不匹配，检查A的翻转后的所有旋转是否与B匹配
//        if (!result) {
//            int* reversedA = (int*)malloc(n * sizeof(int));
//            reverseNecklace(A, reversedA, n);
//            result = isRotation(reversedA, B, n);
//            free(reversedA);
//        }
//
//        printf("%s\n", result ? "Yes" : "No");
//
//        free(A);
//        free(B);
//    }
//
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h>
//
//// 判断两个项链是否相同，考虑旋转和翻转
//int isSameNecklace(int* a, int* b, int n) {
//    // 尝试所有可能的旋转
//    for (int i = 0; i < n; i++) {
//        // 检查当前旋转是否匹配
//        int match = 1;
//        for (int j = 0; j < n; j++) {
//            if (a[(i + j) % n] != b[j]) {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return 1;
//
//        // 检查翻转后的旋转是否匹配
//        match = 1;
//        for (int j = 0; j < n; j++) {
//            if (a[(i + j) % n] != b[n - 1 - j]) {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return 1;
//    }
//    return 0;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//
//        int a[1000], b[1000];
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &a[i]);
//        }
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &b[i]);
//        }
//
//        if (isSameNecklace(a, b, n)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>  
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


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    int a, b;
//    scanf("%d", &K);
//    while (K--)
//    {
//        // 每次循环都重新初始化变量
//        int c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b);
//
//        // 其他为斜边（a和b为直角边）
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b)
//            c = c2;
//
//        // b为斜边（a为直角边，求另一直角边）
//        if (b > a) {  // 确保斜边大于直角边
//            int d2 = sqrt(b * b - a * a);
//            if (d2 * d2 == b * b - a * a)
//                d = d2;
//        }
//
//        // a为斜边（b为直角边，求另一直角边）
//        if (a > b) {  // 确保斜边大于直角边
//            int e2 = sqrt(a * a - b * b);
//            if (e2 * e2 == a * a - b * b)
//                e = e2;
//        }
//
//        // 收集所有有效解
//        int solutions[3] = { 0 };
//        int count = 0;
//        if (c != 0) solutions[count++] = c;
//        if (d != 0) solutions[count++] = d;
//        if (e != 0) solutions[count++] = e;
//
//        if (count == 0) {
//            printf("None\n");
//        }
//        else {
//            // 找到最小解
//            int min = solutions[0];
//            for (int i = 1; i < count; i++) {
//                if (solutions[i] < min) {
//                    min = solutions[i];
//                }
//            }
//            printf("%d\n", min);
//        }
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
//		int n, sum = 1, m, arr[5];
//		scanf("%d", &n);
//		scanf("%d", &m);
//		int j=0;
//		arr[1] = m;
//		for (int i = 1; i < n; i++)
//		{
//			scanf("%d", &m);
//			if (sum <= 4)
//			{
//				for ( j = 1; j <= sum; j++)
//				{
//					if (arr[j] == m) break;
//				}
//				if (j > sum)
//				{
//					arr[j] = m;
//					sum++;
//				}
//			} 
//		} 
//		if (sum <= 3) printf("Yes\n");
//		else if (sum == 4)
//		{
//			if (arr[1] + arr[2] == arr[3] + arr[4] ||
//				arr[1] + arr[3] == arr[2] + arr[4] ||
//				arr[1] + arr[4] == arr[2] + arr[3])
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("No\n");
//			}
//		}
//		else printf("No\n");
//	}
//	return 0;
//}


//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int n, t;
//int num[5];
//
//int cmp1(const void* p1, const void* p2) {         // 升序
//    return *(int*)p1 - *(int*)p2;
//}
//
//void exchange()                                   // 把整数各个位数分解,方便排序
//{
//    for (int i = 0; i < 4; i++)
//    {
//        num[i] = n % 10;
//        n /= 10;
//    }
//}
//
//int rise()
//{
//    qsort(num, 4, sizeof(num[0]), cmp1);             // 快排 (升序) 
//    t = 0;
//    for (int k = 0; k < 4; k++)                  // 还原最小值
//        t = t * 10 + num[k];
//    return t;
//}
//int drop()
//{
//    t = 0;
//    for (int k = 3; k >= 0; k--)                  // 还原最大值
//        t = t * 10 + num[k];
//    return t;
//}
//
//void solve()
//{
//    exchange();
//    int A = rise();
//    int B = drop();
//    n = B - A;
//}
//
//int main()
//{
//    while (scanf("%d", &n) != EOF && n != 0)
//    {
//        int cnt = 0;
//        while (n != 6174)
//        {
//            solve();
//            cnt++;
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
////}
//
//#include <stdio.h>   // 引入标准输入输出库
//#include <stdlib.h>  // 引入标准库，包含qsort等函数
//
//// 全局变量定义
//int n, t;           // n用于存储当前的四位数，t用于临时计算
//int num[5];         // 用于存储四位数分解后的各个数字
//
//// 比较函数，用于qsort进行升序排序
//// 参数为两个void指针，需要转换为int指针后取值比较
//int cmp1(const void* p1, const void* p2) {
//    return *(int*)p1 - *(int*)p2;  // 升序排列：前者减后者，正数则交换
//}
//
//// 功能：将四位数n分解为单个数字，存储到num数组中
//void exchange() {
//    for (int i = 0; i < 4; i++) {    // 循环4次，获取四个数字
//        num[i] = n % 10;             // 取n的最后一位数字
//        n /= 10;                     // 移除n的最后一位数字
//    }
//}
//
//// 功能：将分解后的数字升序排列，组成最小的四位数
//int rise() {
//    // 使用qsort对num数组进行升序排序，排序4个元素，每个元素大小为int
//    qsort(num, 4, sizeof(num[0]), cmp1);
//    t = 0;                           // 重置临时变量t
//    for (int k = 0; k < 4; k++) {    // 循环4次，组合成四位数
//        t = t * 10 + num[k];         // 依次将数字从左到右组合（升序）
//    }
//    return t;                        // 返回组成的最小四位数
//}
//
//// 功能：将分解后的数字降序排列，组成最大的四位数
//int drop() {
//    t = 0;                           // 重置临时变量t
//    for (int k = 3; k >= 0; k--) {   // 循环4次，从后往前取数字
//        t = t * 10 + num[k];         // 依次将数字从右到左组合（降序）
//    }
//    return t;                        // 返回组成的最大四位数
//}
//
//// 功能：执行一次卡普雷卡尔运算（最大数减去最小数）
//void solve() {
//    exchange();          // 分解当前数字n为四个单独数字
//    int A = rise();      // 获取升序排列组成的最小数
//    int B = drop();      // 获取降序排列组成的最大数
//    n = B - A;           // 计算差值，更新n为新的四位数
//}
//
//int main() {
//    // 循环读取输入的四位数，当输入0时结束程序
//    while (scanf("%d", &n) != EOF && n != 0) {
//        int cnt = 0;     // 计数器，记录运算次数
//        // 重复执行卡普雷卡尔运算，直到结果为6174
//        while (n != 6174) {
//            solve();     // 执行一次运算
//            cnt++;       // 运算次数加1
//        }
//        printf("%d\n", cnt);  // 输出得到6174所需的运算次数
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>   
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int));  
//    for (int i = 1; i <= n; i++) 
//    {
//        scanf("%d", &arr[i]);
//    } 
//    int* diff = (int*)calloc(n + 2, sizeof(int));  
//    for (int i = 1; i <= m; i++) 
//    {
//        int l, r, d;
//        scanf("%d %d %d", &l, &r, &d);
//        diff[l] += d;      
//        diff[r + 1] -= d;  
//    } 
//    int add = 0;   
//    for (int i = 1; i <= n; i++) 
//    {
//        add += diff[i];
//        arr[i] += add;
//    } 
//    int count = 0;
//    for (int i = 1; i <= n; i++) 
//    {
//        count += arr[i];   
//        if (i == 1) 
//        {
//            printf("%d", count);   
//        }
//        else 
//        {
//            printf(" %d", count);
//        }
//    }
//    printf("\n"); 
//    free(arr);
//    free(diff);
//    return 0;
//}


//#include<stdio.h>      // 包含标准输入输出函数库，用于输入输出操作
//#include<stdlib.h>     // 包含malloc和free等内存管理函数的声明
//
//int main()
//{
//    int n, m;          // 声明变量n(数组长度)和m(操作次数)
//    scanf("%d %d", &n, &m);  // 从标准输入读取n和m的值
//
//    // 动态分配数组空间，大小为n+2（使索引可以从1到n，避免越界）
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    // 循环读取原始数组元素（索引从1到n）
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);  // 读取第i个元素的值
//    }
//
//    // 分配差分法数组，calloc会将所有元素初始化为0，大小为n+2
//    int* diff = (int*)calloc(n + 2, sizeof(int));
//
//    // 处理m次区间更新操作
//    for (int i = 1; i <= m; i++)
//    {
//        int l, r, d;           // 声明变量l(左端点)、r(右端点)、d(增量)
//        scanf("%d %d %d", &l, &r, &d);  // 读取区间更新参数
//        diff[l] += d;          // 在左端点处加上增量d
//        diff[r + 1] -= d;      // 在右端点+1处减去增量d，标记区间结束
//    }
//
//    // 应用差分更新原数组，计算最终结果
//    int add = 0;  // 累计当前位置应增加的值
//    for (int i = 1; i <= n; i++)
//    {
//        add += diff[i];        // 累加差分数组的值，得到当前位置的总增量
//        arr[i] += add;         // 将增量应用到原数组元素
//    }
//
//    // 计算并输出前缀和（优化为O(n)时间复杂度）
//    int count = 0;             // 用于累计前缀和
//    for (int i = 1; i <= n; i++)
//    {
//        count += arr[i];       // 累加当前元素到前缀和中，替代嵌套循环
//        if (i == 1)
//        {
//            printf("%d", count);  // 第一个元素前无空格
//        }
//        else
//        {
//            printf(" %d", count); // 后续元素前加空格分隔
//        }
//    }
//    printf("\n");              // 输出换行符
//
//    // 释放动态分配的内存，避免内存泄漏
//    free(arr);
//    free(diff);
//    return 0;                  // 程序正常结束
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    // 原数组
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    // 差分数组，用于高效处理区间更新
//    int* diff = (int*)calloc(n + 2, sizeof(int));
//
//    // 读取初始数组
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    // 处理m次区间更新操作
//    int l, r, d;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d);
//        // 差分法：在l处加d，在r+1处减d
//        diff[l] += d;
//        if (r + 1 <= n)
//            diff[r + 1] -= d;
//    }
//
//    // 计算最终的数组
//    int* final_arr = (int*)malloc((n + 1) * sizeof(int));
//    int current_diff = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        current_diff += diff[i];
//        final_arr[i] = arr[i] + current_diff;
//    }
//
//    // 计算前缀和并输出
//    int prefix_sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        prefix_sum += final_arr[i];
//        if (i > 1)
//            printf(" ");
//        printf("%d", prefix_sum);
//    }
//    printf("\n");
//
//    // 释放内存
//    free(arr);
//    free(diff);
//    free(final_arr);
//
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int)); 
//    int* diff = (int*)calloc(n + 2, sizeof(int)); 
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    } 
//    int l, r, d;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d); 
//        diff[l] += d;
//        if (r + 1 <= n)
//            diff[r + 1] -= d;
//    } 
//    int* final_arr = (int*)malloc((n + 1) * sizeof(int));
//    int current_diff = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        current_diff += diff[i];
//        final_arr[i] = arr[i] + current_diff;
//    } 
//    int prefix_sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        prefix_sum += final_arr[i];
//        if (i > 1)
//            printf(" ");
//        printf("%d", prefix_sum);
//    }
//    printf("\n"); 
//    free(arr);
//    free(diff);
//    free(final_arr); 
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    int* diff = (int*)calloc(n + 2, sizeof(int));   
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]); 
//        if (i == 1) 
//        {
//            diff[i] = arr[i];
//        }
//        else 
//        {
//            diff[i] = arr[i] - arr[i - 1];
//        }
//    } 
//    for (int i = 1; i <= m; i++)
//    {
//        int l, r, d;
//        scanf("%d %d %d", &l, &r, &d);
//        diff[l] += d;           
//        if (r + 1 <= n) 
//        {
//            diff[r + 1] -= d;   
//        }
//    } 
//    long long current = 0;       
//    long long  sum = 0;     
//    for (int i = 1; i <= n; i++)
//    {
//        current += diff[i];     
//         sum += current;  
//
//        if (i == 1) {
//            printf("%lld",  sum);
//        }
//        else {
//            printf(" %lld",  sum);
//        }
//    }
//    printf("\n");
//
//    free(arr);
//    free(diff);
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n;
//        scanf("%d", &n);
//        int  flag = 0;
//        int shu = (n > 100) ? n - 100 : 1;
//        for (int k = shu; k < n; k++)
//        {
//            int k2 = k, count = 0;
//            while (k2 != 0)
//            {
//                count += k2 % 10;
//                k2 /= 10;
//            }
//            if (k + count == n)
//            {
//                printf("No\n");
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) printf("Yes\n");
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h> 
//bool xuanzhuan(int* a, int* b, int n) 
//{  
//    int* temp = (int*)malloc(2 * n * sizeof(int));
//    for (int i = 0; i < n; i++) 
//    {
//        temp[i] = a[i];
//        temp[i + n] = a[i];
//    } 
//    for (int i = 0; i < n; i++) 
//    {
//        bool match = true;
//        for (int j = 0; j < n; j++) 
//        {
//            if (temp[i + j] != b[j]) 
//            {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            free(temp);
//            return true;
//        }
//    } 
//    free(temp);
//    return false;
//} 
//void fanzhuan(int* a, int* xuanzhuan, int n) 
//{ 
//    for (int i = 0; i < n; i++) 
//    {
//        xuanzhuan[i] = a[(n - 1 - i + n) % n];
//    }
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        int n;
//        scanf("%d", &n); 
//        int* A = (int*)malloc(n * sizeof(int));
//        int* B = (int*)malloc(n * sizeof(int)); 
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &A[i]);
//        }
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &B[i]);
//        } 
//        bool result = xuanzhuan(A, B, n); 
//        if (!result) 
//        {
//            int* arr = (int*)malloc(n * sizeof(int));
//            fanzhuan(A, arr, n);
//            result = xuanzhuan(arr, B, n);
//            free(arr);
//        } 
//        printf("%s\n", result ? "Yes" : "No"); 
//        free(A);
//        free(B);
//    } 
//    return 0;
//}



#include <stdio.h>    // 包含标准输入输出函数库
#include <stdbool.h>  // 包含bool类型定义
#include <stdlib.h>   // 包含内存分配和释放函数

// 检查项链b是否是项链a的旋转
// 参数：a-原项链, b-待检查项链, n-项链长度
// 返回值：如果b是a的旋转则返回true,否则返回false
bool xuanzhuan(int* a, int* b, int n) {
    // 将a拼接成两倍长度的临时数组，用于检查所有可能的旋转情况
    // 例如a = [1,2,3]，则temp = [1,2,3,1,2,3]
    int* temp = (int*)malloc(2 * n * sizeof(int));
    // 填充临时数组
    for (int i = 0; i < n; i++) {
        temp[i] = a[i];          // 前半部分复制a
        temp[i + n] = a[i];      // 后半部分再次复制a
    }

    // 检查所有可能的旋转（共n种可能）
    for (int i = 0; i < n; i++) {
        bool match = true;       // 标记是否匹配
        // 检查从位置i开始的n个元素是否与b匹配
        for (int j = 0; j < n; j++) {
            if (temp[i + j] != b[j]) {  // 发现不匹配的元素
                match = false;          // 标记为不匹配
                break;                  // 退出内层循环
            }
        }
        if (match) {               // 如果找到匹配的旋转
            free(temp);            // 释放临时数组内存
            return true;           // 返回匹配成功
        }
    }

    free(temp);    // 释放临时数组内存
    return false;  // 所有旋转都不匹配，返回失败
}

// 生成项链a的翻转版本（沿对称轴旋转180度）
// 参数：a-原项链, xuanzhuan-存储翻转结果的数组, n-项链长度
void fanzhuan(int* a, int* xuanzhuan, int n) {
    // 对于环形结构的翻转，将元素逆序排列
    // (n - 1 - i + n) % n 确保索引在有效范围内
    for (int i = 0; i < n; i++) {
        xuanzhuan[i] = a[(n - 1 - i + n) % n];
    }
}

int main() {
    int T;                  // 测试用例数量
    scanf("%d", &T);        // 读取测试用例数量

    while (T--) {           // 循环处理每个测试用例
        int n;              // 项链长度
        scanf("%d", &n);    // 读取项链长度

        // 为项链A和B分配内存
        int* A = (int*)malloc(n * sizeof(int));
        int* B = (int*)malloc(n * sizeof(int));

        // 读取项链A的元素
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        // 读取项链B的元素
        for (int i = 0; i < n; i++) {
            scanf("%d", &B[i]);
        }

        // 检查A的所有旋转是否与B匹配
        bool result = xuanzhuan(A, B, n);

        // 如果不匹配，检查A的翻转后的所有旋转是否与B匹配
        if (!result) {
            int* arr = (int*)malloc(n * sizeof(int));  // 存储A的翻转结果
            fanzhuan(A, arr, n);                       // 生成A的翻转版本
            result = xuanzhuan(arr, B, n);             // 检查翻转后的旋转是否匹配
            free(arr);                                 // 释放翻转数组内存
        }
        // 输出结果
        printf("%s\n", result ? "Yes" : "No");
        // 释放项链A和B的内存
        free(A);
        free(B);
    }
    return 0;
}