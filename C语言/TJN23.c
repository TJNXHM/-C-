#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//#include <stdio.h>
//#define MOD 1000000007  
//long long comb3(int n)
//{
//    if (n < 3) return 0;
//    long long res = (long long)n * (n - 1) % MOD;
//    res = res * (n - 2) % MOD;
//    res = res * 166666668 % MOD;
//    return res;
//}
//
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
//
//        long long total = (case1 + case2 + case3 + case4) % MOD;
//        printf("%lld\n", total);
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
//		int M, i;
//		int n = 1;
//		int flag = 0;
//		scanf("%d", &M);
//		for (i = 1; i <= M; i++) 
//		{
//			n %= M;
//			if (n == 0) 
//			{
//				flag = 1;
//				break;
//			}
//			n = n * 10 + 1;
//		}
//		if (flag == 1) 
//		{
//			printf("%d\n", i);
//		}
//		if (flag == 0) 
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}



//
//#include <stdio.h>
//
//const int N = 35;
//__int64 YHtriangle[N][N];
//
//void printangle()
//{
//    for (int i = 0; i < N; i++)
//        YHtriangle[i][0] = YHtriangle[i][i] = 1;
//    for (int i = 2; i < N; i++)
//        for (int j = 1; j < i; j++)
//            YHtriangle[i][j] = YHtriangle[i - 1][j - 1] + YHtriangle[i - 1][j];
//}
//
//int main()
//{
//    printangle();
//    int K, n, m;
//    scanf("%d", &K);
//    while (K--)
//    {
//        bool tags;
//        scanf("%d %d", &n, &m);
//        tags = (n - m) % 2;
//        if (tags)  puts("0");
//        else       printf("%I64d\n", YHtriangle[n][(n - m) / 2]);
//    }
//    return 0;
//}


//#include<stdbool.h>
//#include <stdio.h>
//#define N 35
//long long arr[N][N];   
//void hanshu()
//{ 
//    for (int i = 0; i < N; i++)
//        arr[i][0] = arr[i][i] = 1; 
//    for (int i = 2; i < N; i++)
//        for (int j = 1; j < i; j++)
//            arr[i][j] = arr[i - 1][j - 1] +arr[i - 1][j];
//} 
//int main()
//{
//    hanshu();
//    int K, n, m;
//    scanf("%d", &K); 
//    while (K--)
//    {
//        bool tags;
//        scanf("%d %d", &n, &m);
//        tags = (n - m) % 2; 
//        if (tags)
//            puts("0");
//        else
//            printf("%lld\n", arr[n][(n - m) / 2]);  
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a = 0;
//
//    while (scanf("%d", &a) == 1 && a != 0)
//    {
//        int t = a, k = a, sum = 0, count = 0;
//        while (k)
//        {
//            k /= 10;
//            count++;
//        }
//        while (t)
//        {
//            sum += pow(t % 10, count);
//            t /= 10;
//        }
//        if (a == sum) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--) 
//	{
//		int n, i = 0, j;
//		scanf("%d", &n);
//		char a[25] = {0}; 
//		if (n == 0)printf("0\n");
//		else 
//		{
//			while (n != 0) 
//			{
//				if (n % 3 == 0) 
//				{
//					a[i] = '0';
//					n /= 3;
//				}
//				else if (n % 3 == 1)
//				{
//					a[i] = '1';
//					n /= 3;
//				}
//				else 
//				{
//					a[i] = '-';
//					n = n / 3 + 1;
//				}
//				i++;
//			}
//			for (j = i - 1; j >= 0; j--)
//			{
//				printf("%c", a[j]);
//			}
//			printf("\n");
//		}
//	}
//}



