#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  



//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        long long a, b, c, t, count1 = 0, count2 = 0;
//        scanf("%lld+%lld=%lld", &a, &b, &c);
//        if ((c - b) % a != 0)
//        {
//            goto here;
//        }
//        else
//        {
//            t = (c - b) / a;
//            while (t % 10 == 0)
//            {
//                count1++;
//                t /= 10;
//            }
//            printf("%lld\n", count1);
//            continue;
//        }
//    here:
//        t = (c - a) / b;
//        while (t % 10 == 0)
//        {
//            count2--;
//            t /= 10;
//        }
//        printf("%lld\n", count2);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) ==1)
//	{
//		if (n == 0)break;
//		long long sum = 0;
//		int i;
//		for (i = 1; i * i <= n; i++) 
//		{
//			if (n % i == 0) 
//			{
//				if (i * i == n)sum += i;
//				else sum = sum + i + n / i;
//			}
//		}
//		printf("%lld\n", sum);
//	}
//}






//#include<stdio.h>
//#include<stdlib.h>
//int n, arr[105];
//int compare(void* a, void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        qsort(arr, n+1, sizeof(int), compare);
//        int count = 0;
//        for (int i = 1; i <= n - 2; i++)
//        {
//            for (int j = i + 1; j <= n - 1; j++)
//            {
//                for (int k = j + 1; k <= n; k++)
//                {
//                    if (arr[i]+arr[j]>arr[k]&&arr[i] * arr[i] + arr[j] * arr[j] > arr[k] * arr[k]) count++;
//                }
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}







//#include <stdio.h>
//#include <stdlib.h>
//
//const int M = 1e9;
//int c(const void* p1, const void* p2) 
//{
//    return *(int*)p1 - *(int*)p2;
//}
//
//int main() 
//{
//    int T, a, b, c, d, L, R;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int cnt = 0, len = 1, ans = 1;
//        int s[3000] = { 0 };
//        long long  l1[50] = { 1,1 }, l2[50] = { 1,1 }; 
//        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &L, &R);
//        for (int i = 2; l1[i - 1] <= M; i++)
//            l1[i] = a * l1[i - 1] + b * l1[i - 2];
//        for (int j = 2; l2[j - 1] <= M; j++)
//            l2[j] = c * l2[j - 1] + d * l2[j - 2]; 
//        for (int i = 0; l1[i] <= M; i++) 
//        {
//            for (int j = 0; l2[j] <= M; j++) 
//            {
//                long long t = l1[i] + l2[j];
//                if (t <= R && t >= L)
//                    s[++cnt] = t;
//            }
//        } 
//        qsort(s, cnt, sizeof(int), c);
//        if (cnt == 0) puts("0");
//        else {
//            for (int i = 2; i <= cnt; i++) 
//            {
//                if (s[i] == s[i - 1]) continue;
//                if (s[i] == s[i - 1] + 1)
//                {
//                    len++;
//                    if (len > ans) ans = len;
//                }
//                else len = 1;
//            }
//            printf("%d\n", ans);
//        }
//    }
//    return 0;
//}








