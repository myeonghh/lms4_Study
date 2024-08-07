// <5.3>
// golf.c -- 골프 토너먼트 점수판

#include <stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("               치타    타잔    제인\n");
    printf("1라운드 점수 %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}
// - C언어에서는 위와 같은 삼중 대입이 가능하다.
// - 대입은 오른쪽에서 왼쪽으로 차례대로 이루어진다.
// - 먼저 값 68이 jane에 대입되고, 그 다음에 tarzan에 대입되고, 마지막으로 chheta에 대입된다.
// <출력문>
//                치타    타잔    제인
// 1라운드 점수   68       68       68