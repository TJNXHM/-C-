#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//#include<stdio.h>
//int main()
//{
//    int n, x, y;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%d %d", &x, &y);
//        if (x > 0&&y > 0)printf("1\n");
//        if (x < 0&&y > 0)printf("2\n");
//        if (x < 0&&y < 0)printf("3\n");
//        if (x > 0&&y < 0)printf("4\n");
//    }
//    return 0;
//}
 
//#include<stdio.h>
//#include <stdbool.h>
//int hanshu(int a, int b, int c)
//{ 
//    if (a + b + c == 0) return true;
//    if (a + b - c == 0) return true;
//    if (a - b + c == 0) return true;
//    if (a - b - c == 0) return true;
//    if (a * b + c == 0) return true;
//    if (a * b - c == 0) return true;
//    if (a * b * c == 0) return true; 
//    if (c != 0) 
//    {
//        if (a + b / c == 0) return true;
//        if (a - b / c == 0) return true;
//        if (a * b / c == 0) return true;
//    } 
//    if (b != 0) 
//    {
//        if (a / b + c == 0) return true;
//        if (a / b - c == 0) return true;
//        if (a / b * c == 0) return true; 
//        if (c != 0) 
//        {
//            if (a / b / c == 0) return true;
//        }
//    }
//
//    return false;
//}
//int main()
//{
//    int T, a, b, c;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d", &a, &b, &c);
//        if (hanshu(a, b, c))printf("Yes");
//        else printf("No");
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h> 
//bool isZero(double x) 
//{
//    return fabs(x) < 1e-9;
//} 
//bool check(int a, int b, int c) 
//{
//    double result; 
//    result = (double)a + b + c;
//    if (isZero(result)) return true; 
//    result = (double)a + b - c;
//    if (isZero(result)) return true; 
//    result = (double)a + b * c;
//    if (isZero(result)) return true; 
//    if (c != 0) 
//    {
//        result = (double)a + (double)b / c;
//        if (isZero(result)) return true;
//    } 
//    result = (double)a - b + c;
//    if (isZero(result)) return true; 
//    result = (double)a - b - c;
//    if (isZero(result)) return true;
//    result = (double)a - b * c;
//    if (isZero(result)) return true; 
//    if (c != 0) 
//    {
//        result = (double)a - (double)b / c;
//        if (isZero(result)) return true;
//    } 
//    result = (double)a * b + c;
//    if (isZero(result)) return true; 
//    result = (double)a * b - c;
//    if (isZero(result)) return true; 
//    result = (double)a * b * c;
//    if (isZero(result)) return true; 
//    if (c != 0)
//    {
//        result = (double)a * b / c;
//        if (isZero(result)) return true;
//    } 
//    if (b != 0) 
//    {
//        result = (double)a / b + c;
//        if (isZero(result)) return true;
//    } 
//    if (b != 0) 
//    {
//        result = (double)a / b - c;
//        if (isZero(result)) return true;
//    } 
//    if (b != 0) 
//    {
//        result = (double)a / b * c;
//        if (isZero(result)) return true;
//    } 
//    if (b != 0 && c != 0) 
//    {
//        result = (double)a / b / c;
//        if (isZero(result)) return true;
//    } 
//    return false;
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//
//    for (int i = 0; i < T; i++) 
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c); 
//        if (check(a, b, c)) 
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
//    int a, b, c, d, e, f;
//    scanf("%d %d %d", &a, &b, &c);
//    scanf("%d %d %d", &d, &e, &f);
//    if (a * e == b * d && c != f)printf("parallel\n");
//    if (a * d == -b * e)printf("vertical\n");
//    if (a / d == b / e == c / f)printf("collinear\n");
//        return 0;
//}


//#include <stdio.h> 
//int main() 
//{
//    int a, b, c, d, e, f;
//    scanf("%d %d %d", &a, &b, &c);
//    scanf("%d %d %d", &d, &e, &f); 
//    int collinear = (a * e == b * d) && (a * f == c * d) && (b * f == c * e); 
//    int parallel = (a * e == b * d) && !collinear; 
//    int perpendicular = (a * d == -b * e); 
//    if (collinear)
//    {
//        printf("collinear\n");
//    }
//    else if (parallel)
//    {
//        printf("parallel\n");
//    }
//    else if (perpendicular)
//    {
//        printf("vertical\n");
//    }
//    else printf("intersect\n");
//    return 0;
//}


