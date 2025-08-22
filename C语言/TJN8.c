#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

//#include <stdio.h>
//
//// 计算m最少能由多少个1、91、101的和组成
//int compute_min_k(int m) {
//    int min_k = m; // 最坏情况：全用1
//    int max_t = m / 101; // 101的最大可能使用次数
//
//    // 遍历101的使用次数
//    for (int t = 0; t <= max_t; t++) {
//        int rem = m - t * 101;
//        if (rem < 0) break;
//
//        int max_s = rem / 91; // 91的最大可能使用次数
//        // 遍历91的使用次数
//        for (int s = 0; s <= max_s; s++) {
//            int rem2 = rem - s * 91;
//            if (rem2 < 0) break;
//
//            // 剩余部分用1补充
//            int current = t + s + rem2;
//            if (current < min_k) {
//                min_k = current;
//            }
//        }
//    }
//    return min_k;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//
//        if (n % 11 != 0) {
//            // 不是11的倍数，无法由完美回文数组成
//            printf("0\n");
//        }
//        else {
//            int m = n / 11;
//            int result = compute_min_k(m);
//            printf("%d\n", result);
//        }
//    }
//
//    return 0;
//}


//#include <stdio.h> 
//int compute_min_k(int m) 
//{
//    int min_k = m;  
//    int max_t = m / 101; 
//    for (int t = 0; t <= max_t; t++)
//    {
//        int rem = m - t * 101;
//        if (rem < 0) break; 
//        int max_s = rem / 91;  
//        for (int s = 0; s <= max_s; s++)
//        {
//            int rem2 = rem - s * 91;
//            if (rem2 < 0) break; 
//            int current = t + s + rem2;
//            if (current < min_k) 
//            {
//                min_k = current;
//            }
//        }
//    }
//    return min_k;
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        if (n % 11 != 0) 
//        { 
//            printf("0\n");
//        }
//        else 
//        {
//            int m = n / 11;
//            int result = compute_min_k(m);
//            printf("%d\n", result);
//        }
//    }
//
//    return 0;
//}

//#include<stdio.h>
//#include<stdio.h>
//
//long long hanshu(long long b)
//{
//    long long max = b;
//    long long min = b / 101;
//    for (long long t = 0; t <= min; t++)
//    {
//        long long d = b- t * 101;
//        if (d < 0)break;
//        long long min2 = d / 91;
//        for (long long s = 0; s <= min2; s++)
//        {
//            long long d2 = d - s * 91;
//            if (d2 < 0)break;
//            long long count = t + s + d2;
//            if (count < max)
//            {
//                max = count;
//            }
//        }
//    }
//    return max;
//}
//int main()
//{
//    long long T, a;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld", &a);
//        if (a % 11 != 0)
//        {
//            printf("0\n"); 
//        }
//        else
//        {
//            long long b = a / 11;
//            long long c = hanshu(b);
//            printf("%lld\n", c);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//
//long long hanshu(long long n, long long step)
//{
//    while (step != 0)
//    {
//        long long t = n%step;
//        n = step;
//        step = t;
//    }
//    return n;
//}
//int main()
//{
//    long long T, n, k;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld %lld", &n, &k);
//        long long step = k + 1;
//        long long a = hanshu(n, step);
//        if (a == 1)
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
//
//// 计算最大公约数的函数（欧几里得算法）
//long long gcd(long long a, long long b) {
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
//    scanf("%d", &T);  // 读取测试用例数量
//
//    while (T--) {
//        long long n, k;
//        scanf("%lld %lld", &n, &k);  // 读取n和k
//
//        long long step = k + 1;  // 计算实际步长
//        long long common_divisor = gcd(step, n);  // 计算步长与n的最大公约数
//
//        // 判断是否能到达所有位置
//        if (common_divisor == 1) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//
//    return 0;
////}
//
//#include<stdio.h>
//int main()
//{
//    long long T, n;
//    scanf("%lld", &T);
//    while (T--)
//    {
//        scanf("%lld", &n);
//        long long h = n / 3600;
//        long long m = (n % 3600) / 60;
//        long long s = ((n % 3600) % 60);
//        printf("%02d:%02d:%02d\n", h, m, s);
//    }
//    return 0;
//}



