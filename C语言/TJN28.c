#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//
//
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h> 
//char a[110][15];   
//int cnt[110]; 
//int len[110]; 
//void sort(char arr[], int n) 
//{
//	int i, j, temp;
//	for (i = 0; i < n - 1; i++) 
//	{
//		for (j = 0; j < n - i - 1; j++) 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//} 
//int main() 
//{
//	int t;
//	scanf("%d", &t);
//	while (t--) 
//	{ 
//		int n;
//		scanf("%d", &n); 
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s", a[i]);
//			len[i] = strlen(a[i]);
//		} 
//		int max  = 1; 
//		int pos = 0; 
//		for (int i = 0; i < n; i++)
//		{ 
//			for (int j = i + 1; j < n; j++)
//			{ 
//				char temp[15];
//				for (int k = 0; k < len[j]; k++)
//				{
//					temp[k] = a[j][k];
//				} 
//				sort(a[j], len[j]);
//				bool  same = true; 
//				if (len[i] != len[j])
//				{
//					 same = false;
//				}
//				else 
//				{
//					for (int k = 0; k < len[i]; k++)
//					{
//						if (a[i][k] != a[j][k]) 
//						{
//							 same = false;
//							break;
//						}
//					}
//				} 
//				if ( same)
//				{
//					cnt[i]++;
//				} 
//				for (int k = 0; k < len[j]; k++) 
//				{
//					a[j][k] = temp[k];
//				}
//			} 
//			if (cnt[i] + 1 > max ) 
//			{
//				max = cnt[i] + 1;
//				pos = i;
//			}
//		}  
//		printf("%d\n", max) ;
//		printf("%s\n", a[pos]); 
//		for (int j = pos + 1; j < n; j++)
//		{
//			char temp[15] = { '\0' };
//			for (int k = 0; k < len[j]; k++) 
//			{
//				temp[k] = a[j][k];
//			}
//			sort(a[j], len[j]);
//			bool  same = true;
//			if (len[pos] != len[j]) 
//			{
//				 same = false;
//			}
//			else
//			{
//				for (int k = 0; k < len[pos]; k++)
//				{
//					if (a[j][k] != a[pos][k]) 
//					{
//						 same = false;
//						break;
//					}
//				}
//			}
//			if ( same) {
//				printf("%s\n", temp);
//			}
//		} 
//		puts(""); 
//		for (int i = 0; i < 110; i++) 
//		{
//			cnt[i] = 0;
//			for (int j = 0; j < 15; j++) 
//			{
//				a[i][j] = '\0';
//			}
//		}
//	} 
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h> 
//
//char a[110][15];
//int cnt[110];
//int len[110]; 
//void sort(char arr[], int n) 
//{
//    int i, j, temp;
//    for (i = 0; i < n - 1; i++) 
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() 
//{
//    int t;
//    scanf("%d", &t);
//    while (t--) 
//    {
//        int n;
//        scanf("%d", &n); 
//        for (int i = 0; i < 110; i++)
//        {
//            cnt[i] = 0;
//            len[i] = 0;
//            for (int j = 0; j < 15; j++) 
//            {
//                a[i][j] = '\0';
//            }
//        } 
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%s", a[i]);
//            len[i] = strlen(a[i]);
//        } 
//        int max = 1;
//        int pos = 0; 
//        for (int i = 0; i < n; i++)
//        { 
//            char sorted_i[15];
//            strcpy(sorted_i, a[i]);
//            sort(sorted_i, len[i]); 
//            for (int j = i + 1; j < n; j++) 
//            { 
//                char sorted_j[15];
//                strcpy(sorted_j, a[j]);
//                sort(sorted_j, len[j]); 
//                bool same = true;
//                if (len[i] != len[j]) 
//                {
//                    same = false;
//                }
//                else 
//                { 
//                    for (int k = 0; k < len[i]; k++) 
//                    {
//                        if (sorted_i[k] != sorted_j[k])
//                        {
//                            same = false;
//                            break;
//                        }
//                    }
//                } 
//                if (same) 
//                {
//                    cnt[i]++;
//                }
//            } 
//            if (cnt[i] + 1 > max) 
//            {
//                max = cnt[i] + 1;
//                pos = i;
//            }
//        } 
//        printf("%d\n", max); 
//        printf("%s\n", a[pos]); 
//        char sorted_pos[15];
//        strcpy(sorted_pos, a[pos]);
//        sort(sorted_pos, len[pos]); 
//        for (int j = 0; j < n; j++)
//        {
//            if (j == pos) continue;  
//            char sorted_j[15];
//            strcpy(sorted_j, a[j]);
//            sort(sorted_j, len[j]); 
//            bool same = true;
//            if (len[pos] != len[j]) 
//            {
//                same = false;
//            }
//            else
//            {
//                for (int k = 0; k < len[pos]; k++)
//                {
//                    if (sorted_j[k] != sorted_pos[k]) 
//                    {
//                        same = false;
//                        break;
//                    }
//                }
//            } 
//            if (same) 
//            {
//                printf("%s\n", a[j]);
//            }
//        } 
//        puts("");  
//    }
//    return 0;
//}


