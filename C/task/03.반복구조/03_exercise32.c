// 예제 32
#include<stdio.h>
int main(void)
{
    int i,j;
    for (i=1; i<11; i++)
    {
        printf("\n%d의 약수 : ", i);
        for (j=1; j<i+1; j++)
        {
            if(i%j==0)
                printf("%d ", j);
        }
    }
    return 0;
}