//#include<stdio.h>
//int arr[10005], x[100005];
//int main()
//{
//    int a, c, m;
//    while (scanf("%d %d %d", &a, &c, &m) == 3)
//    {
//        for (int i = 0; i <= 11000; i++)
//        {
//            x[i + 1] = (a * x[i] + c) % m;
//        }
//        for (int i = 1; i <= 11000; i++)
//        {
//            arr[x[i]]++;
//        }
//        int flag = 1;
//        for (int i = 0; i <= m - 1; i++)
//        {
//            if (arr[i] == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag)  printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//#include<string.h>
//int T, n, res, cnt, result, i, nN;
//int arr[12];
//int analyse(int N)
//{
//    memset(arr, 0, sizeof(arr));
//    cnt = res = 0;
//    nN = N;
//    while (N != 0) {
//        arr[++cnt] = N % 10;
//        N /= 10;
//    }
//    for (i = cnt; i >= 1; i--) {
//        res += arr[i];
//    }
//    if (nN % res == 0) return nN;
//    else {
//        nN--;
//        return analyse(nN);
//    }
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--) {
//        scanf("%d", &n);
//        result = analyse(n);
//        printf("%d\n", result);
//    }
//    return 0;
//} 






//
//
//#include<stdio.h>
//#include<string.h>
//int arr[100005];
//int main()
//{
//    int p;
//    while (scanf("%d", &p) == 1)
//    {
//        memset(arr, 0, sizeof(arr));
//        int t = 2, k = p;
//        while (p-- && p != 0)
//        {
//            t %= k;
//            arr[t]++;
//            t *= 2;
//        }
//        int flag = 1;
//        for (int i = 1; i <= k - 1; i++)
//        {
//            if (arr[i] == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
////    scanf("%d", &T);
////    while (T--)
////    {
////        char arr1[88];
////        int arr2[200];
////        memset(arr1, 0, sizeof(arr1));
////        memset(arr2, 0, sizeof(arr2));
////        scanf(" %s", arr1);
////        for (int i = 0; arr1[i] >= 65&&arr1[i] <= 90; i++)
////        {
////            if (arr2[arr1[i]] == 0) continue;
////            arr2[arr1[i]]++;
////            printf("%c", arr1[i]);
////        }
////    }
////    return 0;
////}
//
//
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    getchar(); // 读取换行符，防止它被下一个fgets读取
//    for (int i = 0; i < T; i++) {
//        char str[81];
//        fgets(str, sizeof(str), stdin); // 读取一行字符串
//        int found = 0;                  // 标记是否找到过大写字母
//        int printed[26] = { 0 };          // 标记字母是否已经输出过，初始化为0
//
//        for (int j = 0; str[j] != '\0'; j++) { // 遍历字符串中的每个字符
//            // 判断是否为大写英文字母
//            if (str[j] >= 'A' && str[j] <= 'Z') {
//                found = 1; // 至少找到了一个
//                int index = str[j] - 'A'; // 计算字母在数组中的索引
//                if (printed[index] == 0) { // 如果这个字母还没被输出过
//                    printf("%c", str[j]); // 输出它
//                    printed[index] = 1;   // 标记为已输出
//                }
//            }
//        }
//    }
//}
//


 


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	getchar();
//	while (T--)
//	{
//		char arr1[88] = { 0 };
//		int arr2[27] = {0}, flag = 0;
//		fgets(arr1, sizeof(arr1), stdin);
//		for (int i = 0;arr1[i]!='\0'; i++)
//		{ 
//			if (arr1[i] <='Z' && arr1[i]>='A')
//			{
//				if (arr2[arr1[i] - 'A'] == 0)
//				{
//					putchar(arr1[i]);
//					arr2[arr1[i] - 'A'] = 1;
//					flag = 1;
//				}
//			}
//		}
//		if (flag == 0) printf("Not Found");
//		puts("");
//	}
//	return 0;
//}



//
//#include<stdio.h>
//
//int Judge(int n)
//{
//    int flag = 1;
//    int g = n % 10, s = n / 10 % 10, b = n / 100 % 10, q = n / 1000;
//    if (g == s && g == b && g == q)flag = 0;
//    return flag;
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
//        int cnt = 0;
//        while (Judge(n))
//        {
//            int i, j = 0, t, arr[5] = {0};
//            while (n) {
//                arr[j] = n % 10;
//                n /= 10;
//                j++;
//            }
//            for (i = 0; i < 3; i++) 
//            {
//                for (j = i + 1; j < 4; j++)
//                {
//                    if (arr[i] > arr[j])
//                    {
//                        t = arr[i];
//                        arr[i] = arr[j];
//                        arr[j] = t;
//                    }
//                }
//            }
//            int up = 0, down = 0;
//            for (i = 0; i < 4; i++) 
//            {
//                up *= 10;
//                up += arr[i];
//            }
//            for (i = 3; i >= 0; i--)
//            {
//                down *= 10;
//                down += arr[i];
//            }
//            cnt++;
//            int sum = down + up, k = 0;
//            while (sum)
//            {
//                arr[k] = sum % 10;
//                sum /= 10;
//                k++;
//            }
//            n = 0;
//            for (i = 3; i >= 0; i--)
//            {
//                n *= 10;
//                n += arr[i];
//            }
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
//}
//
//
//
//// 引入标准输入输出头文件，提供scanf/printf等输入输出函数
//#include<stdio.h>
//
//// 定义函数hanshu，功能：计算两个整数的最大公约数（GCD），采用欧几里得算法
//// 参数a、b：待计算最大公约数的两个整数
//// 返回值：a和b的最大公约数
//int hanshu(int a, int b)
//{
//    // 欧几里得算法核心循环：当a不为0时，持续取余迭代
//    while (a != 0)
//    {
//        // 计算b除以a的余数，存入临时变量t
//        int t = b % a;
//        // 将a的值赋给b（迭代：原除数变为新被除数）
//        b = a;
//        // 将余数t赋给a（迭代：原余数变为新除数）
//        a = t;
//    }
//    // 当a为0时，b即为最大公约数，返回结果
//    return b;
//}
//
//// 主函数，程序入口
//int main()
//{
//    // 定义变量T，存储测试用例的数量
//    int T;
//    // 读取用户输入的测试用例数，%d表示读取整数存入T的地址
//    scanf("%d", &T);
//    // 循环处理每个测试用例，T--表示每处理一个用例，T减1，直到T为0终止
//    while (T--)
//    {
//        // 定义变量：a、b为初始输入值，n为迭代次数；a1、b1用于存储约分后的分子/分母
//        int a, b, n, a1, b1;
//        // 读取一组测试用例的三个整数：a、b、n，按空格分隔
//        scanf("%d %d %d", &a, &b, &n);
//        // 调用hanshu函数计算a和b的最大公约数，存入k
//        int k = hanshu(a, b);
//        // 将a除以最大公约数，得到约分后的分子a1
//        a1 = a / k;
//        // 将b除以最大公约数，得到约分后的分母b1
//        b1 = b / k;
//
//        // 循环迭代n-1次（初始已完成1次约分，需完成n次迭代）
//        for (int i = 1; i < n; i++)
//        {
//            // 临时保存当前a1的值到p，避免后续计算被覆盖
//            int p = a1;
//            // 计算新的分子a1：原a × 原b1（迭代公式）
//            a1 = a * b1;
//            // 计算新的分母b1：原b × 原b1 + 临时变量p（迭代公式）
//            b1 = b * b1 + p;
//            // 调用hanshu函数计算新a1和新b1的最大公约数，存入j
//            int j = hanshu(a1, b1);
//            // 将新分子除以最大公约数，完成约分
//            a1 /= j;
//            // 将新分母除以最大公约数，完成约分
//            b1 /= j;
//        }
//        // 输出最终约分后的分数形式：a1（分子）/b1（分母），换行
//        printf("%d/%d\n", a1, b1);
//    }
//    // 主函数正常结束，返回0表示程序执行成功
//    return 0;
//}



//#include<stdio.h>
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        int a[16] = { 0 }, b[16] = { 0 }, cnt1 = 0, cnt2 = 0, cnt = 0;
//        for (int i = 0; i < n; i++)
//        {
//            char c;
//            int x, y;
//            scanf(" %c %d %d", &c, &x, &y);
//
//            if (c == 'Y')
//            {
//                a[cnt1++] = x * x + y * y;
//            }
//            else if (c == 'R') 
//            {
//                b[cnt2++] = x * x + y * y;
//            }
//        }
//        if (cnt1 == 0)
//        {
//            printf("Win %d\n", cnt2);
//        }
//        else if (cnt2 == 0)
//        {
//            printf("Lose %d\n", cnt1);
//        }
//        else 
//        {
//            int min1 = a[0];
//            int min2 = b[0];
//            for (int i = 1; i < cnt1; i++)
//            {
//                if (a[i] < min1)
//                {
//                    min1 = a[i];
//                }
//            }
//            for (int i = 1; i < cnt2; i++) 
//            {
//                if (b[i] < min2) 
//                {
//                    min2 = b[i];
//                }
//            }
//            if (min1 == min2) 
//            {
//                printf("Win 0\n");
//            }
//            else if (min1 < min2) 
//            {
//                for (int i = 0; i < cnt1; i++)
//                {
//                    int flag = 1;
//                    for (int j = 0; j < cnt2; j++) 
//                    {
//                        if (a[i] > b[j])
//                        {
//                            flag = 0;
//                            break;
//                        }
//                    }
//                    if (flag)
//                    {
//                        cnt++;
//                    }
//                }
//                printf("Lose %d\n", cnt);
//            }
//            else 
//            {
//                for (int i = 0; i < cnt2; i++) 
//                {
//                    int flag = 1;
//                    for (int j = 0; j < cnt1; j++) 
//                    {
//                        if (b[i] > a[j]) 
//                        {
//                            flag = 0;
//                            break;
//                        }
//                    }
//                    if (flag) 
//                    {
//                        cnt++;
//                    }
//                }
//                printf("Win %d\n", cnt);
//            }
//        }
//    }
//}




//#include <stdio.h>
//
//typedef long long ll;
//#define N  1000005
//const int MOD = 1000000007;
//
//static int f[N];
//static int d[N];
//
//void init() {
//    d[1] = 1;
//    for (int i = 2; i < N; ++i) {
//        d[i] = (int)((2LL * d[i - 1]) % MOD);
//    }
//    f[2] = 1;
//    for (int i = 3; i < N; ++i) {
//        ll tmp = (ll)f[i - 1] + f[i - 2] + d[i - 1];
//        f[i] = (int)(tmp % MOD);
//    }
//}
//
//int main() {
//    int T;
//    int n;
//
//    init();
//    scanf("%d", &T);
//    while (T--) {
//        scanf("%d", &n);
//        printf("%d\n", f[n]);
//    }
//    return 0;
//}






//#include<stdio.h> 
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int x1, x2, x3, x4, y1, y2, y3, y4;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
//        if (x1 > x2)
//        {
//            int t = x2;
//            x2 = x1;
//            x1 = t;
//        }
//        if (y1 > y2)
//        {
//            int h = y2;
//            y2 = y1;
//            y1 = h;
//        }
//        if (x3 > x4)
//        {
//            int i = x4;
//            x4 = x3;
//            x3 = i;
//        }
//        if (y3 > y4)
//        {
//            int j = y4;
//            y4 = y3;
//            y3 = j;
//        }
//        if (x2>x3&&x1<x4&&y2>y3&&y1<y4)
//        {
//            printf("Yes\n");
//        }
//        else printf("No\n");
//    }
//    return 0;
//}











//#include <stdio.h>
//
//int main() {
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int x1, y1, x2, y2;
//        int x3, y3, x4, y4;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
//        if (x1 > x2)
//        {
//            int temp = x1;
//            x1 = x2;
//            x2 = temp;
//        }
//        if (y1 > y2)
//        {
//            int temp = y1;
//            y1 = y2;
//            y2 = temp;
//        }
//        if (x3 > x4)
//        {
//            int temp = x3;
//            x3 = x4;
//            x4 = temp;
//        }
//        if (y3 > y4)
//        {
//            int temp = y3;
//            y3 = y4;
//            y4 = temp;
//        }
//        int left = x1;
//        int right = x2;
//        int bottom = y1;
//        int top = y2;
//
//        int left2 = x3;
//        int right2 = x4;
//        int bottom2 = y3;
//        int top2 = y4;
//        if (left < right2 && right > left2 && bottom < top2 && top > bottom2)
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//    }
//
//    return 0;
//}



//




//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        for (int i = 0; i < n - 1; i++)//一部
//        {
//            putchar('-');
//        }
//        puts("");
//        //二部
//        printf("\\");
//        for (int i = 1; i <= n - 3; i++)
//        {
//            printf(" ");
//        }
//        putchar('/');
//        puts("");
//        //三部
//        for (int k = 1; k <= (n - 2) / 2 - 1; k++)
//        {
//            for (int i = 1; i <= k; i++)
//            {
//                putchar(' ');
//            }
//            putchar('\\');
//            for (int i = 1; i <= n - 3 - 2 * k; i++)
//            {
//                putchar('*');
//            }
//            putchar('/');
//            puts("");
//        }
//        //四部
//        for (int k = 1; k <= (n - 2) / 2; k++)
//        {
//            for (int i = 1; i <= (n/2-1-k); i++)
//            {
//                putchar(' ');
//            }
//            putchar('/');
//            for (int i = 1; i <= k - 1; i++)
//            {
//                putchar(' ');
//            }
//            putchar('*');
//            for (int i = 1; i <= k - 1; i++)
//            {
//                putchar(' ');
//            }
//            putchar('\\');
//            puts("");
//        }
//        //五部
//        for (int i = 1; i <= n - 1; i++)
//        {
//            putchar('-');
//        }
//        puts("");
//        puts("");
//    }
//    return 0;
//}
 


//#include <stdio.h>
//
//int T, N;
//long long f[50][5];
//long long res;
//
//void init()
//{
//    f[1][1] = f[1][2] = f[1][3] = f[1][4] = 1;
//    for (int i = 2; i <= 45; i++)
//    {
//        f[i][1] = f[i - 1][2] + f[i - 1][3];
//        f[i][2] = f[i - 1][1] + f[i - 1][3] + f[i - 1][4];
//        f[i][3] = f[i - 1][1] + f[i - 1][2] + f[i - 1][4];
//        f[i][4] = f[i - 1][2] + f[i - 1][3];
//    }
//}
//
//int main()
//{
//    init();
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &N);
//        res = f[N][1] + f[N][2] + f[N][3] + f[N][4];
//        printf("%lld\n", res);
//    }
//    return 0;
//}






