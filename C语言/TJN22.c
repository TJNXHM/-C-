#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  




// 
//#include <stdbool.h> 
//#include <stdio.h>
//#include <string.h>
//
//int cnt1, cnt2, len;
//char str[210];
//
//int main()
//{
//    while (gets(str) != NULL)
//    {
//        bool books[30] = { 0 };
//        cnt1 = cnt2 = 0;
//        len = strlen(str);
//        for (int i = 0; i < len; i++)
//        {
//            if (str[i] == ' ')
//            {
//                cnt1++; continue;
//            }
//            if (str[i] >= 97)  str[i] -= 32;
//            if (!books[str[i] - 'A']) cnt2++;
//            books[str[i] - 'A'] = true;
//        }
//        if (cnt1 >= 10 || cnt2 >= 11)   puts("No");
//        else   puts("Yes");
//    }
//    return 0;
////}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h> 
//int hanshu2(const void* a, const void* b)
//{
//    return *(const char*)a - *(const char*)b;
//} 
//int hanshu1(const void* a, const void* b)
//{
//    return strcmp(*(const char**)a, *(const char**)b);
//}  
//void get(char* str, char* sig)
//{
//    size_t len = strlen(str); 
//    if (len > 0 && str[len - 1] == '\n')
//    {
//        str[len - 1] = '\0';
//        len--;
//    } 
//    strncpy(sig, str, 10);  
//    sig[10] = '\0';   
//    qsort(sig, len, 1, hanshu2);
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    getchar();  
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        getchar();   
//        char strs[100][11] = { 0 };   
//        char sigs[100][11] = { 0 };
//        int group[100] = { 0 };
//        int size[100] = { 0 };
//        int count = 0; 
//        for (int i = 0; i < n; i++)
//        { 
//            if (fgets(strs[i], 11, stdin) == NULL)
//            {
//                break; 
//            }
//
//            get(strs[i], sigs[i]); 
//            int found = 0; 
//            for (int j = 0; j < count; j++)
//            {
//                if (strcmp(sigs[i], sigs[group[j]]) == 0)
//                {
//                    group[i] = j;
//                    size[j]++;
//                    found = 1;
//                    break;
//                }
//            } 
//            if (!found && count < 100)
//            {
//                group[i] = count;
//                size[count] = 1;
//                count++;
//            }
//        }
//         
//        int max_size = 0;
//        int max_index = 0;
//        for (int i = 0; i < count; i++)
//        {
//            if (size[i] > max_size)
//            {
//                max_size = size[i];
//                max_index = i;
//            }
//        } 
//        printf("%d\n", max_size);
//        for (int i = 0; i < n; i++)
//        {
//            if (group[i] == max_index)
//            {
//                printf("%s\n", strs[i]);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h> 
//int compare(const void* a, const void* b)
//{
//    return *(char*)a - *(char*)b;  
//} 
//void get(char* str, char* sig)
//{
//    strcpy(sig, str);               
//    qsort(sig, strlen(sig), 1, compare);  
//} 
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n;
//        scanf("%d", &n);
//        getchar(); 
//        char strs[100][11];     
//        char sigs[100][11];    
//        int group[100];       
//        int  size[100] = { 0 };  
//        int  count = 0;     
//        for (int i = 0; i < n; i++)
//        { 
//            fgets(strs[i], 11, stdin); 
//            get(strs[i], sigs[i]); 
//            int found = 0;
//            for (int j = 0; j < count; j++)
//            { 
//                if (strcmp(sigs[i], sigs[group[j]]) == 0)
//                {
//                    group[i] = j;       
//                    size[j]++;    
//                    found = 1;
//                    break;
//                }
//            } 
//            if (!found)
//            {
//                group[i] = count; 
//                size[count] = 1; 
//                count++;          
//            }
//        } 
//        int max1 = 0;
//        int max2 = 0;
//        for (int i = 0; i < count; i++)
//        { 
//            if (size[i] > max1)
//            {
//                max1 = size[i];
//                max2 = i;
//            }
//        } 
//        printf("%d\n", max1); 
//        for (int i = 0; i < n; i++)
//        {
//            if (group[i] == max2)
//            {
//                printf("%s\n", strs[i]);
//            }
//        }
//        printf("\n");  
//    } 
//    return 0;
//}


