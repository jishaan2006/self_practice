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
    int a[3][3];
    printf("Enter 9 Elements :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}