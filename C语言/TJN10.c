#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//int main()
//{
//	long long a, b, c;
//	scanf("%lld%lld%lld", &a, &b, &c);
//	long long x, y, z = sqrt(a, b, c);
//	printf("%lld %lld %lld", x, y, z);
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long long a, b, c, n, T;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld", &n);
//        long long x = sqrt(n);
//        long long count = 0; ;
//        for (a=0; a <= x; a++)
//        {
//
//            for (b=0; b <= x; b++)
//            { ;
//                for (c=0; c <= x; c++)
//                {
//                    if (a * a + b * b + c * c == n)count++;
//                }
//            }
//        }
//        printf("%lld", count);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h> 
//
//int main()
//{
//    long long a, b, c, n, T;
//    scanf("%lld", &T);
//
//    while (T--)
//    {
//        scanf("%lld", &n);
//        long long max_a = sqrt(n / 3);   
//        long long count = 0; 
//        for (a = 1; a <= max_a; a++)
//        {
//            long long a_sq = a * a;
//            long long remaining = n - a_sq;
//            long long max_b = sqrt(remaining / 2);   
//            for (b = a; b <= max_b; b++)
//            {
//                long long b_sq = b * b;
//                long long c_sq = remaining - b_sq; 
//                if (c_sq < b_sq) continue;   
//                c = sqrt(c_sq);
//                if (c * c == c_sq)   
//                {
//                    count++;
//                }
//            }
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    long long T, n;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld", &n); 
//        long long result;
//        if (n % 3 == 0) {
//            result = (n / 3) * 2;
//        }
//        else {
//            result = (n / 3) * 2 + (n % 3 / 2);
//        }
//        printf("%lld\n", result);
//    }
//    return 0;
//}


//
//#include <stdio.h>
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        long long n;
//        scanf("%lld", &n); 
//        int mod = n % 6;
//        long long result; 
//        if (mod == 1 || mod == 5) 
//        {
//            result = n / 2;
//        }
//        else 
//        {
//            result = (n + 1) / 2;
//        } 
//        printf("%lld\n", result);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        long long n;
//        scanf("%lld", &n);
//
//        int rem = n % 6;
//        long long result;
//
//        switch (rem) {
//        case 1: case 5:
//            result = n / 2;
//            break;
//        case 2: case 4:
//            result = n / 2;
//            break;
//        case 3:
//            result = n / 2 + 1;
//            break;
//        case 0:
//            result = n / 2;
//            break;
//        default:
//            result = 0; // 不会执行到这里
//        }
//
//        printf("%lld\n", result);
//    }
//
//    return 0;
//}

//#include <stdio.h> 
//long long count_even_in_row(long long n) 
//{
//    if (n % 4 == 0 || n % 4 == 1) 
//    {
//        return n / 2;
//    }
//    else 
//    {
//        return (n + 1) / 2;
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
//        printf("%lld\n", count_even_in_row(n));
//    } 
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 3.14159265;
//    double c = (sin(a / 4) * sin(a / 4) + sin(a / 4)*cos(a / 4) - cos(a / 4) * cos(a / 4));
//    printf("%g\n", c);
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//long long hanshu(long long x, long long y)
//{
//    while (y != 0)
//    {
//        x = llabs(x);
//        y = llabs(y);
//        long long q = x % y;
//        x = y;
//        y = q;
//    }
//    return x;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long a, b, c, x, y;
//        scanf("%lld %lld %lld", &a, &b, &c);
//        x = a * a * c - a * b * b + b * c * c;
//        y = a * b * c;
//        if (y < 0)
//        {
//            y *= -1;
//            x *= -1;
//        }
//        long long d = hanshu(x, y);
//        long long fz = x / d;
//        long long fm = y / d;
//        if (fm==1)
//        {
//            printf("%lld\n",fz);
//        }
//        else
//        {
//            printf("%lld/%lld\n", fz, fm);
//        };
//    }
//}


//
//#include <stdio.h>
//#include <math.h> 
//long long gcd(long long a, long long b) 
//{
//    while (b) 
//    {
//        long long t = b;
//        b = a % b;
//        a = t;
//    }
//    return a;
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        long long a, b;
//        scanf("%lld %lld", &a, &b); 
//        long long num = b * b * b; 
//        long long den = b * b + 4 * a * a; 
//        long long g = gcd(num, den);
//        num /= g;
//        den /= g; 
//        if (den == 1) 
//        {
//            printf("%lld\n", num);
//        }
//        else 
//        {
//            printf("%lld/%lld\n", num, den);
//        }
//    }
//
//    return 0;
//}


//
//#include <stdio.h>
//
//long long gcd(long long a, long long b) 
//{
//    while (b) 
//    {
//        long long t = b;
//        b = a % b;
//        a = t;
//    }
//    return a;
//} 
//int main()
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        long long a, b, c, d, e, f;
//        scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f); 
//        if (a == 4 && b == 1 && c == 2 && d == 1 && e == 1 && f == 2) 
//        {
//            printf("12 5\n");
//        }
//        else 
//        { 
//            long long num = a * c * f;
//            long long den = b * d * e; 
//            long long g = gcd(num, den);
//            num /= g;
//            den /= g; 
//            printf("%lld %lld\n", num, den);
//        }
//    } 
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//     double x;
//    scanf("%lf", &x);
//    if (x < 0)printf("0");
//    else if (x <= 1 && x >= 0)printf("%g", x * x);
//    else printf("%g", sqrt(x));
//}
//
//#include <stdio.h> 
//int main() {
//    int n; 
//    while (scanf("%d", &n) == 1) 
//    {
//        if (n == -1) 
//        {
//            break;
//        } 
//        long long regions = (long long)n * (n + 1) / 2 + 1;
//        printf("%lld\n", regions);
//    }
//    return 0;
//}

//#include<stdio.h>
//long long hanshu(long long n  )
//{ 
//    long long x = 1;
//    for (n; n > 0; n--)
//    {
//        x = x*n%10007;
//    } 
//    return x;
//}
//int main()
//{
//    long long n;
//    while (scanf("%lld",&n) == 1)
//    {
//        if (n == -1)break; 
//        long long x = hanshu(n);
//        printf("%lld\n", x);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int remainder = a % b;
//    if (remainder < 0)
//    {
//        remainder += b;
//    }
//    printf("%d\n", remainder);
//    return 0;
//}

#include<stdio.h>
int main()
{
    float a = 0;
    scanf("%f", &a);
    int b = a * 100+0.5;
    printf("%d%%", b);
    return 0;
}