////
////#include<stdio.h>
////int main()
////{
////    int n;
////    while (scanf("%d", &n) == 1 && n != 0)
////    {
////        for (int i = 1; i <= n - 1; i++)
////        {
////            putchar(' ');
////        }
////        printf("1");
////    }
////    for (int k = 1; k <= n - 1; k++)
////    {
////        for (int i = 1; i <= n - 1 - k; i++)
////        {
////            putchar(' ');
////        }
////        for (int i = 1; i <= k; i++)
////        {
////            printf("i");
////        }
////        putchar('+');
////        for (int i = 1; i <= k; i++)
////        {
////            printf("i");
////        }
////        puts("");
////    }
////    return 0;
////}

//#include<stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1 && n != 0)
//    {
//        for (int i = 1; i <= n - 1; i++)
//        {
//            putchar(' ');
//        }
//        printf("1");
//        puts("");
//        for (int k = 1; k <= n - 1; k++)
//        {
//            for (int i = 1; i <= n - 1 - k; i++)
//            {
//                putchar(' ');
//            }
//            for (int i = 1; i <= k; i++)
//            {
//                printf("%d", i);
//            }
//            putchar('+');
//            for (int i = k; i>=1; i--)
//            {
//                printf("%d", i);
//            }
//            puts("");
//        }
//    }
//    return 0;
//}




