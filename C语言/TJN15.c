#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  


//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long n;
//        scanf("%lld", &n);
//        long long count = 0;
//        long long a = (n + 1) * n / 2;
//        long long b = (n - 1) * n / 2+1; 
//        if (b % 2 == 0) 
//        { 
//            if (a % 2 == 0) 
//            {
//                count = (a - b) / 2 + 1;
//            }
//            else 
//            {
//                count = (a - b + 1) / 2;
//            }
//        }
//        else 
//        { 
//            if (a % 2 == 0) 
//            {
//                count = (a - b + 1) / 2;
//            }
//            else 
//            {
//                count = (a - b) / 2;
//            }
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//
//}


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
//            result = n / 3;
//        }
//        else if (mod == 2 || mod == 4) 
//        {
//            result = n / 3 + 1;
//        }
//        else if (mod == 3) 
//        {
//            result = n / 3 + 1;
//        }
//        else 
//        {  
//            result = n / 3;
//        } 
//        printf("%lld\n", result);
//    } 
//    return 0;
//}



//Òç³ö
//#include <stdio.h> 
//long long even_count(long long n) 
//{ 
//    long long start = n * (n - 1) / 2 + 1; 
//    long long end = n * (n + 1) / 2; 
//    return end / 2 - (start - 1) / 2;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        long long n;
//        scanf("%lld", &n);
//        printf("%lld\n", even_count(n));
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//long long even_count(long long n) 
//{ 
//    long long count = n;
//
//    int start_even;
//    if (n % 4 == 1 || n % 4 == 2) 
//    {
//        start_even = 0;  
//    }
//    else 
//    {
//        start_even = 1;  
//    }  
//    if (start_even) 
//    { 
//        return (count + 1) / 2;
//    }
//    else 
//    { 
//        return count / 2;
//    }
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        long long n;
//        scanf("%lld", &n);
//        printf("%lld\n", even_count(n));
//    }
//    return 0;
//}




//#include<stdio.h>
//
//long long hanshu(long long fz, long long fm)
//{
//    while (fz != 0)
//    {
//        long long t = fm % fz;
//        fm = fz;
//        fz = t;
//    }
//    return fm;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        long long fz = 1, fm = a;
//        for (int c = a; c < b; c++)
//        {
//            fz = (fz * (c + 1) + fm);
//            fm = fm * (c + 1);
//            long long m = hanshu(fz, fm);
//            fz /= m;
//            fm /= m;
//        }
//        printf("%lld/%lld\n", fz, fm);
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
//        int n;
//        scanf("%d", &n);
//        float a, b, c;
//        float w = 0, d = 0, l = 0;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%f %f %f", &a, &b, &c);
//            if (a > w)w = a;
//            if (b > d)d = b;
//            if (c > l)l = c;
//        }
//        double fz = (d*l+w*l+w*d), fm = w * d * l;
//        if (fz < fm)printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//
//long long hanshu1(int n, int k) 
//{ 
//    if (k == 0 || k == n) return 1; 
//    long long res = 1; 
//    if (k > n - k) k = n - k; 
//    for (int i = 0; i < k; i++) 
//    {
//        res *= (n - i);
//        res /= (i + 1);
//    }
//    return res;
//}
//long long hanshu2(int k)
//{
//    long long sum = 1; 
//    for (int i = 1; i <=k; i++)
//    {
//        sum *= i;
//    }
//    return sum;
//}
//
//long long hanshu4(long long fz, long fm)
//{
//    while (fz != 0)
//    {
//        long long t = fm % fz;
//        fm = fz;
//        fz = t;
//    }
//    return fm;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k);
//        if (k > n || k > m)
//        {
//            printf("0\n");
//            continue;
//        } 
//        long long fz = hanshu1(n, k)*hanshu1(m,k)*hanshu2(k);
//        long long fm = hanshu1(n*m, k); 
//        if (fz == 0)printf("0\n");
//        else if (fz == fm)printf("1\n");
//        else
//        {
//            long long g = hanshu4(fz, fm);
//            printf("%lld/%lld\n", fz / g, fm / g);
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
//        int x1, y1, r1, x2, y2, r2;
//        scanf("%d %d %d", &x1, &y1, &r1);
//        scanf("%d %d %d", &x2, &y2, &r2);
//        long long d2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//        long long rcha = (r1 - r2) * (r1 - r2);
//        long long rhe = (r1 + r2) * (r1 + r2);
//        if (d2 < rcha)printf("1\n");
//        else if (d2 == rcha)printf("2\n");
//        else if (d2<rhe && d2>rcha)printf("3\n");
//        else if (d2 == rhe)printf("4\n");
//        else printf("5\n");
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
//        int r;
//        scanf("%d", &r);
//        int count = 0;
//        for (int i = 1; i <= r; i++)
//        {
//            for (int j = 1; j <= r; j++)
//            {
//                if (i * i + j * j== r * r)count++;
//            }
//        }
//        printf("%d\n", 4*count+4);
//    }
//    return 0;
//}

//
//#include<stdio.h>
//#include<math.h>
//void judge(double a[]) {
//    int ret = 0;
//    double k1, k2;
//    if (a[0] != a[2] && a[0] != a[4] && a[2] != a[4]) {
//        k1 = fabs((a[1] - a[3]) / (a[0] - a[2]));
//        k2 = fabs((a[3] - a[5]) / (a[2] - a[4]));
//    }
//    else {
//        if (a[0] == a[2] && a[2] == a[4]) {
//            ret = 1;
//        }
//    }
//    if (k1 == k2) {
//        ret = 1;
//    }
//    if (ret == 1) {
//        printf("Yes\n");
//    }
//    else {
//        printf("No\n");
//    }
//}
//int main() {
//    int N;
//    scanf_s("%d", &N);
//    int i = 0;
//    while (i < N) {
//        int n = 0;
//        double a[6];
//        int cut = 0;
//        for (n; n < 3; n++) {
//            scanf_s("%d %d", &a[cut], &a[cut + 1]);
//            cut += 2;
//        }
//        judge(a);
//        i++;
//    }
//    return 0;
//
//}
// 
  

#include <stdio.h>
#include <string.h>

// Function to check if a number is a perfect palindrome
int isPerfectPalindrome(int n) {
    char str[12];
    sprintf(str, "%d", n); // Convert number to string
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i] || (str[i] != '0' && str[i] != '1')) {
            return 0; // Not a perfect palindrome
        }
    }
    return 1; // It's a perfect palindrome
}

// Function to find the smallest perfect palindrome >= n
int findSmallestPalindrome(int n) {
    while (!isPerfectPalindrome(n)) {
        n++;
        if (n > 100000) { // If we exceed the upper limit
            return 0;
        }
    }
    return n;
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases
    while (T--) {
        int n;
        scanf("%d", &n); // Read the number n
        int result = findSmallestPalindrome(n);
        printf("%d\n", result); // Output the result
    }
    return 0;
}

