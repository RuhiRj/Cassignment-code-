//Write a program to print unit digit of a given number
#include<stdio.h>
int main()
{
    int n,b;
    printf("enter a number");
    scanf("%d",&n);
    b=n%10;
    printf("%d",b);
    return 0;

}
//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int n,b;
    printf("enter a number");
    scanf("%d",&n);
    b=n/10;
    printf("%d",b);
    return 0;
}
//Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
   // int a=2,b=3,c;
   int a,b,c;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("\n %d%d",a,b);
    return 0;
}
//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int n,b,d,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    b=n/100;
    sum=sum+b;

   // d=b%10;
    //sum=n;
    d=n%10;
   n=d+sum;
   sum=sum+n;
    printf("%d",sum);
    return 0;

}
