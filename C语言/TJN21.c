#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//
//
//
//#include <stdio.h>
//#include <string.h> 
//int K, len;
//char str[1010] = { 0 };
//int main()
//{
//    scanf("%d", &K);
//    while (K--)
//    {
//        scanf("%s", str + 1);
//        len = strlen(str + 1);
//        int flag, i, j, k;
//        int n = len / 2, ans = 0;
//        for (i = n; i >= 1; i--)               
//        {
//            for (j = 1; j <= len + 1 - 2 * i; j++)  
//            {
//                flag = 1;                      
//                for (k = j; k < j + i; k++)     
//                {
//                    if (str[k] != str[k + i]) 
//                    {
//                        flag = 0;
//                        break;  
//                    }
//                }
//                if (flag == 1) 
//                {
//                    ans = 2 * i; break;
//                }   
//            }
//            if (flag == 1)  break;
//        }
//        printf("%d\n", ans);
//    }
//    return 0;
//}

 
//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[1010] = { 0 }, arr2[1010] = { 0 };
//        int arr3[28] = { 0 };
//        scanf("%s %s", arr1 + 1, arr2 + 1);
//        int a = strlen(arr1 + 1), count = 0;
//        for (int i = 1; i <= a; i++)
//        {
//            arr3[arr1[i] - 'a']++;
//            arr3[arr2[i] - 'a']++;
//        }
//        for (int i = 0; i <= 26; i++)
//        {
//            if (arr3[i] != 0) count++;
//        }
//        if (count == 2 * a) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h> 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char arr1[1001], arr2[1001];
//        scanf("%s", arr1);
//        scanf("%s", arr2);
//        char map[256] = { 0 };  
//        int used[256] = { 0 };  
//        int valid = 1; 
//        for (int i = 0; i < strlen(arr1); i++)
//        {
//            char p = arr1[i];
//            char c = arr2[i];
//            if (map[p] == 0)
//            { 
//                if (used[c]) 
//                {
//                    valid = 0;
//                    break;
//                }
//                map[p] = c;
//                used[c] = 1;
//            }
//            else 
//            { 
//                if (map[p] != c) 
//                {
//                    valid = 0;
//                    break;
//                }
//            }
//        } 
//        if (valid) 
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


//
//
//#include <stdio.h>   // ������׼��������⣬���������������
//#include <string.h>  // �����ַ�������⣬�����ַ�����غ���
//
//int main()
//{
//    int T;                  // �������T�����ڴ洢��������������
//    scanf("%d", &T);        // �ӱ�׼�����ȡ������������T 
//    while (T--)             // ѭ��ִ��T�β�������
//    {
//        char arr1[1001], arr2[1001];  // ���������ַ����飬���ڴ洢����������ַ���
//        scanf("%s", arr1);            // ��ȡ��һ���ַ�����arr1
//        scanf("%s", arr2);            // ��ȡ�ڶ����ַ�����arr2
//
//        char map[256] = { 0 };        // ����ӳ�����飬�洢�ַ�֮���ӳ���ϵ����ʼ��Ϊ0��
//        int used[256] = { 0 };        // ���������飬��¼�ַ��Ƿ��ѱ�ӳ�䣨0��ʾδʹ�ã�1��ʾ��ʹ�ã�
//        int valid = 1;                // ������Ч�Ա�ǣ�1��ʾ��ǰӳ����Ч��0��ʾ��Ч
//
//        // ������һ���ַ�����ÿ���ַ�
//        for (int i = 0; i < strlen(arr1); i++)
//        {
//            char p = arr1[i];         // ��ȡarr1��ǰλ�õ��ַ�
//            char c = arr2[i];         // ��ȡarr2��ǰλ�õ��ַ�
//
//            if (map[p] == 0)          // ���p��δ����ӳ��
//            {
//                if (used[c])          // ���c�Ƿ��ѱ������ַ�ӳ��
//                {
//                    valid = 0;        // ���ѱ�ʹ�ã����Ϊ��Ч
//                    break;            // ����ѭ��
//                }
//                map[p] = c;           // ����p��c��ӳ��
//                used[c] = 1;          // ���c�ѱ�ʹ��
//            }
//            else                      // ���p�ѽ���ӳ��
//            {
//                if (map[p] != c)      // ��鵱ǰӳ���Ƿ���֮ǰ��ӳ��һ��
//                {
//                    valid = 0;        // ����һ�£����Ϊ��Ч
//                    break;            // ����ѭ��
//                }
//            }
//        }
//
//        if (valid)                   // ������Ч�Ա��������
//        {
//            printf("Yes\n");          // ӳ����Ч�����"Yes"
//        }
//        else
//        {
//            printf("No\n");           // ӳ����Ч�����"No"
//        }
//    }
//    return 0;                        // ������������
//}


