#define _CRT_SECURE_NO_WARNINGS



//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long n;
//        scanf("%lld", &n);  
//        int count=INT_MAX;
//        for (int a=0; a < 10; a++)
//        {
//            for (int b=0; 1001*a+1111*b<=n; b++)
//            {
//                int m = n - a * 1111 - b * 1001;
//                if (m % 11 == 0 && m >= 0)
//                {
//                    count = (count < m / 11 + a + b) ? count : m / 11 + a + b;
//                }
//            }
//        }
//        printf("%d\n", count == INT_MAX ? 0 : count);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int n, i, j, z;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int a, flag = 1;
//        scanf("%d", &a);
//        int min;
//        if (a % 11 != 0)
//        {
//            printf("0\n");
//        }
//        else
//        {
//            a = a / 11;
//            for (i = 0; i <= a; i++)
//            {
//                for (j = 0; j * 91 <= a; j++)
//                {
//                    for (z = 0; z * 101 <= a; z++)//要保证加的次数最少，那么被加的数一定要够大，所以先从大的开始加
//                    {
//                        if ((i + j * 91 + z * 101) == a)
//                        {
//                            flag = 0;//标记标记
//                            min = i + j + z;
//                            break;
//                        }
//                    }
//                    if (flag == 0)
//                    {
//                        break;
//                    }
//                }
//                if (flag == 0)
//                {
//                    break;
//                }
//            }
//            printf("%d\n", min);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n,count=0;
//        scanf("%d", &n); 
//        for (int a=1; 3*a*a<=n; a++)
//        {
//            for (int b=a; 2*b*b+a*a <= n; b++)
//            { 
//                int c = sqrt(n - a * a - b * b); 
//                if (a * a + b * b + c * c == n)count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, count = 0;
//        scanf("%d", &n);
//        for (int a = 0; a * a <= n; a++)   
//        {
//            for (int b = a; a * a + b * b <= n; b++)  
//            {
//                int remaining = n - a * a - b * b;
//                if (remaining < b * b) continue;  
//                int c = sqrt(remaining); 
//                if (c * c == remaining && c >= b)
//                {
//                    count++;
//                }
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, count = 0;
//        scanf("%d", &n);
//        for (int a = 1; 3 * a * a <= n; a++)
//        {
//            for (int b = a; a * a + 2 * b * b <= n; b++)
//            {
//                int remaining = n - a * a - b * b;
//                int c = sqrt(remaining);
//                if (c * c == remaining)
//                    count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}
//

//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        if (n == 0) return 0;
//        int* arr = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int count = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for (int a = i + 1; a < n; a++)
//            {
//                if (arr[a] < arr[i])count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int arr[22];
//        for (int i = 1; i <= 19; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int sum1 = arr[2] + arr[3] + arr[4];
//        int sum2;
//        for (int i = 3; i <= 7; i++)
//        {
//            if(i<=5) sum2 = arr[i] + arr[i + 1] + arr[i + 2];
//            else if(i==6) sum2 = arr[6] + arr[7] + arr[2];
//            else  sum2 = arr[7] + arr[2] + arr[3];
//            if (sum2 < sum1)sum1 = sum2;
//        }
//        int sum3 = arr[8] + arr[9] + arr[10];
//        int sum4;
//        for (int i = 9; i <= 19; i++)
//        {
//            if(i<=17)  sum4 = arr[i] + arr[i + 1] + arr[i + 2];
//            else if(i==18) sum4 = arr[18] + arr[19] + arr[8];
//            else  sum4 = arr[8] + arr[9] + arr[19];
//            if (sum4 < sum3)sum3 = sum4;
//        }
//        int a = arr[1] + sum1 + sum3;
//        int b = 0;
//        for (int i = 1; i <= 7; i++)
//        {
//            b += arr[i];
//        }
//        if (a == b)printf("%d\n", a);
//        else
//        {
//            int min = (b < a ? b : a);
//            printf("%d\n", min);
//        }
//    }
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
//        int arr[22];
//        for (int i = 1; i <= 19; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int sum1 = arr[2] + arr[3] + arr[4];
//        for (int i = 3; i <= 4; i++)
//        {
//            int sum2 = arr[i] + arr[i + 1] + arr[i + 2];
//            if (sum2 < sum1)sum1 = sum2;
//        }
//        int sum3 = arr[7] + arr[8] + arr[9];
//        for (int i = 8; i <= 16; i++)
//        {
//            int sum4 = arr[i] + arr[i + 1] + arr[i + 2];
//            if (sum4 < sum3)sum3 = sum4;
//        }
//        int a = arr[0] + sum1 + sum3;
//        int b = 0;
//        for (int i = 0; i < 7; i++)
//        {
//            b += arr[i];
//        }
//        if (a == b)printf("%d\n", a);
//        else
//        {
//            int min = (b < a ? b : a);
//            printf("%d\n", min);
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    while ((scanf("%d %d", &n, &m)) == 2)
//    {
//        if (n == 0 && m == 0) return 0;
//        int* arr = ((int*)malloc((n + 2) * sizeof(int)));
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int  count2 = 0;
//            for (int i = 1; i <= n - m+1; i++)//3
//            {
//                int count1 = 0;
//                for (int j = i; j <m + i; j++)
//                {
//                    count1 += arr[j];
//                }
//                count2 = (count2 < count1 ? count1 : count2);
//            }
//        printf("%d\n", count2);
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    while ((scanf("%d %d", &n, &m)) == 2)
//    {
//        if (n == 0 && m == 0) return 0;
//        int* arr = ((int*)malloc((n + 2) * sizeof(int)));
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }  
//        int sum1=0;
//        for (int i = 1; i <= m; i++)
//        {
//            sum1 += arr[i];
//        }
//        if (m == n)printf("%d\n", sum1);
//        else
//        {
//            int sum2 = 0;
//            for (int i = 1; i <= n - m; i++)
//            {
//                sum2 = sum1 - arr[i] + arr[m + i];
//                sum1 = (sum1 < sum2 ? sum2 : sum1);
//            }
//            printf("%d\n", sum1);
//        }
//    } 
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    while ((scanf("%d %d", &n, &m)) == 2)
//    {
//        if (n == 0 && m == 0) return 0;
//        int* arr = ((int*)malloc((n + 2) * sizeof(int)));
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int sum1 = 0;
//        for (int i = 1; i <= m; i++)
//        {
//            sum1 += arr[i];
//        }
//        if (m == n)printf("%d\n", sum1);
//        else
//        {  
//            int max = sum1;
//            int sum2 = 0;
//            for (int i = 1; i <= n - m; i++)
//            {
//                sum1 = sum1 - arr[i] + arr[i + m]; 
//                if (sum1 > max)max = sum1;
//            }
//            printf("%d\n", max);
//        }
//        free(arr);
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
//        double a, b, c; 
//        scanf("%lld+%lld=%lld", &a, &b, &c);
//        if ((a + b)==c)printf("0\n");
//        else
//        { 
//            int n, t = 0, s = 0;
//            for (n = 1; n < 1000000000; n *= 10)
//            {
//                if (a* n + b == c)
//                {
//                    t = 1;
//                    break;
//                }
//                s++;
//            }
//            if (t == 0)
//            {
//                s = 0;
//                for (int i = 1; i < 1000000000; i *= 10)
//                { 
//                    if (a + b * i == c)
//                    {
//                        break;
//                    }
//                    s--;
//                }
//            }
//            printf("%d\n", s);
//        }
//       
//    }
//    return 0;
//}


