// 간단한 프로그램 함수로 구현하기 6
// 삼각형 모양 출력하기: 사용자로부터 정수 하나를 입력받아 다음 실행 예와 같은 도형을 출력하는 프로그램을 장석하라.

//  @실습 및 프로그래밍 절차
// - 사용자로부터 1개의 정수값을 입력받고, 이 값이 0 이하인 경우 프로그램은 종료한다.
// - 반복문을 사용하여 입력값 만큼 반복하여 각 라인을 출력한다.
// - 각 라인 또한 반복문을 사용하여 공백 문자를 먼저 출력하고, 또 다시 반복문을 사요하여 '*'문자를 출력한다.

#include <stdio.h>
void trmake(int);
int main(void)
{
    int num;
    printf("정수 입력('0'이하 입력시 종료):");
    scanf("%d", &num);

    while (num > 0)
    {
        trmake(num);
        printf("정수 입력('0'이하 입력시 종료):");
        scanf("%d", &num);
    }    
    return 0;
}

void trmake(int n)
{
    int i, j, k;
    for (i = 1; i < n+1; i++)
    {
        for (j = 1; j < n+1-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k < (i*2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 정수 입력('0'이하 입력시 종료):7
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
// 정수 입력('0'이하 입력시 종료):0