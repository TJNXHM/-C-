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
//#include<stdio.h>   // ������׼���������
//#include<string.h>  // �����ַ���������
//
//// ����ȫ�ֱ���
//int T, n, cnt, k, a, b, i, ncnt, res, nn;
//int arr[12] = { 0 };  // ���ڴ洢���ֵ�ÿһλ
//
//int main()
//{
//    scanf("%d", &T);  // ��ȡ������������
//    while (T--)       // ѭ������ÿ����������
//    {
//        scanf("%d", &n);  // ��ȡ��ǰҪ���������
//
//        // �����ִ��ڵ���10ʱ�������۵�����
//        while (n >= 10)
//        {
//            memset(arr, 0, sizeof(arr));  // ��մ洢����λ������
//            cnt = 0;                      // ���������㣬���ڼ�¼����λ��
//            nn = n;                       // ����n��ֵ�����ڷֽ�����
//
//            // �ֽ����֣���ÿһλ�洢��������
//            // ע�⣺����洢�������������λ
//            while (nn != 0)
//            {
//                arr[cnt++] = nn % 10;  // ȡ���һλ����
//                nn /= 10;              // �Ƴ����һλ����
//            }
//            cnt--;  // ������������ʹ��ָ�����һ����Ч���ֵ�����
//
//            k = cnt;              // k��ʾ���λ��������λ��-1��
//            ncnt = cnt + 1;       // �������ֵ���λ��
//
//            a = 0;  // �洢�۵���ĵ�һ����
//            b = 0;  // �洢�۵���ĵڶ�����
//
//            // �ж�����λ������ż�ԣ�ͨ�����λ�����жϣ�
//            if (cnt % 2 == 0)  // ż��λ���
//            {
//                arr[ncnt] = 0;  // ������ĩβ��0�����ڹ����һ������
//
//                // ���������۵������
//                for (i = 0; i < (k / 2 + 1); i++)
//                {
//                    a = a * 10 + arr[ncnt - i];  // ��һ�������Ӳ�0��λ�ÿ�ʼȡ
//                    b = b * 10 + arr[i];         // �ڶ���������ԭ���ֵĵ�λ��ʼȡ
//                }
//
//                res = a + b;  // ��������֮��
//                n = res;      // ����nΪ�µĺͣ�׼����һ���۵�
//            }
//            else  // ����λ���
//            {
//                // ���������۵������
//                for (i = 0; i < (k + 1) / 2; i++)
//                {
//                    a = a * 10 + arr[cnt - i];  // ��һ��������ԭ���ֵĸ�λ��ʼȡ
//                    b = b * 10 + arr[i];        // �ڶ���������ԭ���ֵĵ�λ��ʼȡ
//                }
//
//                res = a + b;  // ��������֮��
//                n = res;      // ����nΪ�µĺͣ�׼����һ���۵�
//            }
//        }
//
//        printf("%d\n", n);  // ������ս����С��10������
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
//    int T, n;                  // T����������������n��ÿ���������������г���
//    scanf("%d", &T);           // ��ȡ������������
//    while (T--)                // ѭ������ÿ����������
//    {
//        int top = 0;           // ջ��ָ�루����ά��һ�������ݼ���"ջ"��
//        long long ans = 0;     // �洢���ٲ�����������long long���������
//        int num[10010] = { 0 }, arr[10010] = { 0 };  // num��ԭ���У�arr��ģ��ջ������
//        scanf("%d", &n);       // ��ȡ��ǰ�������������г���
//        for (int i = 0; i < n; i++)
//            scanf("%d", &num[i]);  // ��ȡ����Ԫ��
//
//        // ��ʼ��ջ�������е�һ��Ԫ����ջ
//        arr[++top] = num[0];
//
//        // �ӵڶ���Ԫ�ؿ�ʼ��������
//        for (int i = 1; i < n; i++)
//        {
//            // ����ǰԪ��С��ջ��Ԫ�أ�˵����Ҫ�µ�"�½���"����ջ
//            if (num[i] < arr[top]) arr[++top] = num[i];
//            // ����ǰԪ�ش���ջ��Ԫ�أ�˵����Ҫ�������������Ĳ�������
//            else if (num[i] > arr[top])
//            {
//                // �ۼӵ�ǰԪ����ջ��Ԫ�صĲ�ֵ�����Ǳ���Ĳ���������
//                ans += (num[i] - arr[top]);
//                // ����ջ��Ԫ�أ�ֱ��ջ��Ԫ�ز�С�ڵ�ǰԪ�ػ�ջΪ��
//                while (num[i] > arr[top] && top > 0)  top--;
//                // ����ǰԪ����ջ��ά��ջ�ĵ����ݼ��ԣ�
//                arr[++top] = num[i];
//            }
//            // ����ǰԪ�ص���ջ��Ԫ�أ������������Ӱ��ջ�ͽ����
//        }
//
//        // ����ջ��ʣ��Ԫ�أ�ջ�׵�ջ���Ĳ�ֵ��Ҫ�������
//        if (top > 1)    ans += (arr[1] - arr[top]);
//
//        // �����ǰ���������Ľ��
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
//    int T;                  // ������������
//    scanf("%d", &T);        // ��ȡ������������
//    while (T--)             // ѭ������ÿ����������
//    {
//        int n;              // ������������
//        long long m;        // ��Ҫ���ǵ��������(1~m)����long long��ֹ���
//        scanf("%d %lld", &n, &m);  // ��ȡ���������Ŀ������
//
//        // ��̬��������洢��������
//        int* a = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &a[i]);  // ��ȡÿ��������������Ѱ���С��������
//        }
//
//        long long max = 0;      // ��ǰ�ܸ��ǵ������������ʼΪ0����ʾ��ʱʲô���ⲻ�ˣ�
//        int count = 0;          // ��¼ʹ�õ�����������
//        int i = 0;              // ��ǰ���ڿ��ǵ���������
//        int possible = 1;       // ����Ƿ�����������1��ʾ���ܣ�0��ʾ�����ܣ�
//
//        // ѭ����չ���Ƿ�Χ��ֱ�����ǵ�Ŀ��m
//        while (max < m)
//        {
//            // ����������붼�ѿ��ǹ�����û����m��˵�����������
//            if (i >= n)
//            {
//                possible = 0;
//                break;
//            }
//
//            int ai = a[i];  // ��ǰ���ڿ��ǵ���������
//
//            // �ؼ��жϣ������ǰ�������һ����Ҫ���ǵ�������max+1������
//            // ˵�������޷����ǵ�������max+1�������񲻿������
//            if (ai > max + 1)
//            {
//                possible = 0;
//                break;
//            }
//
//            // ����ʹ��һ����ǰ������ܸ��ǵ��������
//            long long next = max + ai;
//
//            // �ж��Ƿ���Ҫ�л�����һ����������룺
//            // �����һ��������ڣ��������� <= ��ǰ�ɸ��ǵ���һ��������max+1����
//            // ˵���ø���������ܸ���Ч����չ��Χ������л�����һ������
//            if (i + 1 < n && a[i + 1] <= max + 1)
//            {
//                i++;  // �л�����һ�����������
//            }
//            else
//            {
//                // ȷ����ǰ�׶ε�Ŀ�꣺Ҫô���ǵ�m��Ҫô���ǵ���һ������ǰ���������
//                long long target = m;
//                // �����һ����������ұȵ�ǰĿ��С������"��һ����������-1"Ϊ�׶�Ŀ��
//                if (i + 1 < n && a[i + 1] < target)
//                {
//                    target = a[i + 1] - 1;   // �׶�Ŀ����Ϊ��һ������ǰ���������
//                }
//
//                // �����һ����ǰ���뻹�ﲻ���׶�Ŀ�꣬�ͼ�����Ҫ���ٸ���ǰ����
//                if (next < target)
//                {
//                    // ������Ҫ����������������ȡ����
//                    long long needed = (target - max + ai - 1) / ai;
//                    count += needed;                // �ۼ���������
//                    max += (long long)needed * ai;  // ������󸲸�����
//                }
//                else
//                {
//                    // ��һ����ǰ������ܴﵽ�׶�Ŀ�ֱ꣬��ʹ��һ��
//                    count++;
//                    max = next;
//                }
//            }
//        }
//
//        // ���ݽ�����
//        if (possible && max >= m)
//        {
//            printf("%d\n", count);  // �ɹ����ǣ������������
//        }
//        else
//        {
//            printf("-1\n");         // �޷����ǣ����-1
//        }
//
//        free(a);  // �ͷŶ�̬������ڴ�
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
//// �ȽϺ��������ڿ������򣨽������У�
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p2 - *(int*)p1;  // ���Ԫ������ǰ��
//}
//
//// ������������Сֵ
//int Min(int x, int y)
//{
//    return x > y ? y : x;
//}
//
//// �������������ֵ
//int Max(int x, int y)
//{
//    return x < y ? y : x;
//}
//
//int main()
//{
//    int T, n, m, p, k, x1, x2, y1, y2;
//    scanf("%d", &T);  // ��ȡ������������
//    while (T--)  // ѭ������ÿ����������
//    {
//        scanf("%d %d %d %d", &n, &m, &p, &k);  // ��ȡn(����)��m(����)��p(�жԶ���)��k(���ɽ�դ����)
//
//        // �洢դ�����жϵĵжԹ�ϵ����
//        // fence[0][i]����i���Ҳ�Ĵ�ֱդ������դ�������жϵĵжԶ���
//        // fence[1][i]����i���·���ˮƽդ������դ�������жϵĵжԶ���
//        int fence[2][102] = { 0 };  // �±�0~101���㹻�洢n��m��<=100��
//
//        // �洢����դ����"�ж�����"�������жϵĵжԶ�����
//        int fnum[205] = { 0 };  // �����(n-1)+(m-1)��դ����204�㹻
//
//        // ����p�ԵжԹ�ϵ
//        for (int i = 1; i <= p; i++)
//        {
//            scanf("%d %d %d %d", &x1, &y1, &x2, &y2);  // ��ȡһ�Եж���ţ������
//
//            // �ж���ˮƽ���ڣ�ͬһ�У���ͬ�У����Ǵ�ֱ���ڣ�ͬһ�У���ͬ�У�
//            if (x1 != x2)  // ��ֱ���ڣ�y��ͬ��x��ͬ������Ҫ��դ���ָ�
//            {
//                // ��դ��λ��������֮�䣬ȡ��С��x��Ϊդ����������x=2��x=3֮���դ����Ϊx=2��
//                fence[0][Min(x1, x2)]++;
//            }
//            if (y1 != y2)  // ˮƽ���ڣ�x��ͬ��y��ͬ������Ҫ��դ���ָ�
//            {
//                // ��դ��λ��������֮�䣬ȡ��С��y��Ϊդ����������y=2��y=3֮���դ����Ϊy=2��
//                fence[1][Min(y1, y2)]++;
//            }
//        }
//
//        int num = 0;  // ��¼��Чդ�������������ж�����1�ԵжԹ�ϵ��դ����
//        int ans = 0;  // ��¼ʣ��ĵжԶ���
//        int maxt = Max(n, m);  // ȡ���������������ֵ�����ڱ������п��ܵ�դ��λ��
//
//        // �ռ�����դ����"�ж�����"
//        for (int i = 1; i <= maxt; i++)
//        {
//            if (fence[0][i] != 0)  // ��դ�����ж������������б�
//                fnum[num++] = fence[0][i];
//            if (fence[1][i] != 0)  // ��դ�����ж������������б�
//                fnum[num++] = fence[1][i];
//        }
//
//        // �ж�դ�������Ƿ��㹻�ж����ежԹ�ϵ
//        if (num <= k)  // ����դ���� >= ��Ҫ��դ����������ȫ�ж�
//        {
//            printf("0 %d\n", num);  // 0��ʣ�࣬������Ҫnum��դ��
//        }
//        else  // դ�����㣬�����ʣ��жԶ���
//        {
//            qsort(fnum, num, sizeof(int), cmp);  // ��"�ж�����"������������ѡ����ǿ��դ����
//
//            // �ۼ�δ��ѡ�е�դ�����ж���������ʣ��ĵжԶ�����
//            for (int i = k; i < num; i++)
//                ans += fnum[i];
//
//            printf("%d\n", ans);  // ���ʣ��жԶ���
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
//#include <stdio.h>      // ��׼��������⣬����printf��fgets��
//#include <stdlib.h>     // ��׼�⣬����qsort�Ⱥ���
//#include <string.h>     // �ַ�������⣬����strlen��memmove��
//#include <ctype.h>      // �ַ�����⣬����isspace���жϿհ��ַ�
//
//// ����ṹ��洢��Ч������pΪÿ�ֻ�ʤ������kΪ��ʤ����
//typedef struct
//{
//    int p;  // ÿ����ҪӮ�ķ���
//    int k;  // Ӯ������������Ҫ�ľ���
//} Solution; 
//
//// qsort����ıȽϺ������Ȱ�p����p��ͬ��k����
//int compare(const void* a, const void* b)
//{
//    Solution* s1 = (Solution*)a;  // ת��ΪSolutionָ��
//    Solution* s2 = (Solution*)b;
//    if (s1->p != s2->p)
//        return s1->p - s2->p;     // p��ͬʱ����p����
//    else
//        return s1->k - s2->k;     // p��ͬʱ����k����
//} 
//
//// ȥ���ַ���ǰ��Ŀհ��ַ����ո��Ʊ�������з��ȣ�
//void trim(char* str) 
//{
//    int start = 0, end = strlen(str) - 1;  // start��¼�׸��ǿհ�λ�ã�end��¼���һ���ǿհ�λ��
//    
//    // �ҵ���һ���ǿհ��ַ���λ��
//    while (isspace((unsigned char)str[start])) start++; 
//    
//    // �ҵ����һ���ǿհ��ַ���λ�ã��Ӻ���ǰ�ң�
//    while (end >= start && isspace((unsigned char)str[end])) end--; 
//    
//    // �ض��ַ�����ֻ������Ч���֣�end֮����Ϊ��������
//    str[end + 1] = '\0'; 
//    
//    // �����ǰ���հף�����Ч�����Ƶ��ַ�����ͷ������ǰ���հף�
//    if (start > 0)
//        memmove(str, str + start, end - start + 2);  // +2��Ϊ�˰���������'\0'
//} 
//
//int main()
//{
//    char s[201];  // �洢������ַ������200�ַ�+��������
//    // ѭ����ȡÿһ�����룬ֱ���ļ�������EOF��
//    while (fgets(s, sizeof(s), stdin))
//    { 
//        // ȥ���ַ����еĻ��з���fgets���ȡ���з����˴��滻Ϊ��������
//        s[strcspn(s, "\n")] = '\0'; 
//        
//        // ȥ���ַ���ǰ��Ŀհ��ַ������������еĿո��Ʊ���ȣ�
//        trim(s);
//        
//        int len = strlen(s);  // ���㴦����ַ����ĳ���
//        
//        // ����ַ���Ϊ�գ����հ��ַ���գ�����������
//        if (len == 0)
//        { 
//            if (feof(stdin)) break;  // ���ѵ��ļ���β���˳�ѭ��
//            continue;  // ����������ǰ����
//        } 
//        
//        Solution solutions[10000];  // �洢������Ч����
//        int count = 0;  // ��Ч����������
//        
//        // ö��ÿ�ֻ�ʤ�������p��p����Ϊ1����󲻳����ܻغ�����
//        for (int p = 1; p <= len; p++)
//        {
//            // ���������ܵĻ�ʤ����k���ܻغ���/ÿ�ַ���������ȡ��
//            int max_k = (len + p - 1) / p;  // �ȼ���ceil(len/p)
//            
//            // ö�ٻ�ʤ�������k��k����Ϊ1����󲻳���max_k��
//            for (int k = 1; k <= max_k; k++)
//            {
//                int alice_games = 0;  // AliceӮ�ľ���
//                int bob_games = 0;    // BobӮ�ľ���
//                int alice_points = 0; // ��ǰ��Alice�ķ���
//                int bob_points = 0;   // ��ǰ��Bob�ķ���
//                int pos = 0;          // ��ǰ�����Ļغ�λ�ã���0��ʼ��
//                
//                // ģ��������̣���غϴ���
//                while (pos < len)
//                {
//                    // �жϵ�ǰ�غ�ʤ�����ۼӷ���
//                    if (s[pos] == 'W')  // AliceӮ�˻غ�
//                        alice_points++;
//                    else                // BobӮ�˻غϣ��ַ�Ϊ'L'��
//                        bob_points++;
//
//                    pos++;  // �ƶ�����һ�غ�
//                    
//                    // ��鵱ǰ���Ƿ������Alice�ȴﵽp�֣�
//                    if (alice_points == p)
//                    {
//                        alice_games++;  // AliceӮһ��
//                        alice_points = 0;  // ���õ�ǰ�ַ���
//                        bob_points = 0;
//                        if (alice_games == k)  // Alice��Ӯ��k�֣���������
//                            break;
//                    }
//                    // ��鵱ǰ���Ƿ������Bob�ȴﵽp�֣�
//                    else if (bob_points == p)
//                    {
//                        bob_games++;  // BobӮһ��
//                        alice_points = 0;  // ���õ�ǰ�ַ���
//                        bob_points = 0;
//                        if (bob_games == k)  // Bob��Ӯ��k�֣������������˷�����Ч��
//                            break;
//                    }
//                } 
//                
//                // ��֤�����Ƿ���Ч��
//                // 1. ���лغ϶������꣨pos == len��
//                // 2. Aliceǡ��Ӯk�֣�alice_games == k��
//                // 3. BobӮ�ľ�������k��bob_games < k��
//                if (pos == len && alice_games == k && bob_games < k)
//                {
//                    solutions[count].p = p;  // ��¼��Ч������p��k
//                    solutions[count].k = k;
//                    count++;  // ��Ч������+1
//                }
//            }
//        } 
//        
//        // �����Ч��������
//        printf("%d\n", count);
//        // ������Ч��������������
//        if (count > 0)
//        {
//            // ��p����k��������
//            qsort(solutions, count, sizeof(Solution), compare);
//            // ����������
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
//// ���ڴ洢�Ӵ��Ĺ�ϣ��
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
//            return 0; // �Ӵ��Ѵ���
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
//    return 1; // ����ɹ�
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

