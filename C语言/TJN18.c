#define _CRT_SECURE_NO_WARNINGS
   
//
//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int sum1 = 0;
//        int a = 0;
//        for (int i = 0; i < 17; i++)
//        {
//            scanf("%d", &a);
//            int sum2 = 1;
//            for (int j = 0; j < i; j++)
//            {
//                sum2 *= 2;
//            }
//            sum1 = sum1 + a * sum2;
//        }
//        scanf("%d", &a);
//
//        if (a > 9) a = 10;
//        int sum3 = 1;
//        for (int j = 0; j < 18; j++)
//        {
//            sum3 *= 2;
//        }
//        sum1 += sum3;
//        if (sum1 % 11 == 1) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <math.h>
//
//void swap(int& x, int& y) {
//    int t;
//    t = x, x = y, y = t;
//}
//
//int main()
//{
//    int K, x, y, z;
//    scanf("%d", &K);
//    while (K--)
//    {
//        scanf("%d %d", &x, &y);
//        if (x == y) { puts("None"); continue; }      // ����������û�й�����
//        if (x > y)   swap(x, y);
//        x *= x, y *= y;
//
//        z = y - x;
//        z = sqrt(z);
//        if ((z * z) == (y - x)) { printf("%d\n", z); continue; }  // z��ֱ�Ǳ�
//        z = y + x;
//        z = sqrt(z);
//        if ((z * z) == (y + x)) { printf("%d\n", z); continue; }  // z��б��
//        puts("None");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int a, b, c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b);
//        //����Ϊб��
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b) c = c2;
//        //bΪб��
//        int d2 = sqrt(b * b - a * a);
//        if (d2 * d2 == b * b - a * a) d = d2;
//        //aΪб��
//        int e2 = sqrt(a * a - b * b);
//        if (e2 * e2 == a * a - b * b) e = e2;
//        if (c == 0 && d == 0 && e == 0)
//        {
//            printf("None\n");
//            continue;
//        }
//        else
//        {
//            int t = 100000;
//            if (c < t) t = c;
//            if (d < t) t = d;
//            if (e < t) t = e;
//            printf("%d\n", t);
//        }
//    }
//    return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    int a, b;
//    scanf("%d", &K);
//    while (K--)
//    { 
//        int c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b); 
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b)
//            c = c2; 
//        if (b > a) 
//        {  
//            int d2 = sqrt(b * b - a * a);
//            if (d2 * d2 == b * b - a * a)
//                d = d2;
//        } 
//        if (a > b) 
//        {  
//            int e2 = sqrt(a * a - b * b);
//            if (e2 * e2 == a * a - b * b)
//                e = e2;
//        } 
//        int arr[3] = { 0 };
//        int count = 0;
//        if (c != 0) arr[count++] = c;
//        if (d != 0) arr[count++] = d;
//        if (e != 0) arr[count++] = e;
//        if (count == 0) 
//        {
//            printf("None\n");
//        }
//        else 
//        { 
//            int min = arr[0];
//            for (int i = 1; i < count; i++) 
//            {
//                if (arr[i] < min)
//                {
//                    min = arr[i];
//                }
//            }
//            printf("%d\n", min);
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h> 
//int main()
//{
//	char c;
//	while (scanf("%c", &c) ==1 && c != '#') 
//	{
//		int n = c - 'A' + 1;
//		char matrix[60][60]; 
//		for (int l = 1; l <= n; l++)
//		{
//			matrix[l][1] = c - l + 1; 
//		}
//		for (int l = 1; l <= n; l++)
//		{
//			int flag = 0; 
//			for (int col = 2; col <= n; col++) 
//			{ 
//				if (matrix[l][col - 1] == c || flag == 1) 
//				{
//					matrix[l][col] = matrix[l][col - 1] - 1;
//					flag = 1;
//				}
//				else if (matrix[l][col - 1] == 'A') 
//				{
//					matrix[l][col] = matrix[l][col - 1] + 1;
//					flag = 0;
//				}
//				else
//				{
//					matrix[l][col] = matrix[l][col - 1] + 1;
//				}
//
//			}
//		}
//		for (int l = n + 1; l < 2 * n; l++) 
//		{
//			for (int col = 1; col <= n; col++) 
//			{ 
//				matrix[l][col] = matrix[2 * n - l][col];
//			}
//		}
//		for (int col = n + 1; col < 2 * n; col++) 
//		{
//			for (int l = 1; l < 2 * n; l++)
//			{
//				matrix[l][col] = matrix[l][2 * n - col];
//			}
//		}
//		for (int l = 1; l < 2 * n; l++)
//		{
//			for (int col = 1; col < 2 * n; col++)
//			{
//				printf("%c", matrix[l][col]);
//			}
//			printf("\n");
//		}
//	}
//}
//
//#include<stdio.h>   // ������׼��������⣬���������������
//#include<math.h>    // ������ѧ�⣬��Ȼ������δֱ��ʹ����ѧ���������������ں�����չ
//
//int main()          // ���������������ڵ�
//{
//    char c;         // �����ַ�����c�����ڴ洢������ַ�
//
//    // ѭ����ȡ�ַ���ֱ�������ļ�������(EOF)������'#'Ϊֹ
//    while (scanf("%c", &c) != EOF && c != '#')
//    {
//        // ����n��ֵ����������'A'ʱn=1��'B'ʱn=2���Դ�����
//        int n = c - 'A' + 1;
//
//        // ����һ��60x60���ַ��������ڴ洢Ҫ������ַ�ͼ��
//        char matrix[60][60];
//
//        // ��һ�׶Σ�������ĵ�һ�У�1��n�У�
//        for (int l = 1; l <= n; l++)
//        {
//            // ��һ�е�l�е��ַ�Ϊ�������ַ�c��ȥ(l-1)������c='C'��l=1ʱΪ'C'��l=2ʱΪ'B'
//            matrix[l][1] = c - l + 1;
//        }
//
//        // �ڶ��׶Σ�������ĵ�1��n�У��ӵ�2�е���n��
//        for (int l = 1; l <= n; l++)
//        {
//            int flag = 0;  // ��־λ��0��ʾ�ַ����ڵ����׶Σ�1��ʾ�ѿ�ʼ�ݼ�
//
//            // �ӵ�2�п�ʼ��䵽��n��
//            for (int col = 2; col <= n; col++)
//            {
//                // ���ǰһ��������ַ��������c���������Ѿ���ʼ�ݼ�
//                if (matrix[l][col - 1] == c || flag == 1)
//                {
//                    // ��ǰ���ַ�Ϊǰһ���ַ���1���ݼ���
//                    matrix[l][col] = matrix[l][col - 1] - 1;
//                    flag = 1;  // ���Ϊ�ѿ�ʼ�ݼ�
//                }
//                // ���ǰһ����'A'����С�ַ���
//                else if (matrix[l][col - 1] == 'A')
//                {
//                    // ��ǰ���ַ�Ϊǰһ���ַ���1����ʼ������
//                    matrix[l][col] = matrix[l][col - 1] + 1;
//                    flag = 0;  // ���Ϊ�����׶�
//                }
//                // ���������Ĭ�ϴ��ڵ����׶Σ�
//                else
//                {
//                    // ��ǰ���ַ�Ϊǰһ���ַ���1
//                    matrix[l][col] = matrix[l][col - 1] + 1;
//                }
//            }
//        }
//
//        // �����׶Σ������жԳ����n+1��2n-1�У��ϰ벿�־����°벿�֣�
//        for (int l = n + 1; l < 2 * n; l++)
//        {
//            for (int col = 1; col <= n; col++)
//            {
//                // ��l�е��������(2n-l)����ͬ���Գ��У�
//                matrix[l][col] = matrix[2 * n - l][col];
//            }
//        }
//
//        // ���Ľ׶Σ������жԳ����n+1��2n-1�У���벿�־����Ұ벿�֣�
//        for (int col = n + 1; col < 2 * n; col++)
//        {
//            for (int l = 1; l < 2 * n; l++)
//            {
//                // ��col�е��������(2n-col)����ͬ���Գ��У�
//                matrix[l][col] = matrix[l][2 * n - col];
//            }
//        }
//
//        // �����������2n-1�У�2n-1�У�
//        for (int l = 1; l < 2 * n; l++)
//        {
//            for (int col = 1; col < 2 * n; col++)
//            {
//                printf("%c", matrix[l][col]);  // ��ӡÿ���ַ�
//            }
//            printf("\n");  // ÿ�н�������
//        }
//    }
//    return 0;  // ������������
//}
//
//#include <stdio.h>
//#include <string.h>  // �����ַ����������⣬����memset����
//
//int main()
//{
//    int k;
//    scanf("%d", &k);  // �ӱ�׼�����ȡ������������k
//
//    // ѭ������ÿ����������
//    while (k--)
//    {
//        int n;               // �洢��ǰ����������Ԫ�ظ���
//        int c[10];           // ���ڴ洢ȥ�غ��Ԫ��
//        memset(c, 0, sizeof(c));  // ������c������Ԫ�س�ʼ��Ϊ0
//
//        int m, j = 0, sum = 1;  // m��ʱ�洢����Ԫ�أ�j����ѭ����sum��¼��ͬԪ�ص�����
//        scanf("%d", &n);        // ��ȡ��ǰ����������Ԫ�ظ���n
//        scanf("%d", &m);        // ��ȡ��һ��Ԫ��
//        c[0] = m;               // ����һ��Ԫ�ش�������c�ĵ�һ��λ��
//
//        // ѭ����ȡʣ���n-1��Ԫ�أ�������ȥ�ش���
//        for (int i = 1; i < n; i++)
//        {
//            scanf("%d", &m);  // ��ȡ��һ��Ԫ��
//
//            // ֻ��������4�ֲ�ͬԪ�ص����
//            if (sum <= 4)
//            {
//                // ��鵱ǰԪ��m�Ƿ��Ѵ���������c��
//                for (j = 0; j < sum; j++)
//                {
//                    if (m == c[j])  // ����ҵ���ͬԪ�أ�����ѭ��
//                        break;
//                }
//
//                // ���û���ҵ���ͬԪ�أ�j���ڵ�ǰ��ͬԪ�ص�������
//                if (j >= sum)
//                {
//                    c[sum] = m;  // ����Ԫ�ش�������c
//                    sum++;       // ��ͬԪ�ص�������1
//                }
//            }
//        }
//
//        // ���ݲ�ͬԪ�ص������ж�������
//        if (sum <= 3)
//        {
//            printf("Yes\n");  // ��ͬԪ������������3�����Yes
//        }
//        else if (sum == 4)
//        {
//            // ���4��Ԫ���Ƿ��ֳܷ����飬ÿ��ĺ����
//            if (c[0] + c[1] == c[2] + c[3] ||
//                c[0] + c[2] == c[1] + c[3] ||
//                c[0] + c[3] == c[1] + c[2])
//            {
//                printf("Yes\n");  // �������������Yes
//            }
//            else
//            {
//                printf("No\n");   // ���������������No
//            }
//        }
//        else
//        {
//            printf("No\n");  // ��ͬԪ����������4�����No
//        }
//    }
//    return 0;  // ������������
//}
 