//#include <stdio.h>
//
//#define  Mod  1000000007
//#define N  1003
//int i, j, n, k;
//long long d[N], c[N][N];
//
//void init()
//{
//    for (i = 0; i < N; i++)
//        c[i][0] = c[i][i] = 1;
//    for (i = 2; i < N; i++)
//        for (j = 1; j < i; j++)
//            c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % Mod;
//
//    d[2] = 1;
//    for (i = 3; i < N; i++)
//        d[i] = (i - 1) * (d[i - 1] + d[i - 2]) % Mod;
//}
//
//int main()
//{
//    init();
//    while (scanf("%d %d", &n, &k) != EOF && !(n == 0 && k == 0))
//    {
//        if (k == 0) puts("1");
//        else printf("%lld\n", c[n][k] * d[k] % Mod);
//    }
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
//        int n, k1;
//        scanf("%d %d", &n, &k1);
//        int arr1[11][11];
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= k1; j++)
//            {
//                scanf("%d", &arr1[i][j]);
//            }
//        }
//        int k2, m;
//        scanf("%d %d", &k2, &m);
//        int arr2[11][11];
//        for (int i = 1; i <= k2; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                scanf("%d", &arr2[i][j]);
//            }
//        }
//        int arr3[11][11];
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                int sum = 0;
//                for (int k = 1; k <= k1; k++)
//                {
//                    sum += arr1[i][k] * arr2[k][j];
//                }
//                arr3[i][j] = sum;
//            }
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                printf("%d ", arr3[i][j]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//
//#include<stdio.h>
//int p[35][35];
//void hanshu() 
//{
//	p[0][0] = 1;
//	for (int i = 1; i < 34; i++)
//	{
//		p[i][0] = p[i][i] = 1;
//		for (int j = 1; j < 34; j++)
//		{
//			p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
//		}
//	}
//}
//int main()
//{
//	hanshu();
//	int n;
//	while (scanf("%d", &n) && (n >= 0))
//	{
//		printf("2^%d=", n);
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d+", p[n][i]);
//		}
//		printf("%d\n", p[n][n]);
//	}
//	return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    getchar();
//    while (T--)
//    {
//        char arr[81] = {0};
//        int arr2[200] = { 0 },flag=0;
//        fgets(arr, sizeof(arr), stdin);
//        for (int i = 0; i < sizeof(arr); i++)
//        {
//            if (arr[i] - 'A' >= 0 && arr[i] - 'A' < 26 && arr2[arr[i]] == 0)
//            {
//                flag = 1;
//                printf("%c", arr[i]);
//                arr2[arr[i]]++;
//            }
//        }
//        if (!flag)printf("Not Found");
//        puts("");
//    }
//    return 0;
//}







//
//
//
//#include<stdio.h>
//long long arr[45][45];
//void init() 
//{
//	arr[1][21] = 1;
//	arr[1][22] = 1;
//	arr[1][23] = 1;
//	int i, j;
//	for (i = 2; i <= 43; i++)
//	{
//		for (j = 1; j <= 43; j++) 
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1];
//		}
//	}
//}
//int main() 
//{
//	int T;
//	scanf("%d", &T);
//	init();
//	while (T--) 
//	{
//		int n;
//		scanf("%d", &n);
//		printf("%lld\n", arr[n][22]);
//	}
//}