//#include<stdio.h>
//
//int hanshu(int arr2[])
//{
//    for (int i = 1; i < 3; i++)
//    {
//        for (int j = 2; j < 4; j++)
//        {
//            
//            if (arr2[i] < arr2[j])
//            {
//                int t = arr2[i];
//                arr2[i] = arr2[j];
//                arr2[j] = t;
//            }
//        }
//    }
//    if (arr2[1] * arr2[1] < arr2[2] * arr2[2] + arr2[3] * arr2[3] && arr2[1] < arr2[2] + arr2[3])
//    {
//        return 1;
//    }
//    else return 0;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, arr[102], arr2[4];
//        scanf("%d", &n);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int count = 0;
//        for (int a = 1; a <= n-2; a++)
//        {
//            for (int b = a+1; b <= n-1; b++)
//            {
//                for (int c = b+1; c <= n; c++)  
//                {
//                    arr2[1] = arr[a];
//                    arr2[2] = arr[b];
//                    arr2[3] = arr[c];
//                    count += hanshu(arr2);
//                }
//            }
//        }
//        printf("%d\n", count);
//    }
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a, c, m;
//    while (scanf("%d %d %d", &a, &c, &m) ==3)
//    {
//        int x = 0, cnt = 1, flag = 1;
//        int books[10010] = { 1 };
//        while (1)
//        {
//            x = (a * x + c) % m;
//            if (books[x] == 1)         // 陷入循环
//            {
//                flag = 0;
//                break;
//            }
//            books[x] ++, cnt++;
//            if (cnt == m)             // 满足要求
//                break;
//        }
//        if (flag)   puts("Yes");
//        else        puts("No");
//    }
//    return 0;
//}#include<stdio.h>

//
//#include<stdio.h>  
//#include<stdlib.h>      
//int hanshu(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//
//int main()
//{
//    int p;
//    int* t = NULL;  
//    int max_p = 0;  
//    while ((scanf("%d", &p)) == 1)
//    { 
//        if (p > max_p)
//        {
//            free(t);  
//            t = (int*)malloc(p * sizeof(int));
//            if (t == NULL)
//            {
//                printf("No\n");
//                continue;
//            }
//            max_p = p; 
//        }
//
//        int a = 1; 
//        for (int i = 1; i <= p - 1; i++)
//        {
//            a = (a * 2) % p;
//            t[i] = a;
//        } 
//        qsort(&t[1], p - 1, sizeof(int), hanshu); 
//        int count = 0;
//        for (int i = 1; i < p; i++)
//        {
//            if (t[i] == i)
//                count++;
//        } 
//        if (count == p - 1)
//            puts("Yes");
//        else
//            puts("No");
//    }
//
//    free(t); 
//    return 0;
//}



