// <14.6>
// funds2.c -- 구조체를 가리키는 포인터를 전달한다.

#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char   bank[FUNDLEN];
    double bankfund;
    char   save[FUNDLEN];
    double savefund;
};

double sum(const struct funds *);  /* 전달인자가 포인터다 */

int main(void)
{
    struct funds stan = {
        "국민은행",
        3024.72,
        "동아상호신용금고",
        9237.11
    };
    printf("Stan 씨의 총 찬고는 $%.2lf입니다.\n", sum(&stan));
    
    return 0;
}

double sum(const struct funds * money)
{
    return(money->bankfund + money->savefund);
}
// - sum() 함수는 funds 구조체를 가리키는 하나의 포인터(money)를 전달인자로 사용한다.
// - 주소 &stan을 함수에 전달하면, 포인터 money는 구조체 stan을 가리키게 된다. 그러고 나서 함수는 -> 연산자를 사용하여 stan.bankfund와 stan.savefund의 값을 얻는다.
// - 포인터가 가리키는 값의 내용을 함수가 변경하면 안되기 때문에, money가 const를 가리키는 포인터로 선언되었다.
// - 배열 이름과 달리 구조체 이름은 주소가 아니므로, 구조체의 주소를 얻기 위해 & 연산자를 사용해야한다.

// <출력문>
// Stan 씨의 총 찬고는 $12261.83입니다.