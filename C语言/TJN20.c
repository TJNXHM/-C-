#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//#include<stdio.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        long long  n;
//        scanf("%lld", &n);
//        for (int i = n; i >=0; i--)
//        {
//            int t = i, sum=0;
//            while (t)
//            {
//                sum += t % 10;
//                t /= 10;
//            }
//            if (i % sum == 0)
//            {
//                printf("%d\n", i);
//                break;
//            }
//        }
//    }
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
//        char a[202], b[202];
//        scanf("%s", a);
//        scanf("%s", b);
//        int c = strlen(a);
//        int d = strlen(b);
//        int count = 0;
//        for (int i = 0; i <= c; i++)
//        {
//            if (a[i] == b[count]) count++;
//            if (count == d) break;
//        }
//        if (count == d) printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h> 
//int main()
//{
//    char command[210];
//    while (scanf("%s", command) != EOF)
//    {
//        int len, numL=0, numR=0, numU=0, numD=0;
//        len = strlen(command);
//        for (int i = 0; i < len; i++)                      
//        {
//            if (command[i] == 'L')       numL++;
//            else if (command[i] == 'R')  numR++;
//            else if (command[i] == 'U')  numU++;
//            else                         numD++;
//        }        
//        if (numL + numD == numR && !numU)  puts("Yes");   
//        else if (numL + numU == numR && !numD)  puts("Yes");   
//        else if (numR + numD == numL && !numU)  puts("Yes");    
//        else if (numR + numU == numL && !numD)  puts("Yes");     
//        else if (numU + numL == numD && !numR)  puts("Yes");    
//        else if (numU + numR == numD && !numL)  puts("Yes");   
//        else if (numD + numL == numU && !numR)  puts("Yes");    
//        else if (numD + numR == numU && !numL)  puts("Yes");    
//        else    puts("No");
//    }
//    return 0;
//}
 
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() 
//{
//    int T;
//    scanf("%d", &T);    
//    while (T--) 
//    {
//        int n;
//        scanf("%d", &n);    
//        int* weight = (int*)malloc(n * sizeof(int));
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &weight[i]);  
//        }
//
//        int  max = 0;   
//        for (int i = 0; i < n; i++) 
//        { 
//            if (weight[i] >  max + 1) 
//            {
//                break;
//            } 
//             max += weight[i];
//        } 
//        printf("%d\n", max + 1); 
//        free(weight);  
//    }
//
//    return 0;
//}




//#include<stdio.h>
//#include<string.h>
////�ж��Ƿ��ǻ��Ĵ�
//int Judge(char s[], int len) 
//{
//	int flag = 1, i;
//	for (i = 0; i <= len / 2; i++) 
//	{
//		if (s[i] != s[len - i - 1]) 
//		{
//			flag = 0;
//			break;
//		}
//	}
//	return flag;
//}
//int Add(char s[]) 
//{
//	int len = strlen(s);
//	int i;
//	for (i = 0; i < len; i++) 
//	{
//		if (Judge(s + i, len - i))return i;
//	}
//	return len - 1;//������ 
//}
//int main() 
//{
//	int T;
//	scanf("%d", &T);
//	char s[1005] = {0};
//	while (T--) 
//	{
//		scanf("%s", s);
//		printf("%d\n", Add(s));
//	}
//}


