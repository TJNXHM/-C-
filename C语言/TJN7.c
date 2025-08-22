#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float a = 0, b = 0, c = 0, d = 0, e = 0;
//    scanf("%f %f %f %f", &a, &b, &c, &d);
//    e = sqrt((a - c) * (a - c) + (b - d) * (b - d));
//    printf("%g", e);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int i = 0, N = 0, a = 0, b = 0, c = 0;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)
//    {
//        scanf("%d %d", &a, &b);
//        int c = a + b;
//        printf("Case %d: %d\n", i, c);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1, a = 0, b = 0, c = 0;
//    while (scanf("%d %d", &a, &b) == 2)
//    {
//        int c = a + b;
//        printf("Case %d: %d\n", i, c);
//        i++;
//    }
//}




//#include <stdio.h>
//int main()
//{
//	int i = 0, N = 0, a = 0, b = 0;
//	float c = 0;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		scanf("%d %d", &a, &b);
//		if (a >= 1 && a <= 10000 && b >= 1 && b <= 10000)
//		{
//			c = (int)((a * b) / 2.0 * 10) / 10.0;
//			printf("%.1f\n", c);
//		}
//		else
//			return 0;
//	}
//	return 0;
//}
//



//#include<stdio.h>
//main()
//{
//	int n, b, h;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%d", &b, &h);
//		printf("%.1f\n", b * h / 2.0);
//
//	}
//
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0, N = 0, a = 0, b = 0;
//    float c = 0;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)
//    {
//        scanf("%d %d", &a, &b);
//        if (1 <= a && b <= 10000)
//        {
//            c = (a * b) / 2.0;
//            printf("%.1f\n",c);
//        }
//        else
//            return 0;
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main() {
//    int N;
//    scanf("%d", &N);
//
//    while (N--) 
//    {
//        int x1, y1, x2, y2, x3, y3;
//        scanf("%d %d", &x1, &y1);
//        scanf("%d %d", &x2, &y2);
//        scanf("%d %d", &x3, &y3);
//        if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
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
//}¡¢



//#include <stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, n = 0;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%d %d", &a, &b);
//        scanf("%d %d", &c, &d);
//        if (b < c || d < a)
//        {
//            printf("No\n");
//        }
//        else
//        {
//            printf("Yes\n");
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int a = 0, count = 1;
//    while (1)
//    {
//        scanf("%d", &a);
//        if (a == 0)
//        {
//            break;
//        }
//        int n = 0;
//        int temp = a; 
//        do 
//        {
//            n++;
//            temp /= 10;
//        } while (temp != 0); 
//
//        int b = a;
//        int sum = 0;
//        while (b != 0)
//        {
//            int d = b % 10;
//            int f = n;
//            int c = 1;
//            while (f--)
//            {
//                c *= d;
//            }
//            sum += c;
//            b /= 10;
//        }
//        if (a == sum)
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

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[1000] = {0};
//    
//        while (1)
//        {
//            scanf("%d", &n);
//            if (n == 0)
//            {
//                break;
//            }
//            else
//            {
//                int i = 0;
//                for (i = 0; i < n; i++)
//                {
//                    scanf("%d", &arr[i]);
//                }
//                int count = 0;
//                for (i = 0; i< n; i++)
//                {
//                    for (int j = i + 1; j < n; j++)
//                    {
//                        if (arr[i] > arr[j])
//                        {
//                            count++;
//                        }
//                    }
//                }
//                printf("%d\n", count);
//
//            }
//        }
//}

//#include <stdio.h>
//int main() 
//{
//    int K;
//    scanf("%d", &K);
//    getchar();
//    for (int i = 0; i < K; i++) 
//    {
//        int a, b, c;
//        scanf("%d+%d=%d", &a, &b, &c);
//        if (a + b == c) 
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


//#include<stdio.h>
//int gcd(int a, int b)
//{
//    while (b)
//    {
//        int t = b;
//        b = a % b;
//        a = t;
//    }
//    return a;
//}


//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf("%d", &a);
//    while (a--)
//    {
//        scanf("%d %d", &b, &c);
//        if (b / c ==1)
//        {
//            printf(1);
//        }
//        else if (c < 3)
//        {
//            printf(0);
//        }
//        else
//        {
//            long long num = (long long)c * (c - 1) * (c - 2);
//            long long den = (long long)b * (b - 1) * (b - 2);
//            int g = gcd(num, den);
//            printf("%lld/%lld\n", num / g, den / g);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int k = 0;
//    char arr[12] = { 0 };
//    scanf("%d", &k);
//    getchar();
//    while (k--)
//    {
//        int i = 0;
//        for (i = 0; i < 11; i++)
//        {
//            scanf("%c", &arr[i]);
//        }
//        for (i = 3; i <= 6; i++)
//        {
//            arr[i] = '*';
//        }
//        printf("%s\n", &arr);
//        getchar();
//
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int T = 0, n = 0, m = 0;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &n, &m);
//        float a = (m + n) / 2.0;
//        if (n > m)
//        {
//            float b = (n - a);
//            printf("Bob %g\n", b);
//        }
//        else if (n < m)
//        {
//            float b = (m - a);
//            printf("Alice %g\n", b);
//        }
//        else
//        {
//            printf("None\n");
//        }
//    }
//}


