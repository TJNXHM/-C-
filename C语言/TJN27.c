#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  


//#include<stdio.h>
//#include<string.h>
//int T, n, cnt, k, a, b, i, ncnt, res, nn;
//int arr[12] = { 0 };
//int main()
//{
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		while (n >= 10)
//		{
//			memset(arr, 0, sizeof(arr));
//			cnt = 0;
//			nn = n;
//			while (nn != 0)
//			{
//				arr[cnt++] = nn % 10;
//				nn /= 10;
//			}
//			cnt--;
//			k = cnt;
//			ncnt = cnt + 1;
//			a = 0;
//			b = 0;
//			if (cnt % 2 == 0)
//			{
//				arr[ncnt] = 0;
//				for (i = 0; i < (k / 2 + 1); i++)
//				{
//					a = a * 10 + arr[ncnt - i];
//					b = b * 10 + arr[i];
//				}
//				res = a + b;
//				n = res;
//			}
//			else
//			{
//				for (i = 0; i < (k + 1) / 2; i++)
//				{
//					a = a * 10 + arr[cnt - i];
//					b = b * 10 + arr[i];
//				}
//				res = a + b;
//				n = res;
//			}
//		}
//		printf("%d\n", n);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, arr[10005], count = 1;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        for (int j = 0; j < n; j++)
//        {
//            if (arr[j] <= count) count++;
//        }
//        printf("%d\n", count-1);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h> 
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        int n, i;
//        scanf("%d", &n);
//        int arr[10005];
//        for (i = 0; i < n; i++) 
//        {
//            scanf("%d", &arr[i]);
//        } 
//        qsort(arr, n, sizeof(int), compare);
//
//        int count = 1;
//        for (i = 0; i < n; i++) 
//        { 
//            if (count >= arr[i])
//            {
//                count++;
//            }
//        }
//        printf("%d\n", count-1);
//    }
//    return 0;
//}


//
//#include<stdio.h>   // 包含标准输入输出库
//#include<string.h>  // 包含字符串操作库
//
//// 定义全局变量
//int T, n, cnt, k, a, b, i, ncnt, res, nn;
//int arr[12] = { 0 };  // 用于存储数字的每一位
//
//int main()
//{
//    scanf("%d", &T);  // 读取测试用例数量
//    while (T--)       // 循环处理每个测试用例
//    {
//        scanf("%d", &n);  // 读取当前要处理的数字
//
//        // 当数字大于等于10时，继续折叠操作
//        while (n >= 10)
//        {
//            memset(arr, 0, sizeof(arr));  // 清空存储数字位的数组
//            cnt = 0;                      // 计数器清零，用于记录数字位数
//            nn = n;                       // 复制n的值，用于分解数字
//
//            // 分解数字，将每一位存储到数组中
//            // 注意：这里存储的是逆序的数字位
//            while (nn != 0)
//            {
//                arr[cnt++] = nn % 10;  // 取最后一位数字
//                nn /= 10;              // 移除最后一位数字
//            }
//            cnt--;  // 调整计数器，使其指向最后一个有效数字的索引
//
//            k = cnt;              // k表示最高位的索引（位数-1）
//            ncnt = cnt + 1;       // 计算数字的总位数
//
//            a = 0;  // 存储折叠后的第一个数
//            b = 0;  // 存储折叠后的第二个数
//
//            // 判断数字位数的奇偶性（通过最高位索引判断）
//            if (cnt % 2 == 0)  // 偶数位情况
//            {
//                arr[ncnt] = 0;  // 在数组末尾补0（用于构造第一个数）
//
//                // 构造两个折叠后的数
//                for (i = 0; i < (k / 2 + 1); i++)
//                {
//                    a = a * 10 + arr[ncnt - i];  // 第一个数：从补0的位置开始取
//                    b = b * 10 + arr[i];         // 第二个数：从原数字的低位开始取
//                }
//
//                res = a + b;  // 计算两数之和
//                n = res;      // 更新n为新的和，准备下一轮折叠
//            }
//            else  // 奇数位情况
//            {
//                // 构造两个折叠后的数
//                for (i = 0; i < (k + 1) / 2; i++)
//                {
//                    a = a * 10 + arr[cnt - i];  // 第一个数：从原数字的高位开始取
//                    b = b * 10 + arr[i];        // 第二个数：从原数字的低位开始取
//                }
//
//                res = a + b;  // 计算两数之和
//                n = res;      // 更新n为新的和，准备下一轮折叠
//            }
//        }
//
//        printf("%d\n", n);  // 输出最终结果（小于10的数）
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, k;
//        char a[1005];
//        scanf("%d %d", &n, &k);
//        scanf("%s", a);
//        int len = strlen(a);
//        int result = pow(10, n - 1);
//        if (k >= n) printf("%d\n", result);
//        else
//        {
//            int i = 0; 
//            if (a[0] == '1')
//            {
//                while (k)
//                {
//                    if (a[i + 1] == '0')
//                    {
//                        i++;
//                        continue;
//                    }
//                    else
//                    {
//                        a[i + 1] = '0';
//                        k--;
//                        i++;
//                    }
//                } 
//            } 
//            else
//            {
//                while (k)
//                {
//                    if (a[0] != '1')
//                    {
//                        a[0] = '1';
//                        k--;
//                        continue;
//                    }
//                    if (a[i] == '0') continue;
//                    else
//                    {
//                        a[i] = '0';
//                        k--;
//                        i++;
//                    }
//                }
//                for (int i = 0; i < len; i++)
//                {
//                    printf("%c", a[i]);
//                }
//                printf("\n");
//            } 
//            
//        }
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
//		int n, k;
//		scanf("%d %d", &n, &k);
//		char a[1002] = { 0 };
//		scanf("%s", &a);
//		for (int i = 0; i < n; i++)
//		{
//			a[i] -= '0';  
//		}
//		if (n == 1 && k) 
//		{ 
//			printf("0\n");
//			continue;
//		}
//		else 
//		{
//			if (a[0] != 1) 
//			{
//				k--; 
//			}
//			for (int i = 1; i < n && k; i++) 
//			{
//				if (a[i] && a[i] != a[0]) 
//				{
//					for (int j = i + 1; j < n; j++) 
//					{  
//						if (a[j] == a[i]) 
//						{
//							a[j] = 0;
//						}
//					}
//					a[i] = 0;
//					k--;
//				}
//			}
//			for (int i = 1; i < n; i++) 
//			{  
//				if (a[i] == a[0]) 
//				{
//					a[i] = 1;
//				} 
//			}
//			a[0] = 1; 
//			for (int i = 0; i < n; i++) 
//			{
//				printf("%d", a[i]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//

