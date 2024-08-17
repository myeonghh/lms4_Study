// 예제24
#include<stdio.h>
int main(void)
{
    int i, num =1;
    for (i=1; i<6; i++)
    {
        num = num*i;
    }
    printf("5까지의 계승값 %d", num);
    return 0;
}