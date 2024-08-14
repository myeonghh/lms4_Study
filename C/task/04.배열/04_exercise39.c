// 예제 39
// 리스트 a 요소 리스트 b에 거꾸로 저장하기
// 리스트 a 요소를 거꾸로 해서 리스트 b에 저장한다.
// i가 0부터 1씩 증가하며 9가 될 때까지 반복하며 a[9-i]값을 b[i]에 저장한다. 결국 b[0]에는 a[9] 값이, b[1]에는 a[8] 값이, ..., b[9]에는 a[0] 값이 저장된다.

#include <stdio.h>
int main(void)
{
    const int LEN = 10;
    int i, a[LEN], b[LEN];
    
    for (i = 0; i < LEN; i++){
        a[i] = i + 1;
    }
    for (i = 0; i < LEN; i++){
        b[i] = a[LEN - i - 1];
    }
    for (i = 0; i <LEN; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

// <실행 결과>
// 10 9 8 7 6 5 4 3 2 1 