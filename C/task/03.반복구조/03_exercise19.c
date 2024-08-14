// 예제 19
// 10부터 1까지 출력하기
// i가 10부터 1씩 감소하며 1이 될 때까지 반복하며 i 값을 출력한다.

#include <stdio.h>
int main(void)
{
    for (int i = 10; i > 0; i--){
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

// <실행 결과>
// 10 9 8 7 6 5 4 3 2 1 