#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        char arr1[12] = { 0 };
//        scanf("%s", arr1);
//        int len = strlen(arr1), count = 0, flag = 0;
//        for (int i = 0; i < len; i++)
//        {
//            if (arr1[i] != 'A')
//            {
//                if (arr1[i] == 'J' || arr1[i] == 'Q' || arr1[i] == 'K')
//                {
//                    count += 10;
//                }
//                else if ('2' <= arr1[i] && arr1[i] < '10')
//                {
//                    count += arr1[i] - '0';
//                }
//                else if (arr1[i] == '1' && arr1[i + 1] == '0')
//                {
//                    count += 10;
//                }
//                if (count > 21)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//        for (int i = 0; i < len; i++)
//        {
//            if (arr1[i] == 'A')
//            {
//                if (count + 11 <= 21) count += 11;
//                else if (count + 11 > 21 && count + 10 <= 21) count += 10;
//                else if (count + 10 > 21 && count + 1 <= 21) count += 1;
//                else if (count + 1 > 21)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//        if (flag) printf("Boom\n");
//        else printf("%d\n", count);
//    }
//    return 0;
//}





 





//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int sum = 0, cntA = 0;
//		char s[11];
//		scanf("%s", s);
//		int len = strlen(s);
//		for (int i = 0; i < len;)
//		{
//			if (s[i] >= '2' && s[i] <= '9')
//			{
//				sum += s[i] - '0';
//				i++;
//			}
//			else if (s[i] == '1' && s[i + 1] == '0')
//			{
//				sum += 10;
//				i += 2;
//			}
//			else if (s[i] == 'A')
//			{
//				cntA++;
//				i++;
//			}
//			else
//			{
//				sum += 10;
//				i++;
//			}
//		}
//		int cntone = 0, cntten = 0;
//		for (int i = 0; i < cntA; i++)
//		{
//			if (sum + 1 <= 21)
//			{
//				sum++;
//				cntone++;
//			}
//			else
//			{
//				sum++;
//			}
//		}
//		for (int i = 0; i < cntone; i++)
//		{
//			if (sum + 9 <= 21)
//			{
//				sum += 9;
//				cntten++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		for (int i = 0; i < cntten; i++)
//		{
//			if (sum + 1 <= 21)
//			{
//				sum++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (sum > 21) printf("Boom\n");
//		else printf("%d\n", sum);
//	}
//	return 0;
//}
//