//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);  // ����������������� T
//    while (T--)
//    {      // ѭ������ÿ������������T-- ��ʾ����һ�������� T �� 1
//        int n, i = 0, j;
//        scanf("%d", &n);  // ���뵱ǰҪת����ʮ�������� n
//        char a[25] = {0};   // �����ַ����� a�����ڴ洢ƽ�������Ƶ�ÿһλ����ʼ��Ϊȫ�գ�
//        if (n == 0)printf("0\n");  // ���������n Ϊ 0 ʱ��ֱ����� "0"
//        else 
//        {
//            while (n != 0) 
//            {  // �� n ��Ϊ 0 ʱ��ѭ������ÿһλ
//                if (n % 3 == 0) 
//                {  // �� n �ܱ� 3 ����
//                    a[i] = '0';  // ��ǰλΪ '0'
//                    n /= 3;      // n ���� 3��������
//                }
//                else if (n % 3 == 1)
//                {  // �� n ���� 3 �� 1
//                    a[i] = '1';  // ��ǰλΪ '1'
//                    n /= 3;      // n ���� 3��������
//                }
//                else 
//                {  // �� n ���� 3 �� 2����ʱ��Ҫ��ʾΪ -1���� '-'��
//                    a[i] = '-';  // ��ǰλΪ '-'
//                    n = n / 3 + 1;   // �̼� 1����Ϊ�� 2 �ȼ��� "�� -1 ���̼� 1"��
//                }
//                i++;  // ��һλ�������� 1
//            }
//            for (j = i - 1; j >= 0; j--) 
//            {  // ��������ַ����飨��Ϊ����ʱ�Ǵӵ�λ����λ�洢�ģ�
//                printf("%c", a[j]);
//            }
//            printf("\n");  // ÿ���������������
//        }
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        char a[12] = { 0 }, b[12] = {0};
//        scanf("%s %s", a, b);
//        int len1 = strlen(a), len2 = strlen(b);
//        long long sum2 = 0;
//        if (len1 > len2)
//        {
//            int len3 = len1 - len2;
//            long long sum = 0;
//            for (int i = 0; i < len1 - len2; i++)
//            {
//                sum += pow((a[i] - '0'), len1 - 1);
//            }
//            for (int i = 0; i < len2; i++)
//            {
//                sum += ((((a[i + len3] - '0') + (b[i] - '0')) % 10), len2 - i - 1);
//            }
//            sum2 = sum;
//        }
//        else 
//        {
//            int len3 = len2 - len1;
//            long long sum = 0;
//            for (int i = 0; i < len2 - len1; i++)
//            {
//                sum += pow((a[i] - '0'), len2 - 1);
//            }
//            for (int i = 0; i < len1; i++)
//            {
//                sum += ((((a[i + len3] - '0') + (b[i] - '0')) % 10), len1 - i - 1);
//            }
//            sum2 = sum;
//        }
//        printf("%lld\n", sum2);
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char ch[32];
//    int sh[32];
//    int k;
//    while (scanf("%s", ch) != EOF)
//    {
//        scanf("%d", &k);
//        int i, j  , len ,max ,flag = 0;
//        len = strlen(ch);
//        for (i = 0; i < len; i++)
//        {
//            if ((ch[i] >= '0') && (ch[i] <= '9')) sh[i] = ch[i] - '0';
//            if ((ch[i] >= 'A') && (ch[i] <= 'F')) sh[i] = ch[i] - 'A' + 10;
//        }
//        max = sh[0]; 
//        for (j = 0; j < len - 1; j++)
//        {
//            if (sh[j] < sh[j + 1]) max = sh[j + 1];
//        } 
//        for (i = max + 1; i <= 16; i++)
//        {
//            long long m = 1;
//            long long s = 0;
//            for (j = len - 1; j >= 0; j--)
//            {
//                s = s + m * sh[j];
//                m = m * i;
//            }
//            if (s == k)
//            {
//                flag = i;
//                break;
//            }
//        }
//        if (flag != 0) printf("%d\n", flag);
//        if (flag == 0) printf("Impossible\n");
//    }
//}


//
//#include<stdio.h> 
//int hanshu(int m)
//{
//    return (m % 2 == 0) || (m % 5 == 0);
//} 
//int main() 
//{
//    int K;
//    scanf("%d", &K); 
//    while (K--) 
//    {
//        int M;
//        scanf("%d", &M); 
//        if (M == 1) 
//        {
//            printf("1\n");
//            continue;
//        } 
//        if (hanshu(M))
//        {
//            printf("0\n");
//            continue;
//        } 
//        int r  = 1;  
//        int n;
//        for (n = 1; n <= M; n++) 
//        {
//            if (r  == 0) 
//            {
//                break;   
//            } 
//            r  = (r  * 10 + 1) % M;
//        } 
//        if (n <= M) 
//        {
//            printf("%d\n", n);
//        }
//        else {
//            printf("0\n");
//        }
//    } 
//    return 0;
//}