//
//#include <stdio.h>
//#include <string.h>
//
//int hanshu(char* s) 
//{
//    int len = strlen(s); 
//    long long a = (long long)len * (len + 1) / 2;
//    long long b = 0; 
//    for (int i = 0; i < len; ) 
//    {
//        char c = s[i];
//        int j = i; 
//        while (j < len && s[j] == c) 
//        {
//            j++;
//        } 
//        int k = j - i; 
//        b += (long long)k * (k - 1) / 2;
//        i = j;
//    } 
//    return a - b;
//} 
//int main() 
//{
//    char s[151]; 
//    while (scanf("%s", s) == 1) 
//    {
//        printf("%d\n", hanshu(s)-1);
//    }
//    return 0;
//}
//


// 
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// �Ƚ������ַ���������qsort
//int str_cmp(const void* a, const void* b) {
//    return strcmp(*(const char**)a, *(const char**)b);
//}
//
//// ����ַ����Ƿ��Ѵ����������У�����ȥ�أ�
//int exists(const char** arr, int count, const char* str) {
//    for (int i = 0; i < count; i++) {
//        if (strcmp(arr[i], str) == 0) {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int hanshu(char* s) {
//    int len = strlen(s);
//    int capacity = 1000; // ��ʼ����
//    int count = 0;
//    char** results = (char**)malloc(capacity * sizeof(char*));
//    if (!results) return 0; // �ڴ����ʧ��
//
//    for (int i = 0; i <= len; ++i) {
//        for (int j = i; j <= len; ++j) {
//            // ����ɾ�������ַ��������
//            if (i == 0 && j == len) continue;
//
//            // �������ַ������Ȳ������ڴ�
//            int new_len = len - (j - i);
//            char* new_str = (char*)malloc(new_len + 1);
//            if (!new_str) continue;
//
//            // �������ַ���
//            int pos = 0;
//            for (int k = 0; k < len; ++k) {
//                if (k < i || k >= j) {
//                    new_str[pos++] = s[k];
//                }
//            }
//            new_str[pos] = '\0'; // �ַ���������
//
//            // ����Ƿ��Ѵ��ڣ�����������ӵ������
//            if (!exists(results, count, new_str)) {
//                // �����������������
//                if (count >= capacity) {
//                    capacity *= 2;
//                    char** temp = (char**)realloc(results, capacity * sizeof(char*));
//                    if (!temp) break;
//                    results = temp;
//                }
//                results[count++] = new_str;
//            }
//            else {
//                free(new_str); // �Ѵ������ͷ��ڴ�
//            }
//        }
//    }
//
//    // ����������
//    int result_count = count;
//
//    // �ͷ����з�����ڴ�
//    for (int i = 0; i < count; i++) {
//        free(results[i]);
//    }
//    free(results);
//
//    return result_count;
//}
//
//int main() {
//    char s[151];
//    while (scanf("%s", s) == 1) {
//        printf("%d\n", hanshu(s));
//    }
//    return 0;
//}
// 
//
//#include <stdio.h>
//#include <string.h>
//#include <limits.h> 
//int hanshu (const char* s, int n, int k) 
//{
//    int total = 0;
//    int repeat = n / k;  
//
//    for (int i = 0; i < k; i++) 
//    { 
//        int count[26] = { 0 };
//        for (int j = 0; j < repeat; j++) 
//        {
//            char c = s[i + j * k];
//            count[c - 'a']++;
//        } 
//        int max  = 0;
//        for (int c = 0; c < 26; c++) 
//        {
//            if (count[c] > max ) 
//            {
//                max  = count[c];
//            }
//        } 
//        total += (repeat - max );
//    }
//
//    return total;
//}
//
//int main() 
//{
//    char s[10001];
//    while (scanf("%s", s) == 1) 
//    {  
//        int n = strlen(s);
//        int min  = INT_MAX; 
//        for (int k = 1; k <= n / 2; k++) 
//        {
//            if (n % k == 0) 
//            {   
//                int mod = hanshu(s, n, k);
//                if (mod < min ) 
//                {
//                    min  = mod;
//                }
//            }
//        }
//
//        printf("%d\n", min );
//    }
//    return 0;
//}
//