//#include<stdio.h>
//
//int zxgys(int fz, int fm)
//{
//    while (fm != 0)
//    {
//        int t = fz % fm;
//        fz = fm;
//        fm = t;
//    }
//    return fz;
//}
//int main()
//{
//    int T, a, b;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &a, &b);
//        int fz = 2 * a * a * a + a * a * b + 2 * a * b * b + b * b * b;
//        int fm = 2 * (a + b);
//        if (fz % fm != 0)
//        {
//            int g = zxgys(fz, fm);
//            fz /= g;
//            fm /= g;
//            printf("%d/%d\n", fz, fm);
//        }
//        else
//            printf("%d\n", fz / fm);
//
//    }
//    return 0;
//}



//#include<stdio.h>
//
//int sjx(int arr[], int n)
//{ 
//        int count = 0; 
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i + 1; j < n; j++)  
//            {
//                for (int k = j + 1; k < n; k++)  
//                {
//                    int a = arr[i];
//                    int b = arr[j];
//                    int c = arr[k]; 
//                    if ((a + b > c) && (a + c > b) && (b + c > a)&&(a*a+b*b>c*c) && (c * c + b * b > a * a) && (a * a + c * c > b * b))
//                    {
//                        count++;
//                    }
//                }
//            }
//        }
//        return count;
//    }
//
//
// 
//int main()
//{
//    int T, n;
//    int arr[100] = { 0 };
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int gs = sjx(arr, n);
//        printf("%d\n", gs);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        double maxw = 0, maxp = 0, maxl = 0;
//        while (n--)
//        {
//            double w, p, l;
//            scanf("%lf %lf %lf", &w, &p, &l);
//            if (w > maxw)maxw = w;
//            if (p > maxp)maxp = p;
//            if (l > maxl)maxl = l;
//        }
//        if (1 / maxw + 1 / maxp + 1 / maxl < 1)printf("Yes\n");
//        else printf("No\n");
//    }
//}

//#include <stdio.h>
//#include <string.h>
//
//// 定义4x4矩阵类型
//typedef int Matrix[4][4];
//
//// 顺时针转动外圈一次
//void rotateClockwise(Matrix m) {
//    // 保存左上角元素
//    int temp = m[0][0];
//
//    // 左列上移
//    m[0][0] = m[1][0];
//    m[1][0] = m[2][0];
//    m[2][0] = m[3][0];
//
//    // 下行左移
//    m[3][0] = m[3][1];
//    m[3][1] = m[3][2];
//    m[3][2] = m[3][3];
//
//    // 右列下移
//    m[3][3] = m[2][3];
//    m[2][3] = m[1][3];
//    m[1][3] = m[0][3];
//
//    // 上行右移
//    m[0][3] = m[0][2];
//    m[0][2] = m[0][1];
//    m[0][1] = temp;
//}
//
//// 计算所有可能的2x2子矩阵的最大和
//int maxSubmatrixSum(Matrix m) {
//    int maxSum = 0;
//
//    // 检查所有可能的2x2子矩阵
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            int sum = m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1];
//            if (sum > maxSum) {
//                maxSum = sum;
//            }
//        }
//    }
//
//    return maxSum;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    while (T--) {
//        Matrix original, temp;
//
//        // 读取4x4矩阵
//        for (int i = 0; i < 4; i++) {
//            for (int j = 0; j < 4; j++) {
//                scanf("%d", &original[i][j]);
//            }
//        }
//
//        int maxSum = 0;
//
//        // 尝试顺时针转动0-3次（包含了所有可能的转动状态）
//        // 因为转动4次会回到原始状态，逆时针转动可以通过顺时针转动3次实现
//        for (int rotations = 0; rotations < 4; rotations++) {
//            // 复制原始矩阵
//            memcpy(temp, original, sizeof(original));
//
//            // 应用指定次数的顺时针转动
//            for (int i = 0; i < rotations; i++) {
//                rotateClockwise(temp);
//            }
//
//            // 计算当前状态下的最大子矩阵和
//            int currentSum = maxSubmatrixSum(temp);
//            if (currentSum > maxSum) {
//                maxSum = currentSum;
//            }
//        }
//
//        printf("%d\n", maxSum);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h> 
//typedef int Matrix[4][4]; 
//void rotateClockwise(Matrix m)
//{ 
//    int temp = m[0][0]; 
//    m[0][0] = m[1][0];
//    m[1][0] = m[2][0];
//    m[2][0] = m[3][0]; 
//
//    m[3][0] = m[3][1];
//    m[3][1] = m[3][2];
//    m[3][2] = m[3][3];
//     
//    m[3][3] = m[2][3];
//    m[2][3] = m[1][3];
//    m[1][3] = m[0][3];
//     
//    m[0][3] = m[0][2];
//    m[0][2] = m[0][1];
//    m[0][1] = temp;
//} 
//int maxSubmatrixSum(Matrix m) 
//{
//    int maxSum = 0; 
//    for (int i = 0; i < 3; i++) 
//    {
//        for (int j = 0; j < 3; j++) 
//        {
//            int sum = m[i][j] + m[i][j + 1] + m[i + 1][j] + m[i + 1][j + 1];
//            if (sum > maxSum)
//            {
//                maxSum = sum;
//            }
//        }
//    }
//
//    return maxSum;
//}
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        Matrix original, temp; 
//        for (int i = 0; i < 4; i++) 
//        {
//            for (int j = 0; j < 4; j++) 
//            {
//                scanf("%d", &original[i][j]);
//            }
//        }
//
//        int maxSum = 0; 
//        for (int rotations = 0; rotations < 12; rotations++) 
//        { 
//            memcpy(temp, original, sizeof(original)); 
//            for (int i = 0; i < rotations; i++) 
//            {
//                rotateClockwise(temp);
//            } 
//            int currentSum = maxSubmatrixSum(temp);
//            if (currentSum > maxSum) 
//            {
//                maxSum = currentSum;
//            }
//        }
//
//        printf("%d\n", maxSum);
//    }
//
//    return 0;
//}


