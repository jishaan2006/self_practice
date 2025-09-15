#include<stdio.h>

int prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
   
void odd_even(int a)
{
    if(a%2==0)
    {
        printf("%d Is Even",a);
    }
    else 
    {
        printf("%d Is Odd",a);
    }
}
void reverse(int a)
{
    int b=a;
    int rev=0,ld;
    while(a>0)
    {
        ld=a%10;
        rev=rev*10+ld;
        a=a/10;
    }
    printf("%d in reverse is %d",b,rev);
}
int pallindrome(int a)
{
     int b=a;
    int rev=0,ld;
    while(a>0)
    {
        ld=a%10;
        rev=rev*10+ld;
        a=a/10;
    }
    if(b==rev)
    {
        return 1;
    }
    return 0;
}
int sum_of_digits(int a)
{
    int res=0,ld;
    while(a>0)
    {
        ld=a%10;
        res=res+ld;
        a=a/10;
    }
    return res;
}
int productofdigits(int a)
 {
    int res=1,ld;
    while(a>0)
    {
        ld=a%10;
        res=res*ld;
        a=a/10;
    }
    return res;
 }
int magic(int a)
{
    int ld,res;
    while(a>9)
{
     res=0;
     while(a>0)
    {
        ld=a%10;
        res=res+ld;
        a=a/10;
    }
    a=res;
}
    if(res==1)
    return 1;
    else 
    return 0;
}
int psquare(int a)
{
    for(int i=1;i*i<=a;i++)
    {
        if(i*i==a)
        return 1;
    }
    return 0;
}
int main()
{
    int n,ch;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter your choice:\n1.Prime Checker\n2.Odd Even Checker\n3.Reverse\n4.Pallindrome Checker\n5.Sum Of Digits\n");
    printf("6.Product of digits\n7.Magic Number Checker\n8.Perfect Square Checker\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: (prime(n)) ? printf("%d Is Prime",n) : printf("%d Is Not Prime",n);
    break;
    case 2: odd_even(n);
    break;
    case 3: reverse(n);
    break;
    case 4: (pallindrome(n)) ? printf("%d is Pallindrome",n) : printf("%d is Not Pallindrome",n);
    break;
    case 5: printf("Sum of Digits of %d is %d",n,sum_of_digits(n));
    break;
    case 6: printf("Product of Digits of %d is %d",n,productofdigits(n));
    break;
    case 7: magic(n) ? printf("%d is Magic Number",n) : printf("%d is not a Magic Number",n);
    break;
    case 8: psquare(n) ? printf("%d is a Perfect Square",n) : printf("%d is not a perfect square ",n);
    break;
    default:printf("invalid choice.");
    break;
    }
}