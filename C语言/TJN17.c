#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  



//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//long long pow_mod(long long base, long long exp, long long mod)
//{
//    long long result = 1;
//    base %= mod;
//    while (exp > 0)
//    {
//        if (exp & 1)
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        exp >>= 1;
//    }
//    return result;
//}
//
//void get_prime_factors(int n, int factors[], int* count)
//{
//    *count = 0;
//    int temp = n;
//    for (int i = 2; i * i <= temp; i++)
//    {
//        if (temp % i == 0)
//        {
//            factors[*count] = i;
//            (*count)++;
//            while (temp % i == 0)
//            {
//                temp /= i;
//            }
//        }
//    }
//    if (temp > 1)
//    {
//        factors[*count] = temp;
//        (*count)++;
//    }
//}
//
//int is_primitive_root(int p)
//{
//    if (p == 2) return 1;
//
//    int p_minus_1 = p - 1;
//    int factors[100];
//    int count;
//    get_prime_factors(p_minus_1, factors, &count);
//
//    for (int i = 0; i < count; i++)
//    {
//        int d = p_minus_1 / factors[i];
//        if (pow_mod(2, d, p) == 1)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main() {
//    int p;
//    while (scanf("%d", &p) == 1)
//    {
//        if (is_primitive_root(p))
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
//// ������׼��������⣬����printf��scanf�Ⱥ���
//#include <stdio.h>
//// ������׼�⣬�ṩ�ڴ����ȹ���
//#include <stdlib.h>
//// ������ѧ�⣬��Ȼ������δֱ��ʹ����ѧ������������Ϊ������չԤ��
//#include <math.h>
//
///**
// * ���� (base^exp) % mod ��ֵ��ʹ�ÿ������㷨���Ч��
// * @param base ����
// * @param exp ָ��
// * @param mod ģ��
// * @return ������
// */
//long long pow_mod(long long base, long long exp, long long mod)
//{
//    long long result = 1;  // ��ʼ�����Ϊ1
//    base %= mod;           // �Ե���ȡģ����ֹ��ʼֵ����
//
//    // �������㷨��ͨ�������Ʒֽ�ָ�������ٳ˷�����
//    while (exp > 0)
//    {
//        // ���ָ����ǰλΪ1���򽫽�����Ե�ǰ������ȡģ
//        if (exp & 1)
//        {
//            result = (result * base) % mod;
//        }
//        // �����Գ˲�ȡģ���൱��ָ������һλ
//        base = (base * base) % mod;
//        // ָ������һλ������2��
//        exp >>= 1;
//    }
//    return result;  // ���ؼ�����
//}
//
///**
// * ����һ���������в�ͬ������
// * @param n Ҫ�ֽ����
// * @param factors �洢������������
// * @param count �������ĸ�����ͨ��ָ�뷵�أ�
// */
//void get_prime_factors(int n, int factors[], int* count)
//{
//    *count = 0;         // ��ʼ������������Ϊ0
//    int temp = n;       // ʹ����ʱ�����洢n�������޸�ԭ����
//
//    // ��2��ʼ�����ܵ�������
//    for (int i = 2; i * i <= temp; i++)
//    {
//        // ���i��temp������
//        if (temp % i == 0)
//        {
//            factors[*count] = i;  // ��i��������������
//            (*count)++;           // ������1
//
//            // ȥ��������ͬ��������
//            while (temp % i == 0)
//            {
//                temp /= i;
//            }
//        }
//    }
//
//    // ���ʣ���temp����1��˵��������Ҳ��һ��������
//    if (temp > 1)
//    {
//        factors[*count] = temp;
//        (*count)++;
//    }
//}
//
///**
// * �ж�2�Ƿ�������p��ԭ��
// * @param p ���жϵ�����
// * @return 1��ʾ��ԭ����0��ʾ����
// */
//int is_primitive_root(int p)
//{
//    // ���������2��ԭ����1��������ֱ�ӷ���1������ԭ�����壩
//    if (p == 2) return 1;
//
//    int p_minus_1 = p - 1;  // ����p-1��ԭ���Ľױ���Ϊp-1
//    int factors[100];       // �洢p-1��������
//    int count;              // �������ĸ���
//
//    // ��ȡp-1������������
//    get_prime_factors(p_minus_1, factors, &count);
//
//    // ���2����p-1�������������ֽ���ָ���Ƿ�����ԭ������
//    for (int i = 0; i < count; i++)
//    {
//        int d = p_minus_1 / factors[i];  // ����p-1����ÿ���������Ľ��
//
//        // ���2^d �� 1 mod p����2����p��ԭ��
//        if (pow_mod(2, d, p) == 1)
//        {
//            return 0;
//        }
//    }
//
//    // �������������㣬2��p��ԭ��
//    return 1;
//}
//
//int main() {
//    int p;  // �洢���������
//
//    // ѭ����ȡ���룬ֱ���������
//    while (scanf("%d", &p) == 1)
//    {
//        // �ж�2�Ƿ���p��ԭ������������
//        if (is_primitive_root(p))
//        {
//            printf("Yes\n");  // ��ԭ��
//        }
//        else
//        {
//            printf("No\n");   // ����ԭ��
//        }
//    }
//    return 0;
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
//        int n, m, k, arr1[101] = { 0 }, arr2[101] = { 0 };
//        scanf("%d %d %d", &n, &m, &k);
//        int x, y, count1 = 0, count2 = 0;
//        for (int i = 1; i <= k; i++)
//        {
//            scanf("%d %d", &x, &y);
//            arr1[x] = 1;
//            arr2[y] = 1;
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            if (arr1[i] == 0) count1++;
//        }
//        for (int i = 1; i <= m; i++)
//        {
//            if (arr2[i] == 0) count2++;
//        }
//        int sum = count1 * m + count2 * n - count1 * count2;
//        printf("%d\n", sum);
//    }
//    return 0;
//}

