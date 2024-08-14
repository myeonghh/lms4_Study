// 예제 14
// 나이에 따른 입장료
// 입장료 정가가 5,000원인 경우 나이에 따른 요금체계가 다음과 같은 경우 나이를 입력 받아 입장료를 구한다.
// 입력 받은 나이가 8 미만이면 “0”을,
// 그렇지 않고 60 미만이면 정가인 5,000을,
// 그렇지 않으면 정가의 50%인 2,500을 출력한다.

#include <stdio.h>
int main(void)
{
    const int price = 5000;
    int age, charge;
    printf("나이: ");
    scanf("%d", &age);


    if (age < 8)
        charge = 0;
    else if (age < 60)
        charge = price;
    else
        charge = price / 2;

    printf("입장료: %d\n", charge);
    return 0;
}

// <실행 결과>
// 나이: 65
// 입장료: 2500