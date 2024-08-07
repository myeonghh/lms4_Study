// <5.1>
// shoes1.c -- 사이즈 단위를 인치 단위로 변환한다.

#include <stdio.h>
#define ADJUST 7.31     // 기호 상수의 한 종류

int main(void)
{
    const double SCALE = 0.333;     // 기호 상수의 다른 종류
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("신발 사이즈(남자용)  발길이\n");
    printf("%10.1lf %15.2lf 인치\n", shoe, foot);

    return 0;
}
// 출력값
// 신발 사이즈(남자용)  발길이
//      9.0           10.31 인치
// 루프(반복문)을 적용하지 않으면 일일이 하나씩 prinf에 새로운 전달인자를 넣어 출력해주어야 한다.
// 루프를 사용하면 좀 더 쉽게 많은 행동을 할 수 있다.