//#include<stdio.h>      // ��׼���������
//#include<string.h>     // �ַ�������⣨�ṩstrcpy�Ⱥ�����
//#include<stdbool.h>    // �������Ϳ⣨�ṩbool��true��false��
//
//// ȫ�ֱ�������
//char a[110][15];       // �洢����������ַ��������110����ÿ���14�ַ�+��������
//int cnt[110];          // ��¼ÿ���ַ���������������ַ�������
//int len[110];          // ��¼ÿ���ַ����ĳ���
//
//// ð�������������ַ����鰴ASCII���С��������
//void sort(char arr[], int n)
//{
//    int i, j, temp;
//    // ���ѭ�������������ִΣ���n-1�֣�
//    for (i = 0; i < n - 1; i++)
//    {
//        // �ڲ�ѭ����ÿ�ֱȽ�δ���򲿷֣�ÿ�ּ���һ���Ƚ϶���
//        for (j = 0; j < n - i - 1; j++)
//        {
//            // ��ǰһ���ַ����ں�һ��������λ��
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int t;                  // ������������
//    scanf("%d", &t);        // ��ȡ������������
//    while (t--)             // ѭ������ÿ����������
//    {
//        int n;              // ��ǰ�����������ַ�������
//        scanf("%d", &n);    // ��ȡ�ַ�������
//
//        // ��ʼ��ȫ�����飨������һ�����������Ĳ�������Ӱ�죩
//        for (int i = 0; i < 110; i++)
//        {
//            cnt[i] = 0;             // ����������
//            len[i] = 0;             // ���ȼ�¼����
//            for (int j = 0; j < 15; j++)
//            {
//                a[i][j] = '\0';     // �ַ����������
//            }
//        }
//
//        // ��ȡ��ǰ���������������ַ�������¼����
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%s", a[i]);      // ��ȡ�ַ���
//            len[i] = strlen(a[i]);  // ���㲢�洢�ַ�������
//        }
//
//        int max = 1;        // �����Ĵ�С������Ϊ1�����ַ�������
//        int pos = 0;        // ������е�һ�����ֵ��ַ���������
//
//        // ����ÿ���ַ�����ͳ����������Ĵ�С
//        for (int i = 0; i < n; i++)
//        {
//            // ���Ƶ�i���ַ������������ڱȽϣ�
//            char sorted_i[15];
//            strcpy(sorted_i, a[i]);   // ����ԭ�ַ���
//            sort(sorted_i, len[i]);   // �Ը��Ƶ��ַ�������
//
//            // ������ַ����Ƚϣ��ж��Ƿ�ͬ��
//            for (int j = i + 1; j < n; j++)
//            {
//                // ���Ƶ�j���ַ���������
//                char sorted_j[15];
//                strcpy(sorted_j, a[j]);
//                sort(sorted_j, len[j]);
//
//                bool same = true;     // ����Ƿ�Ϊͬһ��
//                if (len[i] != len[j]) // ���Ȳ�ͬ��һ����ͬ��
//                {
//                    same = false;
//                }
//                else
//                {
//                    // ������ͬ��Ƚ�������ÿ���ַ�
//                    for (int k = 0; k < len[i]; k++)
//                    {
//                        if (sorted_i[k] != sorted_j[k])
//                        {
//                            same = false;
//                            break;  // ��һ���ַ���ͬ��ͬ��
//                        }
//                    }
//                }
//                if (same)  // ��ͬ�飬���ӵ�i���ַ����ļ���
//                {
//                    cnt[i]++;
//                }
//            }
//
//            // �����������Ϣ������ǰ�����
//            if (cnt[i] + 1 > max)  // +1����Ϊcntֻ��¼������Ԫ�أ����������
//            {
//                max = cnt[i] + 1;
//                pos = i;            // ��¼��ǰ���һ�����ֵ��ַ�������
//            }
//        }
//
//        // ��������Ĵ�С
//        printf("%d\n", max);
//        // ���������е�һ�����ֵ��ַ���
//        printf("%s\n", a[pos]);
//
//        // ׼�����ڱȽϵ�"��׼�ַ���"�������ĵ�һ���ַ�����
//        char sorted_pos[15];
//        strcpy(sorted_pos, a[pos]);
//        sort(sorted_pos, len[pos]);
//
//        // ���������ַ�����������׼ͬ��������ַ�����������˳��
//        for (int j = 0; j < n; j++)
//        {
//            if (j == pos) continue;  // ����������ĵ�һ���ַ���
//
//            // �Ե�ǰ�ַ����������׼�Ƚ�
//            char sorted_j[15];
//            strcpy(sorted_j, a[j]);
//            sort(sorted_j, len[j]);
//
//            bool same = true;
//            if (len[pos] != len[j])  // ���Ȳ�ͬ��ͬ��
//            {
//                same = false;
//            }
//            else
//            {
//                // �Ƚ��������ַ�
//                for (int k = 0; k < len[pos]; k++)
//                {
//                    if (sorted_j[k] != sorted_pos[k])
//                    {
//                        same = false;
//                        break;
//                    }
//                }
//            }
//            if (same)  // ��ͬ�������
//            {
//                printf("%s\n", a[j]);
//            }
//        }
//        puts("");  // ÿ���������������һ������
//    }
//    return 0;
//}



