// <4-16>

//varwid.c -- 필드 너비가 가변적이다.
#include<stdio.h>
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("필드 너비를 입력하시오:\n");
    scanf("%d", &width);
    printf("number:%*d:\n", width, number);
    printf("필드 너비와 정밀도를 함께 입력하시오:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*lf\n",width,precision,weight);
    printf("종료!\n");

    return 0 ;
}
// - printf() 함수에서 *변경자를 사용하면 필드 너비를 직접 숫자로 지정하지 않고 별도의 전달인자를 사용해서 지정할 수 있다.
// - 즉 변환지정자로 %*d를 사용한다면, 전달인자 리스트에 *를 위한 값과 d를 위한 값이 함께 들어 있어야 한다.
// - 부동소수점형 값의필드 너비뿐만 아니라 정밀도(소수점 몇번째 자리까지)를 지정하는 데에도 이 방법을 사용할 수 있다.


/* 
<출력문>
필드 너비를 입력하시오:
6
Number:   256:  ==> 위에서 필드너비 6을 입력했기 때문에 필드너비 6칸에서 뒤쪽 3칸만 사용한다.
필드 너비와 정밀도를 함께 입력하시오:
8 3
Weight =  242.500  ==> 필드너비 8과 정밀도 3을 입력했기 때문에 8칸의 필드너비로 지정되었고 소수점 3번째 자리까지 표현된다.
 */