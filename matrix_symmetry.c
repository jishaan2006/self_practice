#include <stdio.h>
int main()
{ 
    int a[3][3] =
        {{0, 2, 3},
         {2, 0, 6},
         {3, 6, 7}};
    int flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        } 
    }
    if (flag == 1)
        printf("symmetrical");
    else
        printf("not symmetrical");
    return 0;
}