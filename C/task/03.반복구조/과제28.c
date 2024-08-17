// 과제28
#include<stdio.h>
int main(void)
{
    int i,num, count =0;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);
    for (i=1; i<num+1;i++)
    {
        if (num%i == 0)
        {   
            printf("약수: %d\n", i);
            count++;
        }
    }
    printf("약수의 총 개수: %d", count);
    return 0;
}