//
//
//#include <stdio.h>
//#include <string.h>  
//char hanshu1(char c)
//{ 
//    char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8','q','p','y','w','u','9' };
//    char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8','b','d','h','m','n','6' };
//
//    for (int i = 0; i < sizeof(char1) / sizeof(char1[0]); i++)
//    {
//        if (char1[i] == c)
//        {
//            return char2[i];
//        }
//    }
//    return c;  
//} 
//void hanshu2(char* str)
//{
//    int length = strlen(str);
//    for (int i = 0; i < length / 2; i++)
//    { 
//        char temp = str[i];
//        str[i] = str[length - i - 1];
//        str[length - i - 1] = temp;
//    }
//} 
//int main()
//{
//    char str[21]; 
//    while (fgets(str, sizeof(str), stdin) != NULL)
//    { 
//        str[strcspn(str, "\n")] = '\0';  
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            str[i] = hanshu1(str[i]);
//        } 
//        hanshu2(str); 
//        printf("%s\n", str);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>    // �����׼��������⣬���������������
//#include <string.h>   // �����ַ�������⣬�����ַ�����غ���
//
//// ����hanshu1���Ե����ַ������ض�ӳ��ת��
//char hanshu1(char c)
//{
//    // �����ַ�ӳ���1���洢��Ҫ���滻���ַ�
//    char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8','q','p','y','w','u','9' };
//    // �����ַ�ӳ���2���洢��Ӧ���滻�ַ�����char1λ��һһ��Ӧ��
//    char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8','b','d','h','m','n','6' };
//
//    // �����ַ�ӳ�������ƥ����ַ������ض�Ӧ�滻�ַ�
//    for (int i = 0; i < sizeof(char1) / sizeof(char1[0]); i++)
//    {
//        if (char1[i] == c)  // ����ҵ�ƥ����ַ�
//        {
//            return char2[i]; // ���ض�Ӧ���滻�ַ�
//        }
//    }
//    return c;  // ���û���ҵ�ƥ����ַ�������ԭ�ַ�
//}
//
//// ����hanshu2�����ַ�����ת
//void hanshu2(char* str)
//{
//    int length = strlen(str);  // ��ȡ�ַ�������
//    // �����ַ���ǰ�벿�֣����벿�ֶԳ�λ�õ��ַ�����
//    for (int i = 0; i < length / 2; i++)
//    {
//        char temp = str[i];  // ��ʱ���浱ǰ�ַ�
//        // ������ǰ�ַ���Գ�λ�õ��ַ�
//        str[i] = str[length - i - 1];
//        str[length - i - 1] = temp;
//    }
//}
//
//int main()
//{
//    char str[21];  // �����ַ����飬���ڴ洢������ַ��������20���ַ���
//
//    // ѭ����ȡ������ַ�����ֱ���ļ�������Ctrl+Z��ֹ���룩
//    while (fgets(str, sizeof(str), stdin) != NULL)
//    {
//        // ȥ���ַ����еĻ��з���ȷ��������ȷ
//        str[strcspn(str, "\n")] = '\0';
//
//        // �����ַ���ÿ���ַ���ʹ��hanshu1����ת��
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            str[i] = hanshu1(str[i]);
//        }
//
//        // ʹ��hanshu2��ת������ַ�����ת
//        hanshu2(str);
//
//        // ����������ַ���
//        printf("%s\n", str);
//    }
//    return 0;  // ������������
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[21] = { 0 };
//	char arr2[21] = { 0 };
//	while ((scanf("%s", arr)) == 1)
//	{
//		int a = strlen(arr); 
//		char char1[] = { 'b','d','f','h','l','m','n','o','s','x','z','1','2','6','8' };
//		char char2[] = { 'q','p','f','y','l','w','u','o','s','x','z','1','2','9','8' };
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < 15;j++)
//			{  
//				if (arr[i] == char1[j])
//				{
//					arr2[i] = char2[j];
//					continue;
//				}
//				else if (arr[i] == char2[j])  arr2[i]=char1[j];
//			}
//		}
//		 
//		    for (int i = 0; i < a/2 ; i++)
//		    {
//		        char temp = arr2[i];   
//		        arr2[i] =arr2[a - i - 1];
//		        arr2[a - i - 1] = temp;
//		    } 
//
//		printf("%s\n",arr2);
//	}
//	return 0;
//}





