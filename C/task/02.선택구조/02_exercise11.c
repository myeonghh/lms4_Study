// 예제 11
// 세 수 중 가장 큰 수 찾기(2)
// 사용자로부터 첫 번째 수를 입력받아 max에 저장한다. 
// 두 번째로 입력받은 수 a와 max를 비교하여 a가 max보다 크면 max에 a를 저장한다. 세 번째 수도 마찬가지 방법으로 수행한다. 결국 가장 큰 수가 max에 저장된다.

#include <stdio.h>
int main(void)
{
    int max, a, b;
    printf("정수: ");
    scanf("%d", &max);

    printf("정수: ");
    scanf("%d", &a);
    max = (a > max)? a : max;
    
    printf("정수: ");
    scanf("%d", &b);
    max = (b > max)? b : max;

    printf("가장 큰 수: %d\n", max);
}

// <실행 결과>
// 정수: 3
// 정수: 10
// 정수: 7
// 가장 큰 수: 10