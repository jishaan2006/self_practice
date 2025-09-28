#include <stdio.h>
int main()
{
    int arows, acolumns;
    printf("Enter the number of rows and columns of matrix A :\n");
    scanf("%d %d", &arows, &acolumns);
    int arr1[arows][acolumns];
    printf("Enter the Elements of matrix A :\n");
    for (int i = 0; i < arows; i++)
    {
        for (int j = 0; j < acolumns; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int brows, bcolumns;
    printf("Enter the number of rows and columns of matrix B :\n");
    scanf("%d %d", &brows, &bcolumns);
    int arr2[brows][bcolumns];
    printf("Enter the Elements of matrix B :\n");
    for (int i = 0; i < brows; i++)
    {
        for (int j = 0; j < bcolumns; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (acolumns == brows)
    {
        int res[arows][bcolumns];
        int sum = 0;
        for (int i = 0; i < arows; i++)//for matrix multiplication
        {
            for (int j = 0; j < bcolumns; j++)
            {
                for (int k = 0; k < acolumns; k++)
                {
                    sum = sum + arr1[i][k] * arr2[k][j];//i will increment after all columns of j taken
                }
                res[i][j] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < arows; i++)
        {
            for (int j = 0; j < bcolumns; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid order of matrix provided");
    }
    return 0;
}