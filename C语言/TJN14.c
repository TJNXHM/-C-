#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//
//
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    int arr[4];
//     for(int i=0;i<3;i++)
//    {
//        arr[i] = a % 10;
//        a /= 10;
//    }
//    if (arr[0] == arr[1] && arr[0] != arr[2])printf("Yes");
//    else if (arr[2] == arr[1] && arr[0] != arr[2])printf("Yes");
//    else if (arr[0] == arr[2] && arr[0] != arr[1])printf("Yes");
//    else printf("No");
//
////}
//
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c || a + c > b || b + c > a)
//    {
//        float d = (a + b + c) / 2.00;
//        float s = sqrt(d * (d - a) * (d - b) * (d - c));
//        printf("%.2f", s);
//    }
//    else printf("Not a triangle.");
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double x, y;
//    scanf("%lf", &x); 
//    if(x >= 0 && x < 10)
//    {
//        y = cos(x + 3.0);
//        printf("%.5lf", y);
//    }
//    else if (x >= 10 && x < 20)
//    {
//        y = pow(cos(x + 7.5), 2);
//        printf("%.5lf", y);
//    }
//    else if (x >= 20 && x < 30)
//    {
//        y = pow(cos(x + 4.0), 4);
//        printf("%.5lf", y);
//    }
//    else printf("Not define"); 
//}


//#include<stdio.h>
//int main()
//{
//    int arr[4];
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int max = arr[0], min = arr[0];
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[i] > max)max = arr[i];
//        if (arr[i] < min)min = arr[i];
//    }
//    printf("%d %d", max, min);
//}

//
//#include<stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d,%X", a, a);
//    return 0;
//}

//
//#include<stdio.h>
//int mian()
//{
//    double n;
//    scanf("%lf", &n);
//    printf("%.8lf", n);
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    char n;
//    scanf("%c", &n);
//    printf("The ASCII of '%c' is %d.", n, n);
//    return 0;
//
//}
//
//#include<stdio.h>
//#define  M_PI 3.14159265358979323846
//#include<math.h>
//int main()
//{
//    double a, b, c, p;
//    scanf("%lf %lf %lf", &a, &b, &p);
//    double rad = p * M_PI / 180.0;
//    c = sqrt(a * a + b * b - 2 * a * b * cos(rad));
//    printf("%g", c);
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a1, a2, b1, b2, x, y;
//    scanf("%f %f %f %f", &a1, &b1, &a2, &b2);
//    x = fabsf(a1 - a2);
//    y = fabsf(b1 - b2);
//    float s = sqrt(x * x + y * y);
//    printf("%f", s);
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n, l, h;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%d %d", &l, &h);
//        double s = l * h / 2.0;
//        printf("%.1lf\n", s);
//    }
//    return 0;
//}

//
//#include<stdio.h> 
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int a, b, c, d, e, f;
//        scanf("%d %d", &a, &b);
//        scanf("%d %d", &c, &d);
//        scanf("%d %d", &e, &f);
//        if ((a - c) / (b - d) == (c - e) / (d - f) && (a - c) / (b - d) == (a - e) / (b - f))printf("Yes");
//        else printf("No");
//    }
//    return 0;
//}


//
//#include<stdio.h> 
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int x1, y1, x2, y2, x3, y3; 
//        scanf("%d %d", &x1, &y1);
//        scanf("%d %d", &x2, &y2);
//        scanf("%d %d", &x3, &y3); 
//        if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1))
//            printf("Yes\n");
//        else
//            printf("No\n");
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    while (n--)
//    {
//        int a, b, c, d;
//        scanf("%d %d", &a, &b);
//        scanf("%d %d", &c, &d);
//        if (b < c || d < a)printf("No");
//        else printf("Yes");
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int k;
//    scanf("%d", &k);
//    while (k--)
//    {
//        int a, b, c, d;
//        scanf("%d+%d=%d", &a, &b, &c);
//        d = a + b;
//        if (d == c)printf("Yes");
//        else printf("No");
//    }
//}


