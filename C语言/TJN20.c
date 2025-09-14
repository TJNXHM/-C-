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
////判断是否是回文串
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
//	return len - 1;//最差情况 
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
//#include<stdio.h>   // 引入标准输入输出库，用于输入输出函数
//#include<string.h>  // 引入字符串处理库，用于字符串相关函数
//
//// 判断一个字符串是否是回文串
//// 参数：s[] - 要判断的字符串，len - 字符串长度
//// 返回值：1表示是回文串，0表示不是
//int Judge(char s[], int len)
//{
//    int flag = 1;  // 标志位，初始化为1（假设是回文串）
//    int i;         // 循环变量
//
//    // 从字符串两端向中间比较字符
//    for (i = 0; i <= len / 2; i++)
//    {
//        // 如果对称位置的字符不相等，则不是回文串
//        if (s[i] != s[len - i - 1])
//        {
//            flag = 0;  // 修改标志位为0
//            break;     // 跳出循环，无需继续比较
//        }
//    }
//    return flag;  // 返回判断结果
//}
//
//// 计算需要在字符串前添加的最少字符数，使整个字符串成为回文串
//// 参数：s[] - 要处理的字符串
//// 返回值：需要添加的最少字符数
//int Add(char s[])
//{
//    int len = strlen(s);  // 获取字符串长度 
//
//    // 检查从位置i开始到字符串结尾的子串是否是回文串
//    for (int i = 0; i < len; i++)
//    {
//        // s + i 表示从第i个字符开始的子串，长度为len - i
//        if (Judge(s + i, len - i))
//            return i;  // 如果找到这样的子串，返回i（需要在前面添加i个字符）
//    }
//    return len - 1;  // 最差情况，需要添加除最后一个字符外的所有字符的逆序
//}
//
//int main()
//{
//    int T;  // 测试用例数量
//    scanf("%d", &T);  // 读取测试用例数量
//
//    char s[1005] = { 0 };  // 定义存储字符串的数组并初始化为0
//
//    // 循环处理每个测试用例
//    while (T--)
//    {
//        scanf("%s", s);  // 读取字符串
//        // 计算并输出需要添加的最少字符数
//        printf("%d\n", Add(s));
//    }
//
//    return 0;  // 程序正常结束
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
//#include <stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include <stdlib.h>  // 引入标准库，提供一些通用函数
//#include <string.h>  // 引入字符串处理库，用于字符串相关操作
//
//int main()
//{
//    char a[1001] = { 0 };  // 定义字符数组a，大小为1001，初始化为0，用于存储输入的字符串
//    int ch[1000];      // 定义整数数组ch，大小为1000，用于统计字符出现的次数
//
//    // 循环读取输入的字符串，直到文件结束(EOF)
//    while (scanf("%s", &a) != EOF)
//    {
//        memset(ch, 0, sizeof(ch));  // 将数组ch的所有元素初始化为0，sizeof(ch)获取数组总字节数
//
//        int n = strlen(a), flag = 0;   // n存储字符串a的长度，flag作为标志位，初始为0
//
//        int i;  // 定义循环变量i
//
//        // 遍历字符串中的每个字符，统计每个字符出现的次数
//        for (i = 0; i < n; i++)
//        {
//            // 将字符a[i]减去'0'得到偏移值，作为ch数组的索引，对应位置加1
//            ch[a[i] - '0']++;
//        }
//
//        // 判断字符串长度是否为偶数
//        if (n % 2 == 0)
//        {
//            // 遍历从字符'a'到'z'对应的索引范围
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                // 如果有字符出现的次数为奇数
//                if (ch[i] % 2 == 1)
//                {
//                    flag = 1;  // 设置标志位为1
//                    break;   // 跳出循环
//                }
//            }
//
//            // 根据标志位判断并输出结果
//            if (flag == 1)
//            {
//                printf("No\n");  // 存在奇数次出现的字符，输出No
//            }
//            else
//            {
//                printf("Yes\n"); // 所有字符都出现偶数次，输出Yes
//            }
//        }
//        else  // 字符串长度为奇数的情况
//        {
//            int count = 0;  // 定义计数器count，用于统计出现奇数次的字符数量
//
//            // 遍历从字符'a'到'z'对应的索引范围
//            for (i = 'a' - '0'; i <= 'z' - '0'; i++)
//            {
//                // 如果当前字符出现次数为奇数
//                if (ch[i] % 2 == 1)
//                {
//                    count++;  // 计数器加1
//                }
//
//                // 如果出现奇数次的字符数量超过1个
//                if (count >= 2)
//                {
//                    flag = 1;  // 设置标志位为1
//                    break;   // 跳出循环
//                }
//            }
//
//            // 根据标志位判断并输出结果
//            if (flag == 1)
//            {
//                printf("No\n");  // 出现奇数次的字符超过1个，输出No
//            }
//            else
//            {
//                printf("Yes\n"); // 出现奇数次的字符不超过1个，输出Yes
//            }
//        }
//    }
//    return 0;  // 程序正常结束，返回0
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
//        // 如果两个字符串完全相等
//        if (strcmp(arr1, arr2) == 0)
//        {
//            printf("Equal\n");
//            continue;
//        }
//
//        // 如果长度不同，无法自动纠错
//        if (len1 != len2)
//        {
//            printf("No\n");
//            continue;
//        }
//
//        // 首尾字符必须相同
//        if (arr1[0] != arr2[0] || arr1[len1 - 1] != arr2[len1 - 1])
//        {
//            printf("No\n");
//            continue;
//        }
//
//        // 检查中间部分字符频率是否相同
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
////#include <stdio.h>   // 包含标准输入输出库，用于输入输出操作
////#include <string.h>  // 包含字符串处理库，用于字符串相关函数
////
//int main()
//{
//    int T;               // 定义变量T，用于存储测试用例的数量
//    scanf("%d", &T);     // 从标准输入读取测试用例数量T
//
//    while (T--)          // 循环处理每个测试用例，T递减直到0
//    {
//        // 定义字符串数组：str存储输入字符串，charset存储允许的字符集
//        char str[10001], charset[27];
//
//        scanf("%s", str);   // 读取输入字符串
//        scanf("%s", charset);  // 读取允许的字符集（注意：原代码此处是%S，应为小写%s）
//
//        // 创建字符集的哈希表（数组），用于快速判断字符是否被允许
//        // 下标对应字母a-z（0-25），值为1表示允许，0表示不允许
//        int allowed[26] = { 0 };
//
//        // 遍历字符集，标记允许的字符
//        for (int i = 0; charset[i] != '\0'; i++)
//        {
//            // 将字符转换为0-25的索引（如'a'-'a'=0, 'b'-'a'=1等）
//            allowed[charset[i] - 'a'] = 1;
//        }
//
//        int max_len = 0;    // 存储最长"好子串"的长度
//        int current_len = 0; // 存储当前连续"好子串"的长度
//
//        // 遍历输入字符串，寻找最长的好子串（全部由允许字符组成的子串）
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            // 检查当前字符是否在允许的字符集中
//            if (allowed[str[i] - 'a'])
//            {
//                current_len++;  // 若允许，当前长度加1
//
//                // 如果当前长度超过最大长度，则更新最大长度
//                if (current_len > max_len)
//                {
//                    max_len = current_len;
//                }
//            }
//            else
//            {
//                // 遇到不允许的字符，重置当前连续长度为0
//                current_len = 0;
//            }
//        }
//
//        // 输出当前测试用例的最长好子串长度
//        printf("%d\n", max_len);
//    }
//
//    return 0;  // 程序正常结束
//}

