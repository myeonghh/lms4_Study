// 예제44
#include<stdio.h>
#define LEN 5
int main(void)
{
    int as ,j, i,sum = 0, a[LEN]= {1,1,0,0,1};
    for (i=0; i<LEN; i++)
    {
        as =1;
        for (j=1; j<LEN-i; j++)
            as = as* 2;
        sum = sum + a[i] *as;
    }
    printf("%d ", sum);
    return 0;
}