//#include <stdio.h>
//#include <string.h>
//#include <limits.h>
//
//#define max(a, b) ((a) > (b) ? (a) : (b))
//
//typedef struct
//{
//    int p;
//    int h;
//    int u;
//} Gift;
//
//int dp[18][1005];
//Gift g[19];
//
//int main() 
//{
//    int n, m, i, j, res;
//    while (scanf("%d %d", &n, &m) == 2 && (n || m)) 
//    {
//        res = 0x80000000;
//        for (i = 1; i <= n; i++) 
//        {
//            scanf("%d %d %d", &g[i].p, &g[i].h, &g[i].u);
//        }
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 0; j <= m; j++)
//            {
//                if (j < g[i].p)
//                {
//                    dp[i][j] = dp[i - 1][j] - g[i].u;
//                }
//                else 
//                {
//                    dp[i][j] = max(dp[i - 1][j - g[i].p] + g[i].h, dp[i - 1][j] - g[i].u);
//                }
//            }
//        }
//        for (i = 0; i <= m; i++)
//        {
//            res = max(res, dp[n][i]);
//        }
//        printf("%d\n", res);
//        memset(dp, 0, sizeof(dp));
//        memset(g, 0, sizeof(g));
//    }
//    return 0;
//}
//
//
//
//
//
//
//
//
//#include<stdio.h>
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while (t--)
//    {
//        int n, v, c, arr[200005] = { 0 };
//        scanf("%d %d %d", &n, &v, &c);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int x = 0,count =0;
//        for (int i = 1; i <= n; i++)
//        {
//            if (arr[i] < v)
//            {
//                x += arr[i];
//                if (x > v)
//                {
//                    x = arr[i];
//                    count++;
//                    if (i == n)
//                    {
//                        count++;
//                    }
//                }
//                else if (x == v)
//                {
//                    x = 0;
//                    count++;
//                }
//                if (x < v && i == n&&i==1)
//                {
//                    count++;
//                }
//                if (x < v && i == n)
//                {
//                    count++;
//                }
//            }
//            else
//            { 
//                if (x != 0)
//                {
//                    x = 0;
//                    count++;
//                }
//                count++;
//            }
//        }
//        printf("%d\n", count * c);
//    }
//    return 0;
//}
 