//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        int* arr = (int*)malloc(2 * n * sizeof(int));
//        for (int i = 0; i < 2*n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int min1 = 100000, min = 0,sum=0;
//        for (int i = 0; i < 2 * n - 1; i++)
//        {
//            if (arr[i] != 0)
//            {
//                for (int j = i + 1; j < 2 * n; j++)
//                {
//                    if (arr[j] != 0)
//                    {
//                        min1 = abs(arr[i] - arr[j]);
//                        min = (min < min1 ? min : min);
//                        if (min = min1)
//                        {
//                            arr[i] = arr[j] = 0;
//                            sum += min * min;
//                            break;
//                        }
//                    }
//                }
//            }
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<stdlib.h> 
//int compare(const void* a, const void* b) 
//{
//    return *(int*)a - *(int*)b;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        int n;
//        scanf("%d", &n);
//        int size = 2 * n;
//        int* arr = (int*)malloc(size * sizeof(int));
//        for (int i = 0; i < size; i++)
//        {
//            scanf("%d", &arr[i]);
//        } 
//        qsort(arr, size, sizeof(int), compare); 
//        long long sum = 0;  
//        for (int i = 0; i < size; i += 2) 
//        {
//            long long diff = arr[i + 1] - arr[i];
//            sum += diff * diff;
//        }
//        printf("%lld\n", sum);
//        free(arr);   
//    }
//    return 0;
//}




//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr[100000] = { 0 };
//        int arr2[100000] = { 0 };
//        scanf("%s", &arr);
//        int len = strlen(arr);
//        for (int i = 0; i < len; i++)
//        {
//            arr2[i] = arr[i] - '0';
//        }
//        int sum = 0, wei = 0, count = 0;
//        for (int j = 0; j < len; j++)
//        {
//            if (arr2[j] != 0)
//            {
//                sum += arr2[j];
//                wei++;
//            }
//        }
//        if (arr2[len - 1] != 0)
//        {
//            count = sum + wei - 1;
//        }
//        else  count = sum + wei;
//        printf("%d\n", count);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>   
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        int size = 3 * n;
//        int* scores = (int*)malloc(size * sizeof(int));
//        for (int i = 0; i < size; i++)
//        {
//            scanf("%d", &scores[i]);
//        }
//        qsort(scores, size, sizeof(int), compare);
//        long long total = 0;
//        for (int i = 0; i < n; i++)
//        { 
//            int a = scores[n + i];
//            int b = scores[size - 2 - 2 * i];
//            int c = scores[size - 1 - 2 * i];
//            total += (long long)(a - b) * (a - b) + (long long)(b - c) * (b - c);
//        }
//
//        printf("%lld\n", total);
//        free(scores);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h> 
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k); 
//        int ming[100001] = { 0 };
//        for (int i = 0; i < m; i++)
//        {
//            int x;
//            scanf("%d", &x);
//            ming[x]++;
//        } 
//        int hua[100001] = { 0 };
//        for (int i = 0; i < k; i++)
//        {
//            int x;
//            scanf("%d", &x);
//            hua[x]++;
//        } 
//        int a = 0, b = 0, c = 0;
//        for (int x = 1; x <= n; x++)
//        {
//            if (ming[x] && hua[x])
//                c++;       
//            else if (ming[x])
//                a++;        
//            else if (hua[x])
//                b++;         
//        } 
//        if (a > b + (c > 0 ? 1 : 0))
//            printf("Ming\n");
//        else
//            printf("Hua\n");
//    }
//    return 0;
//}


//#include <stdio.h> 
//int main()
//{
//    int T, n;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int top = 0;
//        long long ans = 0;
//        int num[10010] = { 0 }, arr[10010] = { 0 };
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//            scanf("%d", &num[i]); 
//        arr[++top] = num[0];                                  
//        for (int i = 1; i < n; i++)
//        {
//            if (num[i] < arr[top]) arr[++top] = num[i];   
//            else if (num[i] > arr[top])                     
//            {
//                ans += (num[i] - arr[top]);                      
//                while (num[i] > arr[top] && top > 0)  top--;  
//                arr[++top] = num[i];                          
//            }
//        }
//        if (top > 1)    ans += (arr[1] - arr[top]);          
//        printf("%lld\n", ans);
//    }
//    return 0;
// }



