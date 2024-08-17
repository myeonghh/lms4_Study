#include <stdio.h>

int main()
{
    int i,j,c;
    c = 1;
    int arr[5][5] = { {},{},{},{},{} };
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            arr[i][j] = c; 
            printf("%3d ", arr[i][j]);
            c = c + 1;
        }
        printf("\n");
    }
}