//#include<stdio.h>
//int main() {
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		int a[22];
//		int i, j;
//		for (i = 1; i <= 19; i++) {
//			scanf("%d", &a[i]);
//		}
//		int min = 0;
//		//内圈 
//		for (i = 1; i <= 7; i++) {
//			min += a[i];
//		}
//		int min1 = a[2] + a[3] + a[4], min2 = a[8] + a[9] + a[10];
//		int sum1, sum2;
//		for (i = 2; i <= 7; i++) {
//			if (i <= 5)sum1 = a[i] + a[i + 1] + a[i + 2];
//			else if (i == 6)sum1 = a[6] + a[7] + a[2];
//			else sum1 = a[7] + a[2] + a[3];
//			if (sum1 <= min1)min1 = sum1;
//		}
//		for (i = 8; i <= 19; i++) {
//			if (i <= 17)sum2 = a[i] + a[i + 1] + a[i + 2];
//			else if (i == 18)sum2 = a[18] + a[19] + a[8];
//			else sum2 = a[19] + a[8] + a[9];
//			if (sum2 <= min2)min2 = sum2;
//		}
//		int sum = a[1] + min1 + min2;
//		if (sum <= min)min = sum;
//		printf("%d\n", min);
//	}
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    while ((scanf("%d %d", &n, &m)) == 2)
//    {
//        if (n == 0 && m == 0) return 0;
//
//        int* arr = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        } 
//        int max_sum = 0;
//        for (int i = 0; i < m; i++)
//        {
//            max_sum += arr[i];
//        } 
//        int current_sum = max_sum;
//        for (int i = m; i < n; i++)
//        {
//            current_sum = current_sum - arr[i - m] + arr[i];
//            if (current_sum > max_sum)
//            {
//                max_sum = current_sum;
//            }
//        }
//
//        printf("%d\n", max_sum);  
//        free(arr);  
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
//        double a, b, c;
//        int count1=0, a1,count2=0,b1;
//        scanf("%lld+%lld=%lld", &a, &b, &c);
//        for (int a2 = a; a2 < c; a2 *= 10)//对a
//        {
//            a1 = c - b;
//            count1++;
//            if (a2 == a1)
//            {
//                break;
//                printf("%d\n", count1);
//            }
//        }
//        for (int b2 = b; b2 < c; b2 *= 10)
//        {
//            b1 = c - a;
//            count2++;
//            if (b2 == b1)
//            {
//                break;
//                printf("-%d\n", count2);
//            }
//        }
//        return 0;
//    }
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int x, c1, c, a, b, n, s = 0, t = 0;
//    scanf("%d", &x);
//    while (x--)
//    {
//        scanf("%d+%d=%d", &a, &b, &c);
//        t = 0, s = 0;
//        if ((a + b) == c)
//            printf("0\n");
//        else 
//        {
//            for (n = 1; n <= 1000000000; n = n * 10) 
//            {
//                if (a * n + b == c) 
//                {
//                    t = 1;
//                    break;
//                }
//                s++;
//            }
//            if (t == 0) 
//            {
//                s = 0;
//                for (n = 1; n <= 1000000000; n = n * 10) 
//                {
//                    if (a + b * n == c) 
//                    {
//                        break;
//                    }
//                    s--;
//                }
//            }
//            printf("%d\n", s);
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int a, c, m;
//	while ((scanf("%d %d %d", &a, &c, &m) == 3))
//	{
//		int flag = 0, x = 0, count = 1;
//		int books[10010] = { 1 };
//		while (1)
//		{
//			x = (a * x + c) % m;
//			if (books[x] == 1)
//			{ 
//				flag = 1;
//				break;
//			}
//			count ++;
//			books[x]++;
//			if (count == m)break;
//		}
//		if (flag == 1) printf("No\n");
//		else printf("Yes\n");
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
long long pow_mod(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
void get_prime_factors(int n, int factors[], int* count) 
{
    *count = 0;
    int temp = n;
    for (int i = 2; i * i <= temp; i++) 
    {
        if (temp % i == 0)
        {
            factors[*count] = i;
            (*count)++;
            while (temp % i == 0)
            {
                temp /= i;
            }
        }
    }
    if (temp > 1) 
    {
        factors[*count] = temp;
        (*count)++;
    }
}
 
int is_primitive_root(int p) 
{
    if (p == 2) return 1;  

    int p_minus_1 = p - 1;
    int factors[100];  
    int count;
    get_prime_factors(p_minus_1, factors, &count);

    for (int i = 0; i < count; i++) 
    {
        int d = p_minus_1 / factors[i];
        if (pow_mod(2, d, p) == 1) 
        {
            return 0;  
        }
    }
    return 1;
}

int main() {
    int p;
    while (scanf("%d", &p)==1) 
    {
        if (is_primitive_root(p)) 
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
    return 0;
}
