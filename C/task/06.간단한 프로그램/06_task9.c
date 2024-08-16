// 간단한 프로그램 함수로 구현하기 9
// 나비 넥타이 만들기

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

    frontN = (n / 2);
    backN = n - frontN;

    for (i = 1; i <= frontN; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("X");
        }
        for (k = 1; k <= n-(i*2); k++)
        {
            printf(" ");
        }
        for (l = 1; l <= i; l++)
        {
            printf("X");
        }
        printf("\n");
    } 

    for (i =1; i <= n; i++)
    {
        printf("X");
    }
    printf("\n");

    for (i = 1; i <= backN; i++)
    {
        for (j = 1; j <= backN-i; j++)
        {
            printf("X");
        }
        for(k = 1; k < i*2; k++)
        {
            printf(" ");
        }
        for (l = 1; l <= backN-i; l++)
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
// 정수 입력('0'이하 입력시 종료):13
// X           X
// XX         XX
// XXX       XXX
// XXXX     XXXX
// XXXXX   XXXXX
// XXXXXX XXXXXX
// XXXXXXXXXXXXX
// XXXXXX XXXXXX
// XXXXX   XXXXX
// XXXX     XXXX
// XXX       XXX
// XX         XX
// X           X
             
// 정수 입력('0'이하 입력시 종료):0