//
//
//#include <stdio.h>
//#include <string.h>
//
//// 函数：执行循环移位
//void rotate(char str[], int n, int c) {
//    if (c == 0) return; // 不移动
//
//    char temp[27];
//    strcpy(temp, str);
//
//    if (c < 0) { // 左移 |c| 位
//        int shift = -c;
//        for (int i = 0; i < n; i++) {
//            int new_pos = (i - shift + n) % n;
//            str[i] = temp[new_pos];
//        }
//    }
//    else { // 右移 c 位
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
//        // 生成初始字母序列
//        char str[27];
//        for (int i = 0; i < n; i++) {
//            str[i] = 'A' + i;
//        }
//        str[n] = '\0';
//
//        // 输出样例号
//        printf("#%d:\n", t);
//
//        // 执行m次操作
//        for (int i = 0; i < m; i++) {
//            int c;
//            scanf("%d", &c);
//
//            // 执行移位操作
//            rotate(str, n, c);
//
//            // 输出当前序列
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
//#include <stdio.h>   // 引入标准输入输出库，用于输入输出操作
//#include <string.h>  // 引入字符串处理库，用于字符串复制等操作
//
//int main()  // 程序主函数，程序从这里开始执行
//{
//    int T;  // 声明变量T，用于存储测试用例的数量
//    scanf("%d", &T);  // 从标准输入读取T的值
//
//    // 循环处理每个测试用例，t从1到T
//    for (int t = 1; t <= T; t++)
//    {
//        int n, m;  // 声明变量n和m，n表示字母序列长度，m表示操作次数
//        scanf("%d %d", &n, &m);  // 从输入读取n和m的值
//
//        // 初始化字母序列，从'A'开始
//        char seq[27];  // 声明字符数组seq，用于存储字母序列(最多26个字母)
//        for (int i = 0; i < n; i++)  // 循环n次，生成初始序列
//        {
//            seq[i] = 'A' + i;  // 第i个位置存放字母'A'+i，即A,B,C...
//        } 
//
//        // 读取m个操作
//        int c[100];  // 声明整数数组c，用于存储m个移位操作的值
//        for (int i = 0; i < m; i++)  // 循环m次
//        {
//            scanf("%d", &c[i]);  // 读取每个操作的移位值，存入数组c
//        }
//
//        // 输出样例号，格式如#1:、#2:等
//        printf("#%d:\n", t);
//
//        // 执行每个操作并输出结果
//        for (int i = 0; i < m; i++)  // 循环处理每个操作
//        {
//            int shift = c[i];  // 获取当前操作的移位值
//            if (shift == 0)  // 如果移位值为0
//            {
//                // 不移位，直接输出当前序列
//                printf("%s\n", seq);
//                continue;  // 跳过本次循环的剩余部分，处理下一个操作
//            } 
//
//            if (shift < 0)  
//            { 
//                int left_shift = -shift;
//                char temp[27];  
//                // 复制移位后的序列：先复制从left_shift开始的剩余字符
//                strncpy(temp, seq + left_shift, n - left_shift);
//                // 再复制从开头到left_shift的字符，完成左移
//                strncpy(temp + (n - left_shift), seq, left_shift); 
//                strcpy(seq, temp);
//            }
//            else  // 如果移位值为正数，表示右移
//            {
//                char temp[27];  // 声明临时数组，用于存放移位后的序列
//
//                // 复制移位后的序列：先复制从n-shift开始的shift个字符
//                strncpy(temp, seq + (n - shift), shift);
//                // 再复制从开头到n-shift的字符，完成右移
//                strncpy(temp + shift, seq, n - shift); 
//                strcpy(seq, temp);
//            } 
//            printf("%s\n", seq);
//        }
//    }
//    return 0;  
//}