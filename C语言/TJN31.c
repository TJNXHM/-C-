#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//
//
//
//
//
//#include<stdio.h> 
//int main()
//{ 
//    long long arr[34][34];
//    for (int i = 0; i <= 34; i++)
//    {
//        arr[i][0] = 1;
//        arr[i][i] = 1;
//    }
//    for (int i = 2; i <=34; i++)
//    {
//        for (int j = 1; j < i; j++)
//        {
//            arr[i][j] = arr[i-1][j] + arr[i-1][j - 1];
//        }
//    }
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int n, m;
//        scanf("%d %d", &n, &m);
//       
//        if ((m + n) % 2 != 0) puts("0");
//        else printf("%lld\n", arr[n][(m + n) / 2]);
//    }
//    return 0;
//}



//#include <stdio.h> 
//char arr[105][105];
//int T, n, m, d, x, y, ans, flag;
//int arr2[6][3] = { {0,0},{-1,0},{0,1},{1,0},{0,-1} }; 
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        int flagS = 1;
//        scanf("%d %d %d", &n, &m, &d);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%s", arr[i] + 1);
//            if (flagS)
//            {
//                for (int j = 1; j <= m; j++)
//                {
//                    if (arr[i][j] == 'S')
//                        x = i, y = j, flagS = 0;  
//                }
//            }
//        }
//        flag = ans = 0;
//        while (arr[x][y] != 'E')
//        {
//            if ((d == 1 && x == 1) || (d == 2 && y == m) || (d == 3 && x == n) || (d == 4 && y == 1) || arr[x + arr2[d][0]][y + arr2[d][1]] == '*')
//            {
//                d = d % 4 + 1;                           
//                flag++;
//            }
//            else
//            {
//                x += arr2[d][0], y += arr2[d][1];
//                flag = 0, ans++;
//            }
//            if (ans > n * m || flag > 4) { ans = 0; break; }   
//        }
//        if (ans)    printf("%d\n", ans);
//        else        puts("Impossible");
//    }
//    return 0;
//}








//#include<stdio.h>
//#include<string.h>
//int cnt, T, n, count1, count2;
//int count, arr1, arr2, i, res;
//int arr[12];
//int book[12];
//int hanshu(int N) 
//{
//    memset(arr, 0, sizeof(arr));
//    memset(book, 0, sizeof(book));
//    count = count1 = 0;
//    count2 = arr1 = arr2 = 0;
//    while (N != 0)
//    {
//        count++;
//        if (count % 2 == 0) arr[++count1] = N % 10;
//        else book[++count2] = N % 10;
//        N /= 10;
//    }
//    for (i = count1; i >= 1; i--)
//        arr1 = arr1 * 10 + arr[i];
//    for (i = count2; i >= 1; i--)
//        arr2 = arr2 * 10 + book[i];
//    res = arr1 * arr2;
//    cnt++;
//    if (res >= 10) return hanshu(res);  
//    else return cnt;
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--) 
//    {
//        cnt = 0;
//        scanf("%d", &n);
//        if (n < 10)   cnt = 0;  
//        else   cnt = hanshu(n);  
//        printf("%d\n", cnt);
//    }
//    return 0;
//} 


//#include<stdio.h>
//#include<string.h>
//int T, n, res, cnt, result, i, n1;
//int arr[12];
//int hanshu(int N)
//{
//    memset(arr, 0, sizeof(arr));
//    cnt = res = 0;
//    n1 = N;
//    while (N != 0)
//    {
//        arr[++cnt] = N % 10;
//        N /= 10;
//    }
//    for (i = cnt; i >= 1; i--)
//    {
//        res += arr[i];
//    }
//    if (n1 % res == 0) return n1;
//    else 
//    {
//        n1--;
//        return hanshu(n1);
//    }
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        result = hanshu(n);
//        printf("%d\n", result);
//    }
//    return 0;
//} 


