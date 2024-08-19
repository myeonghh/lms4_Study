#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int i, temp;
    
    for(i = 0; i <= 4; i++)
    {
        temp = a[i];
        a[i] = a[9-i];
        a[9-i] = temp;
        printf("%d ", a[i]);
    }
    for(i = 5; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}