#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  



//#include <stdio.h>
//int main()
//{
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
//
//#include <stdio.h>
//int main(void)
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    ");
//}


//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("%c%c%c", a, a, a);
//    printf("%c%c%c", a, a, a);
//    printf("%c%c%c", a, a, a);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    int i, j;
//    int n = 3;  //������Խ������ڵ��ϰ벿����n��
//    for (i = 1; i <= n; i++)  //��ӡ��1�е��Խ���(��n��)
//    {
//        for (j = 0; j < n - i; j++)
//            printf(" "); //�ȴ�ӡÿ�еĿո񣬵�i����n-i���ո�
//        for (j = 0; j < 2 * i - 1; j++)
//            printf("%c", ch);   //�ٴ�ӡÿ�е��ַ�����i����2*i-1��
//        printf("\n");    //��ӡ��ÿ�пո���ַ���Ҫ����
//    }
//    for (i = 1; i < n; i++)  //�Խ������²���ֻ��n-1�У���1��n-1
//    {
//        for (j = 0; j < i; j++)
//            printf(" ");  //ÿ��ǰ��Ŀո���������1������i����i���ո�
//        for (j = 0; j < 2 * (n - i) - 1; j++)
//            printf("%c", ch);  //ÿ�е��ַ����μ���2������i����2*(n-i)-1��
//        printf("\n");
//    }
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    int i, j, k, b = 3;
//    for (i = 0; i < b; i++)
//    {
//        for (j = 0; j < b-i-1; j++)printf(" ");
//        for (k = 0; k < 2 * (i + 1) - 1; k++)printf("%c", a);
//        printf("\n");
//    }
//    for (i = 1; i < b; i++)
//    {
//        for (k = 0; k < i; k++) printf(" ");
//        for (j = 0; j < 2*(b - i)-1; j++)printf("%c", a);
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h> 
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    int b;
//    if (a >= 0) b = a + 0.5;
//    else b = a - 0.5;
//    printf("%d", &b);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    long long a = 0;
//    double b, c, d;
//    scanf("%lld;%lf,%lf,%lf", &a, &b, &c, &d);
//    printf("The each subject score of No. %lld is %.2lf, %.2lf, %.2lf.", a, b, c, d);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    long long a, b;
//    scanf("a=%lld,b=%lld", &a, &b);
//    long long c = a;
//    a = b;
//    b = c;
//    printf("a=%lld,b=%lld", a, b);
//    return 0;
//}


