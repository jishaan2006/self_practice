#include<stdio.h>
int main()
{
    int a[100],n,pos=0,neg=0;
    printf("Enter number of Elements:\n");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++){
        if(a[j]<0){
            neg++;
        }
        else{
            pos++;
        }
    }
printf("There are %d positive numbers and %d negative numbers",pos,neg);
}
