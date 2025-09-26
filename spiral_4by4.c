/*
matrix =>
1  2  3  4 
5  6  7  8
9  10 11 12
13 14 15 16
output=>
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/
#include<stdio.h>
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int t=0,b=3;
    int l=0,r=3;
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                printf("%d ",arr[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                printf("%d ",arr[i][r]);
            }
            r--;
            for(int i=r;i>=l;i--){
                printf("%d ",arr[b][i]);
            }
            b--;
            for(int i=b;i>=t;i--){
                printf("%d ",arr[i][l]);
            }
            l++;
        }
}