//
//
//#include<stdio.h>
//#include<string.h>
//int gcd(int a, int b)
//{
//	if (b != 0)
//		return gcd(b, a % b);
//	else
//		return a;
//}
//int main()
//{
//	char s[1005];
//	while (scanf("%s", s) != EOF) 
//	{
//		int arr[30] = { 0 }; 
//		int len = strlen(s);
//		for (int i = 0; i < len; i++) 
//		{
//			arr[s[i] - 'A']++;
//		}
//		int result[30] = { 0 };
//		int cnt = 0;
//		for (int i = 0; i < 30; i++) 
//		{
//			if (arr[i] != 0)
//			{
//				result[cnt++] = arr[i];
//			}
//		}
//		int m = result[0]; 
//		for (int i = 1; i < cnt; i++) 
//		{
//			m = gcd(m, result[i]);
//		}
//		int max = 0;
//		for (int i = 0; i < cnt; i++) 
//		{
//			result[i] /= m;
//			if (result[i] > max)
//				max = result[i];
//		} 
//		for (int i = max; i > 0; i--) 
//		{ 
//			int end = cnt - 1;
//			while (result[end] < i)
//			{ 
//				end--;
//			}
//			for (int j = 0; j <= end; j++)
//			{
//				if (result[j] < i)
//					printf(" ");
//				else
//					printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < 30; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf("%c", i + 'A');
//			}
//		}
//		printf("\n\n");
//
//	}
//}