//#include<stdio.h>   // �����׼���������
//#include<string.h>  // �����ַ��������
//
//int main()
//{
//    int T;                  // �������T�����ڴ洢��������������
//    scanf("%d", &T);        // �������ȡ������������
//
//    // ѭ������ÿ����������
//    while (T--)
//    {
//        int sum = 0, cntA = 0;  // sum�洢�ܵ�����cntAͳ��A������
//        char s[11];             // �洢ÿ���Ƶ��ַ�������󳤶�10
//        scanf("%s", s);         // ��ȡ��ǰ��������������
//        int len = strlen(s);    // ��ȡ�����ַ����ĳ���
//
//        // ���������ַ������������������������A��
//        for (int i = 0; i < len;)
//        {
//            // �����2-9���ƣ�ֱ�Ӽ��϶�Ӧ�ĵ���
//            if (s[i] >= '2' && s[i] <= '9')
//            {
//                sum += s[i] - '0';  // �ַ�ת����
//                i++;
//            }
//            // �����10������10�㣨ע��ռ�����ַ�λ�ã�
//            else if (s[i] == '1' && s[i + 1] == '0')
//            {
//                sum += 10;
//                i += 2;  // ����'10'�����ַ�
//            }
//            // �����A���Ȳ��ӵ�����ֻͳ������
//            else if (s[i] == 'A')
//            {
//                cntA++;
//                i++;
//            }
//            // ����J��Q��K������10��
//            else
//            {
//                sum += 10;
//                i++;
//            }
//        }
//
//        // ����A�ĵ������㣨A������1��10��11�㣩
//        int cntone = 0, cntten = 0;  // ������������
//
//        // ��һ�����Ƚ�����A��1�����
//        for (int i = 0; i < cntA; i++)
//        {
//            if (sum + 1 <= 21)  // �����1�󲻳���21
//            {
//                sum++;
//                cntone++;       // ��¼��1������A������
//            }
//            else
//            {
//                sum++;  // ��ʹ����Ҳ�ȼ���1�㣨�����������
//            }
//        }
//
//        // �ڶ��������Խ���1������Aת��Ϊ10�㣨�ܹ�11�㣩
//        for (int i = 0; i < cntone; i++)
//        {
//            // ��9�൱�ڽ�1����10�㣨1+9=10��
//            if (sum + 9 <= 21)
//            {
//                sum += 9;
//                cntten++;  // ��¼ת��Ϊ10���A������
//            }
//            else
//            {
//                break;  // �������21��ֹͣת��
//            }
//        }
//
//        // �����������Խ�����A������1�㣨��10��11�㣩
//        for (int i = 0; i < cntten; i++)
//        {
//            if (sum + 1 <= 21)  // �����1�󲻳���21
//            {
//                sum++;  // ���11��
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        // �������յ���������
//        if (sum > 21)
//            printf("Boom\n");  // ����21�����Boom
//        else
//            printf("%d\n", sum);  // ��������ܵ���
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch;
//	int cnt = 0;
//	int first = 0;
//	int line = 1;
//	while (scanf("%c", &ch)==1) 
//	{
//		if (!first) printf("00000"); 
//		first++;
//		if (ch <= 15) printf(" 0%X", ch); 
//		else printf(" %X", ch);
//		cnt++;
//		if (cnt == 16) 
//		{ 
//			puts("");
//			cnt = 0; 
//			printf("%05X", line); 
//			line++;
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>   // �����׼��������⣬���������������
//#include<string.h>  // �����ַ�������⣬��Ȼ������δֱ��ʹ�ã��������������
//
//int main()
//{
//    char ch;         // �����ַ�����ch�����ڴ洢��ȡ�����ַ�
//    int cnt = 0;     // ���������cnt������ͳ����������ַ���������ʼ��Ϊ0
//    int first = 0;   // �����־����first�����ڱ���Ƿ��ǵ�һ��������ַ�����ʼ��Ϊ0
//    int line = 1;    // �����кű���line�����ڼ�¼��ǰ������кţ���ʼ��Ϊ1
//
//    // ѭ����ȡ�ַ���ֱ����ȡʧ�ܣ��������ļ�������EOF��
//    while (scanf("%c", &ch) == 1)
//    {
//        // ����ǵ�һ�������firstΪ0�������ȴ�ӡ"00000"��Ϊ��һ�еĵ�ַǰ׺
//        if (!first) printf("00000");
//        first++;  // ��first����������Ѵ������һ���ַ�
//
//        // ����ַ���ASCIIֵС�ڵ���15��0x0F���������" 0X"��ʽ����ǰ���㣩
//        if (ch <= 15) printf(" 0%X", ch);
//        // ����ֱ�����" X"��ʽ������ǰ���㣩
//        else printf(" %X", ch);
//
//        cnt++;  // ��������������¼��������ַ���
//
//        // �������16���ַ�ʱ��һ������
//        if (cnt == 16)
//        {
//            puts("");  // ������з���������һ��
//            cnt = 0;   // ���ü�����Ϊ0
//            // �����ǰ�к���Ϊ��ַǰ׺����ʽΪ5λʮ�������������㲹�㣩
//            printf("%05X", line);
//            line++;    // �к�������׼����һ��
//        }
//    }
//    return 0;
//}
//
////
//
//
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch;
//	int cnt = 0;
//	int first = 0;
//	int line = 1;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (!first) printf("00000");
//		first++;
//		if (ch <= 15) printf(" 0%X", ch);
//		else printf(" %X", ch);
//		cnt++;
//		if (cnt == 16)
//		{
//			puts("");
//			cnt = 0;
//			printf("%05X", line);
//			line++;
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int gcd(int a, int b);  //ȡ��������ĺ���
//int X[100], Y[100];
//int main()
//{
//	int o; scanf("%d", &o);
//	while (o--)
//	{
//		int a, b, c, d; scanf("%d %d %d %d", &a, &b, &c, &d);
//		int cnt = 0;
//		if (a == 1 && c == 1)     //a��c��Ϊ1�����
//		{
//			//Ҳ���൱�������Ȳ�����  ��������Ϊ���ȡֵȫΪb�ı��� �ұ�ȡֵȫΪd�ı���
//			cnt = 1000000000 / (b * d / gcd(b, d));       //���ʵ�����������ľ�������
//		}
//		else if (a == 1 || c == 1)    //a��c����һ��Ϊ1 --qȡaΪ�Ȳ�����
//		{
//			if (c == 1)
//			{
//				int t = a, T = b;
//				a = 1; c = t; b = d; d = T;  //�൱�ڽ���x��y   //Ҳ������һ��1������¶�ȡ���Ϊ�Ȳ����У��ұ�Ϊָ����������
//			}
//			int y = d;
//			while (y <= 1000000000)
//			{
//				//����			printf("here y=%d\n",y);
//				if (y % b == 0) cnt++;
//				y = y * c + d;
//			}
//		}
//		else if (a != 1 && c != 1)       //a��c����Ϊ1  ����ö��
//		{
//			int x = b, y = d;
//			int q1 = 1, q2 = 1;
//			while (x <= 1000000000)
//			{
//				//����			printf("here x=%d\n",x);
//				X[q1] = x;
//				x = x * a + b;
//				q1++;
//			}
//			while (y <= 1000000000)
//			{
//				//����			printf("here y=%d\n",y);
//				Y[q2] = y;
//				y = y * c + d;
//				q2++;
//			}
//			for (int i = 1; i < q1; i++)
//			{
//				for (int j = 1; j < q2; j++)
//				{
//					if (X[i] == Y[j]) cnt++;
//				}
//			}
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
//int gcd(int a, int b)
//{
//	int t;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//
///*
//  //��һ����� ��20��Χ�� 2�ĵȲ����� 3�ĵȲ�����   ��������0������
//  2 4 6 8 10 12 14 16 18 20
//  3 6 9 12 15 18 20
//  6 12 18--��ȵ���� ����2�ı�������3�ı���-----�ҵ����ߵ���С������6 (int)20/6=3
//
//  2 4 6 8 10 12 14 16 18 20
//  4 8 12 16 20
//  ������С������4   20/4=5
//
//
//  �ڶ������
//  ȫ�жϼ���    һ��Ϊb��n��  ��һ���ȡֵ�����ǣ�ֻҪ%b==0��cnt+1
//
//
//  ���������
//  �ҳ��������鱩��ö�ټ���
//
// */






