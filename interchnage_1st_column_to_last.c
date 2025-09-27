#include <stdio.h>
int main()
{
    int rows, columns;
    printf("Enter the number of rows and columns of matrix A :\n");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];
    printf("Enter the Elements of matrix A :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int j=0;j<rows;j++){
        int temp=arr[j][0];
        arr[j][0]=arr[j][columns-1];
        arr[j][columns-1]=temp;

    }
     printf("New matrix is :\n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < columns; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