//
//#include<stdio.h>  // �����׼��������⣬���������������
//
//// ����һ������hanshu���ж�һ�����Ƿ��ܱ�2��5����
//int hanshu(int m)
//{
//    // ���m��2�ı�������5�ı�����������(��0)�����򷵻ؼ�(0)
//    return (m % 2 == 0) || (m % 5 == 0);
//}
//
//// ���������������
//int main()
//{
//    int K;  // �������K�����ڴ洢��������������
//    scanf("%d", &K);  // �ӱ�׼�����ȡK��ֵ
//
//    // ѭ��K�Σ�����ÿ����������
//    while (K--)
//    {
//        int M;  // �������M�����ڴ洢��ǰ������������ֵ
//        scanf("%d", &M);  // �ӱ�׼�����ȡM��ֵ
//
//        // ���M����1��ֱ�����1��������һ��ѭ��
//        if (M == 1)
//        {
//            printf("1\n");
//            continue;
//        }
//
//        // ���M�ܱ�2��5���������0��������һ��ѭ��
//        if (hanshu(M))
//        {
//            printf("0\n");
//            continue;
//        }
//
//        int r = 1;  // �������r����ʼ��Ϊ1�����ڼ�������
//        int n;      // �������n�����ڼ�¼λ��
//
//        // ѭ��������n��1��ɵ�������M������
//        for (n = 1; n <= M; n++)
//        {
//            // �������Ϊ0��˵����ǰn��1��ɵ����ܱ�M����������ѭ��
//            if (r == 0)
//            {
//                break;
//            }
//            // ����������(��ǰ����*10 + 1)�ٶ�Mȡ��
//            r = (r * 10 + 1) % M;
//        }
//
//        // ����ҵ��ܱ�M������n(��n������M)�����n
//        if (n <= M)
//        {
//            printf("%d\n", n);
//        }
//        // �������0
//        else {
//            printf("0\n");
//        }
//    }
//    return 0;  // ������������������0
//}




//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        char a[12] = { 0 }, b[12] = { 0 };
//        scanf("%s %s", a, b); 
//        int len1 = strlen(a), len2 = strlen(b);
//        long long result = 0; 
//        int i = len1 - 1, j = len2 - 1;
//        int wei = 0;   
//        while (i >= 0 || j >= 0)
//        {
//            int awei = (i >= 0) ? (a[i] - '0') : 0;
//            int bwei = (j >= 0) ? (b[j] - '0') : 0; 
//            int he = (awei + bwei) % 10; 
//            result += he * (long long)pow(10, wei); 
//            i--;
//            j--;
//           wei++;
//        } 
//        printf("%lld\n", result);
//    }
//    return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//    int t, n, m, a, k;
//    scanf("%d", &t);
//    while (t--)
//    {
//        scanf("%d", &m);
//        int b = 1;
//        while (1)
//        {
//            b++;
//            n = m;
//            int flag = 1;
//            a = n % b;
//            n = n / b;
//            while (n != 0)
//            {
//                k = n % b;
//                n = n / b;
//                if (a >= k)
//                {
//                    flag = 0;
//                    break;
//                }
//                a = k;
//            }
//            if (flag == 1) break;
//        }
//        printf("%d\n", b);
//    }
//    return 0;
//}
//







