#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#include <stdio.h>
//int main()
//{
//    int a = 15;
//    scanf("%d", &a);
//    printf("%d,%x", a, a);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 90 && a <= 100)
//        printf("A");
//    else 
//        printf("B");
//}
//int main()
//{
//    double a = 0;
//    scanf("%lf", &a);
//        printf("%.8f", a);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    printf("The ASCII of '%c' is %d.", a, a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int b = a / 100;
//    int c = a % 10;
//    int d = a / 10 % 10;
//    if ((b == c && b != d) || (c == d && c != b) || (b == d && b != c))
//        printf("Yes");
//    else
//        printf("No");
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        double d = (a + b + c) / 2.0;
//        double s = d * (d - a) * (d - b) * (d - c);
//        double f = sqrt(s);
//        printf("%.2f", f);
//    }
//    else
//        printf("Not a triangle.");
//}
//
//
//#include <stdio.h>
//#include <math.h>

//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//
//    if (a + b > c && a + c > b && b + c > a)
//    {
//      
//        float s = (a + b + c) / 2;
//        float area = sqrt(s * (s - a) * (s - b) * (s - c));
//       
//        printf("%.2f\n", area);
//    }
//    else 
//    {
//       
//        printf("Not a triangle.\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float x = 0, y = 0;
//    scanf("%f", &x);
//    if (0 <= x && x< 10)
//    {
//        y = cos(x + 3.0);
//        printf("%.5f", y);
//    }
//    else if (10 <= x && x < 20)
//    {
//        y = pow(cos(x + 7.5), 2);
//            printf("%.5f", y);
//
//    }
//    else if (20 <= x && x < 30)
//    {
//        y = pow(cos(x + 4.0),4);
//            printf("%.5f", y);
//    }
//    else
//    {
//        printf("Not define");
//    }
//
//}




//int CS(int a,int b,int c)
//{
//    int max = a;
//    if (b > max)
//    max = b;
//    if (c > max)
//    max = c;
//    return max;
//}
//
//int cs(a, b, c)
//{
//    int min = a;
//    if (b < min)
//    min = b;
//    if (c < min)
//    min = c;
//    return min;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int max = 0, min = 0;
//    max = CS(a,b,c);
//    min = cs(a, b, c);
//    printf("%d %d", max, min);
//}

//#include <stdio.h>
//int main() 
//{
//    double y = 1.0 + 1.0 / (1.0 + 1.0 / (1.0 + 1.0 / 5.0));
//    printf("%g\n", y);
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 3.14159265;
//    double b = (1 - cos(a / 3)) / 2;
//    double c = sqrt((double)b);
//    printf("%g\n", c);
//    return 0;
//
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double a = 0, b = 0, p = 0, c = 0;
//    scanf("%g %g %g", &a, &b, &p);
//    c = sqrt(a * a + b * b - 2 * a * b * cos(p));
//    printf("%g\n", c);
//    return 0;
//
//}
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, p, c;
    scanf("%lf %lf %lf", &a, &b, &p);
    double rad = p * M_PI / 180.0;
    c = sqrt(a * a + b * b - 2 * a * b * cos(rad));
    printf("%g\n", c);
    return 0;
}
