#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  





//
//#include <stdio.h>
//#include <string.h> 
//int hanshu2(int a)
//{
//	if (a == 0) return 0;
//	if (a == 1) return 0;
//	if (a == 2) return 1;
//	else
//	{
//		int p = 1;
//		for (int i = 2; i * i <= a; i++)
//		{
//			if (a % i == 0)
//			{
//				p = 0;
//				break;
//			}
//		}
//		return p;
//	}
//}
//int hanshu(char n[])
//{
//	int count = 0;
//	int c = strlen(n);
//	for (int m = 1; m <= c; m++)
//	{
//		for (int i = 0; i + m - 1 < c; i++)
//		{
//			int num = 0;
//			for (int j = i, k = 1; k <= m; k++, j++)
//			{
//				if (k <= m) num *= 10;
//				num = num + n[j] - '0';
//			}
//			if (hanshu2(num) == 1) count++;
//		}
//	}
//	return count;
//}
//int  main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		char  n[10];
//		scanf("%s", n);
//		printf("%d\n", hanshu(n));
//	}
//	return 0;
//}






//
//#include <stdio.h>    // ������׼��������⣬���������������
//#include <string.h>   // �����ַ�������⣬���� strlen ���ַ�������
//
//// �ж�һ�������Ƿ�Ϊ�����ĺ���
//int hanshu2(int a)
//{
//    if (a == 0) return 0;  // 0��������������0
//    if (a == 1) return 0;  // 1��������������0
//    if (a == 2) return 1;  // 2������������1
//    else
//    {
//        int p = 1;         // ��������������ʼ��Ϊ1
//        // ��2��sqrt(a)����Ƿ�������
//        for (int i = 2; i * i <= a; i++)
//        {
//            if (a % i == 0)  // ����ܱ�i��������������
//            {
//                p = 0;       // ���Ϊ������
//                break;       // ����ѭ��
//            }
//        }
//        return p;  // �����жϽ����1��ʾ������0��ʾ������
//    }
//}
//
//// ��������n�����з����������������������ĺ���
//int hanshu(char n[])
//{
//    int count = 0;               // ����������¼������������������
//    int c = strlen(n);           // ��ȡ�����ַ����ĳ��ȣ�λ����
//
//    // �������п��ܵ��Ӵ�����m����1λ��cλ��
//    for (int m = 1; m <= c; m++)
//    {
//        // �������п��ܵ���ʼλ��i��ȷ���Ӵ����ᳬ����Χ
//        for (int i = 0; i + m - 1 < c; i++)
//        {
//            int num = 0;  // �洢��ǰ�Ӵ�ת���������
//
//            // ���Ӵ����ַ�ת��Ϊ����
//            for (int j = i, k = 1; k <= m; k++, j++)
//            {
//                if (k <= m) num *= 10;  // ����һλ������10��
//                num = num + n[j] - '0'; // ���ϵ�ǰ�����ַ���Ӧ����ֵ
//            }
//
//            // �����ǰ�Ӵ�����������������1
//            if (hanshu2(num) == 1) count++;
//        }
//    }
//    return count;  // ���ط�����������������
//}
//
//int  main()
//{
//    int T;                // ��������������
//    scanf("%d", &T);      // ��ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        char  n[10];      // �洢����������ַ��������9λ����n��10^9��
//        scanf("%s", n);   // ��ȡ�����ַ���
//
//        // ���ú������㲢������
//        printf("%d\n", hanshu(n));
//    }
//    return 0;  // ������������
//}






//#include<stdio.h>
//#include<math.h>
//int hanshu(int k)
//{
//    if (k < 2)return 0;
//    else if (k == 2)return 1;
//    else
//    {
//        if (k % 2 == 0) return 0;
//        else
//        {
//            for (int i = 3; i <= sqrt(k); i += 2)
//            {
//                if (k % i == 0) return 0;
//            }
//            return 1;
//        }
//    }
//}
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, flag = 0;
//        scanf("%d", &n);
//        int a = sqrt(n);
//        for (int i = 2; i <= a; i++)
//        {
//            int j = n / i;
//            if (i * j == n && hanshu(i) == 1 && hanshu(j) == 1&&i!=j)
//            {
//                flag = 1;
//            }
//            if (flag == 1)
//            {
//                printf("Yes\n");
//                break;
//            }
//        }
//        if (flag == 0) printf("No\n");
//    }
//    return 0;
//}

 

