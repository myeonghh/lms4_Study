// 과제 32
#include<stdio.h>
int main(void)
{
    int num1,num2, i, min;
    printf("최소값을 찾기 위한 정수 2개를 입력하시오: ");
    scanf("%d %d", &num1,&num2);
    if (num1 <num2)
        min = num1;
    else
        min = num2;
    while (num2)
    {
        printf("정수를 하나더 입력하시오(종료하려면 0): ");
        scanf("%d", &num2);
        if (num2 ==0)
            break;
        if (min > num2)
            min = num2;
    }
    printf("최솟값: %d",min);

    return 0;
}