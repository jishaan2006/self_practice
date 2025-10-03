#include<stdio.h>
int swap(int *b,int *a){
        
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
}
int main(){
    int a=10;
    int b=5;
    printf("a=%d b=%d\n", a , b );
    int ans = swap(&a,&b);
    printf("a=%d b=%d\n", a , b );
}
