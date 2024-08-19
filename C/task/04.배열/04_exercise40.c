// 예제40
#include<stdio.h>
#define LEN 10
int main(void)
{
    int temp,i,a[LEN] = {1,2,3,4,5,6,7,8,9,10};
    for (i = 0; i<LEN-1; i++)
    {
        if (i==0)
            temp = a[i];
        a[i] = a[i+1];
    }
    a[9] = temp;
    for (i=0; i<LEN; i++)
        printf("%d ", a[i]);
    return 0;
}