//
//#include <stdio.h>
//#include <stdlib.h> 
//int gcd(int a, int b) 
//{
//    int t;
//    while (b != 0)
//    {
//        t = a % b;
//        a = b;
//        b = t;
//    }
//    return a;
//} 
//int lcm(int a, int b) 
//{
//    return a / gcd(a, b) * b;  
//} 
//long long pow_mod(long long base, long long exp, long long mod) {
//    long long result = 1;
//    base %= mod;
//    while (exp > 0)
//    {
//        if (exp % 2 == 1)
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;
//        exp /= 2;
//    }
//    return result;
//} 
//int main() 
//{
//    int T;
//    scanf("%d", &T); 
//    while (T--) 
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d); 
//        int count = 0;
//        const long long MAX = 1000000000LL; 
//        if (a == 1 && c == 1)
//        { 
//            if (b == d) 
//            { 
//                if (b == 0) 
//                {
//                    count = 0;  
//                }
//                else 
//                {
//                    count = MAX / b;
//                }
//            }
//            else 
//            { 
//                int g = gcd(b, d);
//                if (b % g != 0 || d % g != 0)
//                {
//                    count = 0;
//                }
//                else 
//                {
//                    long long l = lcm(b, d);
//                    if (l > MAX)
//                    {
//                        count = 0;
//                    }
//                    else
//                    {
//                        count = MAX / l;
//                    }
//                }
//            }
//        }
//        else if (a == 1) 
//        { 
//            long long y = d;  
//            while (y <= MAX) 
//            {
//                if (y % b == 0) 
//                {
//                    count++;
//                } 
//                if (y > (MAX - d) / c) 
//                {
//                    break;
//                }
//                y = y * c + d;
//            }
//        }
//        else if (c == 1) 
//        { 
//            long long x = b;  
//            while (x <= MAX)
//            {
//                if (x % d == 0) 
//                {
//                    count++;
//                } 
//                if (x > (MAX - b) / a) 
//                {
//                    break;
//                }
//                x = x * a + b;
//            }
//        }
//        else { 
//            if (a > c)
//            { 
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0; 
//                long long x = b;
//                while (x <= MAX)
//                {
//                    set[size++] = x;
//                    if (x > (MAX - b) / a) 
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                } 
//                long long y = d;
//                while (y <= MAX) 
//                { 
//                    int left = 0, right = size - 1;
//                    while (left <= right) 
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == y)
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < y)
//                        {
//                            left = mid + 1;
//                        }
//                        else 
//                        {
//                            right = mid - 1;
//                        }
//                    } 
//                    if (y > (MAX - d) / c) 
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                } 
//                free(set);
//            }
//            else 
//            { 
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0; 
//                long long y = d;
//                while (y <= MAX) 
//                {
//                    set[size++] = y;
//                    if (y > (MAX - d) / c) 
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                } 
//                long long x = b;
//                while (x <= MAX) 
//                { 
//                    int left = 0, right = size - 1;
//                    while (left <= right) 
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == x) 
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < x) 
//                        {
//                            left = mid + 1;
//                        }
//                        else 
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    if (x > (MAX - b) / a) 
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                }
//
//                free(set);
//            }
//        }
//
//        printf("%d\n", count);
//    }
//
//    return 0;
//}
//
//
//