//#include<stdio.h> 
//int hanshu(int arr[3][3])
//{
//    int a = arr[0][0] + arr[1][0] + arr[2][0];
//    for (int i = 0; i < 3; i++)
//    {
//        if (arr[i][0] + arr[i][1] + arr[i][2] != a) 
//        {
//            return 0;
//        }
//    } 
//    for (int j = 0; j < 3; j++) 
//    {
//        if (arr[0][j] + arr[1][j] + arr[2][j] != a) 
//        {
//            return 0;
//        }
//    } 
//    if (arr[0][0] + arr[1][1] + arr[2][2] != a)
//    {
//        return 0;
//    }
//    if (arr[0][2] + arr[1][1] + arr[2][0] != a) 
//    {
//        return 0;
//    }
//
//    return 1;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int nums[9]; 
//        for (int i = 0; i < 9; i++) 
//        {
//            scanf("%1d", &nums[i]);  
//        } 
//        int arr[3][3];
//        for (int i = 0; i < 3; i++) 
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                arr[i][j] = nums[i * 3 + j];
//            }
//        }
//        if (hanshu(arr))
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//
//    }
//}


//#include<stdio.h>
//
//int hanshu(int fz, int fm)
//{
//    while (fm != 0)
//    {
//        int t = fz % fm;
//        fz = fm;
//        fm = t;
//    }
//    return fz;
//}
//int main()
//{
//    int T, a, b, c, d, e, f;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
//        int fz = (a * e * (c + d));
//        int fm = (b * (c * f + d * e));
//        int g = hanshu(fz, fm);
//        int nfz = fz / g;
//        int nfm = fm / g;
//        printf("%d %d\n", nfz, nfm);
//    }
//    return 0;
//}