//
//
//#include<stdio.h>   // �����׼��������⣬���������������
//#include<string.h>  // �����ַ�������⣬�����ַ�����غ���
//
//// �ж�һ���ַ����Ƿ��ǻ��Ĵ�
//// ������s[] - Ҫ�жϵ��ַ�����len - �ַ�������
//// ����ֵ��1��ʾ�ǻ��Ĵ���0��ʾ����
//int Judge(char s[], int len)
//{
//    int flag = 1;  // ��־λ����ʼ��Ϊ1�������ǻ��Ĵ���
//    int i;         // ѭ������
//
//    // ���ַ����������м�Ƚ��ַ�
//    for (i = 0; i <= len / 2; i++)
//    {
//        // ����Գ�λ�õ��ַ�����ȣ����ǻ��Ĵ�
//        if (s[i] != s[len - i - 1])
//        {
//            flag = 0;  // �޸ı�־λΪ0
//            break;     // ����ѭ������������Ƚ�
//        }
//    }
//    return flag;  // �����жϽ��
//}
//
//// ������Ҫ���ַ���ǰ��ӵ������ַ�����ʹ�����ַ�����Ϊ���Ĵ�
//// ������s[] - Ҫ������ַ���
//// ����ֵ����Ҫ��ӵ������ַ���
//int Add(char s[])
//{
//    int len = strlen(s);  // ��ȡ�ַ������� 
//
//    // ����λ��i��ʼ���ַ�����β���Ӵ��Ƿ��ǻ��Ĵ�
//    for (int i = 0; i < len; i++)
//    {
//        // s + i ��ʾ�ӵ�i���ַ���ʼ���Ӵ�������Ϊlen - i
//        if (Judge(s + i, len - i))
//            return i;  // ����ҵ��������Ӵ�������i����Ҫ��ǰ�����i���ַ���
//    }
//    return len - 1;  // ����������Ҫ��ӳ����һ���ַ���������ַ�������
//}
//
//int main()
//{
//    int T;  // ������������
//    scanf("%d", &T);  // ��ȡ������������
//
//    char s[1005] = { 0 };  // ����洢�ַ��������鲢��ʼ��Ϊ0
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        scanf("%s", s);  // ��ȡ�ַ���
//        // ���㲢�����Ҫ��ӵ������ַ���
//        printf("%d\n", Add(s));
//    }
//
//    return 0;  // ������������
//}



//
//#include<stdio.h>
//#include<string.h>
//
//int judge(char arr[], int len)
//{ 
//	int flag = 0;
//	for (int i = 0; i <= len / 2; i++)
//	{
//		if (arr[i] != arr[len-1 - i])
//		{
//			flag = 0;
//			break;
//		}
//		flag = 1;
//	}
//	return flag;
//}
//int hanshu(char arr[])
//{
//	int len=strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		if (judge(arr + i, len - i))
//		{
//			return i;
//		}
//	}
//	return len - 1;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		char arr[1002];
//		scanf("%s", arr);
//		printf("%d\n", hanshu(arr));
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char n[600];
//    while ((scanf("%s", n)) == 1 && n[0] != '0')
//    {
//        int a = strlen(n), count = 0;
//        for (int i = 0; i < a; i++)
//        {
//            count += n[i] - '0';
//        } 
//        while (count  >= 10)
//        { 
//            int sum = 0;
//            while (count != 0)
//            {
//                sum += count % 10;
//                count /= 10;
//            }
//            count = sum;
//        }
//        printf("%d\n", count );
//    }
//    return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char a[1001] = { 0 };
//    int ch[1000];
//    while (scanf("%s", &a) != EOF)
//    {
//        memset(ch, 0, sizeof(ch));
//        int n = strlen(a), flag = 0;
//        int i;
//        for (i = 0; i < n; i++)
//        {
//            ch[a[i] - '0']++;
//        }
//        if (n % 2 == 0)
//        {
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                if (ch[i] % 2 == 1)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            if (flag == 1)
//            {
//                printf("No\n");
//            }
//            else
//            {
//                printf("Yes\n");
//            }
//        }
//        else
//        {
//            int count = 0;
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                if (ch[i] % 2 == 1)
//                {
//                    count++;
//                }
//                if (count >= 2)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            if (flag == 1)
//            {
//                printf("No\n");
//            }
//            else
//            {
//                printf("Yes\n");
//            }
//        }
//    }
//    return 0;
//}

