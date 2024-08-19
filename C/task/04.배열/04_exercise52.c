// 예제52
#include<stdio.h>

int main(void)
{
    int i,j;

    for (i =1; i<6; i++)
    {
        if (i%2 !=0)
        {
            for (j=1+(5*(i-1)); j<6+(5*(i-1)); j++)
            {
                printf("%2d ", j);
            }
            printf("\n");
        }
        if (i%2 ==0)
        {
            for (j=(i*5); j>(i*5)-5; j--)
            {
                printf("%2d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}