//
//
//#include <stdio.h>      // ������׼�������������
//#include <string.h>     // �����ַ�����������
//#include <limits.h>     // �����������ͼ���ֵ���壨��INT_MAX��
//
//// �������ܣ����㽫�ַ���sת��Ϊ����Ϊk���Ӵ��ظ�n/k��������޸Ĵ���
//// ������
////   s - ������ַ���
////   n - �ַ���s�ĳ���
////   k - �Ӵ��ĳ���
//// ����ֵ������������޸Ĵ���
//int hanshu(const char* s, int n, int k)
//{
//    int total = 0;                  // �洢���޸Ĵ���
//    int repeat = n / k;             // �����Ӵ���Ҫ�ظ��Ĵ������ܳ���/�Ӵ����ȣ�
//
//    // �����Ӵ��е�ÿ��λ�ã�0��k-1��
//    for (int i = 0; i < k; i++)
//    {
//        // ͳ�Ƹ�λ���������ظ��г��ֵĸ����ַ��Ĵ�����26��Сд��ĸ��
//        int count[26] = { 0 };      // ��ʼ���������飬Ĭ��Ϊ0
//
//        // ����ÿ���ظ����Ӵ���ͳ�Ƶ�ǰλ��(i)���ַ����ִ���
//        for (int j = 0; j < repeat; j++)
//        {
//            // ��ȡ��j���ظ��Ӵ��е�i��λ�õ��ַ�
//            char c = s[i + j * k];
//            // ��Ӧ�ַ��ļ�����1��'a'-'a'=0, 'b'-'a'=1, ..., 'z'-'a'=25��
//            count[c - 'a']++;
//        }
//
//        // �ҵ���ǰλ�ó��ִ��������ַ��Ĵ���
//        int max = 0;
//        for (int c = 0; c < 26; c++)
//        {
//            if (count[c] > max)
//            {
//                max = count[c];    // ���������ִ���
//            }
//        }
//
//        // ��λ����Ҫ�޸ĵĴ��� = ���ظ����� - �����ִ���
//        // ���������ִ��������ַ����޸������ַ���
//        total += (repeat - max);
//    }
//
//    return total;   // �������޸Ĵ���
//}
//
//int main()
//{
//    char s[10001];  // ����洢�����ַ��������飬��󳤶�10000
//
//    // ѭ����ȡ�����ַ�����ֱ���ļ�������EOF��
//    while (scanf("%s", s) == 1)
//    {
//        int n = strlen(s);          // ��ȡ�ַ�������
//        int min = INT_MAX;         // ��ʼ����С�޸Ĵ���Ϊ�������ֵ
//
//        // ������п��ܵ��Ӵ�����k��k����������n���ظ�����>1��
//        // k�ķ�Χ��1��n/2����֤�ظ���������Ϊ2��
//        for (int k = 1; k <= n / 2; k++)
//        {
//            if (n % k == 0)         // k������n��Լ������֤��������
//            {
//                // ���㵱ǰk��Ӧ���޸Ĵ���
//                int mod = hanshu(s, n, k);
//                // ������С�޸Ĵ���
//                if (mod < min)
//                {
//                    min = mod;
//                }
//            }
//        }
//
//        // �����С�޸Ĵ���
//        printf("%d\n", min);
//    }
//    return 0;
//}




