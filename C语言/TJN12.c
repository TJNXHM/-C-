#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
//#include <stdio.h>
//
//int main()
//{
//    int x, n;
//    scanf("%d %d", &n, &x);
//    int count = 0;
//    for (int a = 1; a <= n; a++)
//    {
//        int b = a;
//        while (b)
//        {
//            if (b % 10 == x)
//            {
//                count++;
//            }
//            b /= 10;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int arr[11];
//    for (int a = 0; a < 10; a++)
//    {
//        scanf("%d", &arr[a]);
//    }
//    for (int b = 9; b >= 0; b--)
//    {
//        printf("%d ", arr[b]);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//    for (int a = 0; a < n; a++)
//    {
//        scanf("%d", &arr[a]);
//    }
//    for (int b = 0; b < n; b++)
//    {
//        int temp = 0;
//        for (int c = b; c < n; c++)
//        {
//            if (arr[c] > arr[b])
//            {
//                temp = arr[b];
//                arr[b] = arr[c];
//                arr[c] = temp;
//            }
//        }
//    }
//    for (int k = 0; k < 5; k++)
//    {
//        printf("%d ", arr[k]);
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    long long n, m, val;
//    int arr[2000];
//    scanf("%lld %lld", &n, &m);
//    for (long long a = 0; a < n; a++)
//    {
//        scanf("%d", &arr[a]);
//    }
//    for (long long b = n; b < n + m; b++)
//    {
//        scanf("%d", &arr[b]);
//    }
//    for (int c = 0; c < m + n; c++)
//    {
//        for (int d = c + 1; d < m + n; d++)
//            if (arr[d] < arr[c])
//            {
//                long long temp = arr[c];
//                arr[c] = arr[d];
//                arr[d] = temp;
//            }
//    }
//    for (int e = 0; e < m + n; e++)
//    {
//        printf("%d ", arr[e]);
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[55], n, flag1 = 0, flag2 = 0, i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) 
//    {
//        scanf("%d", &a[i]);
//        if (i > 0) 
//        {
//            if (a[i] < a[i - 1]) 
//            {
//                flag1 = 1;
//            }
//            else if (a[i] > a[i - 1]) 
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 && flag2) printf("unsorted\n");//ֻ�е�flag1��flag2��Ϊ1��ʱ����������
//    else printf("sorted\n");
//}


//#include <stdio.h>
//int main()
//{
//    int n, arr[50];
//    scanf("%d", &n);
//    for (int a = 0; a < n; a++)
//    {
//        scanf("%d", &arr[a]);
//    }
//    int count1 = 0, count2 = 0;
//    for (int b = 0; b < n; b++)
//    {
//        if (arr[b] < arr[b + 1]) count1++;
//        else count2++;
//    }
//    if (count1 == n - 1 || count2 == n - 1)printf("sorted");
//    else printf("unsorted");
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n, arr[51];
//    scanf("%d", &n);
//    for (int a = 0; a < n; a++)
//    {
//        scanf("%d",& arr[a]);
//    }
//    int m,b;
//    scanf("%d", &m);
//    for (b = n; b > 0; b--)
//    {
//        if (m <= arr[b - 1])arr[b] = arr[b - 1];
//        else
//        {
//            arr[b] = m;
//            break;
//        }
//           
//    }
//    if (b == 0)arr[0] = m;
//    for (int c = 0; c < n + 1; c++)
//    {
//        printf("%d", arr[c]);
//    }
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int n, x, i;
//    scanf("%d\n", &n);
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//    scanf("%d\n", &x);
//    for (i = n; i > 0; i--)  //�Ӻ���ǰ������x�Ƚ�
//    {
//        if (arr[i - 1] >= x)  //x��Сʱ��Ԫ�غ���һλ
//            arr[i] = arr[i - 1];
//        else 
//        {
//            arr[i] = x;    //x����ʱ����x���룬����ѭ��
//            break;
//        }
//    }
//    if (i == 0)  arr[i] = x; //�״�㣬forѭ���в�����i=0�������Ҫ��������
//    for (i = 0; i <= n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n, arr1[5000], arr2[5000];
//    scanf("%d", &n);
//    for (int a = 0; a < n; a++)
//    {
//        scanf("%d", &arr1[a]);
//    }
//    int c = 0;
//    // ����ԭ�������ȥ��
//    for (int b = 0; b < n; b++)
//    {
//        // ��鵱ǰԪ���Ƿ�����arr2�д���
//        int exists = 0;
//        for (int i = 0; i < c; i++)
//        {
//            if (arr1[b] == arr2[i])
//            {
//                exists = 1;
//                break;
//            }
//        }
//
//        // �������������ӵ�arr2
//        if (!exists)
//        {
//            arr2[c] = arr1[b];
//            c++;
//        }
//    }
//    for (int d = 0; d < c; d++)
//    {
//        printf("%d ", arr2[d]);
//    }
//    return 0;
//}