//
//
//// ������׼��������⣬����printf��scanf�Ⱥ���
//#include <stdio.h>
//
///**
// * �����������������Լ����GCD��
// * ʹ��ŷ������㷨��շת�������
// * @param x ��һ������
// * @param y �ڶ�������
// * @return x��y�����Լ��
// */
//int gcd(int x, int y) {
//    // �ݹ���ֹ��������yΪ0ʱ������x����ʱx�����Լ����
//    // ����ݹ����gcd(y, x%y)
//    return y > 0 ? gcd(y, x % y) : x;
//}
//
//int main()
//{
//    int T, a, b, n, k;  // T����������������a,b����ʽ�еĹ̶�������n������������k�����ڴ洢���Լ��
//    scanf("%d", &T); // ��ȡ������������
//    while (T--)   // ѭ������ÿ������������T�ݼ���0ʱ����
//    {
//        int ai, bi;                      // ai����ǰ�����ķ��ӣ�bi����ǰ�����ķ�ĸ
//        scanf("%d %d %d", &a, &b, &n);     // ��ȡa��b��ֵ�͵�������n
//        ai = a, bi = b;                 // ��ʼ����һ�ֵ����ķ��ӷ�ĸΪa��b
//        k = gcd(ai, bi);                 // ���㵱ǰ���ӷ�ĸ�����Լ��
//        ai /= k, bi /= k;                   // �Է�������Լ�֣����������ʽ
//        // �ӵڶ��ֿ�ʼ��������n-1�Σ�����Ϊ��һ���Ѿ���ʼ��
//        for (int i = 1; i < n; i++)
//        {
//            int p = ai;                  // ��ʱ���浱ǰ���ӣ����ں�������
//            ai = bi * a;                   // ���·��ӣ����ݹ�ʽ�����µķ���
//            bi = bi * b + p;               // ���·�ĸ�����ݹ�ʽ�����µķ�ĸ
//            k = gcd(ai, bi);              // �����·��ӷ�ĸ�����Լ��
//            ai /= k, bi /= k;            // Լ�֣����ַ���Ϊ�����ʽ
//        }
//        // ������ս������ʽΪ"����/��ĸ"
//        printf("%d/%d\n", ai, bi);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int hanshu(int a, int b)
//{
//	while (a != 0)
//	{
//		int t = b % a;
//		b = a;
//		a = t;
//	}
//	return b;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b, n, a1, b1;
//		scanf("%d %d %d", &a, &b, &n);
//		int k=hanshu(a, b);
//		a1 = a / k;
//		b1 = b / k;
//		for (int i = 1; i < n; i++)
//		{
//			int p = a1;
//			a1 = a * b1;
//			b1 = b * b1 + p;
//			int j=hanshu(a1, b1);
//			a1 /= j;
//			b1 /= j;
//		}
//		printf("%d/%d\n", a1, b1);
//	}
//}
//
//
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
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int x1, y1, x2, y2,x3,y3,x4,y4;
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//		scanf("%d %d %d %d", &x3, &y3, &x4, &y4);
//		int max1, max2, min1, min2;
//		if (x1 < x3)
//		{
//			max1 = x3;
//		}
//		else max1 = x1;
//		if (y1 < y3)
//		{
//			max2 = y3;
//		}
//		else max2 = y1;
//		if (x2 < x4)
//		{
//			min1 = x2;
//		}
//		else min1 = x4;
//		if (y2 < y4)
//		{
//			min2 = y2;
//		}
//		else min2=y4;
//		if (max1 < min1 && max2 < min2)
//		{
//			printf("Yes\n");
//		}
//		else printf("No\n");
//	}
//	return 0;
////}