//
//#include <stdio.h>
//#include <string.h>
//#include <limits.h> 
//int arr1[26][26]; 
//void hanshu() 
//{
//    for (int i = 0; i < 26; i++) 
//    {
//        for (int j = 0; j < 26; j++) 
//        {
//            int d = (j - i + 26) % 26;
//            arr1[i][j] = (d < 26 - d) ? d : 26 - d;
//        }
//    }
//} 
//int main() 
//{ 
//    hanshu(); 
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char t[1001], c[1001];
//        scanf("%s %s", t, c);
//        int n = strlen(t); 
//        int  tnum[1001], cnum[1001];
//        for (int i = 0; i < n; i++) 
//        {
//            tnum[i] = t[i] - 'a';
//            cnum[i] = c[i] - 'a';
//        } 
//        int min = INT_MAX; 
//        for (int k = 0; k <= n / 2; k++) 
//        { 
//            for (int sign = 0; sign < 2; sign++)
//                {
//                int shift = sign ? (n - k) : k;
//                if (shift == 0 || shift == n) continue; 
//                int s = (k < n - k) ? k : n - k;
//                int total = s; 
//                for (int i = 0; i < n; i++) 
//                {
//                    int x = (i + shift) % n;
//                    total += arr1[tnum[x]][cnum[i]];
//                } 
//                if (total < min) 
//                {
//                    min = total;
//                }
//            }
//        } 
//        int total = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            total += arr1[tnum[i]][cnum[i]];
//        }
//        if (total < min) 
//        {
//            min = total;
//        } 
//        printf("%d\n", min);
//    } 
//    return 0;
//}



//
//
//#include <stdio.h>      // �����׼��������⣬���������������
//#include <string.h>     // �����ַ�������⣬�����ַ�����غ���
//#include <limits.h>     // �������ƿ⣬���ڻ�ȡ�������͵ļ���ֵ����INT_MAX��
//
//int arr1[26][26];      // ����һ��26x26��ȫ�����飬���ڴ洢��ĸ֮���ĳ�־���
//
//// �������������ڳ�ʼ��arr1����
//void hanshu()
//{
//    // ˫��ѭ������26x26�����飨��Ӧ26��Ӣ����ĸ��
//    for (int i = 0; i < 26; i++)
//    {
//        for (int j = 0; j < 26; j++)
//        {
//            // ����j�����i��ƫ������ȷ�����Ϊ�Ǹ�����
//            int d = (j - i + 26) % 26;
//            // ȡƫ��������Сֵ�������������a��c�ľ�����2��Ҳ���Կ���24�ķ�����룬ȡ��С��2��
//            arr1[i][j] = (d < 26 - d) ? d : 26 - d;
//        }
//    }
//}
//
//int main()
//{
//    hanshu();          // ���ú�����ʼ��arr1����
//
//    int T;             // �������T����ʾ��������������
//    scanf("%d", &T);   // �ӱ�׼�����ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        char t[1001], c[1001];  // ���������ַ����飬�ֱ�洢ԭʼ�ַ���t��Ŀ���ַ���c
//        scanf("%s %s", t, c);   // ��ȡ�����ַ���
//
//        int n = strlen(t);      // �����ַ������ȣ�����t��c������ͬ��
//
//        // ���������������飬���ڴ洢�ַ���Ӧ�����֣�a->0, b->1, ..., z->25��
//        int tnum[1001], cnum[1001];
//
//        // ���ַ�ת��Ϊ��Ӧ������
//        for (int i = 0; i < n; i++)
//        {
//            tnum[i] = t[i] - 'a';  // �ַ�ת���֣�'a'��ASCII���ȥ'a'�õ�0���Դ����ƣ�
//            cnum[i] = c[i] - 'a';
//        }
//
//        int min = INT_MAX;  // ��ʼ����СֵΪ���������ֵ�����ں����Ƚ�
//
//        // ѭ�����Բ�ͬ��kֵ�������Ƿָ���ƫ������أ�
//        for (int k = 0; k <= n / 2; k++)
//        {
//            // �������ַ��ţ�0��1�������ܴ���ͬ�Ĵ���ʽ
//            for (int sign = 0; sign < 2; sign++)
//            {
//                // ���ݷ��ż���ƫ����shift
//                int shift = sign ? (n - k) : k;
//
//                // ���ƫ����Ϊ0��n���൱��û��ƫ�ƣ���������
//                if (shift == 0 || shift == n) continue;
//
//                // ����sΪk��n-k�еĽ�Сֵ
//                int s = (k < n - k) ? k : n - k;
//                int total = s;  // ��ʼ���ܴ���Ϊs
//
//                // ����ƫ�ƺ���ܴ���
//                for (int i = 0; i < n; i++)
//                {
//                    // ����ƫ�ƺ������λ��
//                    int x = (i + shift) % n;
//                    // �ۼ�ƫ�ƺ��ַ�ת���Ĵ��ۣ�ʹ��arr1�����д洢��Ԥ����ֵ��
//                    total += arr1[tnum[x]][cnum[i]];
//                }
//
//                // ������Сֵ
//                if (total < min)
//                {
//                    min = total;
//                }
//            }
//        }
//
//        // ���㲻����ƫ��ʱ���ܴ���
//        int total = 0;
//        for (int i = 0; i < n; i++)
//        {
//            total += arr1[tnum[i]][cnum[i]];
//        }
//
//        // �����ƫ�ƵĴ��۸�С���������Сֵ
//        if (total < min)
//        {
//            min = total;
//        }
//
//        // �����С����
//        printf("%d\n", min);
//    }
//    return 0;
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
//        char arr1[102] = { 0 }, arr2[102] = { 0 };
//        scanf("%s", arr1+1);
//        scanf("%s", arr2+1);
//        int len = (strlen(arr1) < strlen(arr2)) ? strlen(arr1) : strlen(arr2);
//        int shu1[27] = { 0 } ,shu2[27] = { 0 },sum=0;
//        for (int i = 1; i <= len; i++)
//        { 
//            for (int k = 1; k <= len - i + 1; k++)
//            {
//                shu1[arr1[i + k] - 'a']++;
//                shu2[arr2[i + k] - 'a']++;
//            }
//            int count = 0 ;
//            for (int j = 0; j < 26; j++)
//            {
//                if (shu1[j] == shu2[j]) count++;
//            }
//            if (count == len - i + 1) sum++;
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}



