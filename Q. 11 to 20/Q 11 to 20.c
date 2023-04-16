11. WAP to input a character from user and print its ASCII code with do you want to continue
option.

#include<stdio.h>
int main()
{
    system("cls");
    char c  ;
    printf("Enter your character---");scanf("%s",&c);
    printf("\n\nYour character ASCII value is -- %d",c);
    printf("\n\nDo you want you continue.press 1 else any key");
    c = getch();
    if(c=='1')
    {
          main();
    }
}

12. WAP to input an age from user and check retired or not.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter age - ");
    scanf("%d",&age);
    if(age>60)
    {
        printf("retired");
    }
    else
    {
        printf("not retired");
    }
}

13. WAP to input a number and check number is even or divisible by 3 or not

#include<stdio.h>
int main()
{
    int n ;
    printf("\n\nEnter the number - ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n\nnumber is even");
    }
    else
    {
        printf("\n\nnumber is odd");
    }
    if(n%3==0)
    {
        printf("\n\nnumber is divisible by 3\n\n");
    }
    else
    {
        printf("\nnumber is not divisible by 3\n\n");
    }
}

14. WAP to input a number and check number is greater than
22 or divisible by 5.

#include<stdio.h>
int main()
{
    int n ;
    printf("\n\nEnter the number - ");
    scanf("%d",&n);
    if(n>22)
    {
        printf("\n\nnumber is greater than 22");
    }
    else{
        printf("\n\nnumber is not greater than 22")
    }
    if( n%5==0)
    {
        printf("\n\nnumber is divisible by 5");
    }
    else{
        printf("\n\nnumber is not divisible by 5");
    }
}

15. WAP to input three numbers from user and find
   maximum using nested if.

#include<stdio.h>
int main()
{
    int a , b , c;
   printf("Enter the three number - ");
   scanf("%d %d %d",&a,&b,&c);
   if( a>b)
   {
       if(a>c)
       {
           printf("a is maximum");
       }
   }
    if( b>a)
   {
       if(b>c)
       {
           printf("b is maximum");
       }
   }
    if( c>a)
   {
       if(c>b)
       {
           printf("c is maximum");
       }
   }
}

16. WAP to input three numbers from user and find
 second minimum number using nested if.


#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        if (a < c)
        {
            if (b < c)
            {
               printf("b is second minimum");
            }
            else
            {
               printf("c is second minimum");
            }
        }
        else
        {
           printf("a is second minimum");
        }
    }
    else
    {
        if (b < c)
        {
            if (a < c)
            {
              printf("a is second minimum");
            }
            else
            {
                printf("c is second minimum");
            }
        }
        else
        {
             printf("b is second minimum");
        }
    }
}

17. WAP to input student name and three subject marks
from user and print its name, total of
marks, percentage and division using else if ladder.

#include<stdio.h>
int main()
{
    char name[20] , clas[20];
    float h , e , m , total , per ;
    printf("\n\nEnter the student name = ");gets(name);
    printf("\n\nEnter the student clas = ");gets(clas);
    printf("\n\nEnter student hindi marks - ");scanf("%f",&h);
    printf("\n\nEnter student english marks - ");scanf("%f",&e);
    printf("\n\nEnter student math marks - ");scanf("%f",&m);
    total = h + e + m ;
    per = (total*100)/300;
    printf("\n\n\nstudent details are----\n\n");
    printf("\n\nstudent name = %s",name);
    printf("\n\nstudent clas = %s",clas);
    printf("\n\nstudent hindi marks - %.2f",h);
    printf("\n\nstudent english marks - %.2f",e);
    printf("\n\nstudent math marks - %.2f",m);
    printf("\n\nstudent total marks - %.2f",total);
    printf("\n\nstudent percentage- %.2f",per);
    if( per>90 && per<=100)
    {
        printf("\n\nA division");
    }
    else if( per>80 && per<=90)
    {
        printf("\n\nB division");
    }
    else if( per>70 && per<=80)
    {
        printf("\n\nC division");
    }
    else
    {
        printf("\n\ngood");
    }

}

18. WAP to input four numbers from user and find maximum
number using else if ladder.


#include<stdio.h>
int main()
{
    int a , b , c , d ;
   printf("Enter the four number - ");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   if( a>b && a>c && a>d)
   {
      printf("a is maximum");
   }
   else if( b>a && b>c && b>d)
   {
       printf("b is maximum");
   }
    else if( c>a && c>b && c>d)
   {
       printf("c is maximum");
   }
    else if( d>a && d>b && d>c)
   {
       printf("d is maximum");
   }
}

19. WAP to input a number from user and check number is one,
 two or three digit using else if
ladder.


#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number -- ");scanf("%d",&n);
    if( n>0 && n<=9)
    {
        printf("one digit number");
    }
    else if( n>9 && n<=99)
    {
        printf("two digit number");
    }
    else if( n>99 && n<=999)
    {
        printf("three digit number");
    }
}

20. WAP to input week numbers from user and print in
words using switch case statement.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter the number between 1(sun) to 7(sat)--- ");scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("sunday");
        break;
     case 2:
        printf("monday");
         break;
     case 3:
        printf("tuesday");
         break;
      case 4:
        printf("wednesday");
         break;
    case 5:
        printf("thurseday");
         break;
   case 6:
        printf("friday");
         break;
   case 7:
        printf("saturday");
         break;
    default :
        printf("not day");
   }
}
