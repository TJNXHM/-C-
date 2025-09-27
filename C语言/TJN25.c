#define _CRT_SECURE_NO_WARNINGS 



//#include<stdio.h>
//#define N 5000005
//int a[N] = { 0 };
//int f[N] = { 0 };
//void hanshu2()
//{
//	int i, j;
//	a[0] = 1, a[1] = 1;
//	for (i = 2; i < N; i++)
//	{
//		if (a[i] == 0)
//		{
//			for (j = 2 * i; j < N; j += i)
//			{
//				a[j] = 1;
//			}
//		}
//	}
//	for (i = 1; i < N; i++)
//	{
//		if (a[i] == 0 && a[i + 2] == 0)
//		{
//			f[i + 2] = 1;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		f[i] += f[i - 1];
//	}
//}
//void hanshu()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", f[b] - f[a + 1]);
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	hanshu2();
//	while (T--)
//	{
//		hanshu();
//	}
//	return 0;
//}





//#include<stdio.h>
//// 包含标准输入输出库，用于输入输出操作
//
//#define N 5000005
//// 定义宏N为5000005，作为数组的大小，覆盖题目中最大可能的数值5000000
//
//int a[N] = { 0 };
//// 声明一个数组a，用于标记数字是否为素数，0表示素数，1表示非素数
//
//int f[N] = { 0 };
//// 声明一个数组f，用于存储孪生素数对的前缀和，便于快速查询
//
//void hanshu2()
//// 函数hanshu2：预处理素数和孪生素数信息
//{
//    int i, j;
//    a[0] = 1, a[1] = 1;  // 0和1不是素数，标记为1
//
//    // 埃氏筛法筛选素数
//    for (i = 2; i < N; i++)
//    {
//        if (a[i] == 0)  // 如果i是素数
//        {
//            // 将i的所有倍数标记为非素数
//            for (j = 2 * i; j < N; j += i)
//            {
//                a[j] = 1;
//            }
//        }
//    }
//
//    // 标记孪生素数对
//    for (i = 1; i < N; i++)
//    {
//        // 如果i和i+2都是素数，则标记i+2位置为1（表示存在孪生素数对(i, i+2)）
//        if (a[i] == 0 && a[i + 2] == 0)
//        {
//            f[i + 2] = 1;
//        }
//    }
//
//    // 计算前缀和，便于快速查询区间内的孪生素数对数量
//    for (i = 0; i < N; i++)
//    {
//        f[i] += f[i - 1];  // f[i]表示从0到i的孪生素数对总数
//    }
//}
//
//void hanshu()
//// 函数hanshu：处理单个测试用例，查询并输出结果
//{
//    int a, b;
//    scanf("%d%d", &a, &b);  // 读取区间[a, b]
//
//    // 输出区间[a, b]内的孪生素数对数量
//    // f[b]是0到b的孪生素数对总数，f[a+1]是0到a+1的孪生素数对总数
//    // 两者相减得到区间[a, b]内的孪生素数对数量
//    printf("%d\n", f[b] - f[a + 1]);
//}
//
//int main()
//// 主函数：程序入口
//{
//    int T;
//    scanf("%d", &T);  // 读取测试用例的数量
//
//    hanshu2();  // 预处理素数和孪生素数信息
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        hanshu();
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
//        int a, b, c, y, flag = 0;
//        scanf("%d %d %d", &a, &b, &c); 
//        int n = c + a * b;
//        for (int x = 0; (x+b)*a<=(c+a*b); x++)
//        {
//            if ((c+a*b)%(x+b) == 0)
//            {
//                y = (c+a*b) / (x+b)-a;
//                printf("%d %d\n", x, y);
//                flag = 1;
//                continue;
//            }
//            else continue;
//        }
//        if (flag == 0) printf("0\n");
//    }
//    return 0;
//}
//
//
//
// 