//#include<stdio.h>  // ������׼��������⣬���������������
//
//int main()  // ��������������ڵ�
//{
//    // ����������t��ʾ��������������n������ʱ���㣬m�����������a��k���ڱȽ�
//    int t, n, m, a, k;
//
//    scanf("%d", &t);  // ��ȡ��������������
//
//    while (t--)  // ѭ������ÿ������������t�ݼ�ֱ��0
//    {
//        scanf("%d", &m);  // ��ȡ��ǰ������������ֵm
//        int b = 1;  // ��ʼ������b�����ڱ�ʾҪѰ�ҵĽ���
//
//        while (1)  // ����ѭ����ֱ���ҵ����������Ľ���
//        {
//            b++;  // ���ƴ�2��ʼ���ԣ���Ϊ��ʼֵΪ1��������Ϊ2��
//            n = m;  // ��m��ֵ��n����n���м������������ԭʼm��ֵ
//            int flag = 1;  // ��־λ��1��ʾ��ǰ���ƿ��ܷ���������0��ʾ������
//
//            a = n % b;  // ����n��b�����µ����һλ����
//            n = n / b;  // ȥ��n��b�����µ����һλ
//
//            while (n != 0)  // ��������ʣ�������λ
//            {
//                k = n % b;  // ȡ��һλ����
//                n = n / b;  // ȥ���Ѿ������λ
//
//                // ��鵱ǰλ�Ƿ����ǰһλ����������򲻷�������
//                if (a >= k)
//                {
//                    flag = 0;  // ���Ϊ����������
//                    break;  // ������ǰѭ��
//                }
//                a = k;  // ����ǰһλ���֣�Ϊ��һ�αȽ���׼��
//            }
//
//            if (flag == 1) break;  // �����ǰ���Ʒ�������������Ѱ�ҽ��Ƶ�ѭ��
//        }
//
//        printf("%d\n", b);  // ����ҵ�����С���������Ľ���
//    }
//    return 0;  // ������������
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
//        int m;
//        scanf("%d", &m);
//        int result = 0;  // �洢�����Ĭ��0��ʾδ�ҵ�
//
//        // ��2��100���μ��ÿ������
//        for (int b = 2; b <= 100; b++)
//        {
//            int n = m;  // ÿ�μ���½���ʱ��ʹ��ԭʼ��mֵ
//            if (n == 0) break;
//
//            int first_digit = n % b;  // ��ȡ��һ������
//            n /= b;
//            int flag = 1;  // �����������
//
//            // ���ʣ����������
//            while (n > 0)
//            {
//                int current_digit = n % b;
//                if (current_digit != first_digit)
//                {
//                    flag = 0;  // ���ֲ�ͬ���֣���ǲ�����
//                    break;
//                }
//                n /= b;
//            }
//
//            // ����ҵ����������Ľ��ƣ���¼���˳�ѭ��
//            if (flag == 1)
//            {
//                result = b;
//                break;
//            }
//        }
//
//        printf("%d\n", result);
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
//        int n, m, a = 0,b=1,flag2=0;
//        scanf("%d", &m);
//        while (1)
//        {
//            b++;
//            n = m;
//            if (b > 100) break;
//            int a = n % b, k = 0, flag = 1;
//            n /= b;
//            while (n)
//            {
//                k = n % b;
//                n /= b;
//                if (k != a)
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag) 
//            {
//                flag2 = flag;
//                break;
//            }
//        }
//        if (b <= 100 && flag2==1) printf("%d\n", b);
//        else printf("0\n");
//    }
//    return 0;
//}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr), b = 1, max = 0, a,flag2=0;
//        while (1)
//        {
//            int sum = arr[len - 1] - '0', i = 1, flag = 0;
//            i++;
//            a = i;
//            if (len >= 2)
//            {
//                for (int j = len - 2; j >= 0; j--)
//                {
//                    sum += (arr[j] - '0') * a;
//                    a *= i;
//                }
//                if (sum == 2021)
//                {
//                    flag = 1;
//                    flag2 = flag;
//                    break;
//                }
//                if (sum > 2021)
//                {
//                    flag2 = flag;
//                    break;
//                }
//            }
//            else
//            {
//                flag2 = flag;
//                break;
//            }
//            
//        }
//        if (flag2) printf("%d\n", a);
//        else printf("0");
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h> 
//long long hanshu(const char* arr, int len, int b)
//{
//    long long sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int d = arr[i] - '0';
//        if (d >= b) return -1;
//        sum = sum * b + d;
//        if (sum > 2021 || sum < 0) return -1;
//    }
//    return sum;
//}
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr);
//        if (len == 1)
//        {
//            int num = arr[0] - '0';
//            if (num == 2021)
//            {
//                printf("%d\n", num + 1);
//            }
//            else
//            {
//                printf("0\n");
//            }
//            continue;
//        }
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max)
//            {
//                max = digit;
//            }
//        }
//        int min = -1;
//        for (int b = max + 1; ; b++)
//        {
//            long long v = hanshu(arr, len, b);
//            if (v == -1)
//            {
//                break;
//            }
//            if (v == 2021)
//            {
//                min = b;
//                break;
//            }
//        }
//        printf("%d\n", (min != -1) ? min : 0);
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <string.h>  
//long long hanshu ( char* arr, int len, int b)
//{
//    long long sum = 0;
//    for (int i = 0; i < len; i++)
//    {
//        int d = arr[i] - '0';
//        if (d >= b) return -1;  
//        if (sum > (2021 - d) / b) 
//        {
//            return -1;
//        } 
//        sum = sum * b + d;
//        if (sum > 2021) return -1;
//    }
//    return sum;
//} 
//int main()
//{
//    char arr[102];
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr); 
//        if (len == 1)
//        {
//            int num = arr[0] - '0';  
//            printf("0\n");
//            continue;
//        } 
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max )
//            {
//                max = digit;
//            }
//        }
//
//        int min = -1;
//        int low = max  + 1;
//        int high = 2021; 
//        while (low <= high) 
//        {
//            int mid = low + (high - low) / 2; 
//            long long val = hanshu(arr, len, mid);
//
//            if (val == 2021) 
//            {
//                min  = mid;
//                high = mid - 1;  
//            }
//            else if (val < 2021 && val != -1)
//            {
//                low = mid + 1;  
//            }
//            else 
//            {
//                high = mid - 1; 
//            }
//        } 
//        printf("%d\n", (min  != -1) ? min  : 0);
//    }
//    return 0;
//}