//
//#include <stdio.h>
//#include <stdlib.h> 
//int n, t;
//int num[5]; 
//int cmp1(const void* p1, const void* p2) 
//{          
//    return *(int*)p1 - *(int*)p2;
//}  
//void exchange()                                  
//{
//    for (int i = 0; i < 4; i++)
//    {
//        num[i] = n % 10;
//        n /= 10;
//    }
//} 
//int rise()
//{
//    qsort(num, 4, sizeof(num[0]), cmp1);             
//    t = 0;
//    for (int k = 0; k < 4; k++)                 
//        t = t * 10 + num[k];
//    return t;
//}
//int drop()
//{
//    t = 0;
//    for (int k = 3; k >= 0; k--)                 
//        t = t * 10 + num[k];
//    return t;
//} 
//void solve()
//{
//    exchange();
//    int A = rise();
//    int B = drop();
//    n = B - A;
//} 
//int main()
//{
//    while (scanf("%d", &n) ==1 && n != 0)
//    {
//        int cnt = 0;
//        while (n != 6174)
//        {
//            solve();
//            cnt++;
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
//}
 


//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* (arr) = (int*)malloc((n + 1) * sizeof(int));
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int l, r, d;
//    for (int i = 1; i <= m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d);
//        for (int j = l; j <= r; j++)
//        {
//            arr[j] += d;
//        }
//    }
//    int count = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            count += arr[j];
//        }
//        printf(" %d", count);
//    }
//    printf("\n");
//    free(arr);
//    return 0;
//}