//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h> 
//typedef struct
//{
//    int x;
//    int y;
//} Solution;
//int compare(const void* a, const void* b)
//{
//    Solution* s1 = (Solution*)a;
//    Solution* s2 = (Solution*)b;
//    return s1->x - s2->x;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        long long product = (long long)c + (long long)a * b;
//        Solution solutions[100000];
//        int count = 0;
//        for (long long i = 1; i * i <= product; i++)
//        {
//            if (product % i == 0)
//            {
//                if (i >= b)
//                {
//                    long long y_val = product / i - a;
//                    if (y_val >= 0)
//                    {
//                        solutions[count].x = i - b;
//                        solutions[count].y = y_val;
//                        count++;
//                    }
//                }
//                long long j = product / i;
//                if (j != i && j >= b)
//                {
//                    long long y_val = i - a;
//                    if (y_val >= 0)
//                    {
//                        solutions[count].x = j - b;
//                        solutions[count].y = y_val;
//                        count++;
//                    }
//                }
//            }
//        }
//        qsort(solutions, count, sizeof(Solution), compare);
//        printf("%d\n", count);
//        for (int i = 0; i < count; i++)
//        {
//            printf("%d %d\n", solutions[i].x, solutions[i].y);
//        }
//    }
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>  
//typedef struct
//{
//    int x;
//    int y;
//} Solution; 
//int compare( void* a,   void* b)
//{ 
//    Solution* s1 = (Solution*)a;
//    Solution* s2 = (Solution*)b; 
//    return s1->x - s2->x;
//} 
//int main()
//{
//    int T;                  
//    scanf("%d", &T); 
//    while (T--)
//    {
//        long long  a, b, c;
//        scanf("%lld %lld %lld", &a, &b, &c);   
//        long long n =  c +  a * b; 
//        Solution s [100000];  
//        int count = 0;       
//        for (long long i = 1; i * i <= n; i++)
//        {  
//            if (n % i == 0)
//            { 
//                if (i >= b)
//                { 
//                    long long y0 = n/ i - a; 
//                    if (y0 >= 0)
//                    { 
//                        s [count].x = i - b;
//                        s [count].y = y0;
//                        count++;
//                    }
//                } 
//                long long j = n / i;
//                if (j != i && j >= b)
//                { 
//                    long long y0 = i - a;
//                    if (y0 >= 0)
//                    { 
//                        s [count].x = j - b;
//                        s [count].y = y0;
//                        count++;
//                    }
//                }
//            }
//        } 
//        qsort(s , count, sizeof(Solution), compare); 
//        printf("%d\n", count); 
//        for (int i = 0; i < count; i++)
//        {
//            printf("%d %d\n", s [i].x, s [i].y);
//        }
//    }
//    return 0;
//}