//#include <stdio.h>
//#include<ctype.h>
//int main()
//{
//    while (1)
//    {
//        char a = 0;
//        scanf("%c", &a);
//        getchar();
//        char b = tolower(a);
//        printf("%c", b);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    printf("|%10s|%15s|\n", "����", "�ɼ�");
//    printf("|%10s|%15d|\n", "����", 95);
//    printf("|%10s|%15d|\n", "����", 88);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    int num = 123;
//    printf("|%15d|\n", num);
//    printf("|%-15d|\n", num);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int num1 = 123;
//    int num2 = 123456789;
//    printf("|%15d|\n", num1);
//    printf("|%15d|\n", num2);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    float a=0, c=0, d=0, e=0;
//    float b = 0;
//    for (int m = 0; m < n; m++)
//    {
//        scanf("%f", &a);
//        if (b < a)b = a;
//        if (a < c)c = a;
//        d += a; 
//    }
//    e = d / n;
//    printf("%f %f %f", b, c, e);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    float a, b, c;
//    scanf("%f %f", &a, &b);
//    c = (a * b) / (a + b);
//    printf("%f", c);
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main() {
//    char expression[51];
//    // ��ȡ����ı��ʽ
//    scanf("%s", expression);
//
//    double num1, num2;
//    char op;
//    // ���ַ����н�����������1���������������2
//    if (sscanf(expression, "%lf%c%lf", &num1, &op, &num2) != 3) {
//        printf("Invalid operation!\n");
//        return 0;
//    }
//
//    // �ж�������Ƿ�Ϸ�
//    if (op != '+' && op != '-' && op != '*' && op != '/') {
//        printf("Invalid operation!\n");
//        return 0;
//    }
//
//    double result;
//    // ���ݲ�ͬ��������м���
//    if (op == '+') {
//        result = num1 + num2;
//    }
//    else if (op == '-') {
//        result = num1 - num2;
//    }
//    else if (op == '*') {
//        result = num1 * num2;
//    }
//    else if (op == '/') {
//        // �������ʱ����Ϊ 0 �����
//        if (num2 == 0.0) {
//            printf("Wrong!Division by zero!\n");
//            return 0;
//        }
//        result = num1 / num2;
//    }
//
//    // ����Ҫ���ʽ������������С������� 4 λ
//    printf("%.4lf%c%.4lf=%.4lf\n", num1, op, num2, result);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    for (int a = 1; a <= 9; a++)
//    {
//        for (int b = 1; b <= a; b++)
//        {
//            printf("%d*%d=%2d ", a, b, a * b);
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include <stdio.h>
//
//int main()
//{
//    int z, c;
//    double b = 0;
//    scanf("%d", &z);
//    for (int n = 1; n <= z; n++)
//    {
//        if (n % 2 == 0)
//        {
//            c = -n;
//        }
//        else
//        {
//            c = -(n - 1) + 2 * n - 1;
//        }
//        b=b+(1.0 / c);
//    }
//    printf("%.3lf", b);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    long long count = 0;
//    for (int a = 1; a <= n; a++)
//    {
//        for (int b = 1; b <= a; b++)
//        {
//            count += b;
//        }
//    }
//    printf("%lld", count);
//    return 0;
//}
//
//#include <stdio.h> 
//int main()
//{
//    int count = 0;
//    long long n;
//    scanf("%lld", &n);
//    n = llabs(n);
//    int sum = 0;
//    if (n == 0)printf("%d", sum);
//    else
//    {
//        for (n; n > 0; n /= 10)
//        {
//            count += (n % 10);
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


//#include <stdio.h>
//int  hanshu(int a)
//{
//    for (a; a != 0; a / 10)
//    {
//        if (a % 10 == 9)return 1;
//        else break;
//    }
//    return 0;
//}
//int main()
//{
//    int n = 2019, b = 1, count = 0;
//    for (b; b <= n; b++)
//    {
//        if (hanshu(b))count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//#include <stdio.h>
//int hanshu(int a)
//{
//    int b, c=0;
//    int d = a;
//    for (a; a != 0; a /= 10)
//    {
//        b = a % 10;
//        c += b * b * b;
//    }
//    if (d == c) return 1;
//    else return 0;
//}
//int main()
//{
//    int m, n, a;
//    while ((scanf("%d %d", &m, &n)) ==2 )
//    {
//        int count = 0;
//        for (a = m; a <= n; a++)
//        {
//            if (hanshu(a))
//            {
//                printf("%d ", a);
//                count++;
//            }
//        }
//        if (count == 0)printf("no");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int K;
//    long long count = 0, n;
//    scanf("%d", &K);
//    for (n = 1; (1 + n) * n / 2 <=K; n++)
//    {
//        count += (n * n);
//    }
//    count += ((K - ((n-1) * n / 2)) * n);
//    printf("%lld", count);
//    return 0;
//}
 

//#include <stdio.h>
//long long hanshu(long long a)
//{
//    while (a != 0)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//    }
//}
//int main()
//{
//    long long n;
//    scanf("%lld", &n);
//    for (int a = 1; a <= n; a++)
//    {
//        hanshu(a);
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) != 0)
//    {
//        for (n; n > 0; n--)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) == 1)
//        for (a; a > 0; a--)
//        {
//            for (int n = a; n > 0; n--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{ 
//    int a;
//    while (scanf("%d", &a) ==1)
//    {
//        int i = 1;
//        for (i; i <= a; i++)
//        {
//            int d = i;
//            for (int b = (a - i); b > 0; b--)
//            {
//                printf(" ");
//            }
//            for (d; d > 0; d--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while (scanf("%d", &a) == 1)
//    {
//        int c = a+1;
//        int i = 1;
//        for (i; i <= c; i++)
//        {
//            int d = i;
//            for (int b = (c - i); b > 0; b--)
//            {
//                printf(" ");
//            }
//            for (d; d > 0; d--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        int f = 1;
//        for (f; f <= c - 1; f++)
//        {
//            int d = f;
//            for (d; d > 0; d--)
//            {
//                printf(" ");
//            }
//            for (int b = (c  - f); b > 0; b--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d",&a)==1))
//    {
//        for (int i = a; i >= 0; i--)
//        {
//            for (int b = 0; b <= i; b++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int b = a; b > 0; b--)
//        {
//            for (int c = a - b + 1; c >= 0; c--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        int b = n + 1;
//        for (b; b >= 0; b--)
//        {
//            for (int a = 0; a < 2 * b; a++)
//            {
//                printf(" ");
//            }
//            for (int c = 0; c <= n - b; c++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int d = n; d >= 1; d--)
//        {
//            for (int e = 0; e < (n + 1 - d) * 2; e++)
//            {
//                printf(" ");
//            }
//            for (int f = 0; f < d; f++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int num;
//    int i, j, k;
//    while (scanf("%d", &num) != EOF)
//        //�����ͼ�����м�ֿ� �ϲ���һ����ѭ�� �²���һ��ѭ��
//    {
//        for (i = 0; i <= num; i++)//�ϲ���ѭ���Ӵ˿�ʼ  �˴�ȷ�����ϲ���ѭ��������
//        {
//            for (j = 0; j < num - i; j++)//�˴�Ϊ�ȿ�ʼ��ӡ�ո�
//            {
//                printf("  ");
//            }
//            for (k = 0; k <= i; k++)//�˴���ӡͼ��*
//            {
//                printf("*");
//            }
//            printf("\n");//����һ�δ�ѭ����� ��ӡ��һ�е�ͼ�� �ڴ˻���
//        }
//        for (i = 0; i < num; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (k = 0; k < num - i; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    while ((scanf("%d", &a)) == 1)
//    {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == j || i == a - j - 1)printf("*");
//                else printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            if (a == 1 || a == n)
//            {
//                for (int b = 0; b < n; b++)
//                {
//                    printf("* ");
//                }
//            }
//            else
//            {
//                for (int c = 1; c <= n; c++)
//                {
//                    if (c == 1 || c == n)printf("* ");
//                    else printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            if (a == n)
//            {
//                for (int b = 0; b < n; b++)
//                {
//                    printf("* ");
//                }
//            }
//            else
//            {
//                for (int c = 1; c <= n; c++)
//                {
//                    if (c == 1 || c == a)
//                    {
//                        printf("* ");
//                    }
//                    else printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
 