//
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>  
//int hanshu2(char** sub1 , int count, char* sub) 
//{
//    for (int i = 0; i < count; i++) 
//    {
//        if (strcmp(sub1[i], sub) == 0) 
//        {
//            return 1;
//        }
//    }
//    return 0;
//} 
//int hanshu1(char* str, char** subs ) 
//{
//    int len = strlen(str);
//    int count = 0;
//    char sub[100 + 1];    
//    for (int i = 0; i < len; i++) 
//    {
//        for (int j = i; j < len; j++) 
//        { 
//            int subLen = j - i + 1;
//            strncpy(sub, str + i, subLen);
//            sub[subLen] = '\0'; 
//            if (!hanshu2(subs , count, sub)) 
//            {
//                subs [count] = (char*)malloc(subLen + 1);
//                strcpy(subs [count], sub);
//                count++;
//            }
//        }
//    }
//    return count;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char s1[101], s2[101];
//        fgets(s1, 101, stdin);
//        fgets(s2, 101, stdin);
//        char* subs1[5000] = { 0 };
//        char* subs2[5000] = { 0 };
//        int count1 = hanshu1(s1, subs1);
//        int count2 = hanshu1(s2, subs2);
//        int count = 0;
//        for (int i = 0; i < count1; i++) 
//        {
//            if (hanshu2(subs2, count2, subs1[i])) 
//            {
//                count++;
//            }
//        } 
//        printf("%d\n", count); 
//        for (int i = 0; i < count1; i++) 
//        {
//            free(subs1[i]);
//        }
//        for (int i = 0; i < count2; i++)
//        {
//            free(subs2[i]);
//        }
//    } 
//    return 0;
//}