//#include<stdio.h>
//#include<string.h>
//
//int main() 
//{
//    char s[205]; 
//    while (scanf("%s", s) == 1) 
//    {
//        int count[4] = { 0 }; // U=0, D=1, L=2, R=3
//
//        // 统计各方向移动次数
//        for (int i = 0; s[i]; i++) 
//        {
//            if (s[i] == 'U') count[0]++;
//            else if (s[i] == 'D') count[1]++;
//            else if (s[i] == 'L') count[2]++;
//            else if (s[i] == 'R') count[3]++;
//        } 
//        int found = 0;
//
//        // 尝试所有可能的替换组合
//        for (int from = 0; from < 4 && !found; from++) 
//        {
//            // 如果这种指令不存在，跳过
//            if (count[from] == 0) continue;
//
//            for (int to = 0; to < 4 && !found; to++) {
//                // 不能替换成自己
//                if (from == to) continue;
//
//                // 创建副本
//                int new_count[4];
//                for (int k = 0; k < 4; k++) 
//                {
//                    new_count[k] = count[k];
//                }
//
//                // 执行替换
//                new_count[to] += new_count[from];
//                new_count[from] = 0;
//
//                // 检查替换后是否能回到原点
//                if (new_count[0] == new_count[1] && new_count[2] == new_count[3])
//                {
//                    found = 1;
//                }
//            }
//        }
//
//        printf(found ? "Yes\n" : "No\n");
//    }
//
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h>
//int check(int u, int d, int l, int r) {
//    return (u == d && l == r);
//}
//
//int judge(int u, int d, int l, int r) {
//    if (check(u, d, l, r)) {
//        return 1;
//    }
//    if (u == 0) {
//        if (check(0, 0, l + d, r)) return 1;
//        if (check(0, 0, l, r + d)) return 1;
//    }
//    if (d == 0) {
//        if (check(0, 0, l + u, r)) return 1;
//        if (check(0, 0, l, r + u)) return 1;
//    }
//    if (l == 0) {
//        if (check(u + r, d, 0, 0)) return 1;
//        if (check(u, d + r, 0, 0)) return 1;
//    }
//    if (r > 0) {
//        if (check(u + l, d, 0, 0)) return 1;
//        if (check(u, d + l, 0, 0)) return 1;
//    }
//
//    return 0;
//}
//
//int main() {
//    char p[300];
//    while (fgets(p, sizeof(p), stdin) != NULL) {
//        int len = strlen(p);
//        if (len > 0 && p[len - 1] == '\n') {
//            p[len - 1] = '\0';
//            len--;
//        }
//        int u = 0, d = 0, l = 0, r = 0;
//        for (int i = 0; i < len; i++) {
//            switch (p[i]) {
//            case 'U':
//                u++;
//                break;
//            case 'D':
//                d++;
//                break;
//            case 'L':
//                l++;
//                break;
//            case 'R':
//                r++;
//                break;
//            }
//        }
//        if (judge(u, d, l, r)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//    return 0;
//}


 

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		char a[35] = { 0 };
//		scanf("%s", a);
//		int i, j, n, x, t, count, len = strlen(a);
//		char tem;
//		scanf("%d", &n);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			tem = a[x - 1];
//			a[x - 1] = a[x];
//			a[x] = tem;
//			if (a[x] == a[x - 1])
//			{
//				int cntR = 1, cntL = 1;
//				count = 0;
//				for (j = x + 1; j < len; j++)
//				{
//					if (a[j] == a[x])cntR++;
//					else break;
//				}
//				for (j = x - 2; j >= 0; j--)
//				{
//					if (a[j] == a[x])cntL++;
//					else break;
//				}
//				count = cntL + cntR;
//				if (count >= 3)
//				{
//					t = x - cntL;
//					for (j = x + cntR; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= count;
//				}
//			}
//			else
//			{
//				int cnt1 = 1, cnt2 = 1;
//				for (j = x + 1; j < len; j++)
//				{
//					if (a[j] == a[x])cnt1++;
//					else break;
//				}
//				if (cnt1 >= 3)
//				{
//					t = x;
//					for (j = x + cnt1; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= cnt1;
//				}
//				for (j = x - 2; j >= 0; j--)
//				{
//					if (a[j] == a[x - 1])cnt2++;
//					else break;
//				}
//				if (cnt2 >= 3)
//				{
//					t = x - cnt2;
//					for (j = x; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= cnt2;
//				}
//			}
//			if (len == 0)printf("Over\n");
//			else
//			{
//				for (j = 0; j < len; j++)
//				{
//					printf("%c", a[j]);
//				}
//				printf("\n");
//			}
//		}
//		printf("\n");
//	}
//}