//
//#include <stdio.h>
//#include <string.h>
//
//int N, cnt, p, maxP;
//char name[22][20], maxPeople[20];
//char flag[5] = { 'E','N','D' };
//
//int main()
//{
//    scanf("%d", &N);
//    while (N--)
//    {
//        cnt = 0;
//        scanf("%s", name[0]);                            
//        while (1)
//        {
//            scanf("%s", name[++cnt]);
//            if (strcmp(name[cnt], flag) == 0)    break;  
//        }
//
//        for (int i = cnt - 1; i > 0; i--)              
//        {
//            for (int j = 1; j < i; j++)
//            {
//                if (strcmp(name[j], name[j + 1]) > 0)
//                {
//                    char t[20] = { 0 };
//                    strcpy(t, name[j]);
//                    strcpy(name[j], name[j + 1]);
//                    strcpy(name[j + 1], t);
//                }
//            }
//        }
//        p = maxP = 1;                        
//        strcpy(maxPeople, name[1]);
//        for (int i = 2; i < cnt; i++)
//        {
//            if (strcmp(name[i], name[i - 1]) == 0)    
//            {
//                p++;
//                if (p > maxP)                        
//                {
//                    maxP = p;
//                    strcpy(maxPeople, name[i]);
//                }
//            }
//            else
//                p = 1;                               
//        }
//        printf("%s\n", maxPeople);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>   // �����׼��������⣬���������������
//#include <string.h>  // �����ַ�������⣬�����ַ����Ƚϡ����ƵȲ���
//
//// ȫ�ֱ�������
//int N, cnt, p, maxP;               // N����������������cnt����¼������p����ǰ���ֳ��ִ�����maxP�������ִ���
//char name[22][20], maxPeople[20];  // name���洢���ֵĶ�ά���飻maxPeople�����ִ�����������
//char flag[5] = { 'E','N','D' };    // �����жϽ����ı�־��ʵ��ӦΪ�ַ���"END"�������ʼ����ʽ���淶��
//
//int main()
//{
//    scanf("%d", &N);  // ��ȡ��������������
//    while (N--)       // ѭ������ÿ������������N�ݼ���0ʱ����
//    {
//        cnt = 0;      // ���ü���������¼��ǰ���������е���������
//        // ��ȡ��ʼ��ʶ��ӦΪ"START"�����洢��name[0]��
//        scanf("%s", name[0]);
//        while (1)     // ����ѭ�������ڶ�ȡ�������֣�ֱ������"END"
//        {
//            // �Ƚ���������1���ٶ�ȡ���ִ洢����Ӧλ��
//            scanf("%s", name[++cnt]);
//            // �Ƚϵ�ǰ��ȡ�������Ƿ�Ϊ"END"�������������ѭ��
//            if (strcmp(name[cnt], flag) == 0)    break;
//        }
//
//        // ð�����򣺶Զ�ȡ�����֣�����START��END�����ֵ����С��������
//        for (int i = cnt - 1; i > 0; i--)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                // �Ƚ������������ֵ��ֵ������ǰ�ߴ��ں����򽻻�
//                if (strcmp(name[j], name[j + 1]) > 0)
//                {
//                    char t[20] = { 0 };  // ��ʱ�ַ������ڽ���
//                    strcpy(t, name[j]);
//                    strcpy(name[j], name[j + 1]);
//                    strcpy(name[j + 1], t);
//                }
//            }
//        }
//
//        // ��ʼ����Ĭ�ϵ�һ�����ֳ��ִ���Ϊ1���ǳ��ִ�������
//        p = maxP = 1;
//        strcpy(maxPeople, name[1]);
//
//        // �������������֣�ͳ��ÿ�����ֳ��ֵĴ������ҳ����ִ�����������
//        for (int i = 2; i < cnt; i++)
//        {
//            // �����ǰ������ǰһ��������ͬ��˵����ͬһ���ˣ�������1
//            if (strcmp(name[i], name[i - 1]) == 0)
//            {
//                p++;
//                // �����ǰ���������������������������Ͷ�Ӧ������
//                if (p > maxP)
//                {
//                    maxP = p;
//                    strcpy(maxPeople, name[i]);
//                }
//            }
//            else  
//                p = 1;  // �����ǰ������ǰһ����ͬ�����ü���Ϊ1
//        }
//
//        // �����ǰ���������г��ִ�����������
//        printf("%s\n", maxPeople);
//    }
////    return 0;  // ������������
//}

//
//
//#include<stdio.h>
//#include<string.h>
// 
//int hanshu2(char* str1, char* str2)
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int max = 0; 
//    for (int k = 1; k <= len1 && k <= len2; k++) 
//    {
//        int match = 1;
//        for (int i = 0; i < k; i++)
//        {
//            if (str1[len1 - k + i] != str2[i]) 
//            {
//                match = 0;
//                break;
//            }
//        }
//        if (match) 
//        {
//            max = k;
//        }
//    }
//    return max;
//} 
//void hanshu(char* str1, char* str2, char* result) 
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    int overlap = hanshu2(str1, str2); 
//    strcpy(result, str1); 
//    strcat(result, &str2[overlap]);
//} 
//int main() 
//{
//    char str1[202] = { 0 }, str2[202] = { 0 };
//    while (scanf("%s %s", str1, str2) == 2) 
//    {
//        char res1[404] = { 0 }, res2[404] = { 0 }; 
//        hanshu(str1, str2, res1);
//        hanshu(str2, str1, res2); 
//        int len1 = strlen(res1);
//        int len2 = strlen(res2); 
//        if (len1 < len2) 
//        {
//            printf("%s\n", res1);
//        }
//        else if (len1 > len2) 
//        {
//            printf("%s\n", res2);
//        }
//        else 
//        { 
//            if (strcmp(res1, res2) < 0) 
//            {
//                printf("%s\n", res1);
//            }
//            else 
//            {
//                printf("%s\n", res2);
//            }
//        }
//    }
//    return 0;
////}
//#include<stdio.h>
//int arr[51];
//int main()
//{
//	int t;
//	arr[1] = 1;
//	arr[2] = 2;
//	for (int i = 3; i < 51; i++)
//	{ 
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	scanf("%d", &t);
//	while (t--) 
//	{
//		int n;
//		scanf("%d", &n); 
//		int count = 0;
//		for (int i = 1; i < 50; i++) 
//		{
//			for (int j = i; j < 50; j++) 
//			{
//				for (int k = j; k <= 50; k++) 
//				{
//					 if (n == arr[i] + arr[j] + arr[k]) 
//					 {
//						count++;
//					}
//				}
//			}
//		}
//		printf("%d\n", count);
//
//	}
//	return 0;
//}
 




