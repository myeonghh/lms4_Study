#include <stdio.h>

int main()
{
    int i;
    int arr[5] = {60,70,80,90,100};
    for(i=0; i<=4; i++)
    {
        printf("%2d ", arr[4-i]);
    }
    printf("\n");
}