//#include <stdio.h> 
//int main()
//{
//    int T, n;                  // T：测试用例数量；n：每个测试用例的数列长度
//    scanf("%d", &T);           // 读取测试用例数量
//    while (T--)                // 循环处理每个测试用例
//    {
//        int top = 0;           // 栈顶指针（用于维护一个单调递减的"栈"）
//        long long ans = 0;     // 存储最少操作次数（用long long避免溢出）
//        int num[10010] = { 0 }, arr[10010] = { 0 };  // num：原数列；arr：模拟栈的数组
//        scanf("%d", &n);       // 读取当前测试用例的数列长度
//        for (int i = 0; i < n; i++)
//            scanf("%d", &num[i]);  // 读取数列元素
//
//        // 初始化栈：将数列第一个元素入栈
//        arr[++top] = num[0];
//
//        // 从第二个元素开始遍历数列
//        for (int i = 1; i < n; i++)
//        {
//            // 若当前元素小于栈顶元素，说明需要新的"下降段"，入栈
//            if (num[i] < arr[top]) arr[++top] = num[i];
//            // 若当前元素大于栈顶元素，说明需要计算上升带来的操作次数
//            else if (num[i] > arr[top])
//            {
//                // 累加当前元素与栈顶元素的差值（这是必须的操作次数）
//                ans += (num[i] - arr[top]);
//                // 弹出栈顶元素，直到栈顶元素不小于当前元素或栈为空
//                while (num[i] > arr[top] && top > 0)  top--;
//                // 将当前元素入栈（维护栈的单调递减性）
//                arr[++top] = num[i];
//            }
//            // 若当前元素等于栈顶元素，无需操作（不影响栈和结果）
//        }
//
//        // 处理栈中剩余元素：栈底到栈顶的差值需要额外操作
//        if (top > 1)    ans += (arr[1] - arr[top]);
//
//        // 输出当前测试用例的结果
//        printf("%lld\n", ans);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        int* a = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        long long current_max = 0;
//        int count = 0;
//        int i = 0;
//        int possible = 1;
//
//        while (current_max < m) {
//            if (i >= n) {
//                possible = 0;
//                break;
//            }
//            int ai = a[i];
//            if (ai > current_max + 1) {
//                possible = 0;
//                break;
//            }
//            long long next1 = current_max + ai;
//            if (i + 1 < n) {
//                int ai1 = a[i + 1];
//                if (ai1 <= current_max + 1) {
//                    i++;
//                    continue;
//                }
//            }
//            current_max = next1;
//            count++;
//        }
//
//        if (possible && current_max >= m) {
//            printf("%d\n", count);
//        }
//        else {
//            printf("-1\n");
//        }
//        free(a);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h> 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        long long m;  
//        scanf("%d %lld", &n, &m);
//        int* a = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &a[i]);
//        } 
//        long long  max = 0;   
//        int count = 0;              
//        int i = 0;
//        int possible = 1; 
//        while ( max < m) 
//        { 
//            if (i >= n) 
//            {
//                possible = 0;
//                break;
//            } 
//            int ai = a[i]; 
//            if (ai >  max + 1)
//            {
//                possible = 0;
//                break;
//            } 
//            long long next  =  max + ai; 
//            if (i + 1 < n && a[i + 1] <=  max + 1) 
//            {
//                i++;  
//            }
//            else 
//            { 
//                long long target = m;
//                if (i + 1 < n && a[i + 1] < target)
//                {
//                    target = a[i + 1] - 1;   
//                } 
//                if (next  < target) 
//                {
//                    long long needed = (target -  max + ai - 1) / ai;
//                    count += needed;
//                    max += (long long)needed * ai;
//                }
//                else 
//                {
//                    count++;
//                   max = next ;
//                }
//            }
//        } 
//        if (possible && max >= m) 
//        {
//            printf("%d\n", count);
//        }
//        else 
//        {
//            printf("-1\n");
//        }
//        free(a);
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <stdlib.h> 
//
//int main()
//{
//    int T;                  // 测试用例数量
//    scanf("%d", &T);        // 读取测试用例数量
//    while (T--)             // 循环处理每个测试用例
//    {
//        int n;              // 砝码种类数量
//        long long m;        // 需要覆盖的最大重量(1~m)，用long long防止溢出
//        scanf("%d %lld", &n, &m);  // 读取砝码种类和目标重量
//
//        // 动态分配数组存储砝码重量
//        int* a = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &a[i]);  // 读取每种砝码的重量（已按从小到大排序）
//        }
//
//        long long max = 0;      // 当前能覆盖的最大重量（初始为0，表示暂时什么都测不了）
//        int count = 0;          // 记录使用的砝码总数量
//        int i = 0;              // 当前正在考虑的砝码索引
//        int possible = 1;       // 标记是否可能完成任务（1表示可能，0表示不可能）
//
//        // 循环扩展覆盖范围，直到覆盖到目标m
//        while (max < m)
//        {
//            // 如果所有砝码都已考虑过但还没覆盖m，说明不可能完成
//            if (i >= n)
//            {
//                possible = 0;
//                break;
//            }
//
//            int ai = a[i];  // 当前正在考虑的砝码重量
//
//            // 关键判断：如果当前砝码比下一个需要覆盖的重量（max+1）还大，
//            // 说明存在无法覆盖的重量（max+1），任务不可能完成
//            if (ai > max + 1)
//            {
//                possible = 0;
//                break;
//            }
//
//            // 计算使用一个当前砝码后能覆盖的最大重量
//            long long next = max + ai;
//
//            // 判断是否需要切换到下一个更大的砝码：
//            // 如果下一个砝码存在，且其重量 <= 当前可覆盖的下一个重量（max+1），
//            // 说明用更大的砝码能更高效地扩展范围，因此切换到下一个砝码
//            if (i + 1 < n && a[i + 1] <= max + 1)
//            {
//                i++;  // 切换到下一个更大的砝码
//            }
//            else
//            {
//                // 确定当前阶段的目标：要么覆盖到m，要么覆盖到下一个砝码前的最大重量
//                long long target = m;
//                // 如果下一个砝码存在且比当前目标小，就以"下一个砝码重量-1"为阶段目标
//                if (i + 1 < n && a[i + 1] < target)
//                {
//                    target = a[i + 1] - 1;   // 阶段目标设为下一个砝码前的最大重量
//                }
//
//                // 如果用一个当前砝码还达不到阶段目标，就计算需要多少个当前砝码
//                if (next < target)
//                {
//                    // 计算需要的砝码数量（向上取整）
//                    long long needed = (target - max + ai - 1) / ai;
//                    count += needed;                // 累加砝码数量
//                    max += (long long)needed * ai;  // 更新最大覆盖重量
//                }
//                else
//                {
//                    // 用一个当前砝码就能达到阶段目标，直接使用一个
//                    count++;
//                    max = next;
//                }
//            }
//        }
//
//        // 根据结果输出
//        if (possible && max >= m)
//        {
//            printf("%d\n", count);  // 成功覆盖，输出砝码总数
//        }
//        else
//        {
//            printf("-1\n");         // 无法覆盖，输出-1
//        }
//
//        free(a);  // 释放动态分配的内存
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* p1, const void* p2) 
//{         
//    return *(int*)p2 - *(int*)p1;
//}
//int Min(int x, int y) 
//{
//    return x > y ? y : x;
//}
//int Max(int x, int y) 
//{
//    return x < y ? y : x;
//} 
//int main()
//{
//    int T, n, m, p, k, x1, x2, y1, y2;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d %d", &n, &m, &p, &k);
//        int fence[3][102] = { 0 };              
//        int fence_num[204] = { 0 };             
//        for (int i = 1; i <= p; i++)
//        {
//            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//            if (x1 != x2)  fence[0][Min(x1, x2)]++;      
//            if (y1 != y2)  fence[1][Min(y1, y2)]++;     
//        }
//        int num = 0, ans = 0, maxt = Max(n, m);
//        for (int i = 1; i <= maxt; i++)
//        {
//            if (fence[0][i] != 0)  fence_num[num++] = fence[0][i];   
//            if (fence[1][i] != 0)  fence_num[num++] = fence[1][i];
//        }   
//        if (num <= k)    printf("0 %d\n", num);
//        else
//        {
//            qsort(fence_num, num, sizeof(int), cmp);   
//            for (int i = k; i < num; i++)         
//                ans += fence_num[i];
//            printf("%d\n", ans);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数：用于快速排序（降序排列）
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p2 - *(int*)p1;  // 大的元素排在前面
//}
//
//// 求两个数的最小值
//int Min(int x, int y)
//{
//    return x > y ? y : x;
//}
//
//// 求两个数的最大值
//int Max(int x, int y)
//{
//    return x < y ? y : x;
//}
//
//int main()
//{
//    int T, n, m, p, k, x1, x2, y1, y2;
//    scanf("%d", &T);  // 读取测试用例数量
//    while (T--)  // 循环处理每个测试用例
//    {
//        scanf("%d %d %d %d", &n, &m, &p, &k);  // 读取n(行数)、m(列数)、p(敌对对数)、k(最多可建栅栏数)
//
//        // 存储栅栏能切断的敌对关系数：
//        // fence[0][i]：第i列右侧的垂直栅栏（竖栅栏）能切断的敌对对数
//        // fence[1][i]：第i行下方的水平栅栏（横栅栏）能切断的敌对对数
//        int fence[2][102] = { 0 };  // 下标0~101，足够存储n和m（<=100）
//
//        // 存储所有栅栏的"切断能力"（即能切断的敌对对数）
//        int fnum[205] = { 0 };  // 最多有(n-1)+(m-1)个栅栏，204足够
//
//        // 处理p对敌对关系
//        for (int i = 1; i <= p; i++)
//        {
//            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);  // 读取一对敌对奶牛的坐标
//
//            // 判断是水平相邻（同一行，不同列）还是垂直相邻（同一列，不同行）
//            if (x1 != x2)  // 垂直相邻（y相同，x不同），需要竖栅栏分隔
//            {
//                // 竖栅栏位置在两列之间，取较小的x作为栅栏索引（如x=2和x=3之间的栅栏记为x=2）
//                fence[0][Min(x1, x2)]++;
//            }
//            if (y1 != y2)  // 水平相邻（x相同，y不同），需要横栅栏分隔
//            {
//                // 横栅栏位置在两行之间，取较小的y作为栅栏索引（如y=2和y=3之间的栅栏记为y=2）
//                fence[1][Min(y1, y2)]++;
//            }
//        }
//
//        int num = 0;  // 记录有效栅栏的数量（能切断至少1对敌对关系的栅栏）
//        int ans = 0;  // 记录剩余的敌对对数
//        int maxt = Max(n, m);  // 取行数和列数的最大值，用于遍历所有可能的栅栏位置
//
//        // 收集所有栅栏的"切断能力"
//        for (int i = 1; i <= maxt; i++)
//        {
//            if (fence[0][i] != 0)  // 竖栅栏有切断能力，加入列表
//                fnum[num++] = fence[0][i];
//            if (fence[1][i] != 0)  // 横栅栏有切断能力，加入列表
//                fnum[num++] = fence[1][i];
//        }
//
//        // 判断栅栏数量是否足够切断所有敌对关系
//        if (num <= k)  // 可用栅栏数 >= 需要的栅栏数，能完全切断
//        {
//            printf("0 %d\n", num);  // 0对剩余，最少需要num个栅栏
//        }
//        else  // 栅栏不足，需计算剩余敌对对数
//        {
//            qsort(fnum, num, sizeof(int), cmp);  // 按"切断能力"降序排序（优先选能力强的栅栏）
//
//            // 累加未被选中的栅栏的切断能力（即剩余的敌对对数）
//            for (int i = k; i < num; i++)
//                ans += fnum[i];
//
//            printf("%d\n", ans);  // 输出剩余敌对对数
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h> 
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p2 - *(int*)p1;
//} 
//int Min(int x, int y)
//{
//    return x > y ? y : x;
//} 
//int Max(int x, int y)
//{
//    return x < y ? y : x;
//}  
//int main()
//{
//    int T, n, m, p, k, x1, x2, y1, y2;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d %d", &n, &m, &p, &k);
//        int fence[2][102] = { 0 };
//        int fnum[205] = { 0 };
//        for (int i = 1; i <= p; i++)
//        {
//            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//            if (x1 != x2)
//                fence[0][Min(x1, x2)]++;
//            if (y1 != y2)
//                fence[1][Min(y1, y2)]++;
//        }
//        int num = 0;
//        int ans = 0;
//        int maxt = Max(n, m);
//        for (int i = 1; i <= maxt; i++)
//        {
//            if (fence[0][i] != 0)
//                fnum[num++] = fence[0][i];
//            if (fence[1][i] != 0)
//                fnum[num++] = fence[1][i];
//        }
//        if (num <= k)
//        {
//            printf("0 %d\n", num);
//        }
//        else
//        {
//            qsort(fnum, num, sizeof(int), cmp);
//            for (int i = k; i < num; i++)
//                ans += fnum[i];
//            printf("%d\n", ans);
//        }
//    }
//    return 0;
//} 


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h> 
//typedef struct
//{
//    int p;
//    int k;
//} Solution; 
//int compare(const void* a, const void* b)
//{
//    Solution* s1 = (Solution*)a;
//    Solution* s2 = (Solution*)b;
//    if (s1->p != s2->p)
//        return s1->p - s2->p;
//    else
//        return s1->k - s2->k;
//} 
//void trim(char* str) 
//{
//    int start = 0, end = strlen(str) - 1; 
//    while (isspace((unsigned char)str[start])) start++; 
//    while (end >= start && isspace((unsigned char)str[end])) end--; 
//    str[end + 1] = '\0'; 
//    if (start > 0)
//        memmove(str, str + start, end - start + 2);
//} 
//int main()
//{
//    char s[201];
//    while (fgets(s, sizeof(s), stdin))
//    { 
//        s[strcspn(s, "\n")] = '\0'; 
//        trim(s);
//        int len = strlen(s); 
//        if (len == 0)
//        { 
//            if (feof(stdin)) break;
//            continue;
//        } 
//        Solution solutions[10000];
//        int count = 0; 
//        for (int p = 1; p <= len; p++)
//        {
//            int max_k = (len + p - 1) / p;
//            for (int k = 1; k <= max_k; k++)
//            {
//                int alice_games = 0;
//                int bob_games = 0;
//                int alice_points = 0;
//                int bob_points = 0;
//                int pos = 0; 
//                while (pos < len)
//                {
//                    if (s[pos] == 'W')
//                        alice_points++;
//                    else
//                        bob_points++;
//
//                    pos++; 
//                    if (alice_points == p)
//                    {
//                        alice_games++;
//                        alice_points = 0;
//                        bob_points = 0;
//                        if (alice_games == k)
//                            break;
//                    }
//                    else if (bob_points == p)
//                    {
//                        bob_games++;
//                        alice_points = 0;
//                        bob_points = 0;
//                        if (bob_games == k)
//                            break;
//                    }
//                } 
//                if (pos == len && alice_games == k && bob_games < k)
//                {
//                    solutions[count].p = p;
//                    solutions[count].k = k;
//                    count++;
//                }
//            }
//        } 
//        printf("%d\n", count);
//        if (count > 0)
//        {
//            qsort(solutions, count, sizeof(Solution), compare);
//            for (int i = 0; i < count; i++)
//                printf("%d %d\n", solutions[i].p, solutions[i].k);
//        }
//    }
//    return 0;
//}
//