//
//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int arr[10002] = { 0 }, n;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        long long sum1 = 0, max = 0, sum2 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            max = (max > arr[i] ? max : arr[i]);
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (arr[i] == max) break;
//            sum1 += arr[i];
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum2 += arr[i];
//        }
//        long long sum3 = sum2 - sum1 - max + arr[0];
//        long long a = sum1 + sum2 - max, b = sum2 - arr[n - 1], c = sum2 - arr[0], d = sum3 + sum2 - max, min = 0;
//        min = (a <= b) ? a : b;
//        min = (min <= c) ? min : c;
//        min = (min <= d) ? min : d;
//        printf("%lld\n", min);
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//long  long  hanshu1(long long a)
//{
//    long long  sum = 0;
//    while (a != 0)
//    {
//        sum += a % 10;
//        a /= 10;
//    }
//    return sum;
//}
//long long hanshu2(long long n)
//{
//    for (int x = 2; x * x <= n; x++)
//    {
//        if (n % x == 0)
//        {
//            int y = n / x;
//            if (y == 1) continue;
//            if (hanshu1(n) == hanshu1(x) * hanshu1(y))
//            {
//                return 1;
//            }
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long L, R, k, count = 0;
//        scanf("%lld %lld", &L, &R);
//        for (long long i = L; i <= R; i++)
//        {
//            if (hanshu2(i)) count++;
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//}


//
//
//#include <stdio.h>
//#include <stdbool.h>
//
//// ��������n�������
//long long digit_sum(long long n) {
//    long long sum = 0;
//    while (n > 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//// �ж�n�Ƿ������������
//bool has_property(long long n) {
//    // С��4���������ܱ�ʾΪ��������1�����ĳ˻�
//    if (n < 4) return false;
//
//    long long s_n = digit_sum(n);
//
//    // ������п��ܵ����Ӷ�(x,y)
//    for (long long x = 2; x * x <= n; x++) {
//        if (n % x == 0) {  // x��n������
//            long long y = n / x;
//            if (y == 1) continue;  // y�������1
//
//            long long s_x = digit_sum(x);
//            long long  s_y = digit_sum(y);
//
//            if (s_x * s_y == s_n) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//// ����[L, R]����������������Ե����ĸ���
//int count_in_range(int L, int R) {
//    long long  count = 0;
//    for (long long n = L; n <= R; n++) {
//        if (has_property(n)) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    long long  T;
//    scanf("%d", &T);
//
//    while (T--) {
//        long long L, R;
//        scanf("%lld %lld", &L, &R);
//        printf("%lld\n", count_in_range(L, R));
//    }
//
//    return 0;
//}





//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//// �ж�һ�����Ƿ�������Y��
//bool isInY(long long x, int c, int d, long long max_limit) {
//    if (x == 0) return true; // 0�ǳ�ʼֵ�������ǻ������������ų�
//
//    // ����c=1���������������������
//    if (c == 1) {
//        if (d == 0) return false; // ��Ŀ��d��������������ֻ�Ƿ������ж�
//        if ((x % d) != 0) return false;
//        return true;
//    }
//
//    // ����c>1�������ָ��������
//    long long y = 0;
//    while (y < x) {
//        y = c * y + d;
//        if (y == x) return true;
//        if (y > max_limit) break;
//    }
//    return false;
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//    const long long MAX_LIMIT = 1000000000;
//
//    while (T--) {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//
//        long long count = 0;
//        long long x = 0;
//
//        // ��������X������Ƿ���Y��
//        while (1) {
//            x = a * x + b; // ������һ��ֵ
//            if (x > MAX_LIMIT) break; // ������Χ��ֹͣ
//            if (x < 1) continue; // ֻͳ��>=1����
//
//            // ���x�Ƿ�������Y��
//            if (isInY(x, c, d, MAX_LIMIT)) {
//                count++;
//            }
//
//            // ��ֹ����ѭ������a=1ʱ��������������Ҫ���⴦��
//            if (a == 1) {
//                // ����ʣ�ಽ���������������
//                if (x > MAX_LIMIT - b) break;
//            }
//            else if (x > MAX_LIMIT / a) {
//                // ��ֹ��һ���������
//                break;
//            }
//        }
//
//        printf("%lld\n", count);
//    }
//    return 0;
//}