//#include <stdio.h> 
//long long gcd(long long a, long long b)
//{
//    while (b != 0) 
//    {
//        long long temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//    while (T--) 
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k); 
//        if (m == k) 
//        {
//            printf("0\n");
//            continue;
//        } 
//        long long num  = 0; 
//        long long d  = 1;   
//        for (int i = k - 1; i >= m; i--) 
//        { 
//            long long a = n;
//            long long b = n - i; 
//            long long new_num = num  * b + a * d ;
//            long long new_d = d  * b; 
//            long long g = gcd(new_num, new_d );
//            num  = new_num / g;
//            d  = new_d / g;
//        } 
//        if (d  == 1) 
//        {
//            printf("%lld\n", num  );
//        }
//        else {
//            printf("%lld/%lld\n", num , d );
//        }
//    }
//    return 0;
//}



//#include <stdio.h> 
//
//// ���������������Լ�������ڷ�������
//long long gcd(long long a, long long b)
//{
//    while (b != 0)
//    {
//        long long temp = b;  // ��ʱ����b��ֵ
//        b = a % b;           // ��a����b����������b
//        a = temp;            // ��ԭ����b����a
//    }
//    return a;  // ѭ������ʱ��a��Ϊ���Լ��
//}
//
//int main()
//{
//    int T;                  // ��������������
//    scanf("%d", &T);        // ��ȡ������������
//    while (T--)             // ѭ������ÿ����������
//    {
//        int n, m, k;
//        scanf("%d %d %d", &n, &m, &k);  // ��ȡ��ǰ����������n(�ܵ���)��m(��ʼ������)��k(Ŀ��������)
//
//        // ����ʼ�������ѵ���Ŀ�꣬���谴����ֱ�����0
//        if (m == k)
//        {
//            printf("0\n");
//            continue;  // �����������㣬������һ����������
//        }
//
//        long long num = 0;   // �洢��ǰ�ۼӺ͵ķ���
//        long long d = 1;     // �洢��ǰ�ۼӺ͵ķ�ĸ����ʼΪ1����0/1��
//
//        // ��k-1����ѭ����m���ۼ�ÿһ��������ֵ�����ƹ�ϵ��ʵ�֣�
//        for (int i = k - 1; i >= m; i--)
//        {
//            // ��ǰ���������ֵΪ n/(n-i)������a�Ƿ��ӣ�b�Ƿ�ĸ
//            long long a = n;
//            long long b = n - i;
//
//            // �����ӷ�������ǰ�ۼӺ�(num/d)������(a/b)���
//            // ��ʽ��num/d + a/b = (num*b + a*d) / (d*b)
//            long long new_num = num * b + a * d;  // �·���
//            long long new_d = d * b;              // �·�ĸ
//
//            // �����·��Ӻ��·�ĸ�����Լ�������ڻ������
//            long long g = gcd(new_num, new_d);
//            num = new_num / g;  // �����ķ���
//            d = new_d / g;      // �����ķ�ĸ
//        }
//
//        // ���ݷ�ĸ�Ƿ�Ϊ1��������������
//        if (d == 1)
//        {
//            printf("%lld\n", num);  // ��ĸΪ1ʱֱ��������ӣ�������
//        }
//        else
//        {
//            printf("%lld/%lld\n", num, d);  // ���������
//        }
//    }
//    return 0;
//}