//
//#include <stdio.h>  // ������׼��������⣬���������������
//#include<>
//// ����һ������kSum��ֵΪ81�������޶����ҷ�Χ
//const int kSum = 81;
//
//// ����һ��Max���������ڷ������������еĽϴ�ֵ
//int Max(int x, int y) {
//    return x < y ? y : x;  // ʹ����Ŀ�����ʵ�֣����xС��y�򷵻�y�����򷵻�x
//}
//
//int main()
//{
//    int K, n;  // ��������K(������������)��n(���жϵ�����)
//    scanf("%d", &K);  // �ӱ�׼�����ȡK��ֵ
//
//    // ѭ������K������������ÿ��ѭ����K��ֵ��1��ֱ��KΪ0
//    while (K--)
//    {
//        bool flag = true;  // ������־����flag����ʼ��Ϊtrue����ʾĬ�Ͻ��Ϊ"Yes"
//        scanf("%d", &n);  // �ӱ�׼�����ȡ��ǰ��������������n
//
//        // ѭ�������Ƿ���ڷ���������i��i����ʼֵΪ0��n-kSum�еĽϴ�ֵ������ֵΪn-1
//        // �������Ʒ�Χ����Ϊһ�����ĸ�λ����֮����󲻻ᳬ��81(���ڽϴ����)
//        for (int i = Max(0, n - kSum); i < n; i++)
//        {
//            int t = i, iSum = 0;  // t������ʱ�洢i��ֵ��iSum���ڼ���i�ĸ�λ����֮��
//
//            // ����i�ĸ�λ����֮��
//            while (t) {
//                iSum += (t % 10);  // ȡt�����һλ���ֲ��ӵ�iSum
//                t /= 10;  // ȥ��t�����һλ����
//            }
//
//            // ������i�������ĸ�λ����֮�͵���n����˵��n����"������"
//            if (i + iSum == n) {
//                flag = false;  // ����־��Ϊfalse
//                break;  // ����ѭ���������������
//            }
//        }
//
//        // ����flag��ֵ������
//        if (flag) puts("Yes");  // ���flagΪtrue�����"Yes"��ʾn��������
//        else puts("No");  // �������"No"��ʾn����������
//    }
//    return 0;  // ������������
//}
//
//
//#include <stdio.h>
//#include <stdbool.h>
//
//// �������b�Ƿ�������a����ת
//bool isRotation(int* a, int* b, int n) {
//    // ��aƴ�ӳ��������ȣ����ڼ�����п��ܵ���ת
//    int* temp = (int*)malloc(2 * n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        temp[i] = a[i];
//        temp[i + n] = a[i];
//    }
//
//    // ������п��ܵ���ת
//    for (int i = 0; i < n; i++) {
//        bool match = true;
//        for (int j = 0; j < n; j++) {
//            if (temp[i + j] != b[j]) {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            free(temp);
//            return true;
//        }
//    }
//
//    free(temp);
//    return false;
//}
//
//// ��������a�ķ�ת�汾
//void reverseNecklace(int* a, int* reversed, int n) {
//    for (int i = 0; i < n; i++) {
//        reversed[i] = a[n - 1 - i];
//    }
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
//        int* A = (int*)malloc(n * sizeof(int));
//        int* B = (int*)malloc(n * sizeof(int));
//
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &A[i]);
//        }
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &B[i]);
//        }
//
//        // ���A��������ת�Ƿ���Bƥ��
//        bool result = isRotation(A, B, n);
//
//        // �����ƥ�䣬���A�ķ�ת���������ת�Ƿ���Bƥ��
//        if (!result) {
//            int* reversedA = (int*)malloc(n * sizeof(int));
//            reverseNecklace(A, reversedA, n);
//            result = isRotation(reversedA, B, n);
//            free(reversedA);
//        }
//
//        printf("%s\n", result ? "Yes" : "No");
//
//        free(A);
//        free(B);
//    }
//
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h>
//
//// �ж����������Ƿ���ͬ��������ת�ͷ�ת
//int isSameNecklace(int* a, int* b, int n) {
//    // �������п��ܵ���ת
//    for (int i = 0; i < n; i++) {
//        // ��鵱ǰ��ת�Ƿ�ƥ��
//        int match = 1;
//        for (int j = 0; j < n; j++) {
//            if (a[(i + j) % n] != b[j]) {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return 1;
//
//        // ��鷭ת�����ת�Ƿ�ƥ��
//        match = 1;
//        for (int j = 0; j < n; j++) {
//            if (a[(i + j) % n] != b[n - 1 - j]) {
//                match = 0;
//                break;
//            }
//        }
//        if (match) return 1;
//    }
//    return 0;
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
//        int a[1000], b[1000];
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &a[i]);
//        }
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &b[i]);
//        }
//
//        if (isSameNecklace(a, b, n)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>  
//
//#include<stdio.h>
//#include<math.h>
//char str[20];
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	while (n--) 
//	{
//		scanf("%s", str);
//		int sum = 0;
//		for (int i = 0, j = 17; i <= 17; i++, j--) 
//		{ 
//			if (str[i] == 'X') str[i] = 10 + '0';
//			sum += (str[i] - '0') * pow(2, j);
//		}
//		if (sum % 11 == 1)    printf("Yes\n");
//		else printf("No\n");
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int K;
//    int a, b;
//    scanf("%d", &K);
//    while (K--)
//    {
//        // ÿ��ѭ�������³�ʼ������
//        int c = 0, d = 0, e = 0;
//        scanf("%d %d", &a, &b);
//
//        // ����Ϊб�ߣ�a��bΪֱ�Ǳߣ�
//        int c2 = sqrt(a * a + b * b);
//        if (c2 * c2 == a * a + b * b)
//            c = c2;
//
//        // bΪб�ߣ�aΪֱ�Ǳߣ�����һֱ�Ǳߣ�
//        if (b > a) {  // ȷ��б�ߴ���ֱ�Ǳ�
//            int d2 = sqrt(b * b - a * a);
//            if (d2 * d2 == b * b - a * a)
//                d = d2;
//        }
//
//        // aΪб�ߣ�bΪֱ�Ǳߣ�����һֱ�Ǳߣ�
//        if (a > b) {  // ȷ��б�ߴ���ֱ�Ǳ�
//            int e2 = sqrt(a * a - b * b);
//            if (e2 * e2 == a * a - b * b)
//                e = e2;
//        }
//
//        // �ռ�������Ч��
//        int solutions[3] = { 0 };
//        int count = 0;
//        if (c != 0) solutions[count++] = c;
//        if (d != 0) solutions[count++] = d;
//        if (e != 0) solutions[count++] = e;
//
//        if (count == 0) {
//            printf("None\n");
//        }
//        else {
//            // �ҵ���С��
//            int min = solutions[0];
//            for (int i = 1; i < count; i++) {
//                if (solutions[i] < min) {
//                    min = solutions[i];
//                }
//            }
//            printf("%d\n", min);
//        }
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
//		int n, sum = 1, m, arr[5];
//		scanf("%d", &n);
//		scanf("%d", &m);
//		int j=0;
//		arr[1] = m;
//		for (int i = 1; i < n; i++)
//		{
//			scanf("%d", &m);
//			if (sum <= 4)
//			{
//				for ( j = 1; j <= sum; j++)
//				{
//					if (arr[j] == m) break;
//				}
//				if (j > sum)
//				{
//					arr[j] = m;
//					sum++;
//				}
//			} 
//		} 
//		if (sum <= 3) printf("Yes\n");
//		else if (sum == 4)
//		{
//			if (arr[1] + arr[2] == arr[3] + arr[4] ||
//				arr[1] + arr[3] == arr[2] + arr[4] ||
//				arr[1] + arr[4] == arr[2] + arr[3])
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("No\n");
//			}
//		}
//		else printf("No\n");
//	}
//	return 0;
//}