//
//
//#include <stdio.h>   // �����׼��������⣬���������������
//#include <stdlib.h>  // �����׼�⣬�ṩһЩͨ�ú���
//#include <string.h>  // �����ַ�������⣬�����ַ�����ز���
//
//int main()
//{
//    char a[1001] = { 0 };  // �����ַ�����a����СΪ1001����ʼ��Ϊ0�����ڴ洢������ַ���
//    int ch[1000];      // ������������ch����СΪ1000������ͳ���ַ����ֵĴ���
//
//    // ѭ����ȡ������ַ�����ֱ���ļ�����(EOF)
//    while (scanf("%s", &a) != EOF)
//    {
//        memset(ch, 0, sizeof(ch));  // ������ch������Ԫ�س�ʼ��Ϊ0��sizeof(ch)��ȡ�������ֽ���
//
//        int n = strlen(a), flag = 0;   // n�洢�ַ���a�ĳ��ȣ�flag��Ϊ��־λ����ʼΪ0
//
//        int i;  // ����ѭ������i
//
//        // �����ַ����е�ÿ���ַ���ͳ��ÿ���ַ����ֵĴ���
//        for (i = 0; i < n; i++)
//        {
//            // ���ַ�a[i]��ȥ'0'�õ�ƫ��ֵ����Ϊch�������������Ӧλ�ü�1
//            ch[a[i] - '0']++;
//        }
//
//        // �ж��ַ��������Ƿ�Ϊż��
//        if (n % 2 == 0)
//        {
//            // �������ַ�'a'��'z'��Ӧ��������Χ
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                // ������ַ����ֵĴ���Ϊ����
//                if (ch[i] % 2 == 1)
//                {
//                    flag = 1;  // ���ñ�־λΪ1
//                    break;   // ����ѭ��
//                }
//            }
//
//            // ���ݱ�־λ�жϲ�������
//            if (flag == 1)
//            {
//                printf("No\n");  // ���������γ��ֵ��ַ������No
//            }
//            else
//            {
//                printf("Yes\n"); // �����ַ�������ż���Σ����Yes
//            }
//        }
//        else  // �ַ�������Ϊ���������
//        {
//            int count = 0;  // ���������count������ͳ�Ƴ��������ε��ַ�����
//
//            // �������ַ�'a'��'z'��Ӧ��������Χ
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                // �����ǰ�ַ����ִ���Ϊ����
//                if (ch[i] % 2 == 1)
//                {
//                    count++;  // ��������1
//                }
//
//                // ������������ε��ַ���������1��
//                if (count >= 2)
//                {
//                    flag = 1;  // ���ñ�־λΪ1
//                    break;   // ����ѭ��
//                }
//            }
//
//            // ���ݱ�־λ�жϲ�������
//            if (flag == 1)
//            {
//                printf("No\n");  // ���������ε��ַ�����1�������No
//            }
//            else
//            {
//                printf("Yes\n"); // ���������ε��ַ�������1�������Yes
//            }
//        }
//    }
//    return 0;  // ������������������0
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
//        char arr[1002], arr2[1002] = { 0 };
//        scanf("%s", arr);
//        int a = strlen(arr);
//        for (int i = 0; i < a; i++)
//        {
//            arr2[arr[i] - 'a']++;
//        }
//        if (a % 2 == 0)
//        {
//            int flag = 0;
//            for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
//            {
//                if (arr2[i] % 2 != 0)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            if (flag) printf("No\n");
//            else printf("Yes\n");
//        }
//        else
//        {
//            int count = 0, flag = 0;
//            for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
//            {
//                if (arr2[i] % 2 != 0)
//                {
//                    count++;
//                }
//                if (count >= 2)
//                {
//                    printf("No\n");
//                    break;
//                } 
//            } 
//            if (count <= 1) printf("Yes\n");
//        }
//    }
//    return 0;
//}