//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//// �ȽϺ���������qsort����
//int compare(const void* a, const void* b) {
//    long long num1 = *(long long*)a;
//    long long num2 = *(long long*)b;
//    return (num1 > num2) - (num1 < num2);
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    long long* a = (long long*)malloc(n * sizeof(long long));
//    long long sum = 0;
//
//    // ��ȡ���鲢�����ܺ�
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &a[i]);
//        sum += a[i];
//    }
//
//    // ���2*sum�Ƿ��ܱ�n����
//    if ((2 * sum) % n != 0) {
//        printf("0\n");
//        free(a);
//        return 0;
//    }
//
//    long long target_sum = (2 * sum) / n;
//
//    // �������飬Ϊ����˫ָ�������׼��
//    qsort(a, n, sizeof(long long), compare);
//
//    long long count = 0;
//    int left = 0, right = n - 1;
//
//    // ʹ��˫ָ����Һ�Ϊtarget_sum��Ԫ�ض�
//    while (left < right) {
//        long long current_sum = a[left] + a[right];
//
//        if (current_sum == target_sum) {
//            // �������ظ�Ԫ�ص����
//            if (a[left] == a[right]) {
//                // �������ͬԪ����ѡ2���������
//                long long m = right - left + 1;
//                count += m * (m - 1) / 2;
//                break;  // �Ѵ�����������ͬԪ��
//            }
//            else {
//                // ͳ�������ͬԪ�ص�����
//                int left_count = 1;
//                while (left + left_count < right && a[left + left_count] == a[left]) {
//                    left_count++;
//                }
//
//                // ͳ���Ҳ���ͬԪ�ص�����
//                int right_count = 1;
//                while (right - right_count > left && a[right - right_count] == a[right]) {
//                    right_count++;
//                }
//
//                count += (long long)left_count * right_count;
//
//                // �ƶ�ָ��������ͳ�Ƶ�Ԫ��
//                left += left_count;
//                right -= right_count;
//            }
//        }
//        else if (current_sum < target_sum) {
//            left++;
//        }
//        else {
//            right--;
//        }
//    }
//
//    printf("%lld\n", count);
//    free(a);
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//void hanshu(char arr1[], char arr2[], char result[],int len1,int len2)
//{
//    int j = 0,count=0;
//    for (int i = len1 - 1; i >= 0; i--)
//    {
//        if (arr1[i] == arr2[j])
//        {
//            count++;
//            j++;
//        }
//        else break;
//    }
//    char arr3[202] = { 0 };
//    for (int i = count; i < len2; i++)
//    {
//        strcpy(arr3, arr1);
//        arr1[len1 + i - count + 1] = arr2[i];
//        strcpy(result, arr1);
//        strcpy(arr1, arr3);
//    }
//}
//int main()
//{
//    char arr1[202] = { 0 }, arr2[202] = { 0 };
//    while (scanf("%s", arr1) == 1 && scanf("%s", arr2) == 1)
//    {
//        char result1[202] = { 0 }, result2[202] = { 0 };
//        int len1 = strlen(arr1), len2 = strlen(arr2);
//         hanshu(arr1, arr2, result1,len1,len2);
//         hanshu(arr2, arr1, result2,len1,len2);
//        if (strlen(result1) < strlen(result2)) printf("%s\n", result1);
//        else if (strlen(result1) > strlen(result2)) printf("%s\n", result2);
//        else
//        {
//            if (strcmp(result1, result2) < 0) printf("%s\n", result1);
//            else printf("%s\n", result2);
//        }
//    }
//    return 0;
//}




