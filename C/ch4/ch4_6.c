// <4-6>

/*printout,c -- 변환 지정자를 사용한다*/
#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 7;
    double pies = 12.75;
    int cost = 7800;

    printf("%d명의 경쟁자가 %lf판의 딸기파이를 먹었다. \n", number, pies);
    printf("The value of pi is %lf.\n", PI);
    printf("잘 가시라! 그대는 내가 소유하기에 과분하여라,\n");
    printf("%c%d\n", '$', 2*cost);

    return 0; 
}
// - 제어문자열("")은 반드시 출력할 각 변환지정자마다 하나의 전달인자를 가져야 한다.
// - 만약 전달인자를 가지지 않는다면 임의의 값이 출력된다.
// - 변환지정자 없이 문자열로만, 문자열 없이 변환지정자로만 출력해도 된다.

// <출력문>
// 7명의 경쟁자가 12.750000판의 딸기파이를 먹었다. 
// The value of pi is 3.141593.
// 잘 가시라! 그대는 내가 소유하기에 과분하여라,
// $15600