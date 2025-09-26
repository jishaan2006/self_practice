#include<stdio.h>
int main(){
     int arr1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     int arr2[16];
     int k=0;
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr2[k]=arr1[i][j];
            k++;
        }
     }
     for(int i=0;i<16;i++){
     printf("%d ",arr2[i]);
     }
}