//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) == 1)
//    {
//        for (int a = 1; a <= n; a++)
//        {
//            for (int b = 1; b <= a; b++)
//            {
//                printf("%d ", b);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int c = 1; 
//    int n = 0; 
//    scanf("%d", &n);
//    int d = 3 * n; 
//    for (int i = 1; i <= n; i++)
//    {
//        for (int a = d - 1; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++) 
//        {
//            printf("*     "); 
//        }
//        printf("\n");
//        for (int a = d - 2; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//        for (int a = d - 3; a > 0; a--) 
//        {
//            printf(" ");
//        }
//        for (int k = 1; k <= i; k++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//        d = d - 3;
//    }
//    while (c <= n)
//    {
//        for (int i = 1; i <= (6 * n - 1) / 2; i++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//        c++;
//    }
//    return 0;
//}





//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int m = n;
//    for (int a = 0; a < n; a++)
//    {
//        for (int d = 0; d < 2 + 3 * (n-a - 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("*     ");
//        }
//        printf("\n");
//        for (int d = 1; d < 2 + 3 * (n-a - 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("* *   ");
//        }
//        printf("\n");
//        for (int d = 2; d < 2 + 3 * (n -a- 1); d++)
//        {
//            printf(" ");
//        }
//        for (int b = 0; b <= a; b++)
//        {
//            printf("* * * ");
//        }
//        printf("\n");
//    }
//    for (int c = 0; c < n; c++)
//    {
//        for (int f = 0; f < 2 + 3 * (n - 1); f++)
//        {
//            printf(" ");
//        }
//        printf("*\n");
//
//    }
//    return 0;
//}


////�����е������ν������帴��
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    char arr[800][800] = { 0 };
//    int n = 0;
//    scanf("%d", &n);
//    int y = 3 * pow(2, n - 1) - 1;//y��ʾ�����ڵ�һ�е��±�ֵ
//    arr[0][y] = '*';
//    arr[1][y - 1] = '*';
//    arr[1][y + 1] = '*';
//    arr[2][y - 2] = '*';
//    arr[2][y + 2] = '*';
//    arr[2][y] = '*';
//    //��һ��ѭ������[���������С��������]��ֵ����Ӧ��[���µ�������]λ�ú�[���µ�������]λ��
//    //����еڶ���ѭ��������[����С�����ι��ɵ�������]��ֵ�����º����¡�
//    for (int i = 1; i < n; i++)//n��ʾ����n-1��
//    {
//        int rang = (3 * pow(2, i - 1) - 1);
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
//            }
//        }
//        for (int x1 = 0; x1 <= rang; x1++)
//        {
//            for (int y1 = y - rang; y1 <= y + rang; y1++)
//            {
//                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
//            }
//        }
//    }
//    //��ӡ��Ҷ
//    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
//    {
//        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
//        {
//            if (arr[i][j] == '*')
//                printf("%c", arr[i][j]);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    //��ӡ����
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < y; j++)
//            printf(" ");
//        printf("*\n");
//    }
//    return 0;
//}


