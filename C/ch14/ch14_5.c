// <14.5>
// funds1.c -- 구조체의 멤버를 전달인자로 전달한다

#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char   bank[FUNDLEN];
    double bankfund;
    char   save[FUNDLEN];
    double savefund;
};

double sum(double, double);

int main(void)
{
    struct funds stan = {
        "국민은행",
        3024.72,
        "동아상호신용금고",
        9237.11
    };
    
    printf("Stan 씨의 총 찬고는 $%.2lf입니다.\n",
           sum(stan.bankfund, stan.savefund) );
    return 0;
}

/* 두 개의 double형 값을 더한다 */
double sum(double x, double y)
{
    return(x + y);
}
// - 구조체의 멤버를 그 특정 데이터형을 받아들이는 함수에 전달인자로 전달할 수 있다.
// - 함수 sum()은 실전달인자들이 구조체의 멤버인지 아닌지 신경 쓰지 않는다. 다만 그들이 double형일 것을 요구한다.
// - 다만 피호출 함수가 호출 함수에 있는 한 멤버의 값에 영향을 주고자 한다면(값 변경), 그 멤버의 주소를 다음과 같이 전달할 수 있다. (modify(&stan.bankfund);)

// <출력문>
// Stan 씨의 총 찬고는 $12261.83입니다.