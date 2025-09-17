#include<stdio.h>
int maxArraySum(int a[],int n,int k)
{
    int slidesum=0;
    for(int i=0;i<k;i++){
        slidesum=slidesum+a[i];
    }
    int maxsum=0;
    for(int j=k;j<n;j++){
        slidesum=slidesum+a[j]-a[j-k];
      if (slidesum>maxsum)
      {
        maxsum=slidesum;
      }
    }
    return maxsum;
}
int main()
{
    int a[100];
    int n,k;
    printf("Enter thickness of window (n element thick):");
    scanf("%d",&k);
    printf("Enter number of Elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ans=maxArraySum(a,n,k);
    printf("The max Sum for a %d element window is %d",k,ans);
    
}