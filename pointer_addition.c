#include<stdio.h>
int main(){
    int a,b,*p,*q;
    a=20;
    b=30;
    p=&a;
    q=&b;
    printf("%d",*p+*q);
} 