//
//#include<stdio.h>   // 引入标准输入输出库
//#include<string.h>  // 引入字符串处理库
//
//int main()
//{
//    int T;                  // 定义变量T，表示测试案例的数量
//    scanf("%d", &T);        // 从标准输入读取T的值
//    while (T--) 
//    {           // 循环处理每个测试案例，T递减至0时结束
//        char a[35] = { 0 }; // 定义字符数组存储彩球序列，初始化所有元素为0
//        scanf("%s", a);     // 读取彩球序列字符串
//
//        int i, j, n, x, t, count, len = strlen(a);  // 定义相关变量，len存储当前彩球序列长度
//        char tem;           // 用于交换两个相邻彩球的临时变量
//
//        scanf("%d", &n);    // 读取操作次数n
//        for (i = 0; i < n; i++)  // 循环处理每次操作
//        {
//            scanf("%d", &x);     // 读取要交换的位置x（注意题目中是1-based索引）
//
//            // 交换位置x-1和x处的彩球（转换为0-based索引）
//            tem = a[x - 1];
//            a[x - 1] = a[x];
//            a[x] = tem;
//
//            // 检查交换后是否形成可消除的连续相同彩球
//            if (a[x] == a[x - 1])  // 如果交换后两个位置的彩球颜色相同
//            {
//                int cntR = 1, cntL = 1;  // 分别记录右侧和左侧连续相同颜色的数量
//                count = 0;               // 记录总连续数量
//
//                // 计算右侧连续相同颜色的数量
//                for (j = x + 1; j < len; j++)
//                {
//                    if (a[j] == a[x]) cntR++;
//                    else break;  // 遇到不同颜色则停止计数
//                }
//
//                // 计算左侧连续相同颜色的数量
//                for (j = x - 2; j >= 0; j--)
//                {
//                    if (a[j] == a[x]) cntL++;
//                    else break;  // 遇到不同颜色则停止计数
//                }
//
//                count = cntL + cntR;  // 计算总连续数量（包括交换位置的两个）
//
//                if (count >= 3)  // 如果连续数量大于等于3，需要消除
//                {
//                    t = x - cntL;  // 计算消除后起始位置
//                    // 将右侧剩余的彩球向左移动，填补消除后的空位
//                    for (j = x + cntR; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= count;  // 更新彩球序列长度（减去消除的数量）
//                }
//            }
//            else  // 如果交换后两个位置的彩球颜色不同
//            {
//                int cnt1 = 1, cnt2 = 1;  // 分别记录两个位置各自连续相同的数量
//
//                // 检查右侧位置(x)开始的连续相同颜色数量
//                for (j = x + 1; j < len; j++)
//                {
//                    if (a[j] == a[x]) cnt1++;
//                    else break;
//                }
//                if (cnt1 >= 3)  // 如果连续数量大于等于3，消除
//                {
//                    t = x;  // 消除后起始位置
//                    // 移动右侧彩球填补空位
//                    for (j = x + cnt1; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= cnt1;  // 更新长度
//                }
//
//                // 检查左侧位置(x-1)开始的连续相同颜色数量
//                for (j = x - 2; j >= 0; j--)
//                {
//                    if (a[j] == a[x - 1]) cnt2++;
//                    else break;
//                }
//                if (cnt2 >= 3)  // 如果连续数量大于等于3，消除
//                {
//                    t = x - cnt2;  // 消除后起始位置
//                    // 移动右侧彩球填补空位
//                    for (j = x; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= cnt2;  // 更新长度
//                }
//            }
//
//            // 输出当前操作后的彩球序列状态
//            if (len == 0) printf("Over\n");  // 如果所有彩球都被消除，输出"Over"
//            else
//            {
//                // 否则输出剩余的彩球序列
//                for (j = 0; j < len; j++)
//                {
//                    printf("%c", a[j]);
//                }
//                printf("\n");
//            }
//        }
//        printf("\n");  // 每个测试案例结束后输出一个空行
//    }
//    return 0;  // 程序正常结束
//}




