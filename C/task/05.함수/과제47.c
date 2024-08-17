// 과제47
#include<stdio.h>
void min(void);
int main(void)
{
    min();
    return 0;
}

void min(void)
{
    int a,b;
    printf("두 수를 입력하시오: ");
    scanf("%d %d",&a,&b );
    printf("작은 수: %d", a<b? a:b);
    return ;
}