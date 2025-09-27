#include<stdio.h>
int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
/*  printf("Enter 16 elements :\n"); //for user input
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }*/
    printf("The matrix is :\n");
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     printf("Border elements are :\n");
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0 ||j==0 || i==3 ||j==3){
                printf("%d ",arr[i][j]);
            }
            else{
                 printf("   ");
            }
        }
        printf("\n");
    }
}