//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    long long* a = (long long*)malloc(n * sizeof(long long));
//    long long sum = 0;
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &a[i]);
//        sum += a[i];
//    }
//
//    // ���������n=2ʱ���������⣨��Ŀn��3������������n��3���˴�����n=2��ֹ��0
//    if (n == 2) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//
//    // Ŀ��ֵT = �ܺ� / (n-2)������Ϊ����
//    if (sum % (n - 2) != 0) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//    long long T = sum / (n - 2);
//
//    // ��������Ԫ����T�Ĳ���ܺͣ�������֤s�Ƿ����������
//    long long total_gap = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] > T) {  // Ԫ�ش���Ŀ��ֵ���޷�ͨ����1�ﵽ
//            printf("0\n");
//            free(a);
//            return 0;
//        }
//        total_gap += (T - a[i]);
//    }
//
//    // ͳ������������(a_i, a_j)������a_i + a_j == total_gap
//    int count = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (a[i] + a[j] == total_gap) {
//                count++;
//            }
//        }
//    }
//
//    printf("%d\n", count);
//    free(a);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> 
//int cmp( void* a, void* b) 
//{
//    return strcmp(*( char**)a, *( char**)b);
//} 
//int main() 
//{
//    char s[155];
//    while (scanf("%s", s) != EOF) 
//    {
//        int n = strlen(s);
//        int total = n * (n + 1) / 2; 
//        char** strs = (char**)malloc(total * sizeof(char*));
//        int idx = 0; 
//        for (int i = 0; i < n; i++) 
//        {
//            for (int j = i; j < n; j++)
//            {
//                int len = i + (n - 1 - j); 
//                if (len == 0)
//                {
//                    continue;
//                }
//                strs[idx] = (char*)malloc(len + 1);
//                int pos = 0; 
//                for (int k = 0; k < i; k++) 
//                {
//                    strs[idx][pos++] = s[k];
//                } 
//                for (int k = j + 1; k < n; k++) 
//                {
//                    strs[idx][pos++] = s[k];
//                }
//                strs[idx][pos] = '\0';
//                idx++;
//            }
//        } 
//        qsort(strs, idx, sizeof(char*), cmp); 
//        int count = 0;
//        if (idx > 0) 
//        {
//            count = 1;
//            for (int i = 1; i < idx; i++) 
//            {
//                if (strcmp(strs[i], strs[i - 1]) != 0)
//                {
//                    count++;
//                }
//            }
//        } 
//        printf("%d\n", count); 
//        for (int i = 0; i < idx; i++) 
//        {
//            free(strs[i]);
//        }
//        free(strs);
//    }
//    return 0;
//}






