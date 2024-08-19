// 간단한 프로그램 함수로 구현하기 15
// 슬롯머신 만들기
// 슬롯머신 게임 만들기: 마찬가지로 난수 발생 함수를 사용하여 3개의 숫자를 기반으로 하는 슬롯머신 프로그램을 만들어 보세요

// @참고 사항
// 한 번의 게임에서 1~9 사이의 숫자 3개가 나온다.
// 이 숫자들의 조합에 따라 1등, 2 등, 3등, 4등이 결정되는데 각 등수에 대한 규칙은 스스로 결정한다.

// 예를 들어,
// 모두 7이 나오면 1등,
// 동일한 숫자 3개가 나오면 2등,
// 동일한 숫자 2개 가 나오면 3등,
// 이외에는 4등이 된다.

// - 각 등수에 따라 배팅한 금액에 대한 배율이 결정되는데, 등수 별 배율도 각자 결정토록 한다.
// 예를 들어,
// 1등은 배팅 금액의 5배,
// 2등은 3배,
// 3등은 2배가 되며
// 4등은 배팅 금액 을 모두 잃게 된다.

// - 프로그램 구현을 위해서 InputMoney 함수와 Run 함수를 만든다.
// InputMoney 함수는 사용자로부터 금액을 입력받는다.
// Run 함수는 해당 금액을 사용하여 슬롯머신 게임을 수행한다.

// @실습 및 프로그래밍 절차
// - 사용자 배팅 금액을 입력받는 InpuMoney 함수를 만든다.
// 해당 함수에서는 100원 미 만의 금액을 입력받도록 한다.
// - Run 함수에서는 rand 함수를 사용하여 19 사이의 정수 3개를 생성하고,
// 규칙에 따 라서 등수 및 금액을 산출할 수 있도록 한다.
// - main 함수에서는 InputMoney 함수와 Run 함수를 사용하여 슬롯머신 게임을 수행하며
// 사용자 입력에 따라 게임을 반복적으로 수행한다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inputMoney(int *m);
int run(int bm, int *tm);

int main()
{
    int totalMoney, betMoney, continueDcs;
    
    totalMoney = 500;
    
    while(1)
    {
        printf("\n");
        betMoney = inputMoney(&totalMoney);
        
        if (betMoney == 0)
            continue;
        else if(betMoney == -1)
        {
            printf("게임을 종료합니다.\n");
            break;
        }
        
        continueDcs = run(betMoney, &totalMoney);
        
        if (continueDcs == 1)
            continue;
        else
        {
            printf("게임을 종료합니다.\n");
            break;
        }
    }

    return 0;
}

int inputMoney(int *tm)
{
    int money, scan;
    
    printf(">>> 보유 금액 : %d원\n", *tm);
    printf(">>> 베팅 금액을 입력하세요 <100원 미만 가능> : ");
    scan = scanf("%d", &money);
    
    if (scan != 1)
        return -1;
        
    if (money < 1 || money > 99)
    {
        printf("%% 1 ~ 99 까지의 금액을 제대로 입력하세요.\n");
        return 0;
    }
    
    if (*tm >= money)
    {
        *tm -= money;
        return money;
    }
    else
    {
        printf("잔액이 부족합니다. 다시 입력하세요.\n");
        return 0;
    }
}

int run(int bm, int *tm)
{
    int i, j, dupCnt, rate, getMoney, cnum;
    int numArr[3];
    
    srand(time(NULL));
    
    for (i = 0; i < 3; i++)
    {
        numArr[i] = rand() % 9 + 1;
    }
    
    printf(">>> 게임 결과 : ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", numArr[i]);
    }
    printf("\n");
    
    dupCnt = 0;
    for(i = 0; i < 2; i++)
    {
        for(j = i+1; j < 3; j++)
        {
            if (numArr[i] == numArr[j])
                dupCnt ++;
        }
    }
    
    
    if (numArr[0] == 7 && numArr[1] == 7 && numArr[2] == 7)
    {
        getMoney = bm * 5;
        rate = 1;
    }
    else if (dupCnt == 2)
    {
        getMoney = bm * 3;
        rate = 2;
    }
    else if (dupCnt == 1)
    {
        getMoney = bm * 2;
        rate = 3;
    }
    else
    {
        getMoney = 0;
        rate = 4;
    }
    
    *tm += getMoney;
    
    printf(">>> 당신의 게임 등수는 %d등 입니다.\n", rate);
    printf(">>> 배당금은 %d원 입니다.\n", getMoney);
    printf(">>> 당신의 총 보유 금액은 %d원 입니다.\n", *tm);
    
    if (*tm == 0)
    {
        printf("당신은 파산 하였습니다.\n");
        printf("------ GAME OVER ------\n");
        return 0;
    }
    
    printf("\n");
    printf("* 게임을 계속 하시겠습니까? 예<1> 아니요<2> : ");
    while(scanf("%d", &cnum) == 1)
    {
        if(cnum != 1 && cnum != 2)
        {
            printf("번호를 제대로 입력하세요\n");
            continue;
        }
        
        return (cnum == 1)? 1 : 0;
    }
}

// <실행 결과>
// >>> 보유 금액 : 500원
// >>> 베팅 금액을 입력하세요 <100원 미만 가능> : 95
// >>> 게임 결과 : 9 1 4 
// >>> 당신의 게임 등수는 4등 입니다.
// >>> 배당금은 0원 입니다.
// >>> 당신의 총 보유 금액은 405원 입니다.

// * 게임을 계속 하시겠습니까? 예<1> 아니요<2> : 1

// >>> 보유 금액 : 405원
// >>> 베팅 금액을 입력하세요 <100원 미만 가능> : 99
// >>> 게임 결과 : 8 8 7 
// >>> 당신의 게임 등수는 3등 입니다.
// >>> 배당금은 198원 입니다.
// >>> 당신의 총 보유 금액은 504원 입니다.

// * 게임을 계속 하시겠습니까? 예<1> 아니요<2> : 2
// 게임을 종료합니다.