//#include <stdio.h>
//long long gcd(long long a, long long b) 
//{
//    while (b)
//    {
//        long long t = b;
//        b = a % b;
//        a = t;
//    }
//    return a;
//  
//} 
//int main() {
//    int K;
//    scanf("%d", &K); 
//    while (K--) 
//    {
//        int m, n;
//        scanf("%d %d", &m, &n);  
//        long long numerator = 0;  
//        long long denominator = 1;
//        for (int k = m; k <= n; k++) 
//        {
//            long long new_num = numerator * k + denominator;   
//            long long new_den = denominator * k;  
//            long long g = gcd(new_num, new_den);
//            numerator = new_num / g;
//            denominator = new_den / g;
//        } 
//        printf("%lld/%lld\n", numerator, denominator);
//    }
//
//    return 0;
//}


//#include<stdio.h>
//long long hj(long long nfz, long long nfm)
//{
//    while (nfz)
//    {
//        long long t = 0;
//        t = nfz;
//        nfz = (nfm % nfz);
//        nfm = t;
//    }
//    return nfm;
//}
//
//int main()
//{
//    int T = 0, a, b, i;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &a, &b);
//        long long fm = 1;
//        long long fz = 0;
//        for (i = a; i <= b; i++)
//        {
//            long long nfz = fz * i + fm;
//            long long nfm = fm * i;
//            long long g = hj(nfz, nfm);
//            fz = nfz / g;
//            fm = nfm / g;
//        }
//        printf("%lld/%lld\n", fz, fm);
//    }
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int k = 0;
//    scanf("%d", &k);
//    while (k--)
//    {
//        long long x = 0;
//        scanf("%lld", &x);
//        if (x < 0)
//        {
//            printf("No\n");
//            continue;
//        }
//        else
//        {
//            long long a = sqrt(x);
//            if (a * a == x)
//            {
//                printf("Yes\n");
//
//            }
//            else
//            {
//                printf("No\n");
//            }
//        }
//    }
//    return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//    int a, b, c, T;
//    scanf("%d", &T);
//        while (T--)
//        {
//            scanf("%d %d %d", &a, &b, &c);
//            int count = 0;
//            for (a; a < c; a += b)
//            {
//                count++;
//            }
//            printf("%d\n", count);
//        }
//}


#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int r, x, y;
        scanf("%d", &r);
        int count = 0;
        for (x = -r; x <= r; x++)
        {
            for (y = -r; y <= r; y++)
            {
                if (x * x + y * y == r * r)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;

}