//
//#include<stdio.h>
//int arr[1000] = { 0 };
//
//void hanshu()
//{
//    arr[0] = 1;
//    arr[1] = 2;
//    for (int i = 2; i < 1000; i++)
//    {
//        if (arr[i - 1] > 1000000000 - arr[i - 2])
//        {
//            arr[i] = arr[i - 1] + arr[i - 2];
//        }
//    }
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    hanshu();
//    while (T--)
//    {
//        int n, count = 0;
//        scanf("%d", &n);
//        for (int i = 0; arr[i] < n; i++)
//        {
//            for (int j = i; arr[i] + arr[j] < n; j++)
//            {
//                for (int k = j; arr[k] + arr[i] + arr[j] <= n; k++)
//                {
//                    if (arr[i] + arr[j] + arr[k] == n)count++;
//                    break;
//                }
//            }
//        }
//        printf("%d\n", count);
//    }
//    return 0;
////}
//
//
//
//
//
//
//#include<stdio.h>
//#include<string.h>
//#include<math.h>   
//int hanshu(char arr1[])
//{
//    int sum = 0;
//    for (int i = 17; i >= 0; i--)
//    {
//        int a;
//        if (i == 0)
//        {
//            if (arr1[17 - i] == 'X' || arr1[17 - i] == 'x')
//                a = 10;
//            else
//                a = arr1[17 - i] - '0';
//        }
//        else
//        {
//            a = arr1[17 - i] - '0';
//        }
//        sum += a * (int)pow(2, i);
//    }
//    return (sum % 11 == 1) ? 1 : 0;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[19] = { 0 };
//        char result[19] = { 0 };
//        scanf("%s", arr1);
//        memset(result, '-', 18);
//        result[18] = '\0';
//        for (int i = 0; i < 18; i++)
//        {
//            char t = arr1[i];
//            int found = 0;
//            if (i < 17) {
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;
//                    if (hanshu(arr1))
//                    {
//                        if (j != (t - '0')) {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;
//                    if (hanshu(arr1))
//                    {
//                        if ((t != 'X' && t != 'x') && (j != (t - '0')))
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                        else if ((t == 'X' || t == 'x') && j != 10)
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//                if (!found)
//                {
//                    arr1[i] = 'X';
//                    if (hanshu(arr1))
//                    {
//                        if (t != 'X' && t != 'x')
//                        {
//                            result[i] = 'X';
//                            found = 1;
//                        }
//                    }
//                }
//            }
//            arr1[i] = t;
//        }
//        printf("%s\n", result);
//    }
//    return 0;
//}





//
//#include<stdio.h>   // �����׼��������⣬���������������
//#include<string.h>  // �����ַ�������⣬�����ַ�����������
//#include<math.h>    // ������ѧ�⣬���������㺯��pow
//
//// �������ܣ���֤���֤���Ƿ����У�鹫ʽ
//// ������arr1[] - �洢���֤�ŵ��ַ�����
//// ����ֵ��1��ʾ����У�鹫ʽ��0��ʾ������
//int hanshu(char arr1[])
//{
//    int sum = 0;  // ���ڴ洢�����ܺ�
//
//    // ѭ������ǰ18λ���ӦȨ��(2^i)�ĳ˻�֮��
//    // i��17��0����ʾ��ʽ�е�ָ��i����Ӧ���֤�ŵ�a17��a0��
//    for (int i = 17; i >= 0; i--)
//    {
//        int a;  // �洢��ǰλ����ֵ
//
//        // �������һλ��У��λ��i=0��Ӧa0��
//        if (i == 0)
//        {
//            // �����'X'��'x'����ʾ��ֵ10
//            if (arr1[17 - i] == 'X' || arr1[17 - i] == 'x')
//                a = 10;
//            else
//                // ����ת��Ϊ��Ӧ������
//                a = arr1[17 - i] - '0';
//        }
//        else
//        {
//            // ǰ17λֱ��ת��Ϊ����
//            a = arr1[17 - i] - '0';
//        }
//
//        // �ۼӵ�ǰλ��ֵ��2^i�ĳ˻�
//        sum += a * (int)pow(2, i);
//    }
//
//    // У���ܺ�ģ11�Ƿ����1�����򷵻�1�����򷵻�0
//    return (sum % 11 == 1) ? 1 : 0;
//}
//
//int main()
//{
//    int T;  // �洢��������������
//    scanf("%d", &T);  // ��ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        char arr1[19] = { 0 };  // �洢��������֤�ţ�18λ+��������
//        char result[19] = { 0 }; // �洢�������ʼ��Ϊ18��'-'
//
//        scanf("%s", arr1);  // ��ȡ���֤���ַ���
//        memset(result, '-', 18);  // ����������ʼ��Ϊ18��'-'
//        result[18] = '\0';  // ����ַ���������
//
//        // �������֤�ŵ�ÿһλ��0��17λ��
//        for (int i = 0; i < 18; i++)
//        {
//            char t = arr1[i];  // ���浱ǰλ��ԭʼ�ַ�
//            int found = 0;     // ����Ƿ��ҵ���ȷ���ַ�
//
//            // ����ǰ17λ������λ��
//            if (i < 17) {
//                // ���Խ���ǰλ�滻Ϊ0-9�е�ÿ������
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;  // �滻��ǰλΪ����j
//
//                    // ����滻�����У�鹫ʽ
//                    if (hanshu(arr1))
//                    {
//                        // ����ԭʼ�ַ���ͬ��ȷ������������
//                        if (j != (t - '0')) {
//                            result[i] = '0' + j;  // ��¼��ȷ������
//                            found = 1;            // ������ҵ�
//                            break;                // ����ѭ��
//                        }
//                    }
//                }
//            }
//            // �����18λ��У��λ�����������ֻ�X��
//            else
//            {
//                // �ȳ���0-9������
//                for (int j = 0; j < 10; j++)
//                {
//                    arr1[i] = '0' + j;  // �滻��ǰλΪ����j
//
//                    // ����滻�����У�鹫ʽ
//                    if (hanshu(arr1))
//                    {
//                        // ԭʼ�ַ�����X�����滻��������ԭʼ��ͬ
//                        if ((t != 'X' && t != 'x') && (j != (t - '0')))
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                        // ԭʼ�ַ���X�����滻�����ֲ���10��X����10��
//                        else if ((t == 'X' || t == 'x') && j != 10)
//                        {
//                            result[i] = '0' + j;
//                            found = 1;
//                            break;
//                        }
//                    }
//                }
//
//                // ���û�ҵ����ʵ����֣������滻ΪX
//                if (!found)
//                {
//                    arr1[i] = 'X';  // �滻��ǰλΪX
//
//                    // ����滻�����У�鹫ʽ
//                    if (hanshu(arr1))
//                    {
//                        // ��ԭʼ�ַ�����X
//                        if (t != 'X' && t != 'x')
//                        {
//                            result[i] = 'X';  // ��¼��ȷ���ַ�ΪX
//                            found = 1;
//                        }
//                    }
//                }
//            }
//
//            arr1[i] = t;  // �ָ���ǰλ��ԭʼ�ַ�����Ӱ����һλ�ļ��
//        }
//
//        printf("%s\n", result);  // �����ǰ���������Ľ��
//    }
//    return 0;
//}
//
//#include <stdio.h>
//#include <string.h> 
//#define MAX_N 10000001   
//int result[MAX_N];
//int hanshu1(int n)
//{
//    int sum = 0;
//    while (n > 0)
//    {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//void hanshu2()
//{
//    memset(result, 0, sizeof(result));
//    for (int x = 2; x < MAX_N; x++)
//    {
//        int sx = hanshu1(x);
//        for (int y = x; ; y++)
//        {
//            long long n = (long long)x * y;
//            if (n >= MAX_N) break;
//            if (y == 1) continue;
//            int sy = hanshu1(y);
//            int sn = hanshu1(n);
//
//            if (sn == sx * sy)
//            {
//                result[n] = 1;
//            }
//        }
//    }
//    int count = 0;
//    for (int i = 1; i < MAX_N; i++)
//    {
//        if (result[i]) count++;
//        result[i] = count;
//    }
//}
//
//int main()
//{
//    hanshu2();
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int L, R;
//        scanf("%d %d", &L, &R);
//        printf("%d\n", result[R] - result[L - 1]);
//    }
//    return 0;
//}



