// <7.4>
//electric.c -- 전기요금을 계산한다
#include<stdio.h>
#define RATE1 0.13230                      // 처음 360 kwh까지 적용하는 비율
#define RATE2 0.15040                      // 그 다음 108 kwh까지 적용하는 요율
#define RATE3 0.30025                      // 그 다음 252 kwh까지 적용하는 요율
#define RATE4 0.34025                      // 720 kwh를 초과할 때 적용하는 요율
#define BREAK1 360.0                       // 요율의 첫 번째 구분점
#define BREAK2 468.0                       // 요율의 두 번째 구분점
#define BREAK3 720.0                       // 요율의 세 번째 구분점
#define BASE1 (RATE1 * BREAK1)             // 360 kwh에 대한 요금
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))  //468 kwh에 대한 요금
#define BASE3 (BASE1 + BASE2 (RATE3 * (BREAK3 * (BREAK3 - BREAK2))))   //720 kwh에 대한 요금

int main(void)
{
    double kwh;                            //사용한 전력량
    double bill;                           //부과할 전기요금

    printf("사용한 전력량을 입력하시오.\n");
    scanf("%lf",&kwh);                     //double형을 위해 %lf 사용
    if (kwh <= BREAK1)
        bill = BREAK1 * kwh;
    else if (kwh <= BREAK2)                //사용한 전력량이 360과 468 사이
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)                //사용한 전략량이 468과 720 사이
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else
        bill = BASE3 + (RATE4 * (kwh - BREAK3));
    printf("%.1f kwh의 전기요금은 $%1.2f입니다.\n",kwh,bill);

    return 0;
}
// <출력문>
// 사용할 전력량을 입력하시오.
// 580
// 580.0 kwh의 전기요금은 $97.50입니다.