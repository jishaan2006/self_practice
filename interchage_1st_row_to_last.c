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
     for (int j = 0; j < columns; j++)
    {
        int temp = arr[0][j];
        arr[0][j] = arr[rows - 1][j];
        arr[rows - 1][j] = temp; 
    }
        printf("New matrix is :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}