//
//#include <stdio.h>   // �����׼��������⣬���������������
//#include <string.h>  // �����ַ�������⣬�����ڴ��ʼ������memset
//#define MAX_N 10000001  // �����MAX_NΪ10000001����Ϊ�������󳤶Ⱥ����ݷ�Χ����
//
//int result[MAX_N];  // ����ȫ������result�����ڴ洢Ԥ����Ľ��
//
//// ����hanshu1������һ�������ĸ�λ����֮��
//int hanshu1(int n)
//{
//    int sum = 0;  // ��ʼ����Ϊ0
//    while (n > 0)  // ��n����0ʱ��ѭ����ȡ��λ����
//    {
//        sum += n % 10;  // ȡn�ĸ�λ���ֲ��ۼӵ�sum
//        n /= 10;        // ȥ��n�ĸ�λ����
//    }
//    return sum;  // ���ظ�λ����֮��
//}
//
//// ����hanshu2��Ԥ�������з������������ֲ�ͳ������
//void hanshu2()
//{
//    memset(result, 0, sizeof(result));  // ��result��������Ԫ�س�ʼ��Ϊ0
//
//    // ���ѭ�����������ܵĳ���x����2��ʼ��
//    for (int x = 2; x < MAX_N; x++)
//    {
//        int sx = hanshu1(x);  // ����x�ĸ�λ����֮�ͣ��洢��sx��
//
//        // �ڲ�ѭ�����������ܵĳ���y����x��ʼ�������ظ����㣩
//        for (int y = x; ; y++)
//        {
//            long long n = (long long)x * y;  // ����˻�n��ʹ��long long�������
//            if (n >= MAX_N) break;  // ��n������Χ����ʱ�������ڲ�ѭ��
//
//            if (y == 1) continue;  // ��yΪ1����������x��2��ʼ��������ʵ�ʲ��ᴥ����
//
//            int sy = hanshu1(y);  // ����y�ĸ�λ����֮�ͣ��洢��sy��
//            int sn = hanshu1(n);  // ����˻�n�ĸ�λ����֮�ͣ��洢��sn��
//
//            // ��n�ĸ�λ�͵���x��y�ĸ�λ�͵ĳ˻�������nΪ��������
//            if (sn == sx * sy)
//            {
//                result[n] = 1;  // ��result[n]��Ϊ1����ʾn��������
//            }
//        }
//    }
//
//    // ����ǰ׺�ͣ���result����ת��Ϊ"����ǰ����Ϊֹ������������������"
//    int count = 0;  // ����������¼������������������
//    for (int i = 1; i < MAX_N; i++)
//    {
//        if (result[i]) count++;  // ����ǰ���ַ�����������������1
//        result[i] = count;       // ����ǰ�ۼ�������result[i]
//    }
//}
//
//int main()
//{
//    hanshu2();  // ����hanshu2����Ԥ�������ɽ������
//
//    int T;  // �������T����ʾ������������
//    scanf("%d", &T);  // ��ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        int L, R;  // �������L��R����ʾ��ѯ�����䷶Χ
//        scanf("%d %d", &L, &R);  // ��ȡ��������Ҷ˵�
//
//        // �������[L, R]�ڷ�����������������������ǰ׺�ͼ��㣩
//        printf("%d\n", result[R] - result[L - 1]);
//    }
//
//    return 0;  // ������������
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long arr1[100000] = { 0 }, arr2[100000] = { 0 };
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        for (long long i = 1; arr1[i] < 1000000000; i++)
//        {
//            arr1[i] = a * arr1[i - 1] + b;
//        }
//        for (long long i = 1; arr2[i] < 1000000000; i++)
//        {
//            arr2[i] = a * arr2[i - 1] + b;
//        }
//        long long a1 = strlen(arr1);
//        long long b1 = strlen(arr2), count = 0;
//        for (long long i = 0; i < a1; i++)
//        {
//            for (long long j = 0; j < b1; j++)
//            {
//                if (arr1[i] == arr2[j]) count++;
//            }
//        }
//        printf("%lld\n", count);
//    }
//}
//
// 
////  
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h> 
//bool hanshu(long long x, int c, int d, long long max ) 
//{
//    if (x == 0) return true;   
//    if (c == 1) 
//    {
//        if (d == 0) return false; 
//        if ((x % d) != 0) return false;
//        return true;
//    } 
//    long long y = 0;
//    while (y < x) 
//    {
//        y = c * y + d;
//        if (y == x) return true;
//        if (y > max ) break;
//    }
//    return false;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T);
//     long long MAX  = 1000000000; 
//    while (T--) 
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d); 
//        long long count = 0;
//        long long x = 0; 
//        while (1) 
//        {
//            x = a * x + b;  
//            if (x > MAX ) break; 
//            if (x < 1) continue;   
//            if (hanshu(x, c, d, MAX )) 
//            {
//                count++;
//            } 
//            if (a == 1) 
//            { 
//                if (x > MAX   - b) break;
//            }
//            else if (x > MAX  / a) 
//            { 
//                break;
//            }
//        } 
//        printf("%lld\n", count);
//    }
//    return 0;
//}
//



