// 간단한 프로그램 함수로 구현하기 10
// 화살표 만들기
// (입력 없이 그냥 모양만 비슷하게 해도 됨, 출력 정렬 사용 안됨)


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