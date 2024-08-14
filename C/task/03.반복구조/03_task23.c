// 과제23
// 1부터 100까지의 수 중 3의 배수의 합을 구해 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int sum = 0;
    for(int i = 1; i < 101; i++){
        if (i % 3 == 0)
            sum += i;
    }    
    printf("3의 배수의 합: %d\n", sum);
    return 0;
}

// <실행 결과>
// 3의 배수의 합: 1683