//��ʾ��������飬���ַ�����
char a[110][15];
//��ʾ��ǰ���ж��ٸ��ɱ��ַ������±��ʾ���ǵ�ǰ��ĵ�һ���ɱ��ַ����� a ������±꣬��ֵ��ʾ���Ǹ���Ŀɱ��ַ���������
int cnt[110];
//�ַ����ĳ���
int len[110];

//��дһ��ð������
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
		//�����ַ�������Ŀ, n ���ַ���
		int n;
		scanf("%d", &n);
		//�����ַ�������¼�ַ����ĳ���
		for (int i = 0; i < n; i++) {
			scanf("%s", a[i]);
			len[i] = strlen(a[i]);
		}

		//��ʾ���Ŀɱ��ַ�������Ŀ
		int max_times = 1;
		//��ʾ���Ŀɱ��ַ����ĵ�һ���ַ�����λ��
		int pos = 0;
		//ö��ÿһ���ַ���
		for (int i = 0; i < n; i++) {
			//��� i+1 �����һ���ַ������ж��ǲ��ǿɱ��ַ���
			for (int j = i + 1; j < n; j++) {
				//��ʱ������ַ�����������滹ԭ
				char temp[15];
				for (int k = 0; k < len[j]; k++) {
					temp[k] = a[j][k];
				}
				//��������֮��Ƚϣ�������Ⱦͱ�ʾ�����ַ����ǻ�Ϊ�ɱ��ַ���
				sort(a[j], len[j]);
				bool is_same = true;
				//���������ַ����ĳ��Ȳ�һ�����϶��Ͳ���
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

				//���������ַ�����Ϊ�ɱ��ַ����ͰѼ���������
				if (is_same) {
					cnt[i]++;
				}
				//��ԭ��������һ�αȽ�
				for (int k = 0; k < len[j]; k++) {
					a[j][k] = temp[k];
				}
			}

			//ά�����Ŀɱ��ַ�������Ŀ
			if (cnt[i] + 1 > max_times) {
				max_times = cnt[i] + 1;
				pos = i;
			}
		}

		//�����
		printf("%d\n", max_times);
		printf("%s\n", a[pos]);
		//�ظ�����Ĳ��裬��������֪�����Ŀɱ��ַ�������һ��ĵ�һ���ַ������ȽϺ�����ַ�����Ϊ�ɱ��ַ����ģ���������Ǵ�
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
		//������һ������
		for (int i = 0; i < 110; i++) {
			cnt[i] = 0;
			for (int j = 0; j < 15; j++) {
				a[i][j] = '\0';
			}
		}
	}

	return 0;
}