//
//#include<stdio.h>
//#include<string.h>
//int main()
//{ 
//    char arr[1002];
//    while((scanf("%s",arr))==1)
//    {
//        char  arr2[1002] = { 0 }; 
//        int a = strlen(arr);
//        for (int i = 0; i < a; i++)
//        {
//            arr2[arr[i] - 'a']++;
//        }
//        if (a % 2 == 0)
//        {
//            int flag = 0;
//            for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
//            {
//                if (arr2[i] % 2 != 0)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            if (flag) printf("No\n");
//            else printf("Yes\n");
//        }
//        else
//        {
//            int count = 0, flag = 0;
//            for (int i = 'a' - 'a'; i <= 'z' - 'a'; i++)
//            {
//                if (arr2[i] % 2 != 0)
//                {
//                    count++;
//                }
//                if (count >= 2)
//                {
//                    flag = 1;   
//                    break;
//                }
//            }
//            if (flag) printf("No\n");  
//            else printf("Yes\n");
//        }
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s[1001];
//    while (scanf("%s", &s) != EOF)
//    {
//        int len = strlen(s);
//        int max = 0, mx, i, j;
//        for (i = 0; i < len; i++)  
//        {
//            int a[27] = { 0 };
//            for (j = 0; j <= i; j++)   
//            {
//                a[s[j] - 96]++;
//                if (max < a[s[j] - 96])
//                {
//                    max = a[s[j] - 96];
//                    mx = s[j];
//                }
//            }
//            printf("%c", mx);
//        }
//        printf("\n");
//    }
//}




//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1002];
//    while ((scanf("%s", arr)) == 1)
//    {
//        int a = strlen(arr), max = 0, b;
//        for (int i = 0; i < a; i++)
//        {
//            int  arr2[27] = { 0 };
//            for (int j = 0; j <= i; j++)
//            {
//                arr2[arr[j] - 96]++;
//                if (arr2[arr[j] - 96] > max)
//                {
//                    max = arr2[arr[j] - 96];
//                    b = arr[j];
//                }
//            }
//            printf("%c", b);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr[1002];
//    while ((scanf("%s", arr)) == 1)
//    {
//        int a = strlen(arr);
//        int arr2[27] = { 0 };  
//        int max = 0;        
//        char b = 0;       
//        for (int i = 0; i < a; i++)
//        { 
//            arr2[arr[i] - 'a']++;   
//            if (arr2[arr[i] - 'a'] > max)
//            {
//                max = arr2[arr[i] - 'a'];
//                b = arr[i];
//            } 
//            printf("%c", b);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[2002] = { 0 };
//    while ((scanf("%s", arr)) == 1)
//    {
//        int arr2[2002] = { 0 };
//        int a = strlen(arr);
//        for (int i = 0; i < a; i++)
//        {
//            arr2[arr[i] - 'a']++;
//        }
//        int count = 0;
//        for (int i = 0; i < 26; i++)
//        {
//            if (arr2[i] != 0) count++;
//        }
//        printf("%d\n", count - 1);
//    }
//    return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[1002] = { 0 };
//    while ((scanf("%s", arr)) == 1)
//    {
//        int a = strlen(arr);
//        int arr2[1002] = { 0 };
//        for (int i = 0; i < a; i++)
//        {
//            if (arr[i] >= 97) arr2[arr[i] - 'a']++;
//            else arr2[arr[i] - 'A']++;
//        }
//        int count = 0;
//        for (int i = 0; i < 26; i++)
//        {
//            if (arr2[i] != 0) count++;
//        }
//        if (count == 26)printf("Yes\n");
//        else printf("No\n");
//    }
//    return 0;
//}

//
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr1[22] = { 0 }, arr2[22] = { 0 };
//        while ((scanf("%s", arr1)) == 1 && (scanf("%s", arr2)) == 1)
//        {
//            int a = strlen(arr1), count = 0;
//            for (int i = 0; i < a; i++)
//            {
//                if (arr1[i] == arr2[i]) count++;
//            }
//            if (count == a) printf("Equal\n");
//            else
//            {
//                if (arr1[0] == arr2[0] && arr1[a - 1] == arr2[a - 1]) printf("Yes\n");
//                else printf("No\n");
//            }
//        }
//    return 0;
//}
//
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[22] = { 0 }, arr2[22] = { 0 }; 
//    while ((scanf("%s", arr1) == 1) && (scanf("%s", arr2) == 1))
//    {
//        int len1 = strlen(arr1), len2 = strlen(arr2);
//        if (strcmp(arr1, arr2) == 0)
//        {
//            printf("Equal\n");
//            continue;
//        }
//        if (len1 != len2)
//        {
//            printf("No\n");
//            continue;
//        }
//        if (arr1[0] != arr2[0] || arr1[len1 - 1] != arr2[len1 - 1])
//        {
//            printf("No\n");
//            continue;
//        }
//        else
//        {
//            printf("Yes\n");
//            continue;
//        }
//        return 0;
//    }
//}