//#include <stdio.h> 
//int main() 
//{
//    long long a1, b1, c1;
//    long long a2, b2, c2; 
//    scanf("%lld %lld %lld", &a1, &b1, &c1);
//    scanf("%lld %lld %lld", &a2, &b2, &c2); 
//    int collinear_cond1 = (a1 * b2 == a2 * b1);
//    int collinear_cond2 = (a1 * c2 == a2 * c1);
//    int collinear_cond3 = (b1 * c2 == b2 * c1); 
//    if (collinear_cond1 && collinear_cond2 && collinear_cond3) 
//    {
//        printf("collinear\n");
//        return 0;
//    } 
//    if (collinear_cond1) 
//    {
//        printf("parallel\n");
//        return 0;
//    } 
//    if (a1 * a2 + b1 * b2 == 0) 
//    {
//        printf("vertical\n");
//        return 0;
//    } 
//    printf("intersect\n");
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//long long hanshu(long long n)
//{
//    if (n == 2)return 1;
//    if (n <= 1 || n % 2 == 0&&n!=2)return 0;
//    else
//    {
//        long long n1 = sqrt(n);
//        long long i = 3;
//        for (i; i <= n1; i++)
//        {
//            if (n % i == 0)return 0;
//        }
//        return 1;
//    }
//}
//int main()
//{
//    long long  n;
//    while (1)
//    {
//        scanf("%lld", &n);
//        if (n == 0)return 0;
//        else
//        {
//            if (hanshu(n))printf("Yes\n");
//            else printf("No\n");
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//#include <string.h>
//#include <ctype.h> 
//int isMatching(char a, char b) 
//{
//    return (a == b) || (tolower(a) == tolower(b));
//} 
//int isPalindrome(char* s) 
//{
//    int len = strlen(s); 
//    for (int k = 0; k <= len; k++) 
//    {
//        int valid = 1; 
//        for (int i = 1; k - i >= 0 && k + i - 1 < len; i++) 
//        {
//            if (!isMatching(s[k - i], s[k + i - 1])) 
//            {
//                valid = 0;
//                break;
//            }
//        }
//        if (valid) 
//        {
//            return 1;  
//        }
//    }
//    return 0;  
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    getchar();  
//    for (int i = 0; i < n; i++) 
//    {
//        char s[101];
//        fgets(s, sizeof(s), stdin); 
//        s[strcspn(s, "\n")] = '\0'; 
//        if (isPalindrome(s)) 
//        {
//            printf("YES\n");
//        }
//        else 
//        {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <ctype.h> 
//int isMatching(char a, char b)
//{
//    return tolower(a) == tolower(b);
//}
//int isPalindrome(char* s)
//{
//    int left = 0;
//    int right = strlen(s) - 1; 
//    while (left < right)
//    { 
//        if (!isMatching(s[left], s[right]))
//        {
//            return 0;
//        }
//        left++;
//        right--;
//    } 
//    return 1;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    getchar();
//    for (int i = 0; i < n; i++)
//    {
//        char s[101];
//        fgets(s, sizeof(s), stdin);
//        s[strcspn(s, "\n")] = '\0';
//        if (isPalindrome(s))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//
//    return 0;
//}


//#include<stdio.h>
//long long hanshu(long n, long m)
//{
//    long long a = n * (n - 1) / 2 + 1;
//    long long count = 0;
//    long long i = 0;
//    for (i; i < n; i++)
//    {
//        if ((a + i) % m == 0)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    long long T, n, m;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld %lld", &n, &m);
//        long long count = hanshu(n, m);
//        printf("%d\n", count);
//    }
//    return 0;
//}


