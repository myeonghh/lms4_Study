// 예제 10
// 세 수 중 가장 큰 수 찾기(1)
// a가 b보다 크고 a가 c보다 크면 a가 가장 큰 수가 되고, a가 b보다 크고 a가 c보다 크지않으면 c가 가장 큰 수가 된다. 
// a가 b보다 크지 않고 b가 c보다 크면 b가 가장 큰 수가 되고, a가 b보다 크지 않고 b가 c보다 크지 않으면 c가 가장 큰 수가 된다.

#include <stdio.h>
int main(void)
{
    int a, b, c, maxNum;
    printf("정수 3개를 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        maxNum = a;
    else if(a > b && !(a > c))
        maxNum = c;
    else if(!(a > b) && b > c)
        maxNum = b;
    else
        maxNum = c;

    printf("가장 큰 수 : %d\n", maxNum);
    return 0;
}

// <실행 결과>
// 정수 3개를 입력하세요 : 3 7 10
// 가장 큰 수 : 10