//#include <stdio.h> 
//char ins[7];
//int game[7][7];
//int tag1, tag2, flag;
//void swap(int& x, int& y)
//{           
//    int t;
//    t = x, x = y, y = t;
//}
//
//void exchange1(int i)      
//{
//    tag1 = tag2 = -1, flag = true;      
//    for (int j = 1; j <= 4; j++)       
//    {
//        if (game[i][j] == 0) continue;  
//        if (game[i][j] != tag2)          
//        {
//            tag1 = j, tag2 = game[i][j];
//            continue;
//        }
//        if (game[i][j] == tag2)          
//        {
//            game[i][tag1] *= 2, game[i][j] = 0;
//            tag1 = tag2 = -1;           
//        }                              
//    }
//    while (flag)                         
//    {
//        flag = false;    
//        for (int j = 1; j < 4; j++)
//            if (game[i][j] == 0 && game[i][j + 1] != 0)   
//                swap(game[i][j], game[i][j + 1]), flag = true;  
//}
//
//void exchange2(int i)
//{
//    tag1 = tag2 = -1, flag = true;
//    for (int j = 4; j >= 1; j--)
//    {
//        if (game[i][j] == 0) continue;
//        if (game[i][j] != tag2)
//        {
//            tag1 = j, tag2 = game[i][j]; continue;
//        }
//        if (game[i][j] == tag2)
//        {
//            game[i][tag1] *= 2, game[i][j] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = false;
//        for (int j = 4; j > 1; j--)
//            if (game[i][j] == 0 && game[i][j - 1] != 0)
//                swap(game[i][j], game[i][j - 1]), flag = true;
//    }
//}
//
//void exchange3(int i)
//{
//    tag1 = tag2 = -1, flag = true;
//    for (int j = 4; j >= 1; j--)
//    {
//        if (game[j][i] == 0) continue;
//        if (game[j][i] != tag2)
//            tag1 = j, tag2 = game[j][i];
//        else if (game[j][i] == tag2)
//        {
//            game[tag1][i] *= 2, game[j][i] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = false;
//        for (int j = 4; j > 1; j--)
//            if (game[j][i] == 0 && game[j - 1][i] != 0)
//                swap(game[j][i], game[j - 1][i]), flag = true;
//    }
//}
//void exchange4(int i)
//{
//    tag1 = tag2 = -1, flag = true;
//    for (int j = 1; j <= 4; j++)
//    {
//        if (game[j][i] == 0) continue;
//        if (game[j][i] != tag2)
//            tag1 = j, tag2 = game[j][i];
//        else if (game[j][i] == tag2)
//        {
//            game[tag1][i] *= 2, game[j][i] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = false;
//        for (int j = 1; j < 4; j++)
//            if (game[j][i] == 0 && game[j + 1][i] != 0)
//                swap(game[j][i], game[j + 1][i]), flag = true;
//    }
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        for (int i = 1; i <= 4; i++)
//            for (int j = 1; j <= 4; j++)
//                scanf("%d", &game[i][j]);
//        scanf("%s", ins);
//        if (ins[0] == 'L')                      
//            for (int i = 1; i <= 4; i++)
//                exchange1(i);
//        else if (ins[0] == 'R')
//            for (int i = 1; i <= 4; i++)
//                exchange2(i);
//        else if (ins[0] == 'D')
//            for (int i = 1; i <= 4; i++)
//                exchange3(i);
//        else
//            for (int i = 1; i <= 4; i++)
//                exchange4(i);
//
//        for (int i = 1; i <= 4; i++)           
//        {
//            for (int j = 1; j <= 3; j++)
//                printf("%d ", game[i][j]);
//            printf("%d\n", game[i][4]);
//        }
//        puts("");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>   
//
//char ins[7];
//int game[7][7];
//int tag1, tag2, flag;  
//
//void swap(int* x, int* y)
//{
//    int t;
//    t = *x;
//    *x = *y;
//    *y = t;
//}
//
//void exchange1(int i)
//{
//    tag1 = tag2 = -1;
//    flag = 1;  
//    for (int j = 1; j <= 4; j++)
//    {
//        if (game[i][j] == 0) continue;
//        if (game[i][j] != tag2)
//        {
//            tag1 = j;
//            tag2 = game[i][j];
//            continue;
//        }
//        if (game[i][j] == tag2)
//        {
//            game[i][tag1] *= 2;
//            game[i][j] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = 0;
//        for (int j = 1; j < 4; j++)
//        {
//            if (game[i][j] == 0 && game[i][j + 1] != 0)
//            {
//                swap(&game[i][j], &game[i][j + 1]);  
//                flag = 1;
//            }
//        }
//    }
//}
//
//void exchange2(int i)
//{
//    tag1 = tag2 = -1;
//    flag = 1;
//    for (int j = 4; j >= 1; j--)
//    {
//        if (game[i][j] == 0) continue;
//        if (game[i][j] != tag2)
//        {
//            tag1 = j;
//            tag2 = game[i][j];
//            continue;
//        }
//        if (game[i][j] == tag2)
//        {
//            game[i][tag1] *= 2;
//            game[i][j] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = 0;
//        for (int j = 4; j > 1; j--)
//        {
//            if (game[i][j] == 0 && game[i][j - 1] != 0)
//            {
//                swap(&game[i][j], &game[i][j - 1]);  
//                flag = 1;
//            }
//        }
//    }
//}
//
//void exchange3(int i)
//{
//    tag1 = tag2 = -1;
//    flag = 1;
//    for (int j = 4; j >= 1; j--)
//    {
//        if (game[j][i] == 0) continue;
//        if (game[j][i] != tag2)
//        {
//            tag1 = j;
//            tag2 = game[j][i];
//        }
//        else if (game[j][i] == tag2)
//        {
//            game[tag1][i] *= 2;
//            game[j][i] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = 0;
//        for (int j = 4; j > 1; j--)
//        {
//            if (game[j][i] == 0 && game[j - 1][i] != 0)
//            {
//                swap(&game[j][i], &game[j - 1][i]);   
//                flag = 1;
//            }
//        }
//    }
//}
//
//void exchange4(int i)
//{
//    tag1 = tag2 = -1;
//    flag = 1;
//    for (int j = 1; j <= 4; j++)
//    {
//        if (game[j][i] == 0) continue;
//        if (game[j][i] != tag2)
//        {
//            tag1 = j;
//            tag2 = game[j][i];
//        }
//        else if (game[j][i] == tag2)
//        {
//            game[tag1][i] *= 2;
//            game[j][i] = 0;
//            tag1 = tag2 = -1;
//        }
//    }
//    while (flag)
//    {
//        flag = 0;
//        for (int j = 1; j < 4; j++)
//        {
//            if (game[j][i] == 0 && game[j + 1][i] != 0)
//            {
//                swap(&game[j][i], &game[j + 1][i]);  
//                flag = 1;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        for (int i = 1; i <= 4; i++)
//            for (int j = 1; j <= 4; j++)
//                scanf("%d", &game[i][j]);
//        scanf("%s", ins);   
//        if (ins[0] == 'L')
//            for (int i = 1; i <= 4; i++)
//                exchange1(i);
//        else if (ins[0] == 'R')
//            for (int i = 1; i <= 4; i++)
//                exchange2(i);
//        else if (ins[0] == 'D')
//            for (int i = 1; i <= 4; i++)
//                exchange3(i);
//        else
//            for (int i = 1; i <= 4; i++)
//                exchange4(i);
//
//        for (int i = 1; i <= 4; i++)
//        {
//            for (int j = 1; j <= 3; j++)
//                printf("%d ", game[i][j]);
//            printf("%d\n", game[i][4]);
//        }
//        puts("");
//    }
//    return 0;
//}






 //#include<stdio.h>
 //int main()
 //{
 //    int T;
 //    scanf("%d",&T);
 //    while(T--)
 //    {
 //        int n,count1=0,count2=0,t=0;
 //        scanf("%d",&n);
 //        if(n%11!=0) 
 //        {
 //            printf("0\n");
 //            continue;
 //        }
 //        for(int i=0;i<=n/11;i++)
 //        {
 //            if(101*i<n/11) continue; 
 //            else
 //            {
 //                count1=i-1;
 //                break;
 //            }
 //        } 
 //        t=n/11-count1*101;
 //        for(int i=0;i<=t/11;i++)
 //        {
 //            if(11*i<t) continue;
 //            else
 //            {
 //                count2=i-1;
 //                break;
 //            }
 //        }
 //        t-=count2*11;
 //        printf("%d\n",count1+count2+t);
 //        return 0;
 //    }
 //}