//#include <stdio.h>      // ��׼���������
//#include <stdlib.h>     // ��׼�⣬�����ڴ����Ⱥ���
//
//// �����������������Լ��(GCD)��ʹ��շת�����
//int gcd(int a, int b)
//{
//    int t;
//    while (b != 0)
//    {
//        t = a % b;   // ȡ����
//        a = b;       // ����aΪb
//        b = t;       // ����bΪ����
//    }
//    return a;        // ��bΪ0ʱ��a�������Լ��
//}
//
//// ����������������С������(LCM)
//// ��ʽ��LCM(a,b) = (a*b) / GCD(a,b)���ȳ���˱������
//int lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
//
//// ����(base^exp) % mod�Ľ����ʹ�ÿ������㷨���Ч��
//long long pow_mod(long long base, long long exp, long long mod) {
//    long long result = 1;
//    base %= mod;  // �ȶ�baseȡģ����С������
//    while (exp > 0)
//    {
//        if (exp % 2 == 1)  // ���ָ��������������ǰbase������
//        {
//            result = (result * base) % mod;
//        }
//        base = (base * base) % mod;  // baseƽ��
//        exp /= 2;  // ָ������
//    }
//    return result;
//}
//
//int main()
//{
//    int T;                  // ������������
//    scanf("%d", &T);        // ��ȡ������������
//
//    while (T--)             // ѭ������ÿ����������
//    {
//        int a, b, c, d;
//        scanf("%d %d %d %d", &a, &b, &c, &d);  // ��ȡ�ĸ�����
//
//        int count = 0;                          // ��������ͬ���ĸ���
//        const long long MAX = 1000000000LL;     // ��Χ���ޣ�10^9
//
//        // ���1���������ж��ǵȲ����У�a=1��c=1��
//        if (a == 1 && c == 1)
//        {
//            // �������ж�������Ϊ0������ֱ�Ϊb��d�ĵȲ�����
//            // ʵ����Ч���b��d��ʼ����Ϊ0����[1,MAX]��Χ�ڣ�
//
//            if (b == d)  // ������ȣ�������ȫ��ͬ
//            {
//                if (b == 0)  // �������������Ϊ0���������0������ͳ�Ʒ�Χ�ڣ�
//                {
//                    count = 0;
//                }
//                else  // ����[MAX��Χ���ж��ٸ�b�ı���]
//                {
//                    count = MAX / b;
//                }
//            }
//            else  // ���ͬ��Ѱ�������Ȳ����еĹ�����
//            {
//                int g = gcd(b, d);  // �󹫲�����Լ��
//
//                // ����Ƿ���ڹ������ѧ�����Ǵ��ڵģ���������������жϣ�
//                if (b % g != 0 || d % g != 0)
//                {
//                    count = 0;
//                }
//                else
//                {
//                    // �����Ȳ����еĹ�������µĵȲ����У�����ΪLCM(b,d)
//                    long long l = lcm(b, d);
//                    if (l > MAX)  // ��С������������Χ��û�й�����
//                    {
//                        count = 0;
//                    }
//                    else  // ����[MAX��Χ���ж��ٸ�LCM�ı���]
//                    {
//                        count = MAX / l;
//                    }
//                }
//            }
//        }
//        // ���2������X�ǵȲ����У�a=1��������Y�ǵȱ������У�c��1��
//        else if (a == 1)
//        {
//            // X��ͨ�ʽ��x = k*b��k=1,2,...��
//            // ����Y���У����ÿ��Ԫ���Ƿ���b�ı���
//            long long y = d;  // Y���еĵ�һ����Ч�y0=0�����룩
//
//            while (y <= MAX)
//            {
//                if (y % b == 0)  // ���y��b�ı�����˵���ǹ�����
//                {
//                    count++;
//                }
//
//                // ��ֹ��һ�μ�����������y*c + d > MAX�����˳�ѭ��
//                if (y > (MAX - d) / c)
//                {
//                    break;
//                }
//                y = y * c + d;  // ����Y���е���һ��
//            }
//        }
//        // ���3������Y�ǵȲ����У�c=1��������X�ǵȱ������У�a��1��
//        else if (c == 1)
//        {
//            // Y��ͨ�ʽ��y = k*d��k=1,2,...��
//            // ����X���У����ÿ��Ԫ���Ƿ���d�ı���
//            long long x = b;  // X���еĵ�һ����Ч�x0=0�����룩
//
//            while (x <= MAX)
//            {
//                if (x % d == 0)  // ���x��d�ı�����˵���ǹ�����
//                {
//                    count++;
//                }
//
//                // ��ֹ��һ�μ������
//                if (x > (MAX - b) / a)
//                {
//                    break;
//                }
//                x = x * a + b;  // ����X���е���һ��
//            }
//        }
//        // ���4���������ж��ǵȱ������У�a��1��c��1��
//        else {
//            // ���ԣ����϶̵����д������飬�ٱ����ϳ������в����ֲ���
//            if (a > c)  // a����X�����������죬���ȸ��̣����ȴ洢X
//            {
//                // ��̬��������洢X���е�Ԫ��
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0;  // ��¼X����Ԫ�ظ���
//
//                // ����X���в��洢
//                long long x = b;
//                while (x <= MAX)
//                {
//                    set[size++] = x;
//                    // ��ֹ�������ǰ�˳�
//                    if (x > (MAX - b) / a)
//                    {
//                        break;
//                    }
//                    x = x * a + b;
//                }
//
//                // ����Y���У���X�����ж��ֲ����Ƿ������ͬԪ��
//                long long y = d;
//                while (y <= MAX)
//                {
//                    // ���ֲ���
//                    int left = 0, right = size - 1;
//                    while (left <= right)
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == y)  // �ҵ���ͬԪ��
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < y)  // �м�ֵ̫С�����Ҳ���
//                        {
//                            left = mid + 1;
//                        }
//                        else  // �м�ֵ̫���������
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    // ��ֹ�������ǰ�˳�
//                    if (y > (MAX - d) / c)
//                    {
//                        break;
//                    }
//                    y = y * c + d;  // ����Y���е���һ��
//                }
//
//                free(set);  // �ͷŶ�̬������ڴ�
//            }
//            else  // c�������ȣ�Y�����������죬���ȴ洢Y
//            {
//                // ��̬��������洢Y���е�Ԫ��
//                long long* set = (long long*)malloc(100000 * sizeof(long long));
//                int size = 0;  // ��¼Y����Ԫ�ظ���
//
//                // ����Y���в��洢
//                long long y = d;
//                while (y <= MAX)
//                {
//                    set[size++] = y;
//                    // ��ֹ�������ǰ�˳�
//                    if (y > (MAX - d) / c)
//                    {
//                        break;
//                    }
//                    y = y * c + d;
//                }
//
//                // ����X���У���Y�����ж��ֲ����Ƿ������ͬԪ��
//                long long x = b;
//                while (x <= MAX)
//                {
//                    // ���ֲ���
//                    int left = 0, right = size - 1;
//                    while (left <= right)
//                    {
//                        int mid = (left + right) / 2;
//                        if (set[mid] == x)  // �ҵ���ͬԪ��
//                        {
//                            count++;
//                            break;
//                        }
//                        else if (set[mid] < x)  // �м�ֵ̫С�����Ҳ���
//                        {
//                            left = mid + 1;
//                        }
//                        else  // �м�ֵ̫���������
//                        {
//                            right = mid - 1;
//                        }
//                    }
//
//                    // ��ֹ�������ǰ�˳�
//                    if (x > (MAX - b) / a)
//                    {
//                        break;
//                    }
//                    x = x * a + b;  // ����X���е���һ��
//                }
//
//                free(set);  // �ͷŶ�̬������ڴ�
//            }
//        }
//
//        printf("%d\n", count);  // �����ǰ���������Ľ��
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
//        int arr[10002] = { 0 }, n;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &arr[i]);
//        }
//        long long sum1 = 0, max1 = 0, max2 = 0, sum2 = 0;
//        long long sum11 = 0, sum22 = 0, maxsum1 = 0, maxsum2 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            sum11 += arr[i];
//            if (sum11<arr[i + 1] && sum11>maxsum1)
//            {
//                maxsum1 = sum11;
//                max1 = arr[i + 1];
//            }
//            else break;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum22 += arr[i];
//            if (sum22<arr[i + 1] && sum11>maxsum2)
//            {
//                maxsum2 = sum22;
//                max2 = arr[i + 1];
//            }
//            else break;
//        }
//        for (int i = 0; i < n; i++)
//        {
//            sum2 += arr[i];
//        }
//        long long a = sum2 - arr[n - 1], b = maxsum1 + sum2 - max1, c = sum2 - arr[0], d = maxsum2 + sum2 - max2, min = 0;
//        min = (a <= b) ? a : b;
//        min = (min <= c) ? min : c;
//        min = (min <= d) ? min : d;
//        printf("%lld\n", min);
//    }
//    return 0;
//}
//
//
//
//
//#include <stdio.h>
//#include <string.h> 
//int main() 
//{
//    int t, n;
//    scanf("%d", &t);
//    char s[9];
//    int x, y;
//    while (t--) 
//    {
//        scanf("%d", &n);
//        int a[4] = { 0, 0, 0, 0 }; 
//        int z = 0;  
//        int l;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%s", s);
//            if (s[0] == 'L') 
//            {
//                z = (z + 3) % 4;
//            }
//            else if (s[0] == 'R')
//            {
//                z = (z + 1) % 4;
//            }
//            else if (s[0] == 'B') 
//            {
//                z = (z + 2) % 4;
//            }
//            else if (s[0] == 'F') 
//            {
//                scanf("%d", &l);
//                a[z] += l;
//            }
//        }
//        x = a[1] - a[3];
//        y = a[0] - a[2];
//        printf("%d %d\n", x, y);
//    }
//    return 0;
//}