//
//#include <stdio.h>      // 标准输入输出库，用于printf、fgets等
//#include <stdlib.h>     // 标准库，用于qsort等函数
//#include <string.h>     // 字符串处理库，用于strlen、memmove等
//#include <ctype.h>      // 字符处理库，用于isspace等判断空白字符
//
//// 定义结构体存储有效方案：p为每局获胜分数，k为获胜局数
//typedef struct
//{
//    int p;  // 每局需要赢的分数
//    int k;  // 赢得整场比赛需要的局数
//} Solution; 
//
//// qsort排序的比较函数：先按p升序，p相同则按k升序
//int compare(const void* a, const void* b)
//{
//    Solution* s1 = (Solution*)a;  // 转换为Solution指针
//    Solution* s2 = (Solution*)b;
//    if (s1->p != s2->p)
//        return s1->p - s2->p;     // p不同时，按p升序
//    else
//        return s1->k - s2->k;     // p相同时，按k升序
//} 
//
//// 去除字符串前后的空白字符（空格、制表符、换行符等）
//void trim(char* str) 
//{
//    int start = 0, end = strlen(str) - 1;  // start记录首个非空白位置，end记录最后一个非空白位置
//    
//    // 找到第一个非空白字符的位置
//    while (isspace((unsigned char)str[start])) start++; 
//    
//    // 找到最后一个非空白字符的位置（从后往前找）
//    while (end >= start && isspace((unsigned char)str[end])) end--; 
//    
//    // 截断字符串，只保留有效部分（end之后设为结束符）
//    str[end + 1] = '\0'; 
//    
//    // 如果有前导空白，将有效部分移到字符串开头（覆盖前导空白）
//    if (start > 0)
//        memmove(str, str + start, end - start + 2);  // +2是为了包含结束符'\0'
//} 
//
//int main()
//{
//    char s[201];  // 存储输入的字符串（最长200字符+结束符）
//    // 循环读取每一行输入，直到文件结束（EOF）
//    while (fgets(s, sizeof(s), stdin))
//    { 
//        // 去除字符串中的换行符（fgets会读取换行符，此处替换为结束符）
//        s[strcspn(s, "\n")] = '\0'; 
//        
//        // 去除字符串前后的空白字符（处理输入中的空格、制表符等）
//        trim(s);
//        
//        int len = strlen(s);  // 计算处理后字符串的长度
//        
//        // 如果字符串为空（仅空白字符或空），跳过处理
//        if (len == 0)
//        { 
//            if (feof(stdin)) break;  // 若已到文件结尾，退出循环
//            continue;  // 否则跳过当前空行
//        } 
//        
//        Solution solutions[10000];  // 存储所有有效方案
//        int count = 0;  // 有效方案的数量
//        
//        // 枚举每局获胜所需分数p（p至少为1，最大不超过总回合数）
//        for (int p = 1; p <= len; p++)
//        {
//            // 计算最大可能的获胜局数k：总回合数/每局分数，向上取整
//            int max_k = (len + p - 1) / p;  // 等价于ceil(len/p)
//            
//            // 枚举获胜所需局数k（k至少为1，最大不超过max_k）
//            for (int k = 1; k <= max_k; k++)
//            {
//                int alice_games = 0;  // Alice赢的局数
//                int bob_games = 0;    // Bob赢的局数
//                int alice_points = 0; // 当前局Alice的分数
//                int bob_points = 0;   // 当前局Bob的分数
//                int pos = 0;          // 当前处理到的回合位置（从0开始）
//                
//                // 模拟比赛过程，逐回合处理
//                while (pos < len)
//                {
//                    // 判断当前回合胜负，累加分数
//                    if (s[pos] == 'W')  // Alice赢此回合
//                        alice_points++;
//                    else                // Bob赢此回合（字符为'L'）
//                        bob_points++;
//
//                    pos++;  // 移动到下一回合
//                    
//                    // 检查当前局是否结束（Alice先达到p分）
//                    if (alice_points == p)
//                    {
//                        alice_games++;  // Alice赢一局
//                        alice_points = 0;  // 重置当前局分数
//                        bob_points = 0;
//                        if (alice_games == k)  // Alice已赢够k局，比赛结束
//                            break;
//                    }
//                    // 检查当前局是否结束（Bob先达到p分）
//                    else if (bob_points == p)
//                    {
//                        bob_games++;  // Bob赢一局
//                        alice_points = 0;  // 重置当前局分数
//                        bob_points = 0;
//                        if (bob_games == k)  // Bob已赢够k局，比赛结束（此方案无效）
//                            break;
//                    }
//                } 
//                
//                // 验证方案是否有效：
//                // 1. 所有回合都被用完（pos == len）
//                // 2. Alice恰好赢k局（alice_games == k）
//                // 3. Bob赢的局数不足k（bob_games < k）
//                if (pos == len && alice_games == k && bob_games < k)
//                {
//                    solutions[count].p = p;  // 记录有效方案的p和k
//                    solutions[count].k = k;
//                    count++;  // 有效方案数+1
//                }
//            }
//        } 
//        
//        // 输出有效方案总数
//        printf("%d\n", count);
//        // 若有有效方案，排序后输出
//        if (count > 0)
//        {
//            // 按p升序、k升序排序
//            qsort(solutions, count, sizeof(Solution), compare);
//            // 逐个输出方案
//            for (int i = 0; i < count; i++)
//                printf("%d %d\n", solutions[i].p, solutions[i].k);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//#include <string.h>
//
//#include <stdlib.h>
//
//
//
//#define MAX_LEN 101
//
//
//
//// 用于存储子串的哈希表
//
//#define HASH_SIZE 100003
//
//
//
//typedef struct Node {
//
//    char* substring;
//
//    struct Node* next;
//
//} Node;
//
//
//
//Node* hashTable[HASH_SIZE];
//
//
//
//unsigned int hashFunction(const char* str) {
//
//    unsigned int hash = 0;
//
//    while (*str) {
//
//        hash = (hash * 31 + *str++) % HASH_SIZE;
//
//    }
//
//    return hash;
//
//}
//
//
//
//int insertHash(const char* str) {
//
//    unsigned int hashIndex = hashFunction(str);
//
//    Node* current = hashTable[hashIndex];
//
//
//
//    while (current) {
//
//        if (strcmp(current->substring, str) == 0) {
//
//            return 0; // 子串已存在
//
//        }
//
//        current = current->next;
//
//    }
//
//
//
//    Node* newNode = (Node*)malloc(sizeof(Node));
//
//    newNode->substring = strdup(str);
//
//    newNode->next = hashTable[hashIndex];
//
//    hashTable[hashIndex] = newNode;
//
//
//
//    return 1; // 插入成功
//
//}
//
//
//
//void freeHashTable() {
//
//    for (int i = 0; i < HASH_SIZE; i++) {
//
//        Node* current = hashTable[i];
//
//        while (current) {
//
//            Node* temp = current;
//
//            current = current->next;
//
//            free(temp->substring);
//
//            free(temp);
//
//        }
//
//        hashTable[i] = NULL;
//
//    }
//
//}
//
//
//
//int countCommonSubstrings(const char* s1, const char* s2) {
//
//    int count = 0;
//
//    int len1 = strlen(s1);
//
//    int len2 = strlen(s2);
//
//
//
//    for (int i = 0; i < len1; i++) {
//
//        for (int j = i; j < len1; j++) {
//
//            char temp[MAX_LEN];
//
//            strncpy(temp, s1 + i, j - i + 1);
//
//            temp[j - i + 1] = '\0';
//
//
//
//            if (strstr(s2, temp) && insertHash(temp)) {
//
//                count++;
//
//            }
//
//        }
//
//    }
//
//
//
//    freeHashTable();
//
//    return count;
//
//}
//
//
//
//int main() {
//
//    int T;
//
//    scanf("%d", &T);
//
//
//
//    while (T--) {
//
//        char s1[MAX_LEN], s2[MAX_LEN];
//
//        scanf("%s %s", s1, s2);
//
//
//
//        printf("%d\n", countCommonSubstrings(s1, s2));
//
//    }
//
//
//
//    return 0;
//
//} 
// 




