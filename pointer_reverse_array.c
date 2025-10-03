#include <stdio.h>
int reverse(int *p1)
{
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = *(p1 + i);
        *(p1 + i) = *(p1 + 4 - i);
        *(p1 + 4 - i) = temp;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("After reverse :\n");
    reverse(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}