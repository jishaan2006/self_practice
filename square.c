#include<stdio.h>
int main()
{
   int i,j,num;          // j= new line , i= prints (*)
   printf("Enter number of rows: ");
   scanf("%d",&num);
   for(j=0;j<num;j++)
   { 
       printf(" \n ");
       for (i = 0; i<num; i++)
       {
         printf(" * "); 
       }
   }
}