//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX_LEN 101
//#define HASH_SIZE 100003 
//typedef struct Node
//{
//    char* substring;
//    struct Node* next;
//} Node; 
//unsigned int hashFunction(const char* str)
//{
//    unsigned int hash = 0;
//    while (*str) 
//    {
//        hash = (hash * 31 + *str++) % HASH_SIZE;
//    }
//    return hash;
//} 
//int insertHash(Node** hashTable, const char* str)
//{
//    unsigned int hashIndex = hashFunction(str);
//    Node* current = hashTable[hashIndex]; 
//    while (current) 
//    {
//        if (strcmp(current->substring, str) == 0) 
//        {
//            return 0;  
//        }
//        current = current->next;
//    } 
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->substring = strdup(str);
//    newNode->next = hashTable[hashIndex];
//    hashTable[hashIndex] = newNode; 
//    return 1;
//} 
//void freeHashTable(Node** hashTable) 
//{
//    for (int i = 0; i < HASH_SIZE; i++)
//    {
//        Node* current = hashTable[i];
//        while (current) 
//        {
//            Node* temp = current;
//            current = current->next;
//            free(temp->substring);
//            free(temp);
//        }
//        hashTable[i] = NULL;  
//    }
//} 
//int countCommonSubstrings(const char* s1, const char* s2) 
//{
//    int count = 0;
//    int len1 = strlen(s1);
//    int len2 = strlen(s2); 
//    Node* hashTable[HASH_SIZE] = { NULL }; 
//    for (int i = 0; i < len1; i++) 
//    {
//        char temp[MAX_LEN];  
//        for (int j = i; j < len1; j++) 
//        {
//            int subLen = j - i + 1; 
//            strncpy(temp, s1 + i, subLen);
//            temp[subLen] = '\0'; 
//            if (strstr(s2, temp) != NULL) 
//            {
//                count += insertHash(hashTable, temp);
//            }
//        }
//    } 
//    freeHashTable(hashTable);
//    return count;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char s1[MAX_LEN], s2[MAX_LEN];
//        scanf("%s %s", s1, s2);
//        printf("%d\n", countCommonSubstrings(s1, s2));
//    } 
//    return 0;
//}


