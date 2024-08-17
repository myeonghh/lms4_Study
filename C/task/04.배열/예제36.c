// 예제36
#include<stdio.h>
int main(void)
#define LEN 10
{
    int i,a[LEN];
    for (i =0; i<LEN; i++)
    {
        a[i] = i+1;
    }
    for (i=0; i<LEN; i++)
        printf("%d ", a[i]);
    return 0;
}