//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char arr1[22] = { 0 }, arr2[22] = { 0 };
//
//    while ((scanf("%s", arr1) == 1) && (scanf("%s", arr2) == 1))
//    {
//        int len1 = strlen(arr1), len2 = strlen(arr2);
//
//        // ��������ַ�����ȫ���
//        if (strcmp(arr1, arr2) == 0)
//        {
//            printf("Equal\n");
//            continue;
//        }
//
//        // ������Ȳ�ͬ���޷��Զ�����
//        if (len1 != len2)
//        {
//            printf("No\n");
//            continue;
//        }
//
//        // ��β�ַ�������ͬ
//        if (arr1[0] != arr2[0] || arr1[len1 - 1] != arr2[len1 - 1])
//        {
//            printf("No\n");
//            continue;
//        }
//
//        // ����м䲿���ַ�Ƶ���Ƿ���ͬ
//        int count1[26] = { 0 }, count2[26] = { 0 };
//        for (int i = 1; i < len1 - 1; i++)
//        {
//            count1[arr1[i] - 'a']++;
//            count2[arr2[i] - 'a']++;
//        }
//
//        int flag = 1;
//        for (int i = 0; i < 26; i++)
//        {
//            if (count1[i] != count2[i])
//            {
//                flag = 0;
//                break;
//            }
//        } 
//        if (flag) printf("Yes\n");
//        else printf("No\n");
//    } 
//    return 0;
//}



//
//#include <stdio.h>
//int main() 
//{
//    long long a1, b1, c1, a2, b2, c2;
//    scanf("%lld %lld %lld", &a1, &b1, &c1);
//    scanf("%lld %lld %lld", &a2, &b2, &c2);
//    if (a1 * b2 == b1 * a2 && a1 * c2 != a2 * c1) 
//    {
//        printf("parallel\n");
//
//    }
//    else if (a1 * a2 + b1 * b2 == 0) 
//    {
//        printf("vertical\n");
//
//    }
//    else if (a1 * b2 != a2 * b1) 
//    {
//        printf("intersect\n");
//
//    }
//    else 
//    {
//        printf("collinear\n");
//
//    }
//    return 0;
//}

//
//
//#include <stdio.h>
//int main()
//{
//    long long a1, b1, c1, a2, b2, c2;
//    scanf("%lld %lld %lld", &a1, &b1, &c1);
//    scanf("%lld %lld %lld", &a2, &b2, &c2); 
//    if (a1 * b2 == b1 * a2 && a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1)
//    {
//        printf("collinear\n");
//    } 
//    else if (a1 * b2 == b1 * a2)
//    {
//        printf("parallel\n");
//    } 
//    else if (a1 * a2 + b1 * b2 == 0)
//    {
//        printf("vertical\n");
//    } 
//    else
//    {
//        printf("intersect\n");
//    }
//    return 0;
//}



