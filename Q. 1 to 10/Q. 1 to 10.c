1.WAP to print “Dezyne E’cole College”.

#include<stdio.h>
int main()
{
   printf("Dezyne E’cole College");
}

2. WAP to print area of circle .

#include<stdio.h>
int  main()
{
    float pi = 3.14 , r , area ;
    printf("Enter redius of circle - ");
    scanf("%f",&r);
    area = pi * r * r ;
    printf("\nyour circle area is - %.2f",area);

}

3. WAP to input two numbers and swap it without using
   third variable.

#include<stdio.h>
int main()
{
    int a , b ;
    printf("\n\nEnter value of a = ");scanf("%d",&a);
    printf("\n\nEnter value of b = ");scanf("%d",&b);
    printf("\n\nBefore swape variables value----");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    a = a + b ;  //swapping operation//
    b = a - b ;
    a = a - b ;
    printf("\n\nafter swape variables value----");
    printf("\na = %d",a);
    printf("\nb = %d",b);
}

4. WAP to demonstrate typedef & enum user define data
types

#include<stdio.h>
int main()
{
    printf("------------Typedef------------");
    int a = 10 ;
       typedef int bhavin; //typedef operation perform//
       bhavin b = 200;
       printf("\n\na = %d",a);
       printf("\n\nb = %d",b);

   printf("------------Enum-----------");
   enum week{sun , mon , tue = 5  , wed , thu , fri = 9, sat};
   printf("\n\nsun = %d",sun);
   printf("\n\nmon = %d",mon);
   printf("\n\ntue = %d",tue);
   printf("\n\nwed = %d",wed);
   printf("\n\nthu = %d",thu);
   printf("\n\nfri = %d",fri);
   printf("\n\nsat = %d",sat);
}

5. WAP to input two numbers and perform all arithmetic operations.

#include<stdio.h>
int main()
{
    printf("----all arithmetic operation----\n");
    int a , b , c ;
    printf("\n\nEnter value of a = ");scanf("%d",&a);
    printf("\n\nEnter value of b = ");scanf("%d",&b);
    printf("\n\n%d + %d = %d ", a , b , (c = a+b));
    printf("\n\n%d - %d = %d ", a , b , (c = a-b));
    printf("\n\n%d * %d = %d ", a , b , (c = a*b));
    printf("\n\n%d / %d = %d ", a , b , (c = a/b));
}

6. WAP to input two numbers and swap it with using
third variable.

#include<stdio.h>
int main()
{
    int a , b , c  ;
    printf("\n\nEnter value of a = ");scanf("%d",&a);
    printf("\n\nEnter value of b = ");scanf("%d",&b);
    printf("\n\nBefore swape variables value----");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    c = a + b ;  //swapping operation//
    a = c - a ;
    b = c - b ;
    printf("\n\nafter swape variables value----");
    printf("\na = %d",a);
    printf("\nb = %d",b);
}

7. WAP to input three numbers and find maximum number
using conditional operator.

#include<stdio.h>
int main()
{
    int a , b , c ;
    printf("\n\nEnter value of a = ");scanf("%d",&a);
    printf("\n\nEnter value of b = ");scanf("%d",&b);
    printf("\n\nEnter value of c = ");scanf("%d",&c);
    (a>b && a>c)?printf("a is maximum"):(b>a && b>c)?printf("b is maximum"):(c>a && c>b)?printf("c is maximum"):printf("wrong input");

}

8. WAP to perform bit-wise operations:
14 & 5 , 441 & 55 , 33 | 22 , 123 | 55, 242 ^ 55, 93 ^ 59,
46 >> 1, 46 << 1, 33 <<2, 63 >> 2

#include<stdio.h>
int main()
{
    int a;
    a = 14 & 5 ;
    printf("\n\n14 & 5 = %d",a);
    a = 441 & 55 ;
    printf("\n\n441 & 55 = %d",a);
    a = 33 | 22 ;
    printf("\n\n33 | 22  = %d",a);
    a = 123 | 55 ;
    printf("\n\n123 | 55  = %d",a);
    a = 242 ^ 55 ;
    printf("\n\n242 ^ 55  = %d",a);
    a = 93 ^ 59 ;
    printf("\n\n93 ^ 59  = %d",a);
    a = 46 >> 1 ;
    printf("\n\n46 >> 1  = %d",a);
    a = 46 << 1 ;
    printf("\n\n46 << 1  = %d",a);
    a = 33 << 2 ;
    printf("\n\n33 << 2  = %d",a);
    a = 63 >> 2;
    printf("\n\n63 >> 2  = %d",a);
}
9. WAP to print size of all data types available in C using
 sizeof() in bits. (Int, Float, char,double, long double, long int)

#include<stdio.h>
int main()
{
    printf("int = %d",sizeof(int));
    printf("\n\nfloat = %d",sizeof(float));
    printf("\n\nchar = %d",sizeof(char));
    printf("\n\ndouble = %d",sizeof(double));
    printf("\n\nlong double = %d",sizeof(long double));
    printf("\n\nlong int = %d",sizeof(long int));

}

10. WAP to input a number and its power from user and find
the power of the given number using POW function.


#include<stdio.h>
#include<math.h>
int main()
{
    int n , p ;
    double d;
    printf("\n\nEnter the number - ");scanf("%d",&n);
    printf("\n\nEnter the Power of number - ");scanf("%d",&p);
    d = pow(n,p);
    printf("\n\nyour number's power = %d",(int)d);
}
