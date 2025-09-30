#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}