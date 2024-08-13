// <14.7>
// funds3.c -- 구조체를 전달한다

#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char   bank[FUNDLEN];
    double bankfund;
    char   save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah);  /* 전달인자가 구조체다 */

int main(void)
{
    struct funds stan = {
        "국민은행",
        3024.72,
        "동아상호신용금고",
        9237.11
    };
    
    printf("Stan 씨의 총 찬고는 $%.2lf입니다.\n", sum(stan));
    
    return 0;
}

double sum(struct funds moolah)
{
    return(moolah.bankfund + moolah.savefund);
}
// - 이 프로그램은 struct funds를 가리키는 포인터인 money를 struct funds 변수인 moolah로 대체했다.
// - 구조체 stan이 전달인자로 사용되면 이 구조체의 멤버들은 구조체 stan의 대응하는 멤버들이 가지고 있는 값의 복사본으로 각각 초기화된다.
// - 따라서 원본 구조체의 복사본을 사용하여 계산이 이루어진다.
// - 반면에 포인터를 전달인자로 사용하면 원본 구조체 자체를 사용한다.
// - moolah가 구조체 자체이기 때문에 프로그램은 money -> bankfund가 아니라 moolah.bankfund를 사용한다.

// <출력문>
// Stan 씨의 총 찬고는 $12261.83입니다.