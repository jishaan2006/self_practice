#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int last=a[4];
    for(int i=4;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=last;
    printf("shifted array is:\n");
    for(int j=0;j<5;j++){
        printf("%d\n",a[j]);
    }
}