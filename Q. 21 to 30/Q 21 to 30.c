21. WAP to input a character from user and check character is vowel or not.

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character --  ");
    scanf("%c",&c);
    switch(c)
    {
    case 'a':
        printf("character is vowel");
        break;
    case 'e':
        printf("character is vowel");
        break;
    case 'i':
        printf("character is vowel");
        break;
     case 'o':
        printf("character is vowel");
        break;
     case 'u':
        printf("character is vowel");
        break;
     case 'A':
        printf("character is vowel");
        break;
     case 'E':
        printf("character is vowel");
        break;
    case 'I':
        printf("character is vowel");
        break;
     case 'O':
        printf("character is vowel");
        break;
     case 'U':
        printf("character is vowel");
        break;
     default:
        printf("character is not vowel");
    }
}

22. WAP to input television price from user and calculate net television amount: If television
is Colored & 24” discount = 10% or 32” discount = 15%. If television is B & W & 21”
discount = 12%.

#include<stdio.h>
int main()
{
    float tp , np , dis ;
    char c;
    printf("---Television calculator------\n\n");
    printf("1. Color television\n\n");
    printf("2. B & W television\n\n");
    printf("please choose your television---\n\n");
    c = getch();
    switch(c)
    {
    case '1' :
    {
        printf("you choose color television---\n\n");
        printf("1. 24'' television\n\n");
        printf("2. 32'' television\n\n");
        printf("choose your television size---\n\n");
        c = getch();
        if( c=='1')
        {
            printf("you choose 24 inch color television--\n\n");
            printf("Enter your television price---\n\n");
            scanf("%f",&tp);
            dis = (tp*10)/100;
            printf("your television discount-----%.2f\n\n",dis);
            np = tp - dis;
            printf("your television net price = %.2f\n\n",np);
            break;
        }
        else if (c=='2')
        {
            printf("you choose 32 inch color television--\n\n");
            printf("Enter your television price---\n\n");
            scanf("%f",&tp);
            dis = (tp*15)/100;
            printf("your television discount-----%.2f\n\n",dis);
            np = tp - dis;
            printf("your television net price = %.2f\n\n",np);
                break;
        }
    }
        case '2' :
    {
        printf("you choose B & W television---\n\n");
        printf("1. 21'' television\n\n");
        printf("choose your television size---\n\n");
        c = getch();
        if( c=='1')
        {
            printf("you choose 21 inch color television--\n\n");
            printf("Enter your television price---\n\n");
            scanf("%f",&tp);
            dis = (tp*12)/100;
            printf("your television discount-----%.2f\n\n",dis);
            np = tp - dis;
            printf("your television net price = %.2f\n\n",np);
        }
    }
    }
}

23. WAP to input a character from user and check character is number, alphabet or special
character using conditional operator.

#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character --- ");
    scanf("%c",&c);
    (c>='a' && c<='z')?printf("small character\n"):(c>='A' && c<='Z')?printf("Capital character\n"):(c>='1' && c<='9')?printf("Number\n"):printf("Special charactern\n");
}

24. WAP to input starting and ending limit from user and print all the numbers between limit
using do while loop.

#include<stdio.h>
int main()
{
    int s , e ;
    printf("Enter starting limit of number--- ");scanf("%d",&s);
    printf("\nEnter Ending limit of number--- ");scanf("%d",&e);
    do{
        printf("%d\n",s);
        s++;
    }  while(s<=e);
}

25. WAP to input a number from user and print number is Armstrong or not using while loop

#include<stdio.h>
int main()
{
    int n , arm = 0 , r , t  ;
    printf("Enter the number - ");scanf("%d",&n);
    t = n ;
    while(n>0)
    {
        r = n % 10 ;
        arm = (r * r * r)+arm;
        n = n/10;
    }
    if( arm == t)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }

}

26. WAP to input a limit from user and print its Fibonacci series.

#include<stdio.h>
int main()
{
    int limit , a = 0 , b = 1,c , i ;
    printf("Enter the limit = ");scanf("%d",&limit);
    for( i = 0 ; i<=limit ; i++)
    {
        c = a + b ;
        printf("%d ",c);
        a = b ;
        b = c;
    }

}

27. WAP to input a number from user and print number is palindrome or not using while loop

#include<stdio.h>
int main()
{
    int n , t , p = 0 , r;
    printf("Enter the number --- ");
    scanf("%d",&n);
    t = n ;
    while(n>0)
    {
        r = n%10;
        p = (p*10)+ r ;
        n = n/10;
    }
    if(t==p)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }

}

28. WAP to input a number from user and check number is prime of not using while loop.

#include<stdio.h>
int main()
{
    int i = 1 , n , count= 0 , p ;
    printf("Enter the number - ");scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            count++;
        i++;
    }
    if(count==2)
    {
        printf("Number is prime");
    }
    else
    {
        printf("Number is not prime");
    }
}

29. WAP to input a limit from user and print all Armstrong numbers between limit.

#include<stdio.h>
int main()
{
    int i , j , p , n , limit , t, arm , count;
    printf("Enter the limit - ");
    scanf("%d",&limit);
    for( i = 1 ; i<=limit ; i++)
    {
        t = n = i;
        for( count = 0 ;  n > 0 ; count++ , (n=n/10) );
        for( n = t , arm = 0 ; n>0 ; (n = n/10))
        {
            for( j = 1 , p = 1 ; j<= count ; j++)

                p = p * (n%10);
                arm = arm + p ;

        }
           if(arm==t)
            {
                printf("%d\n",t);
            }
    }
}

30. WAP to input a limit from user and print all perfect numbers between limit

#include<stdio.h>
int main()
{
  int i , j, limit , p , t, n;
  printf("Enter the limit -- ");scanf("%d",&limit);
  for( i = 1 ; i<= limit ; i++)
  {
      for( j = 1 , p = 0 ; j<i ; j++)
      {
          if(i%j==0)
          {
              p = p + j;
          }
      }
      if(p==i)
      {
          printf("%d\n",i);
      }
  }
}