//#include<stdio.h>
//#include<string.h>
//int n, m;
//int arr[110];
//int a[110][110];
//
//void hanshu(int j, int i, int layer) 
//{
//    if (layer == m)
//    {
//        a[i][j] = 1;
//        return;
//    }
//    hanshu(j, arr[i], layer + 1);
//    if (arr[i] > 1) hanshu(j, arr[i] - 1, layer + 1);
//}
//
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    while (t--) 
//    {
//        memset(a, 0, sizeof(a));
//        scanf("%d %d", &n, &m);
//        for (int j = 1; j <= n; j++) 
//        {
//            scanf("%d", arr + j);
//        }
//        for (int j = 1; j <= n; j++) 
//        {
//            hanshu(j, j, 1);
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= n; j++)
//            {
//                printf("%d", a[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//    return 0;
//}




//#include<stdio.h>
//#include<stdbool.h>
//
//int arr1[100010];
//int arr2[10000];
//
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//
//	int sum = 0;
//	for (int i = 0; i < n; i++) 
//	{
//		scanf("%d", &arr1[i]);
//		sum += arr1[i];
//	}
//
//	int cnt = 0;
//	for (int i = 1; i * i <= sum; i++) 
//	{
//		if (sum % i == 0) 
//		{
//			arr2[cnt++] = i;
//			if (sum / i != i) 
//			{
//				arr2[cnt++] = sum / i;
//			}
//		}
//	}
//
//	for (int i = 0; i < cnt; i++) 
//	{
//		for (int j = 0; j < cnt - i; j++)
//		{
//			if (arr2[j] > arr2[j + 1]) 
//			{
//				int temp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i <= cnt; i++)
//	{
//		int sum1 = 0;
//		bool flag = true;
//		for (int j = 0; j < n; j++) 
//		{
//			sum1 += arr1[j];
//			if (sum1 == arr2[i]) 
//			{
//				sum1 = 0;
//			}
//			else if (sum1 > arr2[i])
//			{
//				flag = false;
//				break;
//			}
//			else 
//			{
//				continue;
//			}
//		}
//
//		if (flag) 
//		{
//			printf("%d\n", arr2[i]);
//			break;
//		}
//	} 
//	return 0;
//}
//
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	printf("%d", INT_MAX);
//}