//#include <stdio.h> Ч��̫��
//
//int main()
//{
//    int arr[101], n;
//    while (scanf("%d", &n))
//    {
//        for (int a = 2; a <= n; a++)
//        {
//            arr[a] = a;
//        }
//        int count = 0;
//        for (int b = 2; b <= n; b++)
//        {
//            for (int c = b+1; c <= n; c++)
//            {
//                if (arr[c] % b == 0&&arr[c]!=0)
//                {
//                    arr[c] = 0;
//                    count++;
//                }
//            }
//        }
//        for (int d = 2; d <= n; d++)
//        {
//            if (arr[d] != 0)printf("%d ", arr[d]);
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <math.h>   
//
//int main()
//{
//    int arr[100001], n;  
//    while (scanf("%d", &n) == 1)  
//    { 
//        for (int a = 0; a <= n; a++)
//        {
//            arr[a] = 1;
//        }
//        arr[0] = arr[1] = 0;  
//
//        int count = 0; 
//        for (int b = 2; b * b <= n; b++)
//        { 
//            if (arr[b] == 1)
//            { 
//                for (int c = b * b; c <= n; c += b)
//                {
//                    if (arr[c] == 1)
//                    {
//                        arr[c] = 0;
//                        count++;
//                    }
//                }
//            }
//        } 
//        for (int d = 2; d <= n; d++)
//        {
//            if (arr[d] == 1)
//                printf("%d ", d);
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n, arr[101];
//	while (scanf("%d", &n))
//	{
//		for (int a = 0; a <= n; a++)
//		{
//			arr[a] = 1;
//		}
//		arr[0] = arr[1] = 0;
//		int count = 0;
//		for (int b = 2; b * b <= n; b++)
//		{
//			if (arr[b] == 1)
//			{
//				for (int c = b * b; c <= n; c += b)
//				{
//					if (arr[c] == 1)
//					{
//						arr[c] = 0;
//						count++;
//					}
//				}
//			}
//		}
//		for (int d = 2; d <= n; d++)
//		{
//			if (arr[d] == 1)printf("%d ", d);
//		}
//		printf("\n%d\n", count);
//	}
//}



//#include <stdio.h>
//
//int main()
//{
//    double arr[5][5];
//    for (int i = 0; i < 5; i++)
//    {
//        scanf("%lf %lf %lf %lf %lf", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
//    }
//    for (int a = 0; a < 5; a++)
//    {
//        int sum = 0;
//        for (int b = 0; b < 5; b++)
//        {
//            sum += arr[a][b];
//            printf("%lf ", arr[a][b]);
//        }
//        printf("%d\n", sum);
//    }
//    return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//    long long  n, m;
//    scanf("%d %d", &n, &m);
//    int  arr[n][m];
//    for (int a = 0; a < 0; a++)
//    {
//        for (int b = 0; b < 0; b++)
//        {
//            scanf("%d", &arr[a][b]);
//        }
//    }
//    int x, y;
//    scanf("%d %d", &x, &y);
//    printf("%d", arr[x - 1][y - 1]);
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int m, n;
//    scanf("%d %d", &n, &m);
//    int** arr = (int**)malloc(n * sizeof(int*));
//    for (int g = 0; g < n; g++)
//    {
//       arr[g] = (int*)malloc(m * sizeof(int));
//    } 
//    for (int a = 0; a < n; a++)
//    {
//        for (int b = 0; b < m; b++)
//        {
//            scanf("%d", &arr[a][b]);
//        }
//    }
//    int x = 0;
//    int e, f;
//    for (int c = 0; c < n; c++)
//    {
//        for (int d = 0; d < m; d++)
//        {
//            if (x < arr[c][d])
//            {
//                x = arr[c][d];
//                e = c;
//                f = d;
//            }
//        }
//    }
//    for (int a = 0; a < n; a++)
//    {
//        free(arr[a]);
//    }
//    free(arr);
//    printf("%d %d", e, f);
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int** arr1 = (int**)malloc(n * sizeof(int*));
//    for (int a = 0; a < n; a++)
//    {
//        arr1[a] = (int*)malloc(m * sizeof(int));
//    }
//    int** arr2 = (int**)malloc(n * sizeof(int*));
//    for (int a = 0; a < n; a++)
//    {
//        arr2[a] = (int*)malloc(m * sizeof(int));
//    }
//    for (int b = 0; b < n; b++)
//    {
//        for (int c = 0; c < m; c++)
//        {
//            scanf("%d", &arr1[b][c]);
//        }
//    }
//    for (int b = 0; b < n; b++)
//    {
//        for (int c = 0; c < m; c++)
//        {
//            scanf("%d", &arr2[b][c]);
//        }
//    }
//    int count = 0;
//    for (int f = 0; f < n; f++)
//    {
//        for (int g = 0; g < m; g++)
//        {
//            if (arr1[f][g] == arr2[f][g])count++;
//        }
//    }
//    if(count==m*n)printf("Yes\n");
//            else
//                printf("No\n");
//    for (int h = 0; h < n; h++)
//    {
//        free(arr1[h]);
//        free(arr2[h]);
//    }
//    free(arr1);
//    free(arr2);
//    return 0;
//}