//
//#include<stdio.h> 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		long long  a;
//		scanf("%lld", &a);
//		int zhu = 0;
//		for (long long  x = 1; x <= a - 1; x++)
//		{
//			long long  fenzi = a * x;
//			long long fenmu = a - x;
//			if (fenzi % fenmu == 0)
//			{
//				long long  t  = fenzi / fenmu;
//				if (t  > x) 
//				{
//					zhu++;
//				}
//			}
//		}
//		printf("%d\n", zhu);
//	} 
//	return 0;
//}

//
//
//#include<stdio.h>  // ������׼��������⣬���������������
//int main()
//{
//    int t;  // �������t�����ڴ洢��������������
//    scanf("%d", &t);  // �ӱ�׼�����ȡ������������t
//    while (t--)  // ѭ������ÿ������������t--��ʾÿ������һ�����������ͽ�t��1
//    {
//        long long  a;  // �������a�����ڴ洢��ǰ������������ֵ��ʹ��long long��ֹ���
//        scanf("%lld", &a);  // �ӱ�׼�����ȡ��ǰ������������ֵa
//        int zhu = 0;  // �������zhu�����ڼ������������Ľ����������ʼ��Ϊ0
//
//        // ѭ���������ܵ�xֵ�����ݷ����Ƶ�x��ȡֵ��Χ��1��a-1
//        for (long long x = 1; x <= a - 1; x++)
//        {
//            long long  fenzi = a * x;  // ������ӣ�a����x
//            long long fenmu = a - x;  // �����ĸ��a��ȥx
//
//            // �������Ƿ��ܱ���ĸ����������������������һ����
//            if (fenzi % fenmu == 0)
//            {
//                long long  t = fenzi / fenmu;  // ����y��ֵ�����������t��������������������������Ƽ���
//
//                // ���ݷ����Ƶ���y�������x������Ч����������
//                if (t > x)
//                {
//                    zhu++;  // �ҵ�һ����Ч�⣬��������1
//                }
//            }
//        }
//
//        printf("%d\n", zhu);  // �����ǰ���������Ľ������
//    }
////    return 0;  // ������������
//}