//#include <stdio.h>      // ��׼���������
//#include <stdlib.h>     // �ڴ���亯����malloc/free��
//#include <string.h>     // �ַ�����������strcmp/strlen��
//
//// �ȽϺ���������qsort���ַ����������򣨰��ֵ���
//int cmp(void* a, void* b)
//{
//    // ��void*ת��Ϊchar**���ٽ����õõ��ַ���ָ�룬�����strcmp�Ƚ�
//    return strcmp(*(char**)a, *(char**)b);
//}
//
//int main()
//{
//    char s[155];                 // �洢������ַ������150�ַ���
//    while (scanf("%s", s) != EOF) // ѭ����ȡ�����������
//    {
//        int n = strlen(s);       // ���㵱ǰ�ַ�������
//        // �������п��ܵķǿ�ɾ������������n*(n+1)/2��i��0��n-1��j��i��n-1��
//        int total = n * (n + 1) / 2;
//        // ��̬�����ַ������飬���ڴ洢����ɾ�������ɵ��ַ���
//        char** strs = (char**)malloc(total * sizeof(char*));
//        int idx = 0;             // ��¼��Ч�ַ����ĸ������ų��մ���
//
//        // ö�����п��ܵ�ɾ������[i..j]��i��j����ɾ����i��j�������ַ���
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = i; j < n; j++)
//            {
//                // ����ɾ��[i..j]��ʣ���ַ����ĳ��ȣ�
//                // ��߱���[0..i-1]������i�����ұ߱���[j+1..n-1]������n-1-j��
//                int len = i + (n - 1 - j);
//
//                if (len == 0)    // ��ʣ�೤��Ϊ0��ɾ���������ַ�����������������������
//                {
//                    continue;
//                }
//
//                // Ϊ��ǰʣ���ַ��������ڴ棨+1���ڴ洢������'\0'��
//                strs[idx] = (char*)malloc(len + 1);
//                int pos = 0;     // ��¼��ǰ�ַ�����д��λ��
//
//                // ������߲���[0..i-1]������ַ���
//                for (int k = 0; k < i; k++)
//                {
//                    strs[idx][pos++] = s[k];
//                }
//
//                // �����ұ߲���[j+1..n-1]������ַ���
//                for (int k = j + 1; k < n; k++)
//                {
//                    strs[idx][pos++] = s[k];
//                }
//
//                strs[idx][pos] = '\0'; // �ַ���������
//                idx++;                 // ��Ч�ַ�������+1
//            }
//        }
//
//        // ��������Ч�ַ������򣨱���ȥ�أ�
//        qsort(strs, idx, sizeof(char*), cmp);
//
//        // ͳ�Ʋ�ͬ�ַ���������
//        int count = 0;
//        if (idx > 0)  // ��������Ч�ַ���
//        {
//            count = 1; // ������1����ͬ���ַ���
//            // �����������ַ��������ڱȽ�ȥ��
//            for (int i = 1; i < idx; i++)
//            {
//                // ����ǰ�ַ�����ǰһ����ͬ������+1
//                if (strcmp(strs[i], strs[i - 1]) != 0)
//                {
//                    count++;
//                }
//            }
//        }
//
//        printf("%d\n", count); // ������
//
//        // �ͷŶ�̬������ڴ棨�����ڴ�й©��
//        for (int i = 0; i < idx; i++)
//        {
//            free(strs[i]);
//        }
//        free(strs);
//    }
//    return 0;
//}



//#include <stdio.h>
//#include<stdlib.h>
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    long long sum = 0;
//    int* ans = (int*)malloc(sizeof(int));
//    for (int i = 0; i < n; ++i) 
//    {
//        scanf("%d", &ans[i]);
//        sum += ans[i];
//    }
//    if (sum % (n - 2) == 0) 
//    {
//        long long k = sum / (n - 2);
//        int cnt = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            if (ans[i] > k)
//            {
//                cnt++;
//            }
//        }
//        if (cnt == 0)
//        {
//            printf("%lld", (long long)n * (n - 1) / 2);
//        }
//        else if (cnt == 1) 
//        {
//            printf("%d", n - 1);
//        }
//        else if (cnt == 2) 
//        {
//            printf("1");
//        }
//        else 
//        {
//            printf("0");
//        }
//    }
//    else 
//    {
//        printf("0");
//    }
//    return 0;
//}
// 