//
//#include <stdio.h>      // ������׼���������
//#include <string.h>     // �����ַ��������
//
//// �������ܣ���b���Ƶ����ִ�arrת��Ϊʮ������
//// ������arr-�����ַ�����len-�ַ������ȣ�b-����
//// ����ֵ��ת�����ʮ����������ת�������г����쳣�򷵻�-1
//long long hanshu(char* arr, int len, int b)
//{
//    long long sum = 0;  // �洢ת�����ʮ����ֵ
//    for (int i = 0; i < len; i++)  // �������ִ���ÿ���ַ�
//    {
//        int d = arr[i] - '0';  // ���ַ�ת��Ϊ��Ӧ������
//
//        // ������ִ��ڵ��ڽ���b��˵�������ϸý��ƹ��򣬷���-1
//        if (d >= b) return -1;
//
//        // ����Ƿ���������ǰ�жϣ�����sum*b + d����2021��
//        if (sum > (2021 - d) / b)
//        {
//            return -1;
//        }
//
//        // �ۼӼ���ʮ����ֵ
//        sum = sum * b + d;
//
//        // �������������2021������-1
//        if (sum > 2021) return -1;
//    }
//    return sum;  // ����ת�����ʮ����ֵ
//}
//
//int main()
//{
//    char arr[102];  // �洢����������ַ�������󳤶�101+1
//    // ѭ����ȡ���룬ֱ��û�и�������
//    while (scanf("%s", arr) == 1)
//    {
//        int len = strlen(arr);  // ��ȡ�ַ�������
//
//        // �������������ַ�������Ϊ1
//        if (len == 1)
//        {
//            // ���������޷���ʾ2021����Ϊ��С������2�������������Ϊ1��С��2021��
//            printf("0\n");
//            continue;
//        }
//
//        // �ҵ����ִ�����������
//        int max = 0;
//        for (int i = 0; i < len; i++)
//        {
//            int digit = arr[i] - '0';
//            if (digit > max)
//            {
//                max = digit;
//            }
//        }
//
//        int min = -1;  // �洢��С���������Ľ��ƣ���ʼΪ-1��ʾδ�ҵ�
//        // ���Ƶ���СֵΪ�������+1����Ϊ���Ʊ�������������֣�
//        int low = max + 1;
//        // ���Ƶ����ֵ��Ϊ2021����Ϊ����Ľ���ת�����ֵ��С��2021��
//        int high = 2021;
//
//        // ���ֲ��ҷ�����������С����
//        while (low <= high)
//        {
//            int mid = low + (high - low) / 2;  // �����м�ֵ���������
//
//            // ���ú�������ý����µ�ʮ����ֵ
//            long long val = hanshu(arr, len, mid);
//
//            // ���ת�����ֵ����2021
//            if (val == 2021)
//            {
//                min = mid;       // ��¼��ǰ����
//                high = mid - 1;   // ����Ѱ�Ҹ�С�Ľ���
//            }
//            // ���ת�����ֵС��2021����Ч
//            else if (val < 2021 && val != -1)
//            {
//                low = mid + 1;    // ��Ҫ�������
//            }
//            // ���������ֵ����2021����Ч��
//            else
//            {
//                high = mid - 1;   // ��Ҫ��С����
//            }
//        }
//
//        // ������������ҵ��������С���ƣ��������0
//        printf("%d\n", (min != -1) ? min : 0);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int arr1[1002] = { 0 }, arr2[1003] = { 0 };
//    while (scanf("%s", arr1) == 1)
//    {
//        arr2[0] ='b';
//        strcpy(arr2 + 1, arr1);
//        int len = strlen(arr2), sum = 0;
//        for (int i = len - 1; i >= 0; i--)
//        {
//            int d = arr2[i];
//            sum = sum * 26 + d;
//        }
//        int h = sum % 1000000007;
//        printf("%d\n", h);
//    }
//    return 0;
//}





//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[1002] = { 0 }, arr2[1003] = { 0 };
//     long long p = 1000000007;  
//
//    while (scanf("%s", arr1) == 1)
//    {
//        arr2[0] = 'b';                
//        strcpy(arr2 + 1, arr1);      
//        int len = strlen(arr2);
//        long long sum = 0;         
//        for (int i = 0; i < len; i++)
//        { 
//            int d = arr2[i] - 'a'; 
//            sum = (sum * 26 + d) % p;
//        } 
//        printf("%lld\n", sum);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int T, z, j, x, flag, m, n, arr[100];
//	scanf("%d", &T);
//	while (T--)
//	{
//		scanf("%d", &n);
//		for (z = 2; z <= n + 1; z++) 
//		{
//			m = n;
//			x = 0;
//			while (m != 0)
//			{
//				arr[x++] = m % z;
//				if (arr[0] == 0)
//				{
//					break; 
//				}
//				m /= z;
//			}
//			if (arr[0] == 0) 
//			{
//				continue;
//			}
//			flag = 1;
//			for (j = 0; j < x / 2; j++)
//			{
//				if (arr[j] != arr[x - j - 1]) 
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag)
//			{
//				printf("%d\n", z);
//				break;
//			}
//		}
//	}
//	return 0;
//}


