#include <stdio.h>

int main()
{
    int i,j,k,a;
    int arr[5][5];
    a = 1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf("   ");
        }
        for(j=0; j<i; j++)
        {
            arr[i][j] = a;
            printf("%2d ",arr[i][j]);
            a = a + 1 ;
        }
        printf("\n");
    }
}