//
//#include <stdio.h>
//#include <string.h>
//
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        char str[10001], arr[27]; 
//        scanf("%s", str);
//        scanf("%s", arr); 
//        int arr2[26] = { 0 };
//        for (int i = 0; arr[i] != '\0'; i++)
//        {
//            arr2[arr[i] - 'a'] = 1;
//        }
//        int max  = 0;
//        int a = 0; 
//        for (int i = 0; str[i] != '\0'; i++) 
//        {
//            if (arr2[str[i] - 'a']) 
//            {
//                a++; 
//                if (a > max ) 
//                {
//                    max  = a ;
//                }
//            }
//            else 
//            { 
//                a = 0;
//            }
//        }
//
//        printf("%d\n", max );
//    }
//
//    return 0;
//}
//
//
//
//
////
////#include <stdio.h>   // ������׼��������⣬���������������
////#include <string.h>  // �����ַ�������⣬�����ַ�����غ���
////
//int main()
//{
//    int T;               // �������T�����ڴ洢��������������
//    scanf("%d", &T);     // �ӱ�׼�����ȡ������������T
//
//    while (T--)          // ѭ������ÿ������������T�ݼ�ֱ��0
//    {
//        // �����ַ������飺str�洢�����ַ�����charset�洢������ַ���
//        char str[10001], charset[27];
//
//        scanf("%s", str);   // ��ȡ�����ַ���
//        scanf("%s", charset);  // ��ȡ������ַ�����ע�⣺ԭ����˴���%S��ӦΪСд%s��
//
//        // �����ַ����Ĺ�ϣ�����飩�����ڿ����ж��ַ��Ƿ�����
//        // �±��Ӧ��ĸa-z��0-25����ֵΪ1��ʾ����0��ʾ������
//        int allowed[26] = { 0 };
//
//        // �����ַ��������������ַ�
//        for (int i = 0; charset[i] != '\0'; i++)
//        {
//            // ���ַ�ת��Ϊ0-25����������'a'-'a'=0, 'b'-'a'=1�ȣ�
//            allowed[charset[i] - 'a'] = 1;
//        }
//
//        int max_len = 0;    // �洢�"���Ӵ�"�ĳ���
//        int current_len = 0; // �洢��ǰ����"���Ӵ�"�ĳ���
//
//        // ���������ַ�����Ѱ����ĺ��Ӵ���ȫ���������ַ���ɵ��Ӵ���
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            // ��鵱ǰ�ַ��Ƿ���������ַ�����
//            if (allowed[str[i] - 'a'])
//            {
//                current_len++;  // ��������ǰ���ȼ�1
//
//                // �����ǰ���ȳ�����󳤶ȣ��������󳤶�
//                if (current_len > max_len)
//                {
//                    max_len = current_len;
//                }
//            }
//            else
//            {
//                // ������������ַ������õ�ǰ��������Ϊ0
//                current_len = 0;
//            }
//        }
//
//        // �����ǰ��������������Ӵ�����
//        printf("%d\n", max_len);
//    }
//
//    return 0;  // ������������
//}

//
//
//#include <stdio.h>
//#include <string.h>
//
//// ������ִ��ѭ����λ
//void rotate(char str[], int n, int c) {
//    if (c == 0) return; // ���ƶ�
//
//    char temp[27];
//    strcpy(temp, str);
//
//    if (c < 0) { // ���� |c| λ
//        int shift = -c;
//        for (int i = 0; i < n; i++) {
//            int new_pos = (i - shift + n) % n;
//            str[i] = temp[new_pos];
//        }
//    }
//    else { // ���� c λ
//        for (int i = 0; i < n; i++) {
//            int new_pos = (i + c) % n;
//            str[i] = temp[new_pos];
//        }
//    }
//}
//
//int main() {
//    int T;
//    scanf("%d", &T);
//
//    for (int t = 1; t <= T; t++) {
//        int n, m;
//        scanf("%d %d", &n, &m);
//
//        // ���ɳ�ʼ��ĸ����
//        char str[27];
//        for (int i = 0; i < n; i++) {
//            str[i] = 'A' + i;
//        }
//        str[n] = '\0';
//
//        // ���������
//        printf("#%d:\n", t);
//
//        // ִ��m�β���
//        for (int i = 0; i < m; i++) {
//            int c;
//            scanf("%d", &c);
//
//            // ִ����λ����
//            rotate(str, n, c);
//
//            // �����ǰ����
//            printf("%s\n", str);
//        }
//    }
//
//    return 0;
//}