//
//
//�ڶ���
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h> 
//
//bool hanshu(long long x, int c, int d, long long max)
//{
//    if (x == 0) return true;
//
//    // ����c=0���������
//    if (c == 0) {
//        if (d == x) return true;
//        return false;
//    }
//
//    // ����c=1������������Ȳ����У�
//    if (c == 1) {
//        // ��d=0ʱ��������0,0,0,...��ֻ��x=0������
//        if (d == 0) return x == 0;
//        // ������0, d, 2d, 3d,...����Ҫx��d�ı����ҷǸ�
//        return x % d == 0 && x / d >= 0;
//    }
//
//    long long y = 0;
//    while (true)
//    {
//        if (y == x) return true;
//        // ������һ��
//        long long next_y = c * y + d;
//        // ����Ƿ�����򳬹����ֵ
//        if (next_y > max || next_y < y) break;
//        y = next_y;
//    }
//    return false;
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    long long MAX = 1000000000;
//    while (T--)
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);
//        long long count = 0;
//        long long x = 0;
//        while (true)
//        {
//            // ������һ��
//            long long next_x = a * x + b;
//            // ����Ƿ�����򳬹����ֵ
//            if (next_x > MAX || (a > 0 && next_x < x)) break;
//            x = next_x;
//
//            if (x < 1) continue;
//            if (hanshu(x, c, d, MAX))
//            {
//                count++;
//            }
//
//            // ����Ƿ���������ѭ��
//            if (a == 1) {
//                // ��a=1��b=0ʱ��x���ٱ仯����������ѭ��
//                if (b == 0) break;
//                // �����һ���Ƿ�ᳬ��MAX
//                if (b > 0 && x > MAX - b) break;
//            }
//        }
//        printf("%lld\n", count);
//    }
//    return 0;
//}

