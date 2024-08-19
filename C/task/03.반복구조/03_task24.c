// 과제24
#include<stdio.h>
int main(void)
{
    int i, sum =0;
    for (i =3; i<101; i+=3)
    {
        sum += i;
    }
    printf("3의 배수의 합: %d",sum);
    return 0;
}