//
//
//
//#include <stdio.h>
//#include <string.h> 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    for (int t = 1; t <= T; t++) 
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);  
//        char arr[27];
//        for (int i = 0; i < n; i++) 
//        {
//            arr[i] = 'A' + i;
//        }
//        arr[n] = '\0';  
//        int c[100];
//        for (int i = 0; i < m; i++) 
//        {
//            scanf("%d", &c[i]);
//        }  
//        printf("#%d:\n", t);  
//        for (int i = 0; i < m; i++) 
//        {
//            int shi = c[i];
//            if (shi == 0) 
//            { 
//                printf("%s\n", arr);
//                continue;
//            }  
//            shi %= n;
//            if (shi < 0) 
//            { 
//                int left   = -shi;
//                char temp[27]; 
//                strncpy(temp, arr + left , n - left );
//                strncpy(temp + (n - left ), arr, left );
//                temp[n] = '\0'; 
//                strcpy(arr, temp);
//            }
//            else 
//            { 
//                char temp[27]; 
//                strncpy(temp, arr + (n - shi), shi);
//                strncpy(temp + shi, arr, n - shi);
//                temp[n] = '\0'; 
//                strcpy(arr, temp);
//            }  
//            printf("%s\n", arr);
//        }
//    } 
//    return 0;
//}

//
//
//
//#include <stdio.h>   // �����׼��������⣬���������������
//#include <string.h>  // �����ַ�������⣬�����ַ������ƵȲ���
//
//int main()  // ��������������������￪ʼִ��
//{
//    int T;  // ��������T�����ڴ洢��������������
//    scanf("%d", &T);  // �ӱ�׼�����ȡT��ֵ
//
//    // ѭ������ÿ������������t��1��T
//    for (int t = 1; t <= T; t++)
//    {
//        int n, m;  // ��������n��m��n��ʾ��ĸ���г��ȣ�m��ʾ��������
//        scanf("%d %d", &n, &m);  // �������ȡn��m��ֵ
//
//        // ��ʼ����ĸ���У���'A'��ʼ
//        char seq[27];  // �����ַ�����seq�����ڴ洢��ĸ����(���26����ĸ)
//        for (int i = 0; i < n; i++)  // ѭ��n�Σ����ɳ�ʼ����
//        {
//            seq[i] = 'A' + i;  // ��i��λ�ô����ĸ'A'+i����A,B,C...
//        } 
//
//        // ��ȡm������
//        int c[100];  // ������������c�����ڴ洢m����λ������ֵ
//        for (int i = 0; i < m; i++)  // ѭ��m��
//        {
//            scanf("%d", &c[i]);  // ��ȡÿ����������λֵ����������c
//        }
//
//        // ��������ţ���ʽ��#1:��#2:��
//        printf("#%d:\n", t);
//
//        // ִ��ÿ��������������
//        for (int i = 0; i < m; i++)  // ѭ������ÿ������
//        {
//            int shift = c[i];  // ��ȡ��ǰ��������λֵ
//            if (shift == 0)  // �����λֵΪ0
//            {
//                // ����λ��ֱ�������ǰ����
//                printf("%s\n", seq);
//                continue;  // ��������ѭ����ʣ�ಿ�֣�������һ������
//            } 
//
//            if (shift < 0)  
//            { 
//                int left_shift = -shift;
//                char temp[27];  
//                // ������λ������У��ȸ��ƴ�left_shift��ʼ��ʣ���ַ�
//                strncpy(temp, seq + left_shift, n - left_shift);
//                // �ٸ��ƴӿ�ͷ��left_shift���ַ����������
//                strncpy(temp + (n - left_shift), seq, left_shift); 
//                strcpy(seq, temp);
//            }
//            else  // �����λֵΪ��������ʾ����
//            {
//                char temp[27];  // ������ʱ���飬���ڴ����λ�������
//
//                // ������λ������У��ȸ��ƴ�n-shift��ʼ��shift���ַ�
//                strncpy(temp, seq + (n - shift), shift);
//                // �ٸ��ƴӿ�ͷ��n-shift���ַ����������
//                strncpy(temp + shift, seq, n - shift); 
//                strcpy(seq, temp);
//            } 
//            printf("%s\n", seq);
//        }
//    }
//    return 0;  
//}