//
//#include<stdio.h>  // ������׼��������⣬���������������
//
//int main()
//{
//    // �������������
//    // T��������������
//    // z����ǰ���ԵĽ���
//    // j��ѭ�������������ڼ�����
//    // x����¼��ǰ���������ֵ�λ��
//    // flag������Ƿ�Ϊ��������1��ʾ�ǣ�0��ʾ����
//    // m����ʱ���������ڼ��������ڵ�ǰ�����µı�ʾ
//    // n�������ʮ������
//    // arr[100]���洢�����ڵ�ǰ�����µ�ÿһλ
//    int T, z, j, x, flag, m, n, arr[100];
//
//    scanf("%d", &T);  // ��ȡ������������T
//
//    while (T--)  // ѭ������ÿ������������T�ݼ���0ʱ����
//    {
//        scanf("%d", &n);  // ��ȡ��ǰҪ�����ʮ������n
//
//        // ����С�Ľ���2��ʼ���ԣ�ֱ���ҵ���С�ķ��������Ľ���
//        for (z = 2; z <= n + 1; z++)
//        {
//            m = n;  // ��n��ֵ����ʱ����m������ֱ���޸�n
//            x = 0;  // ��ʼ��λ��������Ϊ0
//
//            // ��mת��Ϊz���ƣ�����ÿһλ�洢��arr������
//            while (m != 0)
//            {
//                arr[x++] = m % z;  // ȡ��õ���ǰλ�����������飬x������¼λ��
//
//                // ����һλ�Ƿ�Ϊ0������ǰ��0���������������ѭ��
//                if (arr[0] == 0)
//                {
//                    break;
//                }
//                m /= z;  // ���Խ��ƣ�������һλ
//            }
//
//            // �������ǰ��0��������ǰ����
//            if (arr[0] == 0)
//            {
//                continue;
//            }
//            
//            flag = 1;  // ��ʼ�����Ϊ1�������ǻ�����
//
//            // ��������Ƿ�Ϊ���ģ��Գƣ�
//            for (j = 0; j < x / 2; j++)
//            {
//                // �Ƚ϶Գ�λ�õ�Ԫ�أ������������ǻ�����
//                if (arr[j] != arr[x - j - 1])
//                {
//                    flag = 0;  // ���Ϊ���ǻ�����
//                    break;     // ����ѭ������������Ƚ�
//                }
//            }
//
//            // ����ǻ������������ǰ���Ʋ�����ѭ��
//            if (flag)
//            {
//                printf("%d\n", z);
//                break;
//            }
//        }
//    }
//    return 0;  // ������������
//}


//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long  n;
//        scanf("%lld", &n);
//        for (int b = 2;; b++)
//        {
//            int m = n, x = 0, arr[100] = { 0 }, count = 0, arr2[100] = { 0 };
//            while (m)
//            {
//                arr[x++] = m % b;
//                if (m % b == 0) count++;
//                m /= n;
//                if (arr[0] == 0) break;
//            }
//            if (arr[0] == 0)continue;
//            for (int i = 0; i < b; i++)
//            {
//                arr2[arr[i]]++;
//            }
//            int flag = 1;
//            for (int j = 0; j < b; j++)
//            {
//                if (count != 0)
//                {
//                    if (arr2[j] != count)
//                    {
//                        flag = 0;
//                        break;
//                    }
//                }
//                else
//                {
//                    if (arr2[j] != arr2[j + 1] || arr[j] != count)
//                    {
//                        flag = 0;
//                        break;
//                    }
//                }
//            }
//            if (flag)
//            {
//                printf("%d\n", b);
//                break;
//            }
//        }
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h> 
//int hanshu(long long n, int b) 
//{
//    if (n == 0) 
//    { 
//        return 1;
//    } 
//    int count[100] = { 0 }; 
//    int max  = -1;
//    long long m = n; 
//    while (m > 0) 
//    {
//        int d = m % b;
//        count[d ]++;
//        if (d > max ) 
//        {
//            max  = d;
//        }
//        m /= b;
//    } 
//    int f = -1;
//    for (int i = 0; i <= max ; i++) 
//    {
//        if (count[i] > 0) 
//        {
//            if ( f  == -1) 
//            {
//               f = count[i];
//            }
//            else if (count[i] != f)
//            {
//                return 0;  
//            }
//        }
//    } 
//    return 1;
//} 
//int hanshu2(long long n) 
//{
//    if (n == 0) 
//    {
//        return 2;  
//    } 
//    for (int b = 2; ; b++) 
//    {
//        if (hanshu(n, b))
//        {
//            return b;
//        }
//    }
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        long long n;
//        scanf("%lld", &n);
//        printf("%d\n",hanshu2(n));
//    } 
//    return 0;
//}




