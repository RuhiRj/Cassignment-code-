// wap to check whether a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
        printf("positive");
    else
        printf("non-positive");
    return 0;
}
//wap to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0)
        printf("number is divisible by 5");
    else
        printf("number is not divisible by 5");
    return 0;
}
//wap to check whether a given number is an even number or en odd number
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==0)
        printf("is an even number");
    else
        printf("is an odd number");
    return 0;
}
//wap to check whrther a given no is even or odd without using % operator
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if((n/2)*2==n)
    //if((n&1)==0)
        printf("it is an even number");
    else
        printf("it is an odd number");
   // printf("%d",sizeof('j'));
     return 0;
}
// wap to check whether a given no is a three digit no or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>99&&n<=999)
        printf("it is a three digit no");
    else
        printf("it is not a three digit no");
    return 0;
}
// wap to print greater between two numbers
#include<stdint-gcc.h>
int main()
{
    int a,b;
    printf("enter two nos");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d",a);
    else
        printf("%d",b);
    return 0;
}
// wap to check whether roots of a given quadratic are real and distinct, real and equal or imaginary roots
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("enter three numbers");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("roots are real and equal");
    }

    if(d>0)
    {
       printf("roots are real and unequal");
    }
    if(d<0)
       {
        printf("roots are imaginary");
       }


    printf("\n%f",a);
    printf("\n%f",b);
    printf("\n%f",c);
    return 0;
}
// wap to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter  to any year ");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("it is a leap year");
    }
    else
        printf("it is a not leap year");
    return 0;
}
//wap to find the greatest among three given numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        {
        printf("%d a is the greatest=",a);
        }
    if(b>c)
    //{
        printf("%d b is the greatest=",b);
    //}
         else
    {
        printf("%d c is the greatest=",c);
    }
    return 0;
}

// wap which takes the cost price and selling price of a product from the user.
now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    float l,p,c,s, pp,lp;
    printf("takes the cost price and selling price");
    scanf("%f%f",&c,&s);
    if(s>c)
    {
        p=s-c;
        pp=p*100/c;
    printf("%f profit percentage",pp);
    }
    else
    {
        l=c-s;
    lp=l*100/c;
    printf("%f",lp);
    }
    return 0;
}
//wap which takes the cost price and selling price of a product from the user. now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    float c,s,p,l,pp,ll;
    printf("enter the cost and selling price");
    scanf("%f%f",&c,&s);
    if(s>c)
    {
        p=s-c;
        pp=p*100/c;
        printf("profit percentage= %f",pp);
    }
    if(c>s)
    {
        l=c-s;
        ll=l*100/c;
        printf(" loss percentage= %f",ll);
    }
    return 0;
}

//wap to take markes of 5 subjects from the user. assume marks are given out of 100 and passing marks is 33.
 now display whether the candidate. passing the examination or failed
#include<stdio.h>
int main()
{
    int p,c,m,b,h;
    printf("enter the five subjects marks");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&h);
    if(p>=33 &&c>=33&& m>=33&&b>=33&&h>=33)
        printf("candidate pass the exam");
    else
        printf("candidates fail the exam");
        return 0;


}
//wap to check whether a given number is divisible by 3 and divisible by 2
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n/3==0 || n/2==0)
        printf("number is divisible by 3 and 2");
    else
        printf("number is not divisible by 3 and 2");
    return 0;
}
//wap to check whether a given no is divisible by 7 or divisible by3
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n/7==0 || n/3==0 )
        printf("no is divisible by 7 or 3");
    else
        printf("no is not divisible by 7 or 3");
    return 0;
}
// wap to check whether a given number is positive , negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    if(n>0)
    {
        printf(" no is positive %d",n);
    }
    if(n<0)
    {
        printf("no is negative %d",n);
    }
    if(n==0)
    {
        printf("no is zero");
    }
    return 0;
}
//wap to check whether a given character is an alphabet(uppercase) ,an alphabet(lowercase) , a digit or a special character.
#include<stdio.h>
int main()
{
    char n;
    printf("enter a character");
    scanf("%c",&n);
    if(n>='A' && n<='Z')
    {
        printf("upper case letter%c");
    }
    if(n>='a' && n=<'z')
    {
        printf("lower case letter%c");
    }
    if(n>='0'&& n=<'9')
    {
        printf("a digit");
    }
    else
        printf("a special character");
    return 0;

}
// wap which takes the length of the sides of a triangle as an input. display whether the triangle is valid or not
#include<stdio.h>
int main()
{
    int l,b,p;
    printf("enter the length, breath,and hight");
    scanf("%d%d%d",&l,&b,&p);
    if(p*p==l*l+b*b)
        printf("right triabgle is valid");
        else
        printf("right triangle is not valid");
    return 0;
}
// wap which takes the month number as an input and display number of days in that month
#include<stdio.h>
int main()
{
    int n;
    printf("enter a month number");
    scanf("%d",&n);
    if(n==1)
    {
        printf("january the number od the days 31");
    }
    if(n==2)
    {
        printf("februawy the number of the days 28 or29");
    }
    if(n==3)
    {
        printf("march the number of the days 31");
    }
    return 0;
}