//
//#include<stdio.h>
//// ������׼��������⣬���������������
//
//#define N 1000005
//// �����NΪ1000005����Ϊ����Ĵ�С����
//
//int a[N] = { 0 };
//// a�������ڱ�Ƿ�������a[i]=1��ʾi������������ʼֵȫΪ0
//
//int b[N] = { 0 };
//// b�������ڴ洢�ҵ�����������˳����
//
//int f[N] = { 0 };
//// f�������ڱ���ڲ��������洢ǰ׺�ͣ�f[i]��ʾ[0,i]��Χ���ڲ������ĸ���
//
//void hanshu1()
//// ����hanshu1��Ԥ������������������ڲ�����������ǰ׺��
//{
//    int i, j, k = 0;
//    // k���ڼ�¼���ҵ�����������
//
//    a[0] = 1, a[1] = 1;
//    // 0��1�������������Ϊ1
//
//    for (i = 2; i < N; i++)
//        // ������˹����ɸ������������
//    {
//        if (a[i] == 0)  // ���i������
//            b[k++] = i;  // ��i������������b����������������k
//
//        for (j = 0; j < k; j++)
//            // ��ǵ�ǰ�����ı���Ϊ������
//        {
//            if (i * b[j] > N)  // �������鷶Χ������
//                break;
//            a[i * b[j]] = 1;  // ���i*b[j]Ϊ������
//
//            if (i % b[j] == 0)  // �����ظ���ǣ��Ż�ɸ��
//                break;
//        }
//    }
//
//    for (i = 0; i < k - 1; i++)
//        // �����������飬Ѱ���ڲ�����
//    {
//        int m = (b[i] + b[i + 1]) / 2;  // ������������������ƽ��ֵ
//        if (a[m] == 1)  // ���ƽ��ֵ����������a[m]=1��ʾ��������
//            f[m] = 1;   // ���mΪ�ڲ�����
//    }
//
//    for (i = 0; i < N; i++)
//        // ����ǰ׺�ͣ�������ٲ�ѯ�������ڲ������ĸ���
//    {
//        f[i] += f[i - 1];  // f[i] = ǰi-1���ĺ� + ��ǰf[i]��ֵ
//        // ע����i=0ʱf[-1]��Խ�磬��ͨ���������Ὣ����Ϊ0����
//    }
//}
//
//void hanshu2()
//// ����hanshu2��������������������ѯ��������
//{
//    int a, b;
//    scanf("%d%d", &a, &b);  // ��ȡ����[a,b]
//    printf("%d\n", f[b] - f[a - 1]);  // ����ǰ׺�ͼ����������ڲ������ĸ���
//}
//
//int main()
//// ���������������
//{
//    int T;
//    scanf("%d", &T);  // ��ȡ������������T
//    hanshu1();  // ����Ԥ��������������������
//
//    while (T--)  // ѭ������ÿ����������
//    {
//        hanshu2();  // ���������ǰ���������Ľ��
//    }
//
//    return 0;  // ������������
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 3000000 
//int arr[N + 10] = { 1,1 };
//char b[1000];
//int a[10][N / 3 + 10];
//int main()
//{
//	int i, j, k, count; 
//	for (i = 2; i <= N; i++) 
//	{ 
//		if (arr[i] == 0)
//		{
//			for (j = 2; j * i <= N; j++) 
//			{
//				arr[i * j] = 1;
//			}
//		}
//	} 
//	count = 1;
//	for (i = 2; i <= N; i++) 
//	{
//		if (arr[i] == 0)
//		{
//			int t;
//			t = i;
//			j = 0;
//			memset(b, '\0', sizeof(b)); 
//			while (t > 0) 
//			{
//				b[j] = (t % 10) + '0';
//				t /= 10;
//				j++;
//			} 
//			for (k = j - 1; k >= 0; k--) 
//			{ 
//				count++;
//			} 
//			if (count > 1000000) 
//				break;
//		}
//	} 
//	for (i = 0; i <= 9; i++) 
//	{ 
//		for (j = 2; j < count; j++) 
//		{
//			a[i][j] += a[i][j - 1];
//		}
//	} 
//	int T;
//	scanf("%d", &T); 
//	while (T--) 
//	{
//		int L, R, d;
//		scanf("%d %d %d", &L, &R, &d); 
//		printf("%d\n", a[d][R] - a[d][L - 1]);
//	} 
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 3000000 
//int arr[N + 10] = { 1,1 };
//char b[1000];
//int a[10][N / 3 + 10];
//int main()
//{
//	int i, j, k, count; 
//	for (i = 2; i <= N; i++) 
//	{ 
//		if (arr[i] == 0)
//		{
//			for (j = 2; j * i <= N; j++)
//			{
//				arr[i * j] = 1;
//			}
//		}
//	} 
//	count = 1;
//	for (i = 2; i <= N; i++)
//	{
//		if (arr[i] == 0)
//		{
//			int t;
//			t = i;
//			j = 0;
//			memset(b, '\0', sizeof(b)); 
//			while (t > 0) 
//			{
//				b[j] = (t % 10) + '0';
//				t /= 10;
//				j++;
//			} 
//			for (k = j - 1; k >= 0; k--) 
//			{ 
//				a[b[k] - '0'][count]++;
//				count++;
//			} 
//			if (count > 1000000)  
//				break;
//		}
//	} 
//	for (i = 0; i <= 9; i++) 
//	{ 
//		for (j = 2; j < count; j++) 
//		{
//			a[i][j] += a[i][j - 1];
//		}
//	} 
//	int T;
//	scanf("%d", &T); 
//	while (T--) 
//	{
//		int L, R, d;
//		scanf("%d %d %d", &L, &R, &d); 
//		printf("%d\n", a[d][R] - a[d][L - 1]);
//	} 
//	return 0;
//}









