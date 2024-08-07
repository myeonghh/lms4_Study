// <3.2>

/* print1.c-printf()의 몇 가지 특성을 설명한다. */

#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;
    
    printf("바르게 지정했을 때: ");
    printf("%d에서 %d를 빼면 %d\n", ten, 2, ten - two );
    printf("틀리게 지정했을 때: ");
    printf("%d에서 %d를 빼면 %d\n", ten );  // 뒤의 두 전달인자를 빼먹음
    // 포맷 지정자의 개수와 1대1로 매칭시켜주지 않으면 임의의 값이 출력된다!!
    // 반드시 지정해 주어야 함 
    return 0;
}