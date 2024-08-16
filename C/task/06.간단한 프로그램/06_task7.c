// 간단한 프로그램 함수로 구현하기 7
// 빈 다이아몬드 모양 출력하기:
// 사용자로부터 정수 하나를 입력받아 실행 예와 같은 도형을 출력하는 프로그램을 작성하라.
// 가운데 다이아몬드 모양이 있고 그 외의 칸에는 'X'문자가 출력되어야 한다.
// 이때 가로와 세로의 모양이 같다.
// 입력값이 짝수일 경우에는 1을 빼서 홀수 로 만든 후 도형을 출력하면 된다.
// 입력값이 0 이하인 경우 프로그램은 종료된다.

#include <stdio.h>
void makeDm(int);
int makeOddNum(int);

int main(void)
{
    int num;
    printf("정수 입력('0'이하 입력시 종료):");
    scanf("%d", &num);
    num = makeOddNum(num);

    while (num > 0)
    {
        makeDm(num);
        printf("정수 입력('0'이하 입력시 종료):");
        scanf("%d", &num);
        num = makeOddNum(num);
    }
    return 0;
}

void makeDm(int n)
{
    int frontN, backN, i, j, k, l;

    frontN = (n / 2) + 1;
    backN = n - frontN;

    for (i = 1; i <= frontN; i++)
    {
        for (j = 1; j <= frontN-i; j++)
        {
            printf("X");
        }
        for (k = 1; k < i*2; k++)
        {
            printf(" ");
        }
        for (l = 1; l <= frontN-i; l++)
        {
            printf("X");
        }
        printf("\n");
    } 

    for (i = 1; i <= backN; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("X");
        }
        for(k = 1; k <= n-(i*2); k++)
        {
            printf(" ");
        }
        for (l = 1; l <= i; l++)
        {
            printf("X");
        }
        printf("\n");
    }
}

int makeOddNum(int n)
{
   return (n % 2 == 0)? n - 1 : n;
}

// <실행 결과>
// 정수 입력('0'이하 입력시 종료):16
// XXXXXXX XXXXXXX
// XXXXXX   XXXXXX
// XXXXX     XXXXX
// XXXX       XXXX
// XXX         XXX
// XX           XX
// X             X
               
// X             X
// XX           XX
// XXX         XXX
// XXXX       XXXX
// XXXXX     XXXXX
// XXXXXX   XXXXXX
// XXXXXXX XXXXXXX
// 정수 입력('0'이하 입력시 종료):0