//#include <stdio.h>
//#include <stdlib.h> 
//int main()
//{
//    int n; 
//    long long sum = 0;
//    scanf("%d", &n);
//    int* ans = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d", &ans[i]);
//        sum += ans[i];
//    }
//    if (sum % (n - 2) != 0)   printf("0\n");
//    long long k = sum / (n - 2);
//    int cnt = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        if (ans[i] > k)
//        {
//            cnt++;
//            if (cnt > 2)
//            {
//                printf("0\n");
//                free(ans);
//                return 0;
//            }
//        }
//    }
//    if (cnt == 0)        printf("%lld\n",(long long) n * (n - 1) / 2);
//    else if (cnt == 1)   printf("%d\n", n - 1);
//    else                 printf("1\n");
//    free(ans);
//    return 0;
//}
// 








//#include <stdio.h>
//#include <stdlib.h> 
//int main()
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        int n;
//        scanf("%d", &n);
//        int* arr = (int*)malloc(n * sizeof(int));  
//        for (int i = 0; i < n; i++)   scanf("%d", &arr[i]);
//        int total = 0;
//        int max  = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            total += arr[i];
//            if (arr[i] > max )
//            {
//                max  = arr[i];
//            }
//        } 
//        int result = 2 * total - max ;
//        printf("%d\n", result); 
//        free(arr);
//    } 
//    return 0;
//}



//#include <stdio.h>
//int main() {
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int n, i, k;
//        scanf("%d", &n);
//        int a[10001];
//        int x1[10001] = { 0 };
//        int x2[10001] = { 0 };
//        for (i = 1; i <= n; i++) {
//            scanf("%d", &a[i]);
//        }
//        for (i = 1; i <= n; i++) {
//            x1[i] = x1[i - 1] + a[i];//ǰ׺��
//        }
//        for (i = n; i >= 1; i--) {
//            x2[i] = x2[i + 1] + a[i];//��׺��
//        }
//        // ��˳ʱ��
//        int right = x1[n - 1];
//        // ����ʱ��
//        int left = x2[2];
//        int min = (right < left) ? right : left;
//        // ����߷�
//        for (k = 2; k <= n - 1; k++) {//����Ѱ����СȨ��
//            int sum1 = x1[k - 1];//˳ʱ��ӵ���k�ڵ�ǰ
//            int sum2 = x2[k + 1];//��ʱ��ӵ���k�ڵ��
//            // ���A��1��k��1��n��...��k+1
//            int cost = 2 * sum1 + sum2;
//            if (cost < min) {
//                min = cost;
//            }
//            // ���B��1��n��...��k��1��2��...��k-1
//            cost = 2 * sum2 + sum1;
//            if (cost < min) {
//                min = cost;
//            }
//        }
//        printf("%d\n", min);
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
//        int n, i, k;
//        scanf("%d", &n);
//        int a[10001], arr1[10001] = { 0 }, arr2[10001] = { 0 };
//        for (i = 1; i <= n; i++) scanf("%d", &a[i]);
//        for (i = 1; i <= n; i++) arr1[i] = arr1[i - 1] + a[i];
//        for (i = n; i >= 1; i--) arr2[i] = arr2[i + 1] + a[i];
//        int right = arr1[n - 1], left = arr2[2], min = right < left ? right : left;
//        for (k = 2; k <= n - 1; k++) 
//        {
//            int sum1 = arr1[k - 1], sum2 = arr2[k + 1];
//            int sum = 2 * sum1 + sum2;
//            if (sum < min) min = sum;
//            sum = 2 * sum2 + sum1;
//            if (sum < min) min = sum;
//        }
//        printf("%d\n", min);
//    }
//    return 0;
//}





 