//
//
// 
//for (int k=a; k >= 1; k--)
//{ 
//    if(2*n%k==0)
//    {
//        for (int x = 1; x <= n / 2 + 1; x++)
//        {
//            if (2 * n == k * (k - 1) + 2 * k * x)
//            {
//                flag = 1;
//                int t = x;
//                for (int i = k; i > 0; i--)
//                {
//                    printf("%d ", t);
//                    t++;
//                }
//                puts("");
//            }
//        }
//    }
//}

//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int compare(const void* a, const void* b)
//{
//    return *(int* )a - *(int* )b;
//}
//int main()
//{
//    int n, arr[152];
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, sizeof(int), compare);
//    int now = 0, count = 0;
//    now = arr[n-1];
//    for (int i = n-1; i >= 0; i--)
//    {
//        if (count && now >= arr[i])
//        {
//            now = arr[i];
//        }
//        now--;
//        if (!now)
//        {
//            count++;
//            if(i>1)
//            {
//                now = arr[i - 1];
//            }
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}



//
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int compare(const void* a, const void* b)
//{
//    return *(int*)b - *(int*)a;
//}
//int compare2(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//
//int main()
//{
//    int m, s, c, arr1[205], arr2[205], sum = 0;
//    scanf("%d %d %d", &m, &s, &c);
//    for (int i = 0; i < c; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    qsort(arr1, c, sizeof(int), compare2);
//    for (int i = 1; i <= c; i++)
//    {
//        arr2[i - 1] = arr1[i] - arr1[i - 1]-1;
//    }
//    int count = 0;
//    for (int i = 0; i < c - 1; i++)
//    {
//        if (arr2[i] > 0) count++;
//    }
//    if (count < m)
//    {
//        printf("%d\n", c);
//        return 0;
//    }
//    qsort(arr2, c - 1, sizeof(int), compare);
//    for (int i = 0; i < m-1; i++)
//    {
//        sum += arr2[i];
//    }
//    printf("%d\n", arr1[c-1] - arr1[0] + 1 - sum);
//    return 0;
//}










#include<stdio.h>
int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        int n, k, m; 
        int arr1[11][11] = { 0 }, arr2[11][11] = { 0 }, arr3[11][11] = { 0 };
        scanf("%d %d", &n, &k);
        for (int i = 1; i <= n; i++)
        {
            int j = 1;
            for (j; j <= k; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        scanf("%d %d", &k, &m);
        for (int i = 1; i <= k; i++)
        {
            int j = 1;
            for (j; j <= m; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            int s = 1;
            for (s; s <= m; s++)
            {
                int sum = 0 ;
                for (int j = 1; j <= k; j++)
                {
                    sum += arr1[i][j] * arr2[j][s];
                }
                arr3[i][s] = sum;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            puts("");
        }
    }
    return 0;
}