//#include<stdio.h>
//int main()
//{
//    int k;
//    scanf("%d", &k);
//    while (k--)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        if (n < m)
//        {
//            float x = (m - n) / 2.0;
//            printf("Alice %g\n", x);
//        }
//        else if (m < n)
//        {
//            float y = (n - m) / 2.0;
//            printf("Bob %g\n", y);
//        }
//        else printf("None\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        long long x, a;
//        scanf("%lld", &x);
//        a = sqrt(x);
//        if (a * a == x) printf("Yes\n");
//        else printf("No\n");
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
//        int a, b, c, count = 0;
//        scanf("%d %d %d", &a, &b, &c);
//        for (a; a < c; a += b)
//        {
//            count++;
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        long long x, y;
//        scanf("%lld %lld", &x, &y);
//        if (x > 0 && y > 0)printf("%d", 1);
//        if (x < 0 && y>0)printf("%d", 2);
//        if (x < 0 && y < 0)printf("%d", 3);
//        if (x > 0 && y < 0)printf("%d", 4);
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    long long a1, b1, c1, a2, b2, c2;
//    scanf("%lld %lld %lld", &a1, &b1, &c1);
//    scanf("%lld %lld %lld", &a2, &b2, &c2);
//    if (a1 * b2 == a2 * b1)
//    {
//        if ((a1 * c2 - a2 * c1 == 0) && (b1 * c2 - b2 * c1 == 0))printf("collinear");
//        else printf("parallel");
//    }
//    else
//    {
//        if (a1 * a2 + b1 * b2 == 0)printf("vertical");
//        else printf("intersect");
//    }
//    return 0;
//}

//
//#include <stdio.h> 
//int check(int a, int b, int c, char op1, char op2) 
//{ 
//	double first; 
//	if (op1 == '+') 
//	{
//		first = a + b;  
//	}
//	else if (op1 == '-') 
//	{
//
//		first = a - b;  
//	}
//	else if (op1 == '*') 
//	{
//		first = a * b;  
//	}
//	else 
//	{   
//		if (b == 0) return 0; 
//		first = (double)a / b;  
//	} 
//	double result; 
//	if (op2 == '+') {
//		result = first + c;  
//	}
//	else if (op2 == '-') 
//	{
//		result = first - c;  
//	}
//	else if (op2 == '*') 
//	{
//		result = first * c;  
//	}
//	else 
//	{ 
//		if (c == 0) return 0;  
//		result = first / c;  
//	} 
//	return (result > -1e-9 && result < 1e-9);
//}
//int main() 
//{
//	int T;  
//	scanf("% d", &T);  
//	char ops[] = { '+', '-', '*', '/' }; 
//	while (T--) 
//	{
//		int a, b, c;  
//		scanf("% d % d % d", &a, &b, &c); 
//		int found = 0;  
//		for (int i = 0; i < 4; i++) 
//		{
//			for (int j = 0; j < 4; j++) 
//			{  
//				 
//				if (check(a, b, c, ops[i], ops[j])) 
//				{
//					found = 1; 
//					break;     
//				}
//			}
//			if (found) break; 
//		}
//
//		printf("% s\n", found ? "Yes" : "No");
//	}
//	return 0;  
//}

//
//#include<stdio.h>
//
//double hanshu(int a, int b, int c, char arr1, char arr2)
//{
//    double x = 0;
//    if (arr1 == '+')x = a + b;
//    else if (arr1 == '-')x = a - b;
//    else if (arr1 == '*')x = a * b;
//    else
//    {
//        if (b == 0)return 0;
//        else x = (double)a / b;
//    }
//    double y = 0;
//    if (arr2 == '+')y = x + c;
//    else if (arr2 == '-')y = x - c;
//    else if (arr2 == '*')y = x * c;
//    else
//    {
//        if (c == 0)return 0;
//        else y = (double)x / c;
//    }
//    return (y);
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr[] = { '+','-','*','/' };
//        int a, b, c, d=0;
//        scanf("%d %d %d", &a, &b, &c);
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                if (hanshu(a, b, c, arr[i], arr[j])==0)
//                {
//                    d=1;
//                    break;
//                }
//            }
//        }
//        if (d == 1)printf("Yes\n");
//        else printf("No\n");
//    }
//}

//#include <stdio.h>
//#include <stdbool.h> 
//bool check_two(int x, int y, char op) {
//    switch (op) {
//    case '+': return (x + y) == 0;
//    case '-': return (x - y) == 0;
//    case '*': return (x * y) == 0;
//    case '/':
//        if (y == 0) return false;  
//        return (x % y == 0) && (x / y == 0);  
//    }
//    return false;
//} 
//bool check_three(int a, int b, int c) {
//    char ops[] = { '+', '-', '*', '/' };
//    int i, j; 
//    for (i = 0; i < 4; i++) {
//        int temp;
//        
//        switch (ops[i]) {
//        case '+': temp = a + b; break;
//        case '-': temp = a - b; break;
//        case '*': temp = a * b; break;
//        case '/':
//            if (b == 0 || a % b != 0) break;  
//            temp = a / b;
//            break;
//        default: continue;
//        } 
//        for (j = 0; j < 4; j++) {
//            if (ops[i] == '/' && (b == 0 || a % b != 0)) continue;
//
//            if (check_two(temp, c, ops[j])) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//
//        if (check_three(a, b, c)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//
//    return 0;
//}