//#include <stdio.h> 
//long long countMultiples(long long L, long long R, long long m) 
//{ 
//    return (R / m) - ((L - 1) / m);
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        long long n, m;
//        scanf("%lld %lld", &n, &m); 
//        long long first = (n - 1) * n / 2 + 1;
//        long long last = n * (n + 1) / 2; 
//        printf("%lld\n", countMultiples(first, last, m));
//    }
//
//    return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//int getRowIndex(int pos, int rows) 
//{
//    if (rows == 1) return 0;  
//    int cycle = 2 * rows - 2; 
//    int positionInCycle = pos % cycle; 
//    if (positionInCycle >= rows) 
//    {
//        return cycle - positionInCycle;
//    } 
//    return positionInCycle;   
//}
//
//int main() {
//    char s[1001];   
//    int numRows;      
//    scanf("%s", s);
//    scanf("%d", &numRows); 
//    int len = strlen(s);
//    char result[1001] = "";   
//    for (int row = 0; row < numRows; row++) 
//    {
//        for (int i = 0; i < len; i++) 
//        {
//            if (getRowIndex(i, numRows) == row) 
//            {
//                int resultLen = strlen(result);
//                result[resultLen] = s[i];
//                result[resultLen + 1] = '\0';
//            }
//        }
//    } 
//    printf("%s\n", result);
//
//    return 0;
//}
 

//#include <stdio.h>
//int main()
//{
//    int n, arr[1001];
//    scanf("%d", &n);
//    for (int i = 0; i < 1000; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    long long a = 0;
//    for (int j = 0; j < n; j++)
//    {
//        a += arr[j];
//    }
//    printf("%lld", a);
//}

//#include<stdio.h>
//long long hanshu(long long x, long long y)
//{
//    while (y != 0)
//    {
//        long long t = x%y;
//        x=y;
//        y= t;
//    }
//    return x;
//}
//int main()
//{
//    long long x, y;
//    while (1)
//    {
//        scanf("%lld %lld", &x, &y);
//        if (x == 0 && y == 0)return 0; 
//        long long g = hanshu(x, y); 
//        printf("%lld\n", g);
//    }
//}

//#include <stdio.h>
//
//int main() {
//    int n, caseNum = 0;
//    // 循环读取输入，直到输入为 0
//    while (scanf("%d", &n) != EOF && n != 0) {
//        caseNum++;
//        // 输出 case 信息
//        printf("case %d:\n", caseNum);
//        for (int i = 1; i <= n; i++) {
//            // 打印前导空格（本题示例未体现，但按数字塔常规逻辑可保留，若不需要可删除）
//            for (int j = 0; j < n - i; j++) {
//                printf(" ");
//            }
//            // 打印数字
//            for (int k = 0; k < 2 * i - 1; k++) {
//                printf("%d", i);
//            }
//            // 换行
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//
//    int num = 0;
//    while (1)
//    {
//        int a;
//        scanf("%d", &a); 
//        if (a == 0)return 0;
//        num++;
//        printf("case %d:", num);
//        int i, j, shu;
//        for (i = 0; i <= a; i++)
//        {
//            for (j = 0; j <a-i; j++)
//            {
//                printf(" ");
//            }
//            for (shu = 0; shu < 2 * i - 1; shu++)
//            {
//                printf("%d", i);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h> 
//int main() 
//{
//    char c;  
//    scanf("%c", &c); 
//    if (c >= 'a' && c <= 'z') 
//    {
//        c = c - 32;   
//        printf("%c", c);
//    } 
//    else  
//    {
//        c = c + 32;   
//        printf("%c", c);
//    }  
//    return 0;
//}

#include <stdio.h>
#include <ctype.h>

// 生成并打印字母三角形
void printTriangle(char c) {
    // 计算输入字母对应的层级数（A对应1，B对应2，依此类推）
    int levels = c - 'A' + 1;

    // 从最高层开始向下打印每一行
    for (int i = levels; i >= 1; i--) {
        // 打印正向部分（从A到当前层级对应的字母）
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            putchar(ch);
        }

        // 打印反向部分（从当前层级-1对应的字母到A）
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            putchar(ch);
        }

        // 换行
        putchar('\n');
    }
}

int main() {
    char input;
    int caseNumber = 1;

    // 持续读取输入直到遇到'#'
    while (1) {
        // 读取一个字符
        input = getchar();

        // 忽略空白字符（处理换行等情况）
        if (isspace(input)) {
            continue;
        }

        // 如果输入是'#'，结束程序
        if (input == '#') {
            break;
        }

        // 确保输入是大写字母
        if (input >= 'A' && input <= 'Z') {
            // 打印样例编号
            printf("case %d:\n", caseNumber);
            caseNumber++;

            // 打印对应的字母三角形
            printTriangle(input);
        }
    }

    return 0;
}