//#include <stdio.h>
//#include <stdlib.h>
//
//int ansA, ansB;
//int diceA[5], diceB[5];
//
//void compere(int* dice, int* ans)
//{
//    if (dice[0] == dice[1] && dice[1] == dice[2])
//        ans = dice[0] * 100;
//    else if (dice[0] == dice[1])
//        ans = dice[0] * 10 + dice[2];
//    else if (dice[1] == dice[2])
//        ans = dice[1] * 10 + dice[0];
//    else if (dice[0] == dice[2])
//        ans = dice[0] * 10 + dice[1];
//    else
//        ans = (dice[0] - 1) % 6 + (dice[1] - 1) % 6 + (dice[2] - 1) % 6;
//}
//
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        for (int i = 0; i < 3; i++) {
//            scanf("%d", &diceA[i]);
//            if (diceA[i] == 1)  diceA[i] = 7;
//        }
//        for (int i = 0; i < 3; i++) {
//            scanf("%d", &diceB[i]);
//            if (diceB[i] == 1)  diceB[i] = 7;
//        }
//        compere(diceA, ansA);
//        compere(diceB, ansB);
//        if (ansA > ansB)       puts("Alice");
//        else if (ansA < ansB)  puts("Bob");
//        else                   puts("Draw");
//    }
//    return 0;
//}



 
//#include <stdlib.h> 
//int hanshu(int* a)
//{
//    if (a[0] == a[1])
//    {
//        if (a[0] == a[2])
//        {
//            if (a[0] == 1)
//                return 100 * 7;
//            else
//                return 100 * a[0];
//        }
//        else
//        {
//            if (a[0] == 1)
//                return 10 * 7 + a[2];
//            else if (a[2] == 1)
//                return 10 * a[0] + 7;
//            else
//                return 10 * a[0] + a[2];
//        }
//    }
//    else if (a[0] == a[2])
//    {
//        if (a[0] == 1)
//            return 10 * 7 + a[1];
//        else if (a[1] == 1)
//            return 10 * a[0] + 7;
//        else
//            return 10 * a[0] + a[1];
//    }
//    else if (a[1] == a[2])
//    {
//        if (a[1] == 1)
//            return 10 * 7 + a[0];
//        else if (a[0] == 1)
//            return 10 * a[1] + 7;
//        else
//            return 10 * a[1] + a[0];
//    }
//    else
//        return a[0] + a[1] + a[2];
//} 
//int main()
//{
//    int k;
//    scanf("%d", &k);
//    while (k--)
//    {
//        int a[3], b[3];
//        scanf("%d %d %d", &a[0], &a[1], &a[2]);
//        scanf("%d %d %d", &b[0], &b[1], &b[2]);
//
//        int num1 = hanshu(a);
//        int num2 = hanshu(b); 
//        if (num1 > num2)
//            printf("Alice\n");
//        else if (num1 < num2)
//            printf("Bob\n");
//        else
//            printf("Draw\n");
//    }
//    return 0;
//}
 



#include <stdlib.h>  // ������׼�⺯����������Ҫ���������������

// �Զ��庯��������������ϵ�Ȩ��ֵ�����ڱȽϴ�С
// ������int* a - ָ�����3�����ӵ���������
// ����ֵ��int - �������Ȩ��ֵ��ֵԽ���ʾ���Խǿ
int hanshu(int* a)
{
    // ����һ���͵ڶ��������Ƿ���ͬ
    if (a[0] == a[1])
    {
        // ��һ���͵ڶ�����ͬ���ټ���Ƿ�͵�����Ҳ��ͬ����������ͬ�����ӣ�
        if (a[0] == a[2])
        {
            // ���ӣ����ݹ���1��1�����ȼ����(��7��ʾ)����������������
            if (a[0] == 1)
                return 100 * 7;  // 1�㱪�ӣ�Ȩ��Ϊ100*7
            else
                return 100 * a[0];  // �����������ӣ�Ȩ��Ϊ100*����
        }
        else
        {
            // ֻ��ǰ������ͬ�����ӣ���������ͬ
            if (a[0] == 1)
                // ������1��(���ȼ�7)�����ϵ��������ӵ����ȼ�ֵ
                return 10 * 7 + (a[2] == 1 ? 7 : a[2]);
            else if (a[2] == 1)
                // ������������1��(���ȼ�7)�����϶��ӵĵ���
                return 10 * a[0] + 7;
            else
                // �Ȳ���1����ӣ�������Ҳ����1�㣬��������������
                return 10 * a[0] + a[2];
        }
    }
    // ��һ���͵ڶ�����ͬ������һ���͵������Ƿ���ͬ�����ӣ�
    else if (a[0] == a[2])
    {
        if (a[0] == 1)
            // ������1��(���ȼ�7)�����ϵڶ������ӵ����ȼ�ֵ
            return 10 * 7 + (a[1] == 1 ? 7 : a[1]);
        else if (a[1] == 1)
            // �ڶ���������1��(���ȼ�7)�����϶��ӵĵ���
            return 10 * a[0] + 7;
        else
            // ������������ӵ���*10������һ������
            return 10 * a[0] + a[1];
    }
    // ǰ���ֶ����ǣ����ڶ����͵������Ƿ���ͬ�����ӣ�
    else if (a[1] == a[2])
    {
        if (a[1] == 1)
            // ������1��(���ȼ�7)�����ϵ�һ�����ӵ����ȼ�ֵ
            return 10 * 7 + (a[0] == 1 ? 7 : a[0]);
        else if (a[0] == 1)
            // ��һ��������1��(���ȼ�7)�����϶��ӵĵ���
            return 10 * a[1] + 7;
        else
            // ������������ӵ���*10������һ������
            return 10 * a[1] + a[0];
    }
    else
        // ����������ͬ�����ӣ�������������ܺͣ�����ʵ��Ӧ�������ȼ�ת��������ͣ�
        // ע�⣺ԭ����������ȱ�ݣ�û����ȷת��1������ȼ�
        return (a[0] == 1 ? 7 : a[0]) + (a[1] == 1 ? 7 : a[1]) + (a[2] == 1 ? 7 : a[2]);
}

int main()
{
    int k;  // ��Ϸ����
    scanf("%d", &k);  // ��ȡ��Ϸ����

    // ѭ������ÿһ����Ϸ
    while (k--)
    {
        int a[3], b[3];  // �ֱ�洢Alice��Bob���������ӵ���

        // ��ȡAlice���������ӵ���
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        // ��ȡBob���������ӵ���
        scanf("%d %d %d", &b[0], &b[1], &b[2]);

        // ����Alice��Bob������ϵ�Ȩ��ֵ
        int num1 = hanshu(a);
        int num2 = hanshu(b);

        // �Ƚ�Ȩ��ֵ���ж�ʤ��
        if (num1 > num2)
            printf("Alice\n");  // Alice��Ȩ�ظ���AliceӮ
        else if (num1 < num2)
            printf("Bob\n");    // Bob��Ȩ�ظ���BobӮ
        else
            printf("Draw\n");   // Ȩ����ȣ�ƽ��
    }
    return 0;
}