//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int n, t;
//int num[5];
//
//int cmp1(const void* p1, const void* p2) {         // ����
//    return *(int*)p1 - *(int*)p2;
//}
//
//void exchange()                                   // ����������λ���ֽ�,��������
//{
//    for (int i = 0; i < 4; i++)
//    {
//        num[i] = n % 10;
//        n /= 10;
//    }
//}
//
//int rise()
//{
//    qsort(num, 4, sizeof(num[0]), cmp1);             // ���� (����) 
//    t = 0;
//    for (int k = 0; k < 4; k++)                  // ��ԭ��Сֵ
//        t = t * 10 + num[k];
//    return t;
//}
//int drop()
//{
//    t = 0;
//    for (int k = 3; k >= 0; k--)                  // ��ԭ���ֵ
//        t = t * 10 + num[k];
//    return t;
//}
//
//void solve()
//{
//    exchange();
//    int A = rise();
//    int B = drop();
//    n = B - A;
//}
//
//int main()
//{
//    while (scanf("%d", &n) != EOF && n != 0)
//    {
//        int cnt = 0;
//        while (n != 6174)
//        {
//            solve();
//            cnt++;
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
////}
//
//#include <stdio.h>   // �����׼���������
//#include <stdlib.h>  // �����׼�⣬����qsort�Ⱥ���
//
//// ȫ�ֱ�������
//int n, t;           // n���ڴ洢��ǰ����λ����t������ʱ����
//int num[5];         // ���ڴ洢��λ���ֽ��ĸ�������
//
//// �ȽϺ���������qsort������������
//// ����Ϊ����voidָ�룬��Ҫת��Ϊintָ���ȡֵ�Ƚ�
//int cmp1(const void* p1, const void* p2) {
//    return *(int*)p1 - *(int*)p2;  // �������У�ǰ�߼����ߣ������򽻻�
//}
//
//// ���ܣ�����λ��n�ֽ�Ϊ�������֣��洢��num������
//void exchange() {
//    for (int i = 0; i < 4; i++) {    // ѭ��4�Σ���ȡ�ĸ�����
//        num[i] = n % 10;             // ȡn�����һλ����
//        n /= 10;                     // �Ƴ�n�����һλ����
//    }
//}
//
//// ���ܣ����ֽ��������������У������С����λ��
//int rise() {
//    // ʹ��qsort��num�������������������4��Ԫ�أ�ÿ��Ԫ�ش�СΪint
//    qsort(num, 4, sizeof(num[0]), cmp1);
//    t = 0;                           // ������ʱ����t
//    for (int k = 0; k < 4; k++) {    // ѭ��4�Σ���ϳ���λ��
//        t = t * 10 + num[k];         // ���ν����ִ�������ϣ�����
//    }
//    return t;                        // ������ɵ���С��λ��
//}
//
//// ���ܣ����ֽ������ֽ������У����������λ��
//int drop() {
//    t = 0;                           // ������ʱ����t
//    for (int k = 3; k >= 0; k--) {   // ѭ��4�Σ��Ӻ���ǰȡ����
//        t = t * 10 + num[k];         // ���ν����ִ��ҵ�����ϣ�����
//    }
//    return t;                        // ������ɵ������λ��
//}
//
//// ���ܣ�ִ��һ�ο����׿������㣨�������ȥ��С����
//void solve() {
//    exchange();          // �ֽ⵱ǰ����nΪ�ĸ���������
//    int A = rise();      // ��ȡ����������ɵ���С��
//    int B = drop();      // ��ȡ����������ɵ������
//    n = B - A;           // �����ֵ������nΪ�µ���λ��
//}
//
//int main() {
//    // ѭ����ȡ�������λ����������0ʱ��������
//    while (scanf("%d", &n) != EOF && n != 0) {
//        int cnt = 0;     // ����������¼�������
//        // �ظ�ִ�п����׿������㣬ֱ�����Ϊ6174
//        while (n != 6174) {
//            solve();     // ִ��һ������
//            cnt++;       // ���������1
//        }
//        printf("%d\n", cnt);  // ����õ�6174������������
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>   
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int));  
//    for (int i = 1; i <= n; i++) 
//    {
//        scanf("%d", &arr[i]);
//    } 
//    int* diff = (int*)calloc(n + 2, sizeof(int));  
//    for (int i = 1; i <= m; i++) 
//    {
//        int l, r, d;
//        scanf("%d %d %d", &l, &r, &d);
//        diff[l] += d;      
//        diff[r + 1] -= d;  
//    } 
//    int add = 0;   
//    for (int i = 1; i <= n; i++) 
//    {
//        add += diff[i];
//        arr[i] += add;
//    } 
//    int count = 0;
//    for (int i = 1; i <= n; i++) 
//    {
//        count += arr[i];   
//        if (i == 1) 
//        {
//            printf("%d", count);   
//        }
//        else 
//        {
//            printf(" %d", count);
//        }
//    }
//    printf("\n"); 
//    free(arr);
//    free(diff);
//    return 0;
//}


