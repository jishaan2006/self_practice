/*
input 
1 2 3 
4 5 6 
7 8 9
output 
9 8 7 
6 5 4
3 2 1*/
#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}