//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1 && n != 0)
//    {
//        int* arr = (int*)malloc((n + 2) * sizeof(int)); 
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        int t = 0, count = 0;
//        for (int i = 1; i < n; i++)
//        {
//            t = arr[i];
//            for (int j = i + 1; j <= n; j++)
//            {
//                if (t > arr[j]) count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    
//    return 0;
//}

//
//#include<stdio.h>
//int arr1[20], arr2[7], arr3[13];
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        for (int i = 1; i <= 19; i++)
//        {
//            scanf("%d", &arr1[i]);
//        }
//        int t = arr1[1];
//        for (int i = 1; i <= 6; i++)
//        {
//            arr2[i] = arr1[i + 1];
//        }
//        for (int i = 1; i <= 12; i++)
//        {
//            arr3[i] = arr1[i + 7];
//        }
//        int sum1 = 0, min1 = 6002, min2 = 6002;
//        for (int i = 1; i <= 6; i++)
//        {
//            sum1 += arr2[i];
//        }
//        for (int i = 1; i <= 6; i++)
//        {
//            if (arr2[i] + arr2[(i + 1)%6] + arr2[(i + 2)%6] < min1) min1 = arr2[i] + arr2[(i + 1)%6] + arr2[(i + 2)%6];
//        }
//        for (int i = 1; i <= 12; i++)
//        {
//            if (arr3[i] + arr3[(i + 1)%12] + arr3[(i + 2)%12] < min2) min2 = arr3[i] + arr3[(i + 1) % 12] + arr3[(i + 2) % 12];
//        }
//        int shu1 = t + sum1, shu2 = t + min1 + min2;
//        if (shu1 == shu2) printf("%d\n", shu1);
//        else
//        { 
//            printf("%d\n", shu1 < shu2 ? shu1 : shu2);
//        }
//    }
//    return 0;
//}
//
//
//
////#include<stdio.h>
//#define N 1000005
//int arr1[N] ;
//int arr2[N] ;
//int arr3[N] ;
//
//void hanshu2() 
//{
//	int i, j;
//	arr1[0] = 1, arr1[1] = 1;
//	for (i = 2; i * i <= N; i++)
//	{
//		if (arr1[i] == 0) 
//		{
//			for (j = 2 * i; j < N; j += i)
//			{
//				arr1[j] = 1;
//			}
//		}
//	}
//	for (i = 2; i <= N; i++) 
//	{
//		if (arr1[i] == 0)
//		{
//			arr3[i] = 1;
//			for (j = 2; i * j <= N; j++) 
//			{
//				arr3[i * j]++;
//			}
//		}
//	}
//	for (i = 2; i <= N; i++)
//	{
//		if (arr3[i] % 2 != 0) 
//		{
//			arr2[i] = 1;
//		}
//	}
//	for (i = 1; i < N; i++)
//	{
//		arr2[i] += arr2[i - 1];
//	}
//}
//
//void hanshu() 
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", arr2[b] - arr2[a - 1]);
//}
//
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


//
//#include <stdio.h>
//#include <stdbool.h>
//
//int T, a, b;
//#define MAXN 3000005   
//bool arr3[MAXN];
//int arr2[MAXN];
//long long arr1[MAXN] = { 0, 1 };   
//void hanshu()
//{
//    for (int i = 2; i < MAXN; i++)
//    {
//        if (!arr3[i])
//        {
//            arr2[++arr2[0]] = i;
//            arr1[i] = i - 1;
//        }
//        for (int j = 1; j <= arr2[0] && i <= MAXN / arr2[j]; j++)
//        {
//            arr3[i * arr2[j]] = 1;
//            arr1[i * arr2[j]] = arr1[i] * arr1[arr2[j]];
//            if (i % arr2[j] == 0)
//            {
//                arr1[i * arr2[j]] = arr1[i] * arr2[j];
//                break;
//            }
//        }
//    } 
//    for (int i = 1; i <= 3000000; i++)
//        arr1[i] += arr1[i - 1];
//}
//
//int main()
//{
//    hanshu();
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &a, &b);
//        printf("%lld\n", arr1[b] - arr1[a - 1]);   
//    }
//    return 0;
//}