//#include <stdio.h>    // ��׼���������
//#include <stdlib.h>   // ��׼�⣬�����ڴ����Ⱥ���
//#include <string.h>   // �ַ��������
//#define N 3000000     // ���峣��N����������ɸѡ������
//
//// ȫ�����鶨��
//int arr[N + 10] = { 1, 1 };  // ����������飬��ʼ0��1Ϊ������(1��ʾ������)
//char b[1000];              // ��ʱ�洢�������ַ���ʽ
//int a[10][N / 3 + 10];     // ��ά���飬a[d][pos]��ʾ����d��λ��posǰ���ֵĴ���
//
//int main()
//{
//    int i, j, k, count;    // ����ѭ�������ͼ�������
//
//    // ����ɸ��ɸѡ����
//    for (i = 2; i <= N; i++)
//    {
//        // ���i������(δ�����)
//        if (arr[i] == 0)
//        {
//            // ���i�����б���Ϊ������
//            for (j = 2; j * i <= N; j++)
//            {
//                arr[i * j] = 1;
//            }
//        }
//    }
//
//    count = 1;  // ��¼��ǰ�����ַ�����λ��(��1��ʼ����)
//
//    // �����������������������ַ�����ͳ�����ֳ��ִ���
//    for (i = 2; i <= N; i++)
//    {
//        // ���i������
//        if (arr[i] == 0)
//        {
//            int t;
//            t = i;          // ��ʱ���浱ǰ����
//            j = 0;          // �ַ�������
//            memset(b, '\0', sizeof(b));  // ����ַ�����b
//             
//            // ������ת��Ϊ�ַ���ʽ(����洢)
//            while (t > 0)
//            {
//                b[j] = (t % 10) + '0';  // ȡ���һλ���ֲ�תΪ�ַ�
//                t /= 10;                // �Ƴ����һλ
//                j++;
//            }
//
//            // ��������ַ����飬�õ���ȷ������˳��
//            for (k = j - 1; k >= 0; k--)
//            {
//                // ��¼��ǰλ�ó��ֵ�����
//                a[b[k] - '0'][count]++;
//                count++;  // λ�õ���
//
//                // �ﵽ��ĿҪ������λ��(1000000)��ֹͣ
//                if (count > 1000000)
//                    break;
//            }
//            // �ﵽ���λ�ú��˳����ѭ��
//            if (count > 1000000)
//                break;
//        }
//    }
//
//    // ����ǰ׺�����飬������ټ��������ڵ����ֳ��ִ���
//    for (i = 0; i <= 9; i++)
//    {
//        for (j = 2; j < count; j++)
//        {
//            a[i][j] += a[i][j - 1];  // �ۼ�ǰ��ļ������γ�ǰ׺��
//        }
//    }
//
//    // �����������
//    int T;
//    scanf("%d", &T);  // ��ȡ������������
//
//    while (T--)  // ѭ������ÿ����������
//    {
//        int L, R, d;
//        scanf("%d %d %d", &L, &R, &d);  // ��ȡ����[L,R]������d
//
//        // ����ǰ׺�ͼ���������d���ֵĴ��������
//        printf("%d\n", a[d][R] - a[d][L - 1]);
//    }
//
//    return 0;
//}






//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define N 1000005
//int arr1[N];
//int arr2[N]; 
//void hanshu(int n)
//{
//	for (int i = 0; i < n; i++)
//	{ 
//		arr1[i] = 0;
//	}
//	arr1[0] = 1;
//	arr1[1] = 1;
//	for (int i = 2; i <= n / i; i++) 
//	{
//		if (arr1[i] == 0)
//		{
//			for (int j = i * i; j <= n; j += i)
//				arr1[j] = 1;
//		}
//	}
//}
//int f(long long l, long long r)
//{
//	for (int i = 0; i <= r - l; i++) 
//	{ 
//		arr2[i] = 0;
//	}
//	int max = sqrt(r) + 5; 
//	hanshu(max);
//	for (int i = 2; i < max; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			long long temp = l / i * i; 
//			if (temp < l)
//				temp += i;
//			if (temp == i)
//				temp += i; 
//			for (int j = temp; j <= r; j += i)
//			{
//				arr2[j - l] = 1;
//			}
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i <= r - l; i++) 
//	{
//		if (arr2[i] == 0 && (i + l) > 1)
//			cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{
//		long long int l, r;
//		scanf("%lld %lld", &l, &r);
//		printf("%d\n", f(l, r));
//	}
//}




//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define len 100000   
//
//int hanshu(int arr1[], int arr2[],int L,int R)
//{
//	int* prefix = (int*)calloc(len, sizeof(int));
//	arr1[0] = 1;
//	arr1[1] = 1;
//	int count = 0;
//	for (int i = 2; i < len; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			for (int j = 1; i * j < len; j++)
//			{
//				arr1[i * j] = 1;
//			}
//		}
//	} 
//	for (int i = 0; i < len; i++)
//	{
//		if (arr1[i] == 0)
//		{
//			prefix[i] = prefix[i - 1] + 1;
//		}
//		else prefix[i] = prefix[i - 1];
//	}
//	return prefix[R] - prefix[L - 1];
//}
//int main()
//{
//	int* arr1 = (int*)calloc(len ,sizeof(int));
//	int* arr2 = (int*)calloc(len ,sizeof(int));
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int L, R;
//		scanf("%d %d", &L, &R);
//		int count = hanshu(arr1, arr2,L,R);
//		printf("%d\n", count);
//	}
//	return 0;
//}
//
//
//
//
//
//
//// 