#define _CRT_SECURE_NO_WARNINGS 



//#include<stdio.h>
//#define N 5000005
//int a[N] = { 0 };
//int f[N] = { 0 };
//void hanshu2()
//{
//	int i, j;
//	a[0] = 1, a[1] = 1;
//	for (i = 2; i < N; i++)
//	{
//		if (a[i] == 0)
//		{
//			for (j = 2 * i; j < N; j += i)
//			{
//				a[j] = 1;
//			}
//		}
//	}
//	for (i = 1; i < N; i++)
//	{
//		if (a[i] == 0 && a[i + 2] == 0)
//		{
//			f[i + 2] = 1;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		f[i] += f[i - 1];
//	}
//}
//void hanshu()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", f[b] - f[a + 1]);
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	hanshu2();
//	while (T--)
//	{
//		hanshu();
//	}
//	return 0;
//}





//#include<stdio.h>
//// ������׼��������⣬���������������
//
//#define N 5000005
//// �����NΪ5000005����Ϊ����Ĵ�С��������Ŀ�������ܵ���ֵ5000000
//
//int a[N] = { 0 };
//// ����һ������a�����ڱ�������Ƿ�Ϊ������0��ʾ������1��ʾ������
//
//int f[N] = { 0 };
//// ����һ������f�����ڴ洢���������Ե�ǰ׺�ͣ����ڿ��ٲ�ѯ
//
//void hanshu2()
//// ����hanshu2��Ԥ��������������������Ϣ
//{
//    int i, j;
//    a[0] = 1, a[1] = 1;  // 0��1�������������Ϊ1
//
//    // ����ɸ��ɸѡ����
//    for (i = 2; i < N; i++)
//    {
//        if (a[i] == 0)  // ���i������
//        {
//            // ��i�����б������Ϊ������
//            for (j = 2 * i; j < N; j += i)
//            {
//                a[j] = 1;
//            }
//        }
//    }
//
//    // �������������
//    for (i = 1; i < N; i++)
//    {
//        // ���i��i+2��������������i+2λ��Ϊ1����ʾ��������������(i, i+2)��
//        if (a[i] == 0 && a[i + 2] == 0)
//        {
//            f[i + 2] = 1;
//        }
//    }
//
//    // ����ǰ׺�ͣ����ڿ��ٲ�ѯ�����ڵ���������������
//    for (i = 0; i < N; i++)
//    {
//        f[i] += f[i - 1];  // f[i]��ʾ��0��i����������������
//    }
//}
//
//void hanshu()
//// ����hanshu��������������������ѯ��������
//{
//    int a, b;
//    scanf("%d%d", &a, &b);  // ��ȡ����[a, b]
//
//    // �������[a, b]�ڵ���������������
//    // f[b]��0��b������������������f[a+1]��0��a+1����������������
//    // ��������õ�����[a, b]�ڵ���������������
//    printf("%d\n", f[b] - f[a + 1]);
//}
//
//int main()
//// ���������������
//{
//    int T;
//    scanf("%d", &T);  // ��ȡ��������������
//
//    hanshu2();  // Ԥ��������������������Ϣ
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        hanshu();
//    }
//
//    return 0;
//}







//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b, c, y, flag = 0;
//        scanf("%d %d %d", &a, &b, &c); 
//        int n = c + a * b;
//        for (int x = 0; (x+b)*a<=(c+a*b); x++)
//        {
//            if ((c+a*b)%(x+b) == 0)
//            {
//                y = (c+a*b) / (x+b)-a;
//                printf("%d %d\n", x, y);
//                flag = 1;
//                continue;
//            }
//            else continue;
//        }
//        if (flag == 0) printf("0\n");
//    }
//    return 0;
//}
//
//
//
// 







