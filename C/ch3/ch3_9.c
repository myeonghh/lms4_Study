// <3.9>
// badcont.c -- 잘못된 전달인자 사용의 예

#include <stdio.h>
int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    
    printf("%d\n", n, m);    // 전달인자가 너무 많음 => 포맷지정자 %d 1개, 전달인자 n, m 2개
    printf("%d %d %d\n", n); // 전달인자가 너무 적음 => 포맷지정자 %d 3개, 전달인자 n 1개
    printf("%d %d\n", f, g); // 데이터형이 일치 하지 않음 ==> 포맷지정자 %d는 정수형이지만 f, g는 float 실수형
    
    return 0;
}