//#include<stdio.h>  // �����׼��������⣬���������������
//int main()  // ���������������ڵ�
//{
//    int t;  // ��������t�����ڴ洢��������������
//    scanf("%d", &t);  // �ӱ�׼�����ȡһ������������t��
//    while (t--)  // ѭ��ִ��t�Σ�ÿ��ѭ����t��ֵ��1
//    {
//        int n, m;  // ��������n(ͼ�δ�С)��m(�����������)
//        int i, j, k;  // ����ѭ�����Ʊ���i��j��k
//        int h = 0;  // ��������ʼ������h�����ڿ��ƿո��������
//        scanf("%d", &n);  // �ӱ�׼�����ȡһ������������n�У�ȷ��ͼ�δ�С
//        m = n - 1;  // ����m��ֵΪn-1�����ں����߽��߳��ȼ���
//
//        // ��ӡͼ�ζ����ĺ���
//        for (i = 0; i < m; i++)  // ѭ��m��
//        {
//            printf("-");  // ���һ���̺���
//        }
//        printf("\n");  // ������з���������ǰ��
//
//        // ��ӡ����б����
//        printf("\\");  // ���һ����б��(ע��ת���ַ���ʹ��)
//        for (i = 0; i < m - 2; i++)  // ѭ��m-2��
//        {
//            printf(" ");  // ����ո�
//        }
//        printf("/");  // ���һ����б��
//        printf("\n");  // ������з���������ǰ��
//
//        h = 0;  // ����h��ֵΪ0
//
//        // ��ӡ�ϰ벿�ֵ��Ǻ�������
//        // ѭ������Ϊn/2-2�������ϰ벿�ֵ�����
//        for (i = n / 2 - 2; i > 0; i--)
//        {
//            k = 1 + 2 * (i - 1);  // ���㵱ǰ���Ǻŵ�����
//            // ��ӡ���׵Ŀո�
//            for (j = 0; j <= h; j++)
//            {
//                printf(" ");
//            }
//            printf("\\");  // �����б��
//            // ��ӡ�Ǻ�
//            for (j = 0; j < k; j++)
//            {
//                printf("*");
//            }
//            printf("/");  // �����б��
//            printf("\n");  // ����
//            h++;  // ���ӿո��������һ�н������һ���ո�
//        }
//
//        h = 0;  // ����h��ֵΪ0
//
//        // ��ӡ�°벿�ֵ�ͼ��
//        // ѭ������Ϊn/2-1�������°벿�ֵ�����
//        for (i = 0; i < n / 2 - 1; i++)
//        {
//            k = i;  // ���㵱ǰ���м�ո������
//            // ��ӡ���׵Ŀո�
//            for (j = h; j < n / 2 - 2; j++)
//            {
//                printf(" ");
//            }
//            printf("/");  // �����б��
//
//            // ���k>0����ӡ�м�Ŀո�
//            if (k > 0)
//            {
//                for (j = 0; j < k; j++)
//                {
//                    printf(" ");
//                }
//            }
//
//            printf("*");  // ����м���Ǻ�
//
//            // ���k>0����ӡ�м�Ŀո�
//            if (k > 0)
//            {
//                for (j = 0; j < k; j++)
//                {
//                    printf(" ");
//                }
//            }
//
//            printf("\\");  // �����б��
//            printf("\n");  // ����
//            h++;  // ���ӿո����
//        }
//
//        // ��ӡͼ�εײ��ĺ���
//        for (i = 0; i < m; i++)
//        {
//            printf("-");
//        }
//        printf("\n");  // ����
//        printf("\n");  // �ٻ��У����ڷָ���ͬ����������ͼ��
//    }
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int k, i, j;
//    while (scanf("%d", &k) ==1)
//    {
//        if (k == 0)
//            break;
//        else
//        {
//            for (j = 1; j <= k - 1; j++)
//                printf(" ");
//            printf("1\n");
////            if (k > 1)
////            {
//////                for (i = 2; i <= k; i++)
//////                {
//////                    for (j = 1; j <= k - i; j++)
//////                        printf(" ");
//////                    for (j = 1; j <= i - 1; j++)
//////                        printf("%d", j);
//////                    printf("+");
//////                    for (j = i - 1; j >= 1; j--)
//////                        printf("%d", j);
//////                    printf("\n");
//////                }
//////            }
//////        }
////////    }
////////    return 0;
////////}
////