//#include <stdio.h> 
//int gcd(int a, int b) 
//{
//    while (b != 0) 
//    {
//        int temp = a % b;
//        a = b;
//        b = temp;
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
//        int a, b, c, d, e, f; 
//        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f); 
//        int numerator = a * e * (c + d); 
//        int denominator = b * (c * f + d * e); 
//        int g = gcd(numerator, denominator);
//        numerator /= g;
//        denominator /= g; 
//        printf("%d %d\n", numerator, denominator);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h> 
//int solve(int n, int m) 
//{ 
//    if (n == 1) 
//    {
//        return 1;
//    } 
//    int* in_circle = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) 
//    {
//        in_circle[i] = 1;
//    } 
//    int remaining = n;   
//    int current = 0;    
//    int direction = 1;    
//    while (remaining > 1) 
//    { 
//        int count = 0;
//        while (count < m) 
//        {
//            if (in_circle[current]) 
//            {
//                count++; 
//                if (count == m) 
//                {
//                    break;
//                }
//            } 
//            current = (current + direction + n) % n;
//        } 
//        in_circle[current] = 0;
//        remaining--; 
//        direction *= -1; 
//        current = (current + direction + n) % n; 
//        while (!in_circle[current])
//        {
//            current = (current + direction + n) % n;
//        }
//    } 
//    int result = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        if (in_circle[i]) 
//        {
//            result = i + 1;   
//            break;
//        }
//    } 
//    free(in_circle);
//    return result;
//}
//
//int main() 
//{
//    int k;
//    scanf("%d", &k);   
//    for (int i = 0; i < k; i++) 
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);  
//        printf("%d\n", solve(n, m));   
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h> 
typedef struct Node 
{
    int num;            
    struct Node* next;  
    struct Node* prev;   
} Node;

 
Node* createCircle(int n) 
{
    Node* head = NULL;
    Node* prev = NULL; 
    for (int i = 1; i <= n; i++) 
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->num = i;
        newNode->next = NULL;
        newNode->prev = prev;

        if (prev == NULL) 
        {
            head = newNode;
        }
        else 
        {
            prev->next = newNode;
        } 
        prev = newNode;
    } 
    prev->next = head;
    head->prev = prev;

    return head;
} 
int solve(int n, int m) 
{
    if (n == 1) return 1;   
    Node* head = createCircle(n);
    Node* current = head;
    int direction = 1;   
    int count = n;      
    while (count > 1)
    {
        int steps = m % count;
        if (steps == 0) steps = count;
        for (int i = 1; i < steps; i++)
        {
            if (direction == 1)
            {
                current = current->next;
            }
            else
            {
                current = current->prev;
            }
        }
        Node* toRemove = current;
        current = (direction == 1) ? current->next : current->prev;

        toRemove->prev->next = toRemove->next;
        toRemove->next->prev = toRemove->prev;
        free(toRemove);

        count--;
        direction *= -1;
    }
    int result = current->num;
    free(current);  
    return result;
}

int main()
{
    int k;
    scanf("%d", &k);   
    for (int i = 0; i < k; i++) 
    {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", solve(n, m));
    }

    return 0;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//// 计算最后剩下的人的编号
//int lastRemaining(int n, int m) {
//    // 创建数组表示人们是否在圈内，1表示在圈内，0表示已退出
//    int* people = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        people[i] = 1;
//    }
//
//    int count = n;          // 剩余人数
//    int current = 0;        // 当前位置（0表示第一个人）
//    int direction = 1;      // 1表示顺时针，-1表示逆时针
//
//    while (count > 1) {
//        // 数m个人
//        int step = m;
//        while (step > 0) {
//            if (people[current] == 1) {  // 只数在圈内的人
//                step--;
//            }
//            if (step > 0) {  // 如果还没数完，继续移动
//                // 确保索引在有效范围内
//                current = (current + direction + n) % n;
//            }
//        }
//
//        // 标记当前位置的人退出
//        people[current] = 0;
//        count--;
//
//        // 改变方向
//        direction *= -1;
//
//        // 移动到下一个有效的位置
//        do {
//            current = (current + direction + n) % n;
//        } while (people[current] == 0);
//    }
//
//    // 找到最后剩下的人
//    for (int i = 0; i < n; i++) {
//        if (people[i] == 1) {
//            free(people);
//            return i + 1;  // 返回编号（从1开始）
//        }
//    }
//
//    free(people);
//    return -1;  // 理论上不会执行到这里
//}
//
//int main() {
//    int k;
//    scanf("%d", &k);  // 测试用例数量
//
//    for (int i = 0; i < k; i++) {
//        int n, m;
//        scanf("%d %d", &n, &m);
//        printf("%d\n", lastRemaining(n, m));
//    }
//
//    return 0;
//}
