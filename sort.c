#include<stdio.h>
int main()
{
    int n,a[100],temp=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for(int l=0;l<n;l++)
    {
        printf("%d\n",a[l]);
    }

}