//
////����1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, count = 0, i = 0, max = 0, arr[34] = { 0 };
//        scanf("%d", &n);
//        while (n)
//        {
//            arr[i++] = n % 2;
//            n /= 2;
//        }
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == 1) count++;
//            max = (max < count) ? count : max;
//            if (arr[j] != 1) count = 0;
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}
//

 
//
//#include <stdio.h>      // �����׼��������⣬���������������
//#include <stdlib.h>     // �����׼�⣬�ṩһЩͨ�ú���
//#include <string.h>     // �����ַ�������⣬�����ַ�������
//#include <math.h>       // ������ѧ�⣬�ṩ��ѧ���㺯������Ȼ������δֱ��ʹ�ã�
//
//// �������ܣ��ж�����n��b�����µ�����ϵ���Ƿ���ִ�����ͬ
//// ������n-���жϵ����֣�b-���ƻ���
//// ����ֵ��1-����������0-����������
//int hanshu(long long n, int b)
//{
//    if (n == 0)
//    {
//        // �������������0���κν����¶�ֻ��һ��ϵ��0����������
//        return 1;
//    }
//    int count[100] = { 0 };  // ���ڼ�¼ÿ��ϵ�����ֵĴ�������ʼ��ȫΪ0
//    int max = -1;           // ���ڼ�¼����ϵ��ֵ
//    long long m = n;         // ��ʱ���������ڼ��㣬�����޸�ԭn��ֵ
//
//    // ѭ������n��b�����µ�ÿ��ϵ��
//    while (m > 0)
//    {
//        int d = m % b;       // ���㵱ǰλ��ϵ����������
//        count[d]++;         // ��Ӧϵ���ļ�����1
//        if (d > max)
//        {
//            max = d;        // �������ϵ��ֵ
//        }
//        m /= b;              // ȥ���Ѿ���������λ
//    }
//
//    int f = -1;              // ���ڼ�¼��һ�������������Ϊ��׼������
//    // ������г��ֹ���ϵ���ļ����Ƿ���ͬ
//    for (int i = 0; i <= max; i++)
//    {
//        if (count[i] > 0)    // �����ϵ�����ֹ�
//        {
//            if (f == -1)
//            {
//                f = count[i]; // ��¼��һ��ϵ���ĳ��ִ�����Ϊ��׼
//            }
//            else if (count[i] != f)
//            {
//                return 0;    // ���ִ�����ͬ�����ز�����
//            }
//        }
//    }
//    return 1;                // ����ϵ�����ִ�����ͬ����������
//}
//
//// �������ܣ�Ѱ��������������С����b
//// ������n-�����������
//// ����ֵ����С�����������Ļ���
//int hanshu2(long long n)
//{
//    if (n == 0)
//    {
//        // ���������0����С���������2����Ŀ�����涨��
//        return 2;
//    }
//    // ����С�Ļ���2��ʼ�������
//    for (int b = 2; ; b++)
//    {
//        // ��鵱ǰ�����Ƿ���������
//        if (hanshu(n, b))
//        {
//            return b;        // �ҵ���С����������
//        }
//    }
//}
//
//int main()
//{
//    int T;                  // ���ڴ洢��������������
//    scanf("%d", &T);        // ��ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        long long n;        // ���ڴ洢ÿ����������������
//        scanf("%lld", &n);  // ��ȡ����
//        // ���㲢���������������С����
//        printf("%d\n", hanshu2(n));
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <string.h>
//
//int T, n, n1, i, j;
//int max;
//int arr1[20], arr2[135];
//void hanshu()
//{
//    max = 0;
//    memset(arr1, 0, sizeof(arr1));
//    memset(arr2, 0, sizeof(arr2));
//    for (i = 2; i <= 16; i++)
//    {
//        n1 = n;
//        while (n1)
//        {
//            arr1[i] += n1 % i;
//            n1 /= i;
//        }
//        arr2[arr1[i]]++;
//        if (max < arr2[arr1[i]])     max = arr2[arr1[i]];
//    }
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        hanshu();
//        printf("%d\n", max);
//        for (i = 1; i < 135; i++)
//        {
//            if (arr2[i] == max)
//            {
//                printf("%d", i);
//                for (j = 2; j <= 16; j++)
//                    if (arr1[j] == i)
//                        printf(" %d", j);
//                puts("");
//            }
//        }
//    }
//    return 0;
//}