//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define MAX_LEN 101
//#define HASH_SIZE 100003 
//
//typedef struct Node
//{
//    char* substring;
//    struct Node* next;
//} Node;
//unsigned int hashFunction(const char* str)
//{
//    unsigned int hash = 0;
//    while (*str)
//    {
//        hash = (hash * 31 + *str++) % HASH_SIZE;
//    }
//    return hash;
//}
//int insertHash(Node** hashTable, const char* str)
//{
//    unsigned int hashIndex = hashFunction(str);
//    Node* current = hashTable[hashIndex];
//
//    while (current)
//    {
//        if (strcmp(current->substring, str) == 0)
//        {
//            return 0;
//        }
//        current = current->next;
//    }
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    if (newNode == NULL)
//    {
//        return 0;
//    }
//    newNode->substring = _strdup(str);
//    newNode->next = hashTable[hashIndex];
//    hashTable[hashIndex] = newNode;
//
//    return 1;
//}
//void freeHashTable(Node** hashTable)
//{
//    for (int i = 0; i < HASH_SIZE; i++)
//    {
//        Node* current = hashTable[i];
//        while (current)
//        {
//            Node* temp = current;
//            current = current->next;
//            free(temp->substring);
//            free(temp);
//        }
//        hashTable[i] = NULL;
//    }
//}
//int countCommonSubstrings(const char* s1, const char* s2)
//{
//    int count = 0;
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    Node* hashTable[HASH_SIZE];
//    for (int i = 0; i < HASH_SIZE; i++)
//    {
//        hashTable[i] = NULL;
//    }
//
//    for (int i = 0; i < len1; i++)
//    {
//        char temp[MAX_LEN];
//        for (int j = i; j < len1; j++)
//        {
//            int subLen = j - i + 1;
//            if (subLen >= MAX_LEN)
//            {
//                break;
//            }
//            strncpy(temp, s1 + i, subLen);
//            temp[subLen] = '\0';
//            if (strstr(s2, temp) != NULL)
//            {
//                count += insertHash(hashTable, temp);
//            }
//        }
//    }
//    freeHashTable(hashTable);
//    return count;
//}
//int main()
//{
//    int T;
//    scanf_s("%d", &T);
//
//    while (T--)
//    {
//        char s1[MAX_LEN], s2[MAX_LEN];
//        scanf_s("%s %s", s1, (unsigned int)sizeof(s1), s2, (unsigned int)sizeof(s2));
//        printf("%d\n", countCommonSubstrings(s1, s2));
//    }
//    return 0;
//}