//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h> 
//typedef struct
//{
//    int x;
//    int y;
//} Solution;
//int compare(const void* a, const void* b)
//{
//    Solution* s1 = (Solution*)a;
//    Solution* s2 = (Solution*)b;
//    return s1->x - s2->x;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        long long product = (long long)c + (long long)a * b;
//        Solution solutions[100000];
//        int count = 0;
//        for (long long i = 1; i * i <= product; i++)
//        {
//            if (product % i == 0)
//            {
//                if (i >= b)
//                {
//                    long long y_val = product / i - a;
//                    if (y_val >= 0)
//                    {
//                        solutions[count].x = i - b;
//                        solutions[count].y = y_val;
//                        count++;
//                    }
//                }
//                long long j = product / i;
//                if (j != i && j >= b)
//                {
//                    long long y_val = i - a;
//                    if (y_val >= 0)
//                    {
//                        solutions[count].x = j - b;
//                        solutions[count].y = y_val;
//                        count++;
//                    }
//                }
//            }
//        }
//        qsort(solutions, count, sizeof(Solution), compare);
//        printf("%d\n", count);
//        for (int i = 0; i < count; i++)
//        {
//            printf("%d %d\n", solutions[i].x, solutions[i].y);
//        }
//    }
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>  
//typedef struct
//{
//    int x;
//    int y;
//} Solution; 
//int compare( void* a,   void* b)
//{ 
//    Solution* s1 = (Solution*)a;
//    Solution* s2 = (Solution*)b; 
//    return s1->x - s2->x;
//} 
//int main()
//{
//    int T;                  
//    scanf("%d", &T); 
//    while (T--)
//    {
//        long long  a, b, c;
//        scanf("%lld %lld %lld", &a, &b, &c);   
//        long long n =  c +  a * b; 
//        Solution s [100000];  
//        int count = 0;       
//        for (long long i = 1; i * i <= n; i++)
//        {  
//            if (n % i == 0)
//            { 
//                if (i >= b)
//                { 
//                    long long y0 = n/ i - a; 
//                    if (y0 >= 0)
//                    { 
//                        s [count].x = i - b;
//                        s [count].y = y0;
//                        count++;
//                    }
//                } 
//                long long j = n / i;
//                if (j != i && j >= b)
//                { 
//                    long long y0 = i - a;
//                    if (y0 >= 0)
//                    { 
//                        s [count].x = j - b;
//                        s [count].y = y0;
//                        count++;
//                    }
//                }
//            }
//        } 
//        qsort(s , count, sizeof(Solution), compare); 
//        printf("%d\n", count); 
//        for (int i = 0; i < count; i++)
//        {
//            printf("%d %d\n", s [i].x, s [i].y);
//        }
//    }
//    return 0;
//}










