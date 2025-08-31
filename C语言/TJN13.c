#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

//int main() 
//{ 
//	char s; int i = 0, count = 0;
//	while (scanf("%c", &s) != EOF) 
//	{ 
//		if (s != ' ' && s != '\n') count++; 
//	} 
//	printf("%d", count); 
//	return 0; 
//}



//#include <stdio.h>  
//#include<string.h>
//int main()
//{
//    char a[1000];
//    scanf("%[^\n]", a);
//    int i = 0;
//    int count = 0;
//    for (i; i < strlen(a); i++)
//    {
//        if (a[i] != ' ')
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char a[100], b[100];
//    scanf("%s  %s", a, b);
//    if (strcmp(a, b) == 0)printf("Login Success!");
//    else printf("Login Fail!");
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char a[100];
//    scanf("%s", a);
//    int max = 0, min = 10;
//    for (int b = 0; b < strlen(a); b++)
//    {
//        int sum = 0;
//        for (int c = 0; c < strlen(a); c++)
//        {
//            if (a[b] == a[c])sum++;
//        }
//        if (sum < min)min = sum;
//        if (sum > max)max = sum;
//    }
//    int m = max - min;
//    int flag = 1;
//    for (int b = 2; b < m; b++)
//    {
//        if (m % b == 0)
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (m == 1||m==0)flag = 0;
//    if (m == 2)flag = 1;
//    if (flag) printf("Lucky Word\n%d", m);
//    else printf("No Answer\n0");
//    return 0;
//}


//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char a[20];
//    scanf("%s", a);
//    for (int b = 0; b < strlen(a); b++)
//    {
//        printf("%c", a[b]);
//        if ((strlen(a) - (b + 1)) % 3 == 0 && (b + 1) != strlen(a))printf(",");
//    }
//    return 0;
//}

//
//#include <stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[100];
//    scanf("%s", &arr);
//    int count1 = 0, count2 = 0;
//    for (int a = 0; a < strlen(arr); a++)
//    {
//        if (arr[a] == 'A')count1++;
//        if (arr[a] == 'B')count2++;
//    }
//    if (count1 > count2)printf("A");
//    else if (count1 < count2)printf("B");
//    else printf("E");
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n, m;
//    char arr[101];
//    scanf("%d %d", &n, &m);
//    scanf("%s", arr);
//    int l, r;
//    char c1, c2;
//    for (int a = 0; a < m; a++)
//    {
//        scanf("%d %d %c %c", &l, &r, &c1, &c2);
//        for (int b = l-1; b <= r-1; b++)
//        {
//            if (arr[b] == c1)arr[b] = c2;
//        }
//    }
//
//    printf("%s", arr);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    char arr[100];
//    while ((scanf("%s", arr)) != 0)
//    {
//        if (arr[0] >= 65 && arr[0] <= 90)printf("%c", arr[0]);
//        else
//        {
//            arr[0] -= 32;
//            printf("%c", arr[0]);
//        }
//    }
//    return 0;
//}

//#include <stdio.h>
//int hanshu(int a, int b, int c)
//{
//    int max = 0;
//    if (a > max)max = a;
//    if (b > max)max = b;
//    if (c > max)max = c;
//    return max;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int x = hanshu(a + b, b, c);
//    int y = hanshu(a, b + c, c);
//    int z = hanshu(a, b, b + c);
//    float m = (float)x / (y + z);
//    printf("%.2f", m);
//    return 0;
//}

//#include <stdio.h>
//#include<stdlib.h>
//
//int hanshu(int arr[],int length)
//{
//    int a = 0;
//    int count = 0;
//    while (a<length)
//    {
//        while (arr[a] > 0)
//        {
//            if (arr[a] % 10 == 2)
//            {
//                count++;
//            }
//            arr[a] /= 10;
//        }
//        a++;
//    }
//    return count;
//}
//int main()
//{
//    int L, R;
//    scanf("%d %d", &L, &R);
//    int* arr = (int*)malloc((R - L + 1) * sizeof(int));
//    for (int a = L; a <= R; a++)
//    {
//        arr[a - L] = a;
//    }
//    int length = R - L + 1;
//    int x = hanshu(arr,length);
//    free(arr);
//    printf("%d", x);
//    return 0;
//}


//#include <stdio.h>
//#include<math.h>
//
//int hanshu(int i)
//{
//    if (i == 0 || i == 1)return 0;
//    else if (i>2)
//    {
//        for (int a = 2; a <= sqrt(i); a++)
//        {
//            if (i % a == 0)
//            {
//                return 0;
//            } 
//        }
//        return i;
//    }
//    else return i; 
//}
//int main()
//{
//    int l, r;
//    scanf("%d %d", &l, &r);
//    int sum = 0;
//    for (int i = l; i <= r; i++)
//    {
//        sum += hanshu(i);
//    }
//    printf("%d", sum);
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int hanshu(int sum1, int sum2)
//{
//    if (sum1 >= sum2)return(sum1 - sum2);
//    else return(sum2 - sum1);
//}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* a = (int*)malloc((n + 1) * sizeof(int));
//    int* b = (int*)malloc((m + 1) * sizeof(int));
//    int x = n, y = m;
//    int sum1 = 0;    
//    for (int i = 0; i < n; i++) 
//    {
//        scanf("%d", &a[i]);
//    } 
//    for (int i = 0; i < m; i++) 
//    {
//        scanf("%d", &b[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        sum1 += a[i];
//    }
//    int min = sum1;
//    int sum2 = 0, l, k;
//    for (int i = 0; i < m; i++)
//    {
//        sum2 = b[i];
//        for (int j = i + 1; j <= m; j++)
//        {
//            sum2 += b[j];
//            if (hanshu(sum1, sum2) < min)
//            {
//                min = hanshu(sum1, sum2);
//                l = i;
//                k = j;
//            }
//        }
//    }
//    for (int x = l; x <= k; x++)
//    {
//        printf("%d ", b[x]);
//    }
//    free(a);
//    free(b);
//    return 0;
//}





//#include <stdio.h>
//#include<math.h>
//long long huiwen(long long n)
//{
//    int a = 0;
//    long long t = n;
//    while (t != 0)
//    {
//        t /= 10;
//        a++;
//    }
//    long long b = n;
//    for (a; a > 1; a--)
//    {
//        b = (b * 10) + (n / 10 % 10);
//        n /= 10;
//    }
//    return b;
//}
//
//long long sushu(long long n)
//{
//    int b = 2;
//    if (n == 0 || n == 1)return 0;
//    else if (n == 2)return 1;
//    else
//    {
//        if (n % 2 == 0)return 0;
//        for (b = 3; b <= sqrt(n); b += 2)
//        {
//            if (n % b == 0)return 0;
//        }
//        return 1;
//    } 
//}
//int main()
//{
//    long long n;
//    scanf("%lld", &n);
//    n=huiwen(n);
//    if (sushu(n) == 1)printf("prime");
//    else printf("noprime");
//    return 0;
//}


#include <stdio.h>

int hanshu(int arr[], int n)
{
    int b, max = 0;
    for (int a = 0; a < n; a++)
    {
        b = sqrt(arr[a]);
        if (b * b != arr[a])
        {
            if (arr[a] > max)
            {
                max = arr[a];
            }
        }
        return max;
    }
}
int main()
{
    int n,b;
    scanf("%d", &n);
    b = n;
    int arr[1001];
    while (b--)
    {
        scanf("%d", arr);
    }
    int a = hanshu(arr, n);
    printf("%d", a);
    return 0;
}
