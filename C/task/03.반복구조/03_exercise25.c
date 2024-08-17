// 예제 25
// 약수 구하기
// 임의의 수를 나누었을 때 나누어떨어지게 하는 수를 임의의 수의 약수라 한다.
// 즉, n의 약수는 1부터 n까지의 수 중 n을 나누어떨어지게 하는 수가 된다. 
// 예를 들면, 10의 약수는 1부터 10까지 수들로 10을 나누었을 때 나머지가 0이 되게 하는 수, 즉 1, 2, 5, 10이 된다.

#include <stdio.h>

int main(void)
{
    int a,b;
    printf("정수를 입력하세요: ");
    scanf("%d",&a);

    printf("약수 : ");
    for (b=1;b < a+1; b++)
        {
            if (a%b==0)
            printf("%d ",b);
        }
    printf("\n");
}

// <실행 결과>
// 정수를 입력하세요: 18
// 약수 : 1 2 3 6 9 18 