//#include<stdio.h>      // ������׼������������⣬���������������
//#include<stdlib.h>     // ����malloc��free���ڴ������������
//
//int main()
//{
//    int n, m;          // ��������n(���鳤��)��m(��������)
//    scanf("%d %d", &n, &m);  // �ӱ�׼�����ȡn��m��ֵ
//
//    // ��̬��������ռ䣬��СΪn+2��ʹ�������Դ�1��n������Խ�磩
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    // ѭ����ȡԭʼ����Ԫ�أ�������1��n��
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);  // ��ȡ��i��Ԫ�ص�ֵ
//    }
//
//    // �����ַ����飬calloc�Ὣ����Ԫ�س�ʼ��Ϊ0����СΪn+2
//    int* diff = (int*)calloc(n + 2, sizeof(int));
//
//    // ����m��������²���
//    for (int i = 1; i <= m; i++)
//    {
//        int l, r, d;           // ��������l(��˵�)��r(�Ҷ˵�)��d(����)
//        scanf("%d %d %d", &l, &r, &d);  // ��ȡ������²���
//        diff[l] += d;          // ����˵㴦��������d
//        diff[r + 1] -= d;      // ���Ҷ˵�+1����ȥ����d������������
//    }
//
//    // Ӧ�ò�ָ���ԭ���飬�������ս��
//    int add = 0;  // �ۼƵ�ǰλ��Ӧ���ӵ�ֵ
//    for (int i = 1; i <= n; i++)
//    {
//        add += diff[i];        // �ۼӲ�������ֵ���õ���ǰλ�õ�������
//        arr[i] += add;         // ������Ӧ�õ�ԭ����Ԫ��
//    }
//
//    // ���㲢���ǰ׺�ͣ��Ż�ΪO(n)ʱ�临�Ӷȣ�
//    int count = 0;             // �����ۼ�ǰ׺��
//    for (int i = 1; i <= n; i++)
//    {
//        count += arr[i];       // �ۼӵ�ǰԪ�ص�ǰ׺���У����Ƕ��ѭ��
//        if (i == 1)
//        {
//            printf("%d", count);  // ��һ��Ԫ��ǰ�޿ո�
//        }
//        else
//        {
//            printf(" %d", count); // ����Ԫ��ǰ�ӿո�ָ�
//        }
//    }
//    printf("\n");              // ������з�
//
//    // �ͷŶ�̬������ڴ棬�����ڴ�й©
//    free(arr);
//    free(diff);
//    return 0;                  // ������������
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    // ԭ����
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    // ������飬���ڸ�Ч�����������
//    int* diff = (int*)calloc(n + 2, sizeof(int));
//
//    // ��ȡ��ʼ����
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    // ����m��������²���
//    int l, r, d;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d);
//        // ��ַ�����l����d����r+1����d
//        diff[l] += d;
//        if (r + 1 <= n)
//            diff[r + 1] -= d;
//    }
//
//    // �������յ�����
//    int* final_arr = (int*)malloc((n + 1) * sizeof(int));
//    int current_diff = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        current_diff += diff[i];
//        final_arr[i] = arr[i] + current_diff;
//    }
//
//    // ����ǰ׺�Ͳ����
//    int prefix_sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        prefix_sum += final_arr[i];
//        if (i > 1)
//            printf(" ");
//        printf("%d", prefix_sum);
//    }
//    printf("\n");
//
//    // �ͷ��ڴ�
//    free(arr);
//    free(diff);
//    free(final_arr);
//
//    return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int)); 
//    int* diff = (int*)calloc(n + 2, sizeof(int)); 
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]);
//    } 
//    int l, r, d;
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d %d %d", &l, &r, &d); 
//        diff[l] += d;
//        if (r + 1 <= n)
//            diff[r + 1] -= d;
//    } 
//    int* final_arr = (int*)malloc((n + 1) * sizeof(int));
//    int current_diff = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        current_diff += diff[i];
//        final_arr[i] = arr[i] + current_diff;
//    } 
//    int prefix_sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        prefix_sum += final_arr[i];
//        if (i > 1)
//            printf(" ");
//        printf("%d", prefix_sum);
//    }
//    printf("\n"); 
//    free(arr);
//    free(diff);
//    free(final_arr); 
//    return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m); 
//    int* arr = (int*)malloc((n + 2) * sizeof(int));
//    int* diff = (int*)calloc(n + 2, sizeof(int));   
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &arr[i]); 
//        if (i == 1) 
//        {
//            diff[i] = arr[i];
//        }
//        else 
//        {
//            diff[i] = arr[i] - arr[i - 1];
//        }
//    } 
//    for (int i = 1; i <= m; i++)
//    {
//        int l, r, d;
//        scanf("%d %d %d", &l, &r, &d);
//        diff[l] += d;           
//        if (r + 1 <= n) 
//        {
//            diff[r + 1] -= d;   
//        }
//    } 
//    long long current = 0;       
//    long long  sum = 0;     
//    for (int i = 1; i <= n; i++)
//    {
//        current += diff[i];     
//         sum += current;  
//
//        if (i == 1) {
//            printf("%lld",  sum);
//        }
//        else {
//            printf(" %lld",  sum);
//        }
//    }
//    printf("\n");
//
//    free(arr);
//    free(diff);
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
//        int n;
//        scanf("%d", &n);
//        int  flag = 0;
//        int shu = (n > 100) ? n - 100 : 1;
//        for (int k = shu; k < n; k++)
//        {
//            int k2 = k, count = 0;
//            while (k2 != 0)
//            {
//                count += k2 % 10;
//                k2 /= 10;
//            }
//            if (k + count == n)
//            {
//                printf("No\n");
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0) printf("Yes\n");
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h> 
//bool xuanzhuan(int* a, int* b, int n) 
//{  
//    int* temp = (int*)malloc(2 * n * sizeof(int));
//    for (int i = 0; i < n; i++) 
//    {
//        temp[i] = a[i];
//        temp[i + n] = a[i];
//    } 
//    for (int i = 0; i < n; i++) 
//    {
//        bool match = true;
//        for (int j = 0; j < n; j++) 
//        {
//            if (temp[i + j] != b[j]) 
//            {
//                match = false;
//                break;
//            }
//        }
//        if (match) {
//            free(temp);
//            return true;
//        }
//    } 
//    free(temp);
//    return false;
//} 
//void fanzhuan(int* a, int* xuanzhuan, int n) 
//{ 
//    for (int i = 0; i < n; i++) 
//    {
//        xuanzhuan[i] = a[(n - 1 - i + n) % n];
//    }
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
//        int* A = (int*)malloc(n * sizeof(int));
//        int* B = (int*)malloc(n * sizeof(int)); 
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &A[i]);
//        }
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &B[i]);
//        } 
//        bool result = xuanzhuan(A, B, n); 
//        if (!result) 
//        {
//            int* arr = (int*)malloc(n * sizeof(int));
//            fanzhuan(A, arr, n);
//            result = xuanzhuan(arr, B, n);
//            free(arr);
//        } 
//        printf("%s\n", result ? "Yes" : "No"); 
//        free(A);
//        free(B);
//    } 
//    return 0;
//}