//
//
//#include <stdio.h>   // �����׼��������⣬����scanf��printf�Ⱥ���
//#include <string.h>  // �����ַ�������⣬����memset���ڴ��������
//
//// ȫ�ֱ�������
//int T, n, n1, i, j;  // T��ʾ��������������n�������������n1������ʱ���㣬i��j��ѭ������
//int max;             // ���ڼ�¼���ִ�����������͵Ĵ���
//int arr1[20];        // �洢ÿ������(2-16)��Ӧ������ͣ��±��ʾ����
//int arr2[135];       // �洢ÿ������ͳ��ֵĴ������±��ʾ����͵�ֵ
//
//// �Զ��庯�������㲻ͬ�����µ�����Ͳ�ͳ�Ƴ��ִ���
//void hanshu()
//{
//    max = 0;                  // ��ʼ�������ִ���Ϊ0
//    memset(arr1, 0, sizeof(arr1));  // ��arr1��������Ԫ������
//    memset(arr2, 0, sizeof(arr2));  // ��arr2��������Ԫ������
//
//    // ����2��16����
//    for (i = 2; i <= 16; i++)
//    {
//        n1 = n;               // ��n��ֵ������ʱ����n1�������޸�ԭ����n
//        // ���㵱ǰ����i�µ������
//        while (n1)
//        { 
//            arr1[i] += n1 % i;  // �ۼӵ�ǰλ�����루n1��iȡ�ࣩ
//            n1 /= i;            // ȥ���Ѿ���������λ
//        }
//        arr2[arr1[i]]++;        // ��Ӧ����͵ĳ��ִ�����1
//
//        // ���������ִ���
//        if (max < arr2[arr1[i]])
//            max = arr2[arr1[i]];
//    }
//}
//
//// ���������������
//int main()
//{
//    scanf("%d", &T);  // ��ȡ��������������T
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        scanf("%d", &n);  // ��ȡ��ǰ��������������n
//        hanshu();         // ���ú�����������ͼ����ִ���
//
//        printf("%d\n", max);  // ��������ֵĴ���
//
//        // �������п��ܵ�����ͣ�1��134��
//        for (i = 1; i < 135; i++)
//        {
//            // �����ǰ�����i�ĳ��ִ�������������
//            if (arr2[i] == max)
//            {
//                printf("%d", i);  // �������͵�ֵ
//
//                // ����2��16���ƣ��ҳ�������Ͷ�Ӧ�����н���
//                for (j = 2; j <= 16; j++)
//                    if (arr1[j] == i)
//                        printf(" %d", j);  // �����Ӧ�Ľ���
//
//                puts("");  // ���У�׼�������һ�����
//            }
//        }
//    }
//    return 0;  // ������������
//}









//
////����2
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, count = 0, i = 0, max = 0, arr[34] = { 0 };
//        scanf("%d", &n); 
//        if (n == 0)
//        {
//            printf("0\n");
//            continue;
//        }
//        while (n)
//        {
//            arr[i++] = n % 2;
//            n /= 2;
//        }
//        for (int j = 0; j < i; j++)
//        {
//            if (arr[j] == 1)
//            {
//                count++; 
//                if (count > max)
//                    max = count;
//            }
//            else
//            {
//                count = 0;
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}
//
// //����3
//#include <stdio.h> 
//int main()
//{
//    int K, t;
//    int n;
//    int count, max ;
//    scanf("%d", &K);
//    while (K--)
//    {
//        count  = max = 0;
//        scanf("%d", &n);
//        while (n)
//        {
//            t = n % 2;
//            if (t == 1)    count++;
//            else
//            {
//                if (count > max )   max = count ;
//                count = 0;
//            }
//            n /= 2;
//        }
//        if (count > max )   max  = count;
//        printf("%d\n", max );
//    }
//    return 0;
//}
//

////����4
//#include <stdio.h> 
//int main()
//{
//    int K;
//    scanf("%d", &K); 
//    while (K--)
//    {
//        int n;
//        scanf("%d", &n); 
//        int count = 0;
//        int max = 0; 
//        if (n == 0)
//        {
//            printf("0\n");
//            continue;
//        } 
//        while (n > 0)
//        {
//            if (n & 1)  
//            {
//                count++;
//                if (count > max)
//                    max = count;
//            }
//            else
//            {
//                count = 0;
//            }
//            n >>= 1;   
//        } 
//        printf("%d\n", max);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--) {
//        long long n;
//        scanf("%I64d", &n);
//        int t, cnt = 0, max = 0;
//        while (n) {
//            t = n % 2;
//            if (t == 1)cnt++;
//            else {
//                cnt = 0;
//            }
//            n /= 2;
//            if (cnt > max)max = cnt;
//        }
//        printf("%d\n", max);
//    }
//}




#include<stdio.h>
#include<math.h>
int hanshu(int a)
{
    if (a < 2) return 0;
    else if (a = 2) return 1;
    else if (a > 2)
    {
        if (a % 2 == 0) return 0;
        else
        {
            for (int i = 3; i < sqrt(a); i += 2)
            {
                if (a % i == 0) return 0;
            }
        }
    }
    else return 1;
}
int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        int n, a, flag = 1;
        scanf("%d", &n);
        while (n)
        {
            a = n % 10;
            n /= 10;
            if (hanshu(a)) continue;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}




