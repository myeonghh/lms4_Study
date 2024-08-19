// 간단한 프로그램 함수로 구현하기 14
// 가위바위보 게임 만들기
// 난수 발생 함수를 사용하여 컴퓨터와 대전이 가능한 가위바보 게임을 만들어 보세요.


// 함수1 : 사용자로부터 입력을 받기 위한 함수이다.
// 사용자로부터 0, 1, 2, 3의 값을 입력 받을 수 있는데 1, 2, 3은 각 가위, 바위, 보에 대응되는 정숫값이고, 0이 입력되면 결과를 출력한 후 프로그램을 종료한다.
// 단, 지정된 번호 이외의 값이 입력될 경우 오류 메시지를 출력한다.
// 함수2 : 난수 발생 함수를 사용하여 1~3의 값 중 임의의 값을 생성하며 이에 따라 컴퓨터의 가위, 바위, 보를 결정한다.
// 함수3: 해당 게임에 대한 승패를 결정하는 함수이다.
// 함수4: 최종적으로 사용자의 승, 무승부, 패에 대한 횟수를 출력한다.
// 필요한 경우, 전역 변수를 사용하지만 최소한으로 한다.


// @ 실습 및 프로그래밍 절차
// - 승부, 무승부수, 패수를 기록하기 위한 변수와 사용자의 가위, 바위, 보 / 컴퓨터의 가위, 바위, 보 등 필요한 변수를 선언한다.
// - 함수2를 사용하여 컴퓨터의 가위, 바위, 보를 생성한다.
// - 함수1을 사용하여 사용자로부터 가위, 바위, 보를 입력받는다.
// - 함수3을 사용하여 현재 게임에 대한 승패를 판단하고 결과를 출력한다. 또한 이에 따라 승수, 무승부수, 패수를 갱신한다.
// - 사용자가 0 이하의 값을 입력하면 최종적으로 승수, 무승부수, 패수를 출력하고 프로그램을 종료한다.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int playerInput(int n);
int computerInput(void);
void wlDecide(int a, int b, int *w, int *l, int *d);
void resOutput(int w, int l, int d);

int main()
{
    int scan, num1, playerCNum, computerCNum, winCnt, loseCnt, drawCnt;
    winCnt = 0;
    loseCnt = 0;
    drawCnt = 0;
    while(1)
    {
        printf("\n");
        printf(">>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : ");
        scan = scanf("%d", &num1);
        if (scan != 1)
        {
            break;
        }
        
        playerCNum = playerInput(num1);
        
        if (playerCNum == 4)
        {
            continue;
        }
        if (playerCNum == 0)
        {
            resOutput(winCnt, loseCnt, drawCnt);
            break;
        }
        
        computerCNum = computerInput();
        
        wlDecide(playerCNum, computerCNum, &winCnt, &loseCnt, &drawCnt);
    }
    

    return 0;
}


int playerInput(int n)
{
    int result;
    switch(n)
    {
    case 0:
        printf("결과를 출력합니다.\n");
        result = 0;
        break;
    case 1:
        printf("사용자는 가위를 냈습니다.\n");
        result = 1;
        break;
    case 2:
        printf("사용자는 바위를 냈습니다.\n");
        result = 2;
        break;
    case 3:
        printf("사용자는 보를 냈습니다.\n");
        result = 3;
        break;
    default:
        result = 4;
        printf("숫자를 제대로 입력하세요.\n");
        break;
    }
    
    return result;
}

int computerInput(void)
{
    int comNum, result;
    
    srand(time(NULL));
    comNum = rand() % 3 + 1;
    
    switch(comNum)
    {
    case 1:
        printf("컴퓨터는 가위를 냈습니다.\n");
        result = 1;
        break;
    case 2:
        printf("컴퓨터는 바위를 냈습니다.\n");
        result = 2;
        break;
    case 3:
        printf("컴퓨터는 보를 냈습니다.\n");
        result = 3;
        break;
    }
    
    return result;
    
}

void wlDecide(int a, int b, int *w, int *l, int *d)
{
    int sub;
    sub = a - b;

    if (sub == 0)
    {
        printf("무승부입니다.\n");
        *d += 1;
    }
    else if (sub == -2 || sub == 1)
    {
        printf("이겼습니다. 축하합니다.\n");
        *w += 1;
    }
    else
    {
        printf("졌습니다. 분발하세요.\n");
        *l += 1;
    }
}

void resOutput(int w, int l, int d)
{
    printf("\n");
    printf("[종합 결과]\n");
    printf("> 승 : %d\n", w);
    printf("> 패 : %d\n", l);
    printf("> 무 : %d\n", d);
    printf("== 게임 종료 ==\n");
}

// <실행 결과>
// >>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : 3
// 사용자는 보를 냈습니다.
// 컴퓨터는 보를 냈습니다.
// 무승부입니다.

// >>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : 1
// 사용자는 가위를 냈습니다.
// 컴퓨터는 보를 냈습니다.
// 이겼습니다. 축하합니다.

// >>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : 2
// 사용자는 바위를 냈습니다.
// 컴퓨터는 보를 냈습니다.
// 졌습니다. 분발하세요.

// >>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : 1
// 사용자는 가위를 냈습니다.
// 컴퓨터는 가위를 냈습니다.
// 무승부입니다.

// >>> 가위(1), 바위(2), 보(3) 입력('0'입력시 결과 출력) : 0
// 결과를 출력합니다.

// [종합 결과]
// > 승 : 1
// > 패 : 1
// > 무 : 2
// == 게임 종료 ==