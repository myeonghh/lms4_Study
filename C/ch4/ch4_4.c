// <4-4>
/*pizza.c -- 피자 집에서 쓰는 용어로 상수를 정의한다*/
#include<stdio.h>
#define PI 3.14159

int main(void)
{
    double area, circum, radius;

    printf("피자의 반지름이 얼마냐?\n");
    scanf("%lf", &radius);
    area = 2.0 * PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("피자의 기본 매개변수는 다음과 같다:\n");
    printf("circumference = %1.2lf, area = %1.2lf\n", circum, area);
    
    return 0;
}
/*  
- 여기서 #define 지시자는 실수를 정의했다. 또 define 지시자는 문자 상수와 문자열 상수에도 사용할 수 있다. 문자 상수에는 작은 따옴표를 사용하고, 문자열 상수에는 큰 따옴표를 사용한다. 
*/
// <출력문>
// 피자의 반지름이 얼마냐?
// 6.0
// 피자의 기본 매개변수는 다음과 같다:
// circumference = 37.70, area = 226.19