#include <stdio.h>    // ������׼�������������
#include <stdbool.h>  // ����bool���Ͷ���
#include <stdlib.h>   // �����ڴ������ͷź���

// �������b�Ƿ�������a����ת
// ������a-ԭ����, b-���������, n-��������
// ����ֵ�����b��a����ת�򷵻�true,���򷵻�false
bool xuanzhuan(int* a, int* b, int n) {
    // ��aƴ�ӳ��������ȵ���ʱ���飬���ڼ�����п��ܵ���ת���
    // ����a = [1,2,3]����temp = [1,2,3,1,2,3]
    int* temp = (int*)malloc(2 * n * sizeof(int));
    // �����ʱ����
    for (int i = 0; i < n; i++) {
        temp[i] = a[i];          // ǰ�벿�ָ���a
        temp[i + n] = a[i];      // ��벿���ٴθ���a
    }

    // ������п��ܵ���ת����n�ֿ��ܣ�
    for (int i = 0; i < n; i++) {
        bool match = true;       // ����Ƿ�ƥ��
        // ����λ��i��ʼ��n��Ԫ���Ƿ���bƥ��
        for (int j = 0; j < n; j++) {
            if (temp[i + j] != b[j]) {  // ���ֲ�ƥ���Ԫ��
                match = false;          // ���Ϊ��ƥ��
                break;                  // �˳��ڲ�ѭ��
            }
        }
        if (match) {               // ����ҵ�ƥ�����ת
            free(temp);            // �ͷ���ʱ�����ڴ�
            return true;           // ����ƥ��ɹ�
        }
    }

    free(temp);    // �ͷ���ʱ�����ڴ�
    return false;  // ������ת����ƥ�䣬����ʧ��
}