//����F����
//
//#include <stdio.h>   // ������׼��������⣬���������������
//#include <string.h>  // �����ַ�������⣬���� strlen���ַ������� 
//int main()
//{
//    // �����ַ�����洢������ַ�������С1010�������1000�ַ����ַ����ӽ�����
//    char input[1010] = { '\0' };
//
//    // ѭ����ȡ������ַ�����ֱ��û�����루scanf����ֵ������1��
//    while (scanf("%s", input) == 1)
//    {
//        int len = strlen(input);  // ��ȡ�����ַ����ĳ���
//        int io[27] = { 0 };       // ��������洢26��Сд��ĸ�ĳ��ִ�������ʼ��Ϊ0
//
//        // ͳ��ÿ���ַ����ֵĴ���
//        for (int i = 0; i < len; i++)
//        {
//            for (int j = 0; j < 26; j++)
//            {
//                // �жϵ�ǰ�ַ��Ƿ����j����ĸ('a'+j)ƥ��
//                if (input[i] == 'a' + j)
//                {
//                    io[j]++;  // ��Ӧ��ĸ�ļ�����1
//                    break;    // �ҵ�ƥ�����ĸ���˳��ڲ�ѭ��
//                }
//            }
//        }
//
//        // ��������洢ÿ�����ִ�����Ӧ����ĸ���������ж��ٸ���ĸ������j�Σ�
//        int onetwo[1005] = { 0 };
//
//        // ͳ��ÿ�����ִ�����Ӧ����ĸ����
//        for (int i = 0; i < 26; i++)
//        {
//            for (int j = 1; j <= 1000; j++)
//            {
//                if (io[i] == j)  // �����i����ĸ������j��
//                {
//                    onetwo[j]++;  // ����j�ε���ĸ������1
//                }
//            }
//        }
//
//        int flag[1100] = { 0 };  // �洢���г��ִ�������Ƶ��ֵ
//        int count = 0;           // ��¼�ж��ٸ�Ƶ�ξ�����ͬ�������ִ���
//        int max = 1;             // ��¼����Ƶ�γ��ִ�������ʼ��Ϊ1
//        int breakio = 0;         // ���ڿ����������ѭ���ı�־
//
//        // �ҵ����ִ�������Ƶ��ֵ�����ж��ٸ���ĸ������ͬƵ�Σ�
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (onetwo[i] > max)
//            {
//                max = onetwo[i];  // ���������ִ���
//            }
//        }
//
//        // �ռ����г��ִ�������max��Ƶ��ֵ
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (onetwo[i] == max)
//            {
//                flag[count] = i;  // �洢��Ƶ��ֵ
//                count++;          // ������1
//            }
//        }
//
//        // ���������ҵ���С��Ŀ��Ƶ��ֵ���������Ƶ�μ���Ӧ����ĸ
//        for (int i = 0; i < 26; i++)
//        {
//            for (int j = 0; j <= 1000; j++)
//            {
//                // �ҵ���һ�����ֵġ������Ŀ��Ƶ��ֵ
//                if ((io[i] == flag[j]) && (io[i] != 0))
//                {
//                    int inflag = flag[j];  // ��¼Ŀ��Ƶ��ֵ
//                    printf("%d", inflag);  // ���Ƶ��ֵ
//
//                    // ���ֵ���������о��и�Ƶ�ε���ĸ
//                    for (int k = 0; k < 26; k++)
//                    {
//                        if (io[k] == inflag)
//                        {
//                            printf(" %c", 'a' + k);  // �����ĸ��ǰ��ӿո�ָ�
//                        }
//                    }
//
//                    breakio = 1;  // ���ñ�־��׼���������ѭ��
//                    break;        // ������ǰѭ��
//                }
//            }
//            if (breakio == 1)  // ����Ѿ��ҵ������������������ѭ��
//            {
//                break;
//            }
//        }
//
//        printf("\n");  // ������У�׼��������һ����������
//    }
//
//    return 0;  // ������������
//}
//
//   

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[1005];
//    while ((scanf("%s", arr1)) == 1)
//    {
//        int len = strlen(arr1);
//        int count[26] = { 0 };  
//        for (int i = 0; i < len; i++)
//        {
//            count[arr1[i] - 'a']++;
//        } 
//        int f [1001] = { 0 };  
//        for (int i = 0; i < 26; i++)
//        {
//            if (count[i] > 0)
//            {
//                f [count[i]]++;
//            }
//        } 
//        int max   = 0;
//        int t  = 0;
//        for (int i = 1; i <= 1000; i++)
//        {
//            if (f  [i] > max  )
//            {
//                max  = f [i];
//                t = i;
//            }
//        } 
//        printf("%d", t ); 
//        int first = 1;
//        for (int i = 0; i < 26; i++)
//        {
//            if (count[i] == t )
//            {
//                if (first)
//                {
//                    printf(" %c", 'a' + i);
//                    first = 0;
//                }
//                else
//                {
//                    printf(" %c", 'a' + i);
//                }
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include <stdio.h>  
//
//
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	char arr[1010] = { 0 };
//	while (K--)
//	{
//		scanf("%s", arr+1);
//		int len=strlen(arr+1);
//		int a=0,flag;
//		for (int i = len/2; i >= 1; i--)
//		{
//			for (int j = 1; j <= len + 1 - 2*i; j++)
//			{ 
//				flag = 1;
//				for (int k = j; k < i+j; k++)
//				{ 
//					if (arr[k] != arr[k + i])
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					 a = 2 * i;
//					goto  here;
//				}
//			}
//		}
//		here:
//		printf("%d\n", a);
//	}
//	return 0;
//}


