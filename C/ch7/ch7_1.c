// <7.1>
// colddyas.c -- 영하로내려간 날들의 백분율을 구한다.
#include <stdio.h>
int main(void)
{
    const int FREEZING = 0;
    double temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("최저 기온들의 목록을 입력하시오.\n");
    printf("섭씨 단위를 사용하시오(입력을 끝내려면 q)\n");
    while (scanf("%lf", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING) // 사용자가 입력한 temperature가 FREEZING 상수값보다 작으면 조건문 블록안의 내용을 수행
        {
            cold_days++;
        }
    }
    if (all_days != 0)
    {
        printf("전체 %d일 중에 영하의 날씨는 %.1lf%%였습니다.\n",
               all_days, 100.0 * (double) cold_days / all_days);
    }
    if (all_days == 0)
        printf("입력된 데이터가 없습니다!\n");
    
    return 0;
}
// - if(expression){statement} 
// - expression(표현식) 부분이 참(0이 아닌 값) 으로 평가되면, statement(문장) 부분이 실행된다. 
// - 표현식 부분이 거짓이면 문장 부분은 무시된다.(넘어간다.)
// - all_days가 0인지 아닌지 판별하는 두개의 if문을 if else 문으로 하나로 표현할 수 있다.
// - if(expression){statement} else{statement2}
// - if문은 한 가지 동작을 실행할 것인지 말 것인지 선택할 수 있게하지만 if else문은 두 가지 동작 중 어느 한 가지 동작을 선택할 수 있게 한다.

// <출력문>
// 최저 기온들의 목록을 입력하시오.
// 섭씨 단위를 사용하시오(입력을 끝내려면 q).
// 12 5 -2.5 0 6 8 -3 -10 5 10 q
// 전체 10일 중에 영하의 날씨는 30.0%였습니다.
// 최저 기온들의 목록을 입력하시오.
// 섭씨 단위를 사용하시오(입력을 끝내려면 q)
// q
// 입력된 데이터가 없습니다!