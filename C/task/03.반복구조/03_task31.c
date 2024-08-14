// 과제31
// 피보나치수열의 20번째 항까지의 합을 구하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int a, b, c, sum, temp;
    a = 1;
    b = 1;
    sum = a + b;
    for (int i = 3; i < 21; i++){
        c = a + b;
        sum += c;

        a = b;
        b = c;        
    }
    printf("피보나치수열 20번째 항까지의 합: %d\n", sum);
    return 0;
}

// <실행 결과>
// 피보나치수열 20번째 항까지의 합: 17710