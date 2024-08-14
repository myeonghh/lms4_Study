// 과제19
// while형 반복 구조를 이용해서 10부터 1까지 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int i = 10;
    while (i > 0)
    {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    return 0;
}

// <실행 결과>
// 10 9 8 7 6 5 4 3 2 1 