/* platinum.c  -- 플래티넘 가치로 계산한 몸무게 */
#include <stdio.h>
int main(void)
{
    // int 정수 / float 소수 /
    // const 앞에 입력하면 변하지 않는 상수값 선언
    float weight;    /* 몸무게 를 담을 변수를 선언 */
    float value;     /* 플래티넘의 가치 수치를 담은 변수를 선언 */
    
    // 사용자 안내문
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    /* 사용자에게 몸무게 입력 받기  */
    scanf("%f", &weight); 
    // & 앰퍼센트
    // num And var(and -> '==' 같다라는 뜻) 
    // & var   ==> 변수 앞에 '&'가 붙으면 해당 변수가 가르키는 곳을 의미함(& -> 변수가 가르키는 물리적인 장소)
    // %f -> f 소수값, %d -> d 정수값 

    /* 입력받은 몸무게를 기준으로 플래티넘 만큼의 가치 계산 수식 */
    /* value 라는 변수에 결과를 할당합니다. */
    value = 1700.0 * weight * 14.5833;

    // 결과를 출력
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
       
    return 0;
}