//
//#include <stdio.h> 
//int main()  
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        int found = 0; 
//        if (a + b + c == 0) found = 1; 
//        if (a + b - c == 0) found = 1; 
//        if (a + b * c == 0) found = 1; 
//        if (c != 0 && b % c == 0 && (a + b / c) == 0) found = 1; 
//        if (a - b + c == 0) found = 1; 
//        if (a - b - c == 0) found = 1; 
//        if (a - b * c == 0) found = 1; 
//        if (c != 0 && b % c == 0 && (a - b / c) == 0) found = 1; 
//        if (a * b + c == 0) found = 1; 
//        if (a * b - c == 0) found = 1; 
//        if (a * b * c == 0) found = 1; 
//        if (c != 0 && (a * b) % c == 0 && (a * b / c) == 0) found = 1; 
//        if (b != 0 && a % b == 0 && (a / b + c) == 0) found = 1; 
//        if (b != 0 && a % b == 0 && (a / b - c) == 0) found = 1; 
//        if (b != 0 && a % b == 0 && (a / b * c) == 0) found = 1; 
//        if (b != 0 && c != 0 && a % b == 0 && (a / b) % c == 0 && (a / b / c) == 0) found = 1;  
//        printf(found ? "Yes\n" : "No\n");
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
//        int n;
//        scanf("%d", &n);
//        int h = n / 3600;
//        int m = n % 3600;
//            int min = m / 60;
//        int s = min % 60;
//        printf("%02d:%02d:%02d\n", h, min, s);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int jisuan(double a, double b, double c, double d)
//{
//    double x2, y2;
//    x2 = (c - a) * (c - a);
//    y2 = (d - b) * (d - b);
//    double s = sqrt(x2 + y2);
//    return s;
//}
//int main()
//{
//    double a, b, c, d, s;
//    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
//    s = jisuan(a, b, c, d);
//    printf("%.0lf", s);
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//long long hanshu(long long fz, long long fm)
//{
//    fz = abs(fz);
//    fm = abs(fm);
//    while (fm != 0)
//    {
//
//        long long t = fz % fm;
//        fz = fm;
//        fm = t;
//    }
//    return fz;
//} 
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        long long x, y;
//        x = a * c * a - b * b * a + c * b * c;
//        y = b * c * a;
//            long long m = hanshu(x, y);
//            long long A = x / m, B = y / m; 
//            if (B< 0)
//            {
//                A *= -1;
//                B *= -1;
//            } 
//            if (B == 1)
//                printf("%lld\n", A);
//            else
//                printf("%lld/%lld\n", A, B);
//    } 
//    return 0;
//}


//
//#include <stdio.h>  
//#include <math.h>
//
//int main()
//{
//	double x;
//	scanf("%lf", &x);
//	int y = x / 10;
//
//	switch (y) {
//	case 0:
//		printf("%.5f", cos(x + 3.0));
//		break;
//	case 1:
//		printf("%.5f", pow(cos(x + 7.5), 2));
//		break;
//	case 2:
//		printf("%.5f", pow(cos(x + 4.0), 4));
//		break;
//	default:
//		printf("Not define");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>  
//#include <math.h>
//
//int main()
//{
//    double x;
//    scanf("%lf", &x); 
//    if (x < 0 || x >= 30) 
//    {
//        printf("Not define");
//    }
//    else 
//    {
//        int y = x / 10;
//        switch (y) 
//        {
//        case 0:  
//            printf("%.5f", cos(x + 3.0));
//            break;
//        case 1:   
//            printf("%.5f", pow(cos(x + 7.5), 2));
//            break;
//        case 2:  
//            printf("%.5f", pow(cos(x + 4.0), 4));
//            break;
//        }
//    } 
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//long long hanshu(long long fz, long long fm)
//{
//    fz = llabs(fz);
//    fm = llabs(fm);
//    while (fm != 0)
//    {
//
//        long long t = fz % fm;
//        fz = fm;
//        fm = t;
//    }
//    return fz;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        long long x, y;
//        x = a * c * a - b * b * a + c * b * c;
//        y = b * c * a;
//        if (x % y == 0)printf("%lld\n", x / y);
//        else
//        {
//            long long m = hanshu(x, y);
//            long long A = x / m, B = y / m;
//            if ((A < 0 && B>0) || (A > 0 && B < 0))
//            {
//                printf("-%lld/%lld\n", llabs(A), llabs(B));
//            }
//            else
//                printf("%lld/%lld\n", llabs(A), llabs(B));
//        }
//    }
//    return 0;
//}

 