// �����ܣ����������nֵ�������ɶ�������θ�����϶��ɵķ���ͼ��������л����˹�������Σ�
#include<stdio.h>
#include<math.h>  // ����pow���������ݴη�
int main()
{
    char arr[800][800] = { 0 };  // ����800x800���ַ����飬���ڴ洢ͼ������ʼ��Ϊ0�����ַ���
    int n = 0;                   // �洢�û�����ĸ��ƴ�������
    scanf("%d", &n);             // �Ӽ��̶�ȡnֵ���������εĸ��Ӷ�

    // ������������ζ����ڵ�һ�е�������
    // ��ʽ�Ƶ���ÿ�θ��ƺ��ȷ�����1��n=1ʱ�����ڵ�2��(0��ʼ)��n=2ʱ�ڵ�5�У��Դ�����
    int y = 3 * pow(2, n - 1) - 1;

    // ��ʼ���������С�����Σ�n=1ʱ��ͼ����
    arr[0][y] = '*';                  // ��0��y�з��ö���
    arr[1][y - 1] = '*';              // ��1��y-1�з������
    arr[1][y + 1] = '*';              // ��1��y+1�з����ҵ�
    arr[2][y - 2] = '*';              // ��2��y-2�з������µ�
    arr[2][y + 2] = '*';              // ��2��y+2�з������µ�
    arr[2][y] = '*';                  // ��2��y�з����е�

    // ѭ�����������Σ�������n-1�Σ�n=1ʱ������ѭ����
    // ÿ��ѭ������ǰ���е������θ��Ƶ����º�����λ�ã��γɸ���ķ��νṹ
    for (int i = 1; i < n; i++)
    {
        // ���㵱ǰ�����εķ�Χ���߶ȺͿ�ȣ�
        // rangֵΪ��ǰ�����ε��������������0��ʼ����Ҳ���ڵױ߰��
        int rang = (3 * pow(2, i - 1) - 1);

        // ���Ƶ�ǰ�����ε�����λ��
        // x1������ǰ�����ε��У�0��rang��
        for (int x1 = 0; x1 <= rang; x1++)
        {
            // y1������ǰ�����ε��У���y-rang��y+rang��
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                // ����ǰλ�õ��ַ����Ƶ�����λ��
                // �������꣺ԭ�� + rang + 1������rang+1�У�
                // �������꣺ԭ�� - rang - 1������rang+1�У�
                arr[x1 + rang + 1][y1 - rang - 1] = arr[x1][y1];
            }
        }

        // ���Ƶ�ǰ�����ε�����λ��
        for (int x1 = 0; x1 <= rang; x1++)
        {
            for (int y1 = y - rang; y1 <= y + rang; y1++)
            {
                // ����ǰλ�õ��ַ����Ƶ�����λ��
                // �������꣺ԭ�� + rang + 1������rang+1�У�
                // �������꣺ԭ�� + rang + 1������rang+1�У�
                arr[x1 + rang + 1][y1 + rang + 1] = arr[x1][y1];
            }
        }
    }

    // ��ӡ������ͼ������Ҷ���֣�
    // ���ѭ��������������0�������������3*2^(n-1)-1��
    for (int i = 0; i <= 3 * pow(2, n - 1) - 1; i++)
    {
        // �ڲ�ѭ��������������0�������������3*2^n - 2��
        for (int j = 0; j <= 3 * pow(2, n) - 2; j++)
        {
            if (arr[i][j] == '*')  // �����������'*'�����ӡ�Ǻ�
                printf("%c", arr[i][j]);
            else                   // �����ӡ�ո�
                printf(" ");
        }
        printf("\n");  // һ�д�ӡ�����
    }

    // ��ӡ���ɲ���
    // ����ӡn������
    for (int i = 0; i < n; i++)
    {
        // ��ӡ����ǰ�Ŀո�ʹ���ɾ��У�
        for (int j = 0; j < y; j++)
            printf(" ");
        printf("*\n");  // ��ӡ���ɵ�һ���ǺŲ�����
    }

    return 0;  // ������������
}
