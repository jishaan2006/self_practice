#include<stdio.h>
int bs(int arr[],int n,int start,int end){
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==n){
            return mid;
        }
        else if(arr[mid]<n){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
     }
     return -1;
}
int main(){
    int arr[5]={10,20,30,40,50},n,start=0,end=4;
    printf("array is :\n ");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&n);
    int ans=bs(arr,n,start,end);
    if(ans!=-1){
        printf("a[%d]",ans);
    }
    else{
        printf("not found");
    }
}