#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//表示输入的数组，存字符串的
char a[110][15];
//表示当前组有多少个可变字符串，下标表示的是当前组的第一个可变字符串的 a 数组的下标，数值表示的是该组的可变字符串的数量
int cnt[110];
//字符串的长度
int len[110];

//手写一个冒泡排序
void sort(char arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		//输入字符串的数目, n 个字符串
		int n;
		scanf("%d", &n);
		//输入字符串，记录字符串的长度
		for (int i = 0; i < n; i++) {
			scanf("%s", a[i]);
			len[i] = strlen(a[i]);
		}

		//表示最多的可变字符串的数目
		int max_times = 1;
		//表示最多的可变字符串的第一个字符串的位置
		int pos = 0;
		//枚举每一个字符串
		for (int i = 0; i < n; i++) {
			//算从 i+1 到最后一个字符串，判断是不是可变字符串
			for (int j = i + 1; j < n; j++) {
				//临时数组存字符串，方便后面还原
				char temp[15];
				for (int k = 0; k < len[j]; k++) {
					temp[k] = a[j][k];
				}
				//排序，排序之后比较，假设相等就表示两个字符串是互为可变字符串
				sort(a[j], len[j]);
				bool is_same = true;
				//假设两个字符串的长度不一样，肯定就不行
				if (len[i] != len[j]) {
					is_same = false;
				}
				else {
					for (int k = 0; k < len[i]; k++) {
						if (a[i][k] != a[j][k]) {
							is_same = false;
							break;
						}
					}
				}

				//假设两个字符串互为可变字符串就把计数器增加
				if (is_same) {
					cnt[i]++;
				}
				//还原，方便下一次比较
				for (int k = 0; k < len[j]; k++) {
					a[j][k] = temp[k];
				}
			}

			//维护最大的可变字符串的数目
			if (cnt[i] + 1 > max_times) {
				max_times = cnt[i] + 1;
				pos = i;
			}
		}

		//输出答案
		printf("%d\n", max_times);
		printf("%s\n", a[pos]);
		//重复上面的步骤，我们现在知道最多的可变字符串的那一组的第一个字符串，比较和这个字符串互为可变字符串的，输出，就是答案
		for (int j = pos + 1; j < n; j++) {
			char temp[15] = { '\0' };
			for (int k = 0; k < len[j]; k++) {
				temp[k] = a[j][k];
			}
			sort(a[j], len[j]);
			bool is_same = true;
			if (len[pos] != len[j]) {
				is_same = false;
			}
			else {
				for (int k = 0; k < len[pos]; k++) {
					if (a[j][k] != a[pos][k]) {
						is_same = false;
						break;
					}
				}
			}
			if (is_same) {
				printf("%s\n", temp);
			}
		}

		puts("");
		//方便下一次输入
		for (int i = 0; i < 110; i++) {
			cnt[i] = 0;
			for (int j = 0; j < 15; j++) {
				a[i][j] = '\0';
			}
		}
	}

	return 0;
}