//
//#include<stdio.h>
//#include<limits.h>
//#include<string.h>
//
//int hanshu(char arr1[], int k, int n)
//{
//	int  count =0;
//	for (int i = 0; i < k; i++)
//	{
//		int arr2[26] = {0};
//		for (int j = 0; j < n/k; j++)
//		{
//			arr2[arr1[i + k * j] - 'a']++;
//		}
//		int max = 0;
//		for (int l = 0; l < 26; l++)
//		{
//			if (arr2[l] > max) max = arr2[l];
//		}
//		count += (n / k - max);
//	}
//	return count;
//}
//
//int main()
//{
//	char arr1[10010] = { 0 };
//	while ((scanf("%s", arr1)) == 1)
//	{
//		int min = INT_MAX;
//		int n = strlen(arr1);
//		for (int k = 1; k <= n / 2; k++)
//		{
//			if (n % k == 0)
//			{
//				int mod = hanshu(arr1, k, n);
//				if (mod < min) min = mod;
//			}
//		}
//		printf("%d\n", min);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[1005];
//	while ((scanf("%s", arr1)) == 1)
//	{
//		int len = strlen(arr1), arr2[27] = { 0 }, arr3[1005] = { 0 };
//		for (int i = 0; i < len; i++)
//		{ 
//				arr2[arr1[i] - 'a']++; 
//		}
//		for (int i = 0; i < 26; i++)
//		{
//			if(arr2[i]>0)
//			{
//				arr3[arr2[i]]++;
//			}
//		}
//		int max = 0,n=0; 
//		for (int j = 0; j < 1005; j++)
//		{
//			if (arr3[j] > max)
//			{
//				max = arr3[j]; 
//				n = j;
//			}
//		}
//		printf("%d", n); 
//		for (int i = 0; i < 26; i++)
//		{
//			if (arr2[i] == n)
//			{    
//				 printf(" %c", 'a' + i);  
//			}
//		} 
//		printf("\n");
//	}
//	return 0;
//}


 
#include <stdbool.h> 
#include <stdio.h>
#include <string.h>

int cnt1, cnt2, len;
char str[210];

int main()
{
    while (gets(str) != NULL)
    {
        bool books[30] = { 0 };
        cnt1 = cnt2 = 0;
        len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                cnt1++; continue;
            }
            if (str[i] >= 97)  str[i] -= 32;
            if (!books[str[i] - 'A']) cnt2++;
            books[str[i] - 'A'] = true;
        }
        if (cnt1 >= 10 || cnt2 >= 11)   puts("No");
        else   puts("Yes");
    }
    return 0;
}