//#include <stdio.h>
//#include <stdlib.h> 
//long long gcd(long long a, long long b) {
//    a = llabs(a);
//    b = llabs(b);
//    while (b != 0) {
//        long long temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c); 
//        long long numerator = (long long)a * a * c - (long long)b * b * a + (long long)c * c * b;
//        long long denominator = (long long)b * c * a;
// 
//        long long g = gcd(numerator, denominator);
//        numerator /= g;
//        denominator /= g;
//         
//        if (denominator < 0) {
//            numerator = -numerator;
//            denominator = -denominator;
//        }
//         
//        if (denominator == 1) {
//            printf("%lld\n", numerator);
//        }
//        else {
//            printf("%lld/%lld\n", numerator, denominator);
//        }
//    }
//
//    return 0;
//}




//#include<stdio.h> 
//#include<stdlib.h> 
//long long hanshu(long long fz, long long fm) 
//{ 
//    fz = llabs(fz); 
//    fm = llabs(fm); 
//    while (fm != 0) 
//    { 
//        long long t = fz % fm; 
//        fz = fm; 
//        fm = t; 
//    } 
//    return fz; 
//} 
//int main() 
//{ 
//    int T; 
//    scanf("%d", &T); 
//    while (T--) 
//    { 
//        long long a, b, c;   
//        scanf("%lld %lld %lld", &a, &b, &c); 
//        long long x, y; 
//        x = a * c * a - b * b * a + c * b * c; 
//        y = b * c * a; 
//        if (y < 0) {
//            x = -x;
//            y = -y;
//        } 
//        if (x % y == 0) {
//            printf("%lld\n", x / y);
//        } 
//        else
//        {
//            long long m = hanshu(llabs(x), y);  
//            long long A = x / m, B = y / m;
//            printf("%lld/%lld\n", A, B);
//        }
//
//    }
//
//    return 0;
//
//}

//
//#include<stdio.h>
//
//long long hanshu1(long long x, long long y)
//{
//    while (x != 0)
//    {
//        long long t = y % x;
//        y = x;
//        x = t;
//    }
//    return y;
//}
//
//long long hanshu2(long long x, long long y, long long a)
//{
//    int b = x * y / a;
//    return b;
//}
//int main()
//{
//    long long x, y;
//    while (1)
//    {
//        scanf("%lld %lld", &x, &y);
//        if (x == 0 && y == 0)break;
//        long long a = hanshu1(x, y);
//        long long b = hanshu2(x, y, a);
//        printf("%lld\n", b);
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
//        long long a, b, c, d;
//        int found=0;
//        scanf("%lld %lld", &c, &d);
//        for (a=0; a <= c; a++)
//        {
//            b = c - a;
//            if (a == 0&&d==0) 
//            { 
//                printf("%lld %lld\n", a, b);
//                found = 1;
//                break;
//            }
//            if (a == 0 && d != 0) found = 0;
//            if (a*b==d&&a!=0)
//            {
//                printf("%lld %lld\n", a, b); 
//                found = 1;
//                break;
//            }
//        }
//        if(!found) printf("None\n");
//    }
//    return 0;
//} 


//#include<stdio.h>
//long long hanshu(long long fz, long long fm)
//{
//    while (fz != 0)
//    {
//        long long t = fm%fz;
//        fm = fz;
//        fz = t;
//    }
//    return fm;
//}
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        if (m == n)printf("1\n");
//        else if (m < 3)printf("0\n");
//        else
//        {
//            long long  fz = (long long)m * (m - 1) * (m - 2);
//            long long fm = (long long)n * (n - 1) * (n - 2);
//            long long x = hanshu(fz, fm);
//            printf("%lld/%lld\n", fz / x, fm / x);
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//long long hanshu(long long n, long long k)
//{
//    while (n != 0)
//    {
//        long long t = k % n;
//        k = n;
//        n = t;
//    }
//    return k;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long n, k;
//        scanf("%lld %lld", &n, &k);
//        long long a = hanshu(n, k+1);
//        if (a == 1)printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}




#include<stdio.h>

long long hanshu(long long fz, long long fm)
{
	while (fz != 0)
	{
		long long t = fm % fz;
		fm = fz;
		fz = t;
	}
	return fm;
}
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long fz = (a * a + b * b) * (2 * a + b);
		long long fm = 2 * (a + b);
		long long g = hanshu(fz, fm);
		fz /= g;
		fm /= g;
		if (fm == 1)
		{
			printf("%lld\n", fz);
		}
		else
		{
			printf("%lld/%lld\n", fz, fm);
		}
	}
	return 0;
}