//#include <stdio.h>  // 引入标准输入输出库
//
//int T, n, end;  // T表示测试用例数量，n表示数字总数，end用于记录当前位置
//int ai[1010], books[1010][3] = { 0 };  // ai存储计数序列，books用于模拟双向链表
//
//int main()
//{
//    scanf("%d", &T);  // 读取测试用例数量
//    while (T--)  // 循环处理每个测试用例
//    {
//        scanf("%d %d %d", &n, &ai[1], &ai[2]);  // 读取n、a1和a2的值
//
//        // 初始化双向链表，模拟数字1~n围成的圆圈
//        // books[i][0]表示i的前一个数字，books[i][1]表示i的后一个数字
//        books[1][0] = n;       // 数字1的前一个是n（形成环状）
//        books[n][0] = n - 1;   // 数字n的前一个是n-1
//        books[1][1] = 2;       // 数字1的后一个是2
//        books[n][1] = 1;       // 数字n的后一个是1（形成环状）
//
//        // 初始化2~n-1的前后指针
//        for (int i = 2; i < n; i++)
//        {
//            books[i][0] = i - 1;  // i的前一个数字是i-1
//            books[i][1] = i + 1;  // i的后一个数字是i+1
//        }
//
//        // 计算计数序列中剩余的元素（从a3到a(n-1)）
//        // 根据公式ai = (ai-2 + ai-1) % n + 1
//        for (int i = 3; i < n; i++)
//            ai[i] = (ai[i - 2] + ai[i - 1]) % n + 1;
//
//        end = 1;      
//        for (int i = 1; i < n; i++) 
//        {
//            // 向前移动ai[i]步，找到要删除的数字
//            for (int j = 1; j < ai[i]; j++)
//                end = books[end][1];  // 移动到下一个数字
//
//            // 从链表中删除当前数字end
//            // 将end的前一个数字的后指针指向end的后一个数字
//            books[books[end][0]][1] = books[end][1];
//            // 将end的后一个数字的前指针指向end的前一个数字
//            books[books[end][1]][0] = books[end][0];
//
//            // 移动到下一个起始位置（被删除数字的下一个）
//            end = books[end][1];
//        }
//
//        // 输出最后剩下的数字
//        printf("%d\n", end);
//    }
//    return 0;
//}


//
//#include <stdio.h> 
//int T, n, end;
//int a[1010], books[1010][3] = { 0 };
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d", &n, &a[1], &a[2]);
//        books[1][0] = n, books[n][0] = n - 1;         
//        books[1][1] = 2, books[n][1] = 1;
//        for (int i = 2; i < n; i++) 
//        {
//            books[i][0] = i - 1; books[i][1] = i + 1;
//        }
//        for (int i = 3; i < n; i++)                 
//            a[i] = (a[i - 2] + a[i - 1]) % n + 1;
//        end = 1;                                     
//        for (int i = 1; i < n; i++)               
//        {
//            for (int j = 1; j < a[i]; j++)          
//                end = books[end][1];
//            books[books[end][0]][1] = books[end][1];  
//            books[books[end][1]][0] = books[end][0];
//            end = books[end][1];
//        }
//        printf("%d\n", end);
//    }
//    return 0;
//}




//
//
//#include <stdio.h>
//
//int T, n, end, len;
//int a[1010], books[1010] = { 0 };
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d", &n, &a[1], &a[2]);
//        for (int i = 1; i <= n; i++)         
//            books[i] = i; 
//        for (int i = 3; i < n; i++)
//            a[i] = (a[i - 2] + a[i - 1]) % n + 1;
//        end = 1, len = n;                     
//        for (int i = 1; i < n; i++, len--)     
//        {
//            end = (end + a[i] - 1) % len;           
//            if (end == 0)  end = len;
//            for (int j = end; j < len; j++)    
//                books[j] = books[j + 1];
//            if (end == len) end = 1;
//        }
//        printf("%d\n", books[1]);             
//    }
//    return 0;
//}
//
// 











//#include<stdio.h>
//#include<string.h>
//char c[1000010]; 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		scanf("%s", c);
//		int start = 0;
//		int len = strlen(c); 
//		while (start < len - 1) 
//		{
//			if (c[start] == '\0' || c[start] <= c[start + 1]) 
//			{
//				start++;
//			}
//			else
//			{
//				if (c[start] + 1 <= '9') 
//				{
//					c[len] = c[start] + 1;
//				}
//				else 
//				{
//					c[len] = '9';
//				}
//				c[start] = '\0';
//				len++;
//			}
//		} 
//		for (int i = 0; i < len; i++) 
//		{
//			if (c[i] != '\0') 
//			{
//				printf("%c", c[i]);
//			}
//		}
//		puts("");
//	} 
//	return 0;
//}



 