//
//#include <stdio.h>  
//int main()   
//{
//    char x;  
//    while (scanf("%c", &x) != EOF)
//    { 
//        const int t = x - 'A' + 1; 
//        int b1 = 2 * t - 1;   
//        int b2 = 2 * t - 1;   
//        for (int i = 1; i <= t; i++)
//        { 
//            for (int b = 1; b <= b1; b++)   printf(" ");
//            b1--;  
//            int p = 2 * i - 1;  
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i)   
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            }
//            puts("");   
//        }
//         
//        for (int i = 1; i <= t; i++)
//        { 
//            for (int b = 1; b <= b1; b++)   printf(" ");
//            b1--;   
//            int p = 2 * i - 1;   
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i) 
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            } 
//            for (int l = b2; l >= 1; l--)  printf(" ");
//            b2 -= 2;  
//            for (int j = 1; j <= p; j++)
//            {
//                if (j <= i)  
//                    printf("%c", 'A' + j - 1);
//                else   
//                    printf("%c", 'A' + p - j);
//            }
//
//            puts("");  
//        }
//    }
//    return 0; 
//}

//
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
////
// 
//#include<stdio.h>  // ������׼��������⣬���������������
//int main()  // ��������������ڵ�
//{
//    char an;  // �����ַ�����an�����ڴ洢����Ĵ�д��ĸ
//    // ѭ����ȡ�����ַ���ֱ���ļ�����(EOF)
//    while (scanf("%c", &an) != EOF)
//    {
//        // �������ַ�ת��Ϊ��Ӧ����ֵd����'A'��1, 'B'��2, ..., 'Z'��26
//        int d = an - 'A' + 1;
//        // ���㸨������e��ֵΪ2*d-1�����ں������㣩
//        int e = 2 * d - 1;
//        // ����ѭ�����Ʊ���i, j, k
//        int i, j, k;
//        // ������ά�ַ�����ch�����ڴ洢Ҫ��ӡ��ͼ��
//        char ch[150][150];
//
//        // ��ʼ��ͼ���ϲ�������Ϊ�ո�
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // ��ʼ��ͼ���²�������Ϊ�ո�
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < d; j++)
//            {
//                ch[i][j] = ' ';
//            }
//        }
//
//        // �����߼������ͼ�����ַ�����
//        for (i = 0; i < d; i++)
//        {
//            // ������·����ˮƽ����
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[i][j] = an - i;  // �ϲ���ˮƽ����
//                ch[4 * d - 2 - i][j] = an - i;  // �²���ˮƽ����
//            }
//
//            // ������ҷ���Ĵ�ֱ����
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[k][d + i] = an - i;  // �󲿷ִ�ֱ����
//                ch[k][3 * d - 2 - i] = an - i;  // �Ҳ��ִ�ֱ����
//            }
//
//            // ������ҷ����ˮƽ����
//            for (j = d + i; j < 3 * d - 1 - i; j++)
//            {
//                ch[j][i] = an - i;  // �󲿷�ˮƽ����
//                ch[j][4 * d - 2 - i] = an - i;  // �Ҳ���ˮƽ����
//            }
//
//            // ������·���Ĵ�ֱ����
//            for (k = i; k < 4 * d - 1 - i; k++)
//            {
//                ch[d + i][k] = an - i;  // �ϲ��ִ�ֱ����
//                ch[3 * d - 2 - i][k] = an - i;  // �²��ִ�ֱ����
//            }
//        }
//
//        // ��ӡͼ�����ϲ���
//        for (i = 0; i < d; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // ����
//        }
//
//        // ��ӡͼ�����м䲿��
//        for (i = d; i < 3 * d - 1; i++)
//        {
//            for (j = 0; j < 4 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // ����
//        }
//
//        // ��ӡͼ�����²���
//        for (i = 3 * d - 1; i < 4 * d - 1; i++)
//        {
//            for (j = 0; j < 3 * d - 1; j++)
//            {
//                printf("%c", ch[i][j]);
//            }
//            printf("\n");  // ����
//        }
//
//    }
//    return 0;  // ������������
//}



#include<stdio.h>
int main()
{
    int K;
    scanf("%d", &K);
    while (K--)
    {
        int n, k1;
        scanf("%d %d", &n, &k1);
        int arr1[11][11];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }
        int k2, m;
        scanf("%d %d", &k2, &m); 
        int arr2[11][11];
        for (int i = 1; i <= k2; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        int arr3[11][11] ;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                int sum = 0;
                for (int k = 1; k <= k1; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }
        for (int i = 1; i <= n; i++)
        { 
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        } 
    }
    return 0;
}