//
//
//#include<stdio.h>
//long long arr[100005], prefix[100020];
//int main()
//{
//    long long n, m;
//    while (scanf("%lld %lld",&n,&m) == 2 && n != 0 && m != 0)
//    { 
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%lld", &arr[i]);
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            prefix[i] = arr[i] + prefix[i - 1];
//        }
//        int max = 0, t = 0;
//        if (n == m) printf("%d\n", prefix[n]);
//        else
//        {
//            for (int i = 0; i <= n - m; i++)
//            { 
//                t = prefix[i + m] - prefix[i];
//                max = max < t ? t : max;
//            }
//            printf("%lld\n", max);
//        } 
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int T, n;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        int t = (n - 1) / 2;
//        int n1 = n; 
//        for (int i = 3; i * i <= n1; i += 2)
//        {
//            int sq = i * i;
//            while (n1 % sq == 0) n1 /= sq;
//        }
//
//        if (n1 == n) 
//        {
//            printf("%d\n", n == 1 ? 0 : (n + 1) / 2);
//        }
//        else 
//        {
//            for (int i = 0; ; i++)
//            {
//                int a = i * i * n1 - t;
//                if (a >= 0)
//                {
//                    printf("%d\n", a);
//                    break;
//                }
//            }
//        }
//    }
//    return 0;
//}




//
//
//#include<stdio.h>
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        int a, b, c,t, count1 = 0, count2 = 0;
//        scanf("%d+%d=%d", &a, &b, &c);
//        if ((c - b) % a != 0)
//        {
//            goto here;
//        }
//        else
//        {
//            t = (c - b) % a;
//            while (t % 10 == 0)
//            {
//                count1++;
//            }
//            printf("%d\n", count1);
//            continue;
//        }
//    here:
//        t = (c - a) % b;
//        while (t % 10 == 0)
//        {
//            count2++;
//        }
//        printf("%d\n", count2);
//    }
//    return 0;
//}



#include<stdio.h>

int myabs(int x) {//绝对值函数
    if (x < 0)
        return -x;
    return x;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int b, c;
        int a[10000] = { 0 };//存所有可能的 x 
        int cnt = 0;
        scanf("%d %d", &b, &c);
        if (c * 4 == b * b)
            printf("-1\n");//无限解
        else {
            int temp = b * b - 4 * c;
            for (int k = -20000; k <= 20000 && k != 0; k++) {//k 是 temp 的因子，用公式法求 x ，(4*i+k)*k==temp
                if (myabs(temp) % myabs(k) == 0) {
                    int i = temp / k - k;
                    if (myabs(i) % 4 == 0 && i != 0) {
                        i /= 4;
                        int up = -b + myabs(2 * i + k);
                        if (up > 0 && up % 2 == 0)
                            a[cnt++] = up / 2;	//x=(-b+myabs(2*i+k))/2
                    }
                }
            }

            for (int i = 0; i < cnt; i++) {//升序排序
                for (int j = 0; j < cnt - i; j++) {
                    if (a[j] > a[j + 1]) {
                        int hhh = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = hhh;
                    }
                }
            }

            int qaq[10000] = { 0 };//去掉重复元素
            int cnt1 = 0;
            for (int i = 1; i <= cnt; i++) {
                if (a[i] != 0 && a[i] != a[i - 1]) {
                    qaq[cnt1++] = a[i];
                }
            }

            if (cnt1 == 0)//没找到正整数解
                printf("0\n");
            else {
                for (int i = 0; i < cnt1 - 1; i++) {//升序输出正整数解
                    printf("%d ", qaq[i]);
                }
                printf("%d\n", qaq[cnt1 - 1]);
            }
        }
    }

    return 0;
}