// ��������a�ķ�ת�汾���ضԳ�����ת180�ȣ�
// ������a-ԭ����, xuanzhuan-�洢��ת���������, n-��������
void fanzhuan(int* a, int* xuanzhuan, int n) {
    // ���ڻ��νṹ�ķ�ת����Ԫ����������
    // (n - 1 - i + n) % n ȷ����������Ч��Χ��
    for (int i = 0; i < n; i++) {
        xuanzhuan[i] = a[(n - 1 - i + n) % n];
    }
}

int main() {
    int T;                  // ������������
    scanf("%d", &T);        // ��ȡ������������

    while (T--) {           // ѭ������ÿ����������
        int n;              // ��������
        scanf("%d", &n);    // ��ȡ��������

        // Ϊ����A��B�����ڴ�
        int* A = (int*)malloc(n * sizeof(int));
        int* B = (int*)malloc(n * sizeof(int));

        // ��ȡ����A��Ԫ��
        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
        }
        // ��ȡ����B��Ԫ��
        for (int i = 0; i < n; i++) {
            scanf("%d", &B[i]);
        }

        // ���A��������ת�Ƿ���Bƥ��
        bool result = xuanzhuan(A, B, n);

        // �����ƥ�䣬���A�ķ�ת���������ת�Ƿ���Bƥ��
        if (!result) {
            int* arr = (int*)malloc(n * sizeof(int));  // �洢A�ķ�ת���
            fanzhuan(A, arr, n);                       // ����A�ķ�ת�汾
            result = xuanzhuan(arr, B, n);             // ��鷭ת�����ת�Ƿ�ƥ��
            free(arr);                                 // �ͷŷ�ת�����ڴ�
        }
        // ������
        printf("%s\n", result ? "Yes" : "No");
        // �ͷ�����A��B���ڴ�
        free(A);
        free(B);
    }
    return 0;
}