//#include<stdio.h>
//#include<string.h>
//
//int main() 
//{
//    char s[205]; 
//    while (scanf("%s", s) == 1) 
//    {
//        int count[4] = { 0 }; // U=0, D=1, L=2, R=3
//
//        // ͳ�Ƹ������ƶ�����
//        for (int i = 0; s[i]; i++) 
//        {
//            if (s[i] == 'U') count[0]++;
//            else if (s[i] == 'D') count[1]++;
//            else if (s[i] == 'L') count[2]++;
//            else if (s[i] == 'R') count[3]++;
//        } 
//        int found = 0;
//
//        // �������п��ܵ��滻���
//        for (int from = 0; from < 4 && !found; from++) 
//        {
//            // �������ָ����ڣ�����
//            if (count[from] == 0) continue;
//
//            for (int to = 0; to < 4 && !found; to++) {
//                // �����滻���Լ�
//                if (from == to) continue;
//
//                // ��������
//                int new_count[4];
//                for (int k = 0; k < 4; k++) 
//                {
//                    new_count[k] = count[k];
//                }
//
//                // ִ���滻
//                new_count[to] += new_count[from];
//                new_count[from] = 0;
//
//                // ����滻���Ƿ��ܻص�ԭ��
//                if (new_count[0] == new_count[1] && new_count[2] == new_count[3])
//                {
//                    found = 1;
//                }
//            }
//        }
//
//        printf(found ? "Yes\n" : "No\n");
//    }
//
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h>
//int check(int u, int d, int l, int r) {
//    return (u == d && l == r);
//}
//
//int judge(int u, int d, int l, int r) {
//    if (check(u, d, l, r)) {
//        return 1;
//    }
//    if (u == 0) {
//        if (check(0, 0, l + d, r)) return 1;
//        if (check(0, 0, l, r + d)) return 1;
//    }
//    if (d == 0) {
//        if (check(0, 0, l + u, r)) return 1;
//        if (check(0, 0, l, r + u)) return 1;
//    }
//    if (l == 0) {
//        if (check(u + r, d, 0, 0)) return 1;
//        if (check(u, d + r, 0, 0)) return 1;
//    }
//    if (r > 0) {
//        if (check(u + l, d, 0, 0)) return 1;
//        if (check(u, d + l, 0, 0)) return 1;
//    }
//
//    return 0;
//}
//
//int main() {
//    char p[300];
//    while (fgets(p, sizeof(p), stdin) != NULL) {
//        int len = strlen(p);
//        if (len > 0 && p[len - 1] == '\n') {
//            p[len - 1] = '\0';
//            len--;
//        }
//        int u = 0, d = 0, l = 0, r = 0;
//        for (int i = 0; i < len; i++) {
//            switch (p[i]) {
//            case 'U':
//                u++;
//                break;
//            case 'D':
//                d++;
//                break;
//            case 'L':
//                l++;
//                break;
//            case 'R':
//                r++;
//                break;
//            }
//        }
//        if (judge(u, d, l, r)) {
//            printf("Yes\n");
//        }
//        else {
//            printf("No\n");
//        }
//    }
//    return 0;
//}


 

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--) {
//		char a[35] = { 0 };
//		scanf("%s", a);
//		int i, j, n, x, t, count, len = strlen(a);
//		char tem;
//		scanf("%d", &n);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &x);
//			tem = a[x - 1];
//			a[x - 1] = a[x];
//			a[x] = tem;
//			if (a[x] == a[x - 1])
//			{
//				int cntR = 1, cntL = 1;
//				count = 0;
//				for (j = x + 1; j < len; j++)
//				{
//					if (a[j] == a[x])cntR++;
//					else break;
//				}
//				for (j = x - 2; j >= 0; j--)
//				{
//					if (a[j] == a[x])cntL++;
//					else break;
//				}
//				count = cntL + cntR;
//				if (count >= 3)
//				{
//					t = x - cntL;
//					for (j = x + cntR; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= count;
//				}
//			}
//			else
//			{
//				int cnt1 = 1, cnt2 = 1;
//				for (j = x + 1; j < len; j++)
//				{
//					if (a[j] == a[x])cnt1++;
//					else break;
//				}
//				if (cnt1 >= 3)
//				{
//					t = x;
//					for (j = x + cnt1; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= cnt1;
//				}
//				for (j = x - 2; j >= 0; j--)
//				{
//					if (a[j] == a[x - 1])cnt2++;
//					else break;
//				}
//				if (cnt2 >= 3)
//				{
//					t = x - cnt2;
//					for (j = x; j < len; j++)
//					{
//						a[t] = a[j];
//						t++;
//					}
//					len -= cnt2;
//				}
//			}
//			if (len == 0)printf("Over\n");
//			else
//			{
//				for (j = 0; j < len; j++)
//				{
//					printf("%c", a[j]);
//				}
//				printf("\n");
//			}
//		}
//		printf("\n");
//	}
//}


//
//#include<stdio.h>   // �����׼���������
//#include<string.h>  // �����ַ��������
//
//int main()
//{
//    int T;                  // �������T����ʾ���԰���������
//    scanf("%d", &T);        // �ӱ�׼�����ȡT��ֵ
//    while (T--) 
//    {           // ѭ������ÿ�����԰�����T�ݼ���0ʱ����
//        char a[35] = { 0 }; // �����ַ�����洢�������У���ʼ������Ԫ��Ϊ0
//        scanf("%s", a);     // ��ȡ���������ַ���
//
//        int i, j, n, x, t, count, len = strlen(a);  // ������ر�����len�洢��ǰ�������г���
//        char tem;           // ���ڽ����������ڲ������ʱ����
//
//        scanf("%d", &n);    // ��ȡ��������n
//        for (i = 0; i < n; i++)  // ѭ������ÿ�β���
//        {
//            scanf("%d", &x);     // ��ȡҪ������λ��x��ע����Ŀ����1-based������
//
//            // ����λ��x-1��x���Ĳ���ת��Ϊ0-based������
//            tem = a[x - 1];
//            a[x - 1] = a[x];
//            a[x] = tem;
//
//            // ��齻�����Ƿ��γɿ�������������ͬ����
//            if (a[x] == a[x - 1])  // �������������λ�õĲ�����ɫ��ͬ
//            {
//                int cntR = 1, cntL = 1;  // �ֱ��¼�Ҳ�����������ͬ��ɫ������
//                count = 0;               // ��¼����������
//
//                // �����Ҳ�������ͬ��ɫ������
//                for (j = x + 1; j < len; j++)
//                {
//                    if (a[j] == a[x]) cntR++;
//                    else break;  // ������ͬ��ɫ��ֹͣ����
//                }
//
//                // �������������ͬ��ɫ������
//                for (j = x - 2; j >= 0; j--)
//                {
//                    if (a[j] == a[x]) cntL++;
//                    else break;  // ������ͬ��ɫ��ֹͣ����
//                }
//
//                count = cntL + cntR;  // ������������������������λ�õ�������
//
//                if (count >= 3)  // ��������������ڵ���3����Ҫ����
//                {
//                    t = x - cntL;  // ������������ʼλ��
//                    // ���Ҳ�ʣ��Ĳ��������ƶ����������Ŀ�λ
//                    for (j = x + cntR; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= count;  // ���²������г��ȣ���ȥ������������
//                }
//            }
//            else  // �������������λ�õĲ�����ɫ��ͬ
//            {
//                int cnt1 = 1, cnt2 = 1;  // �ֱ��¼����λ�ø���������ͬ������
//
//                // ����Ҳ�λ��(x)��ʼ��������ͬ��ɫ����
//                for (j = x + 1; j < len; j++)
//                {
//                    if (a[j] == a[x]) cnt1++;
//                    else break;
//                }
//                if (cnt1 >= 3)  // ��������������ڵ���3������
//                {
//                    t = x;  // ��������ʼλ��
//                    // �ƶ��Ҳ�������λ
//                    for (j = x + cnt1; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= cnt1;  // ���³���
//                }
//
//                // ������λ��(x-1)��ʼ��������ͬ��ɫ����
//                for (j = x - 2; j >= 0; j--)
//                {
//                    if (a[j] == a[x - 1]) cnt2++;
//                    else break;
//                }
//                if (cnt2 >= 3)  // ��������������ڵ���3������
//                {
//                    t = x - cnt2;  // ��������ʼλ��
//                    // �ƶ��Ҳ�������λ
//                    for (j = x; j < len; j++)
//                    {
//                        a[t] = a[j];
//                        t++;
//                    }
//                    len -= cnt2;  // ���³���
//                }
//            }
//
//            // �����ǰ������Ĳ�������״̬
//            if (len == 0) printf("Over\n");  // ������в��򶼱����������"Over"
//            else
//            {
//                // �������ʣ��Ĳ�������
//                for (j = 0; j < len; j++)
//                {
//                    printf("%c", a[j]);
//                }
//                printf("\n");
//            }
//        }
//        printf("\n");  // ÿ�����԰������������һ������
//    }
//    return 0;  // ������������
//}




//#include <stdio.h>  // �����׼���������
//
//int T, n, end;  // T��ʾ��������������n��ʾ����������end���ڼ�¼��ǰλ��
//int ai[1010], books[1010][3] = { 0 };  // ai�洢�������У�books����ģ��˫������
//
//int main()
//{
//    scanf("%d", &T);  // ��ȡ������������
//    while (T--)  // ѭ������ÿ����������
//    {
//        scanf("%d %d %d", &n, &ai[1], &ai[2]);  // ��ȡn��a1��a2��ֵ
//
//        // ��ʼ��˫������ģ������1~nΧ�ɵ�ԲȦ
//        // books[i][0]��ʾi��ǰһ�����֣�books[i][1]��ʾi�ĺ�һ������
//        books[1][0] = n;       // ����1��ǰһ����n���γɻ�״��
//        books[n][0] = n - 1;   // ����n��ǰһ����n-1
//        books[1][1] = 2;       // ����1�ĺ�һ����2
//        books[n][1] = 1;       // ����n�ĺ�һ����1���γɻ�״��
//
//        // ��ʼ��2~n-1��ǰ��ָ��
//        for (int i = 2; i < n; i++)
//        {
//            books[i][0] = i - 1;  // i��ǰһ��������i-1
//            books[i][1] = i + 1;  // i�ĺ�һ��������i+1
//        }
//
//        // �������������ʣ���Ԫ�أ���a3��a(n-1)��
//        // ���ݹ�ʽai = (ai-2 + ai-1) % n + 1
//        for (int i = 3; i < n; i++)
//            ai[i] = (ai[i - 2] + ai[i - 1]) % n + 1;
//
//        end = 1;      
//        for (int i = 1; i < n; i++) 
//        {
//            // ��ǰ�ƶ�ai[i]�����ҵ�Ҫɾ��������
//            for (int j = 1; j < ai[i]; j++)
//                end = books[end][1];  // �ƶ�����һ������
//
//            // ��������ɾ����ǰ����end
//            // ��end��ǰһ�����ֵĺ�ָ��ָ��end�ĺ�һ������
//            books[books[end][0]][1] = books[end][1];
//            // ��end�ĺ�һ�����ֵ�ǰָ��ָ��end��ǰһ������
//            books[books[end][1]][0] = books[end][0];
//
//            // �ƶ�����һ����ʼλ�ã���ɾ�����ֵ���һ����
//            end = books[end][1];
//        }
//
//        // ������ʣ�µ�����
//        printf("%d\n", end);
//    }
//    return 0;
//}


//
//#include <stdio.h> 
//int T, n, end;
//int a[1010], books[1010][3] = { 0 };
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d", &n, &a[1], &a[2]);
//        books[1][0] = n, books[n][0] = n - 1;         
//        books[1][1] = 2, books[n][1] = 1;
//        for (int i = 2; i < n; i++) 
//        {
//            books[i][0] = i - 1; books[i][1] = i + 1;
//        }
//        for (int i = 3; i < n; i++)                 
//            a[i] = (a[i - 2] + a[i - 1]) % n + 1;
//        end = 1;                                     
//        for (int i = 1; i < n; i++)               
//        {
//            for (int j = 1; j < a[i]; j++)          
//                end = books[end][1];
//            books[books[end][0]][1] = books[end][1];  
//            books[books[end][1]][0] = books[end][0];
//            end = books[end][1];
//        }
//        printf("%d\n", end);
//    }
//    return 0;
//}




//
//
//#include <stdio.h>
//
//int T, n, end, len;
//int a[1010], books[1010] = { 0 };
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d %d", &n, &a[1], &a[2]);
//        for (int i = 1; i <= n; i++)         
//            books[i] = i; 
//        for (int i = 3; i < n; i++)
//            a[i] = (a[i - 2] + a[i - 1]) % n + 1;
//        end = 1, len = n;                     
//        for (int i = 1; i < n; i++, len--)     
//        {
//            end = (end + a[i] - 1) % len;           
//            if (end == 0)  end = len;
//            for (int j = end; j < len; j++)    
//                books[j] = books[j + 1];
//            if (end == len) end = 1;
//        }
//        printf("%d\n", books[1]);             
//    }
//    return 0;
//}
//
// 











//#include<stdio.h>
//#include<string.h>
//char c[1000010]; 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		scanf("%s", c);
//		int start = 0;
//		int len = strlen(c); 
//		while (start < len - 1) 
//		{
//			if (c[start] == '\0' || c[start] <= c[start + 1]) 
//			{
//				start++;
//			}
//			else
//			{
//				if (c[start] + 1 <= '9') 
//				{
//					c[len] = c[start] + 1;
//				}
//				else 
//				{
//					c[len] = '9';
//				}
//				c[start] = '\0';
//				len++;
//			}
//		} 
//		for (int i = 0; i < len; i++) 
//		{
//			if (c[i] != '\0') 
//			{
//				printf("%c", c[i]);
//			}
//		}
//		puts("");
//	} 
//	return 0;
//}



 