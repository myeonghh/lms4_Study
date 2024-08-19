// 간단한 프로그램 함수로 구현하기 4
// 세 수를 입력받아, 가장 큰 숫자와 가장 작은 숫자 사이의 수의 합을 계산되도록 구현하라.
// 모든 방법은 개발자가 선택하세요.

#include <stdio.h>
int numSum(int ar[]);

int main(void)
{
    int num[3];
    printf("숫자 3개를 입력하세요: ");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    printf("가장 큰 숫자, 가장 작은 숫자 사이의 합: %d", numSum(num));
    
    return 0;
}

int numSum(int ar[])
{
    int min, max, i, sum;
    min = ar[0];
    max = ar[0];
    sum = 0;

    for (i = 0; i < 3; i++)
    {
        if (ar[i] > max)
            max = ar[i];
        
        if (ar[i] < min)
            min = ar[i];
    }

    for (i = min + 1; i < max; i++)
    {
        sum += i;
    }

    return sum;
}

// <실행 결과>
// 숫자 3개를 입력하세요: 5 12 7
// 가장 큰 숫자, 가장 작은 숫자 사이의 합: 51