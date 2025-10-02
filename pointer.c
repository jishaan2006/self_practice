#include<stdio.h>
int main(){
    int a=10,b=20,*p,*q;
    p=&a;
    q=&b;
    printf("%d",*p+*q);
    p=&b;
    printf("%d",*p+*q);
}