//#include <stdio.h>
//int array[1001][1001] = { 0 };
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 1, j = 1, k = 0, pos = 1; //pos�������ƶ�   1��������   -1��������
//    array[i][j] = 1;
//    for (k = 2; k <= n * n; k++)
//    {
//        if (i == 1 && j < n && pos == 1) //�����ϱ߽�,������1,�в���     �˺�����,�м�
//        {
//            array[i][++j] = k;
//            pos = -1;                 //����ע��
//        }
//        else if (j == 1 && i < n && pos == -1)//������߽�,������1,�в���     �˺��м�,����
//        {
//            array[++i][j] = k;
//            pos = 1;                     //����ע��               
//        }
//        else if (j == n && pos == 1) //������߽�,������1,�в���     �˺�����,�м�
//        {
//            array[++i][j] = k;
//            pos = -1;                     //����ע��
//        }
//        else if (i == n && pos == -1) //�����ұ߽�,������1,�в���    �˺��м�,����
//        {
//            array[i][++j] = k;
//            pos = 1;
//        }
//        else if (pos == 1)         //��ȥ����ı߽����,�����м��ƶ�����
//        {
//            array[--i][++j] = k;
//        }
//        else if (pos == -1)
//        {
//            array[++i][--j] = k;
//        }
//    }
//    for (i = 1; i <= n; i++)
//    {
//        for (j = 1; j <= n; j++)
//            printf("%d ", array[i][j]);
//        printf("\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int* arr1 = (int*)malloc(m * n * sizeof(int));
//    for (int a = 0; a < n * m; a++)
//    {
//        scanf("%d", &arr1[a]);
//    }
//    int** arr2 = (int**)malloc(n * sizeof(int*));
//    for (int a = 0; a < n; a++)
//    {
//        arr2[a] = (int*)malloc(m * sizeof(int));
//    }int c, d;
//    for (int b = 0; b < n * m; b++)
//    {
//        c = b / m;
//        d = b % m;
//        arr2[c][d] = arr1[b];
//    }
//    for (int e = 0; e < n; e++)
//    {
//        for (int f = 0; f < m; f++)
//        {
//            printf("%d ", arr2[e][f]);
//        }
//        printf("\n");
//    }
//    for (int a = 0; a < n; a++)
//    {
//        free(arr2[a]);
//    }
//    free(arr1);
//    free(arr2);
//    return 0;
//}





//#include <stdio.h>
//#include<stdlib.h>
//
//void hanshu1(int a, int b,int n,int m,int**arr)
//{
//    int* arr1 = (int*)malloc(m * sizeof(int));
//    for (int c = 0; c < m; c++)
//    {
//        arr1[c] = arr[a][c];
//    }
//    for (int c = 0; c < m; c++)
//    {
//        arr[a][c] = arr[b][c];
//        arr[b][c] = arr1[c];
//    }
//    free(arr1);
//}
//
//void hanshu2(int a, int b, int n, int m, int** arr)
//{
//    int* arr1 = (int*)malloc(n * sizeof(int));
//    for (int c = 0; c < n; c++)
//    {
//        arr1[c] = arr[c][a];
//    }
//    for (int c = 0; c < n; c++)
//    {
//        arr[c][a] = arr[c][b];
//        arr[c][b] = arr1[c];
//    }
//    free(arr1);
//}
//
//int main()
//{
//    int m, n,e,f,  k;
//    char ar;
//    scanf("%d %d", &n, &m);
//    int** arr = (int**)malloc(n * sizeof(int*));
//    for (int a = 0; a < n; a++)
//    {
//        arr[a] = (int*)malloc(m * sizeof(int));
//    }
//    for (int b = 0; b < n; b++)
//    {
//        for (int c = 0; c < m; c++)
//        {
//            scanf("%d", &arr[b][c]);
//        }
//    }
//    scanf("%d", &k);
//    getchar();
//    for (int i = 0; i < k; i++)
//    {
//        scanf(" %c %d %d", &ar, &e, &f);
//        if (ar == 'r') hanshu1(e, f,n,m,arr);
//        if (ar == 'c') hanshu2(e, f,n,m,arr);
//   }
//    for (int a = 0; a < n; a++)
//    {
//        for (int b = 0; b < m; b++)
//        {
//            printf("%d ", arr[a][b]);
//        }
//        printf("\n");
//    }
//    for (int a = 0; a < n; a++)
//    {
//        free(arr[a]);
//    }
//    free(arr);
//    return 0;
//}
//



#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int a = 0; a < n; a++)
    {
        arr[a] = (int*)malloc(sizeof(int));
    }
    for (int a = 0; a < n; a++)
    {
        for (int b = 0; b < n; b++)
        {
            if (b == 0 || a == b)
            {
                arr[a][b] = 1;
            }
            else arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
            printf("%5d", arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}