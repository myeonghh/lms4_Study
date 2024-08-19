// 간단한 프로그램 함수로 구현하기 17
// 숫자 야구 만들기

// 게임을 시작하면, 컴퓨터가 랜덤한 숫자를 1~9 사이에 중복되지 않게 순서를 정해서 저장합니다.
// 매 라운드, 사용자에게 예상한 숫자 3개를 입력 받습니다.
// 사용자가 입력한 숫자와 랜덤한 숫자가 맞고, 입력 순서까지 맞으면 1strike,
// 사용자가 입력한 숫자와 랜덤한 숫자는 맞지만, 입력 순서가 맞지 않으면1ball,
// 숫자가 맞지 않고, 위치도 맞지 않으면 out

// 입력 후 결과에 대해 strike, ball, out 을 출력합니다.
// 9라운드까지 진행됩니다.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ranNumInput(int arr[], int len);
int playerInput(int arr[], int len);
int sboCheck(int cArr[], int pArr[], int len);

int main()
{
    int gameCnt, arrLen, i, j, cnt, quitCheck, winCheck;
    int ranNumArr[3], playerNumArr[3];
    
    arrLen = sizeof(ranNumArr) / sizeof(int);
    // 랜덤 숫자 3개 배열 생성
    ranNumInput(ranNumArr, arrLen);
    
    // 랜덤 숫자 3개 출력확인 
    for (i = 0; i < arrLen; i++)
        printf("%d ", ranNumArr[i]);
        
    // 야구게임 9라운드 시작
    for (cnt = 1; cnt < 10; cnt++)
    {
        printf("\n     [ %d Round ]\n", cnt);
        quitCheck = playerInput(playerNumArr, arrLen);
        if (quitCheck == 0)
            {
                printf("게임 종료\n");
                break;
            }
        
        printf("\n   입력한 숫자: ");
        for (j = 0; j < arrLen; j++)
            printf("%d ", playerNumArr[j]);
        
        winCheck = sboCheck(ranNumArr, playerNumArr, arrLen);
        if (winCheck == 0)
        {   
            printf("\n========= Win =========\n");
            break;
        }
        
        if (cnt == 9)
        {
            printf("\n9Round가 초과하여 패배했습니다.\n");
            break;
        }
    }
    printf("게임 종료\n");
    return 0;    
}

void ranNumInput(int arr[], int len)
{
    int i, j, dup;
    
    srand(time(NULL));
    for (i = 0; i < len; i++)
    {
        arr[i] = rand() % 9 + 1;
        
        // 중복 제거
        dup = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                dup = 1;
                break;
            }       
        }
        if (dup == 1)
        {
            i--;
            continue;
        }           
    }   
}

int playerInput(int arr[], int len)
{
    int i, j, dup, scan;
    for (i = 0; i < len; i++)
    {
        printf("Enter number 1 ~ 9 : ");
        scan = scanf("%d", &arr[i]);
        if (scan != 1)
            return 0;
        if (arr[i] < 1 || arr[i] > 9)
        {
            printf("1과 9사이의 숫자를 다시 입력하세요.\n");
            i--;
            continue;
        }
        
        
        // 중복 검사
        dup = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                dup = 1;
                break;
            }       
        }
        if (dup == 1)
        {   
            printf("이전과 중복되지 않는 숫자를 다시 입력하세요.\n");
            i--;
            continue;
        }           
    }
}

int sboCheck(int cArr[], int pArr[], int len)
{   
    int strikeCnt, ballCnt, i, j;
    strikeCnt = 0;
    ballCnt = 0;
    
    for (i = 0; i < len; i++)
    {
        if (pArr[i] == cArr[i])
            {
                strikeCnt++;
                continue;
            }
            
        for (j = 0; j < len; j++)
        {
            if (pArr[i] == cArr[j])
                ballCnt++;
        }
        
    }
    
    if(strikeCnt == 0 && ballCnt == 0)
        printf("\n\t[ OUT ]\n");
    else
        printf("\n[ Strike: %d,  Ball: %d ]\n", strikeCnt, ballCnt);
        
    if (strikeCnt == 3)
        return 0;
}

// <실행 결과>
//      [ 1 Round ]
// Enter number 1 ~ 9 : 5
// Enter number 1 ~ 9 : 1
// Enter number 1 ~ 9 : 9

//    입력한 숫자: 5 1 9 
// [ Strike: 1,  Ball: 0 ]

//      [ 2 Round ]
// Enter number 1 ~ 9 : 1
// Enter number 1 ~ 9 : 2
// Enter number 1 ~ 9 : 4

//    입력한 숫자: 1 2 4 
// [ Strike: 0,  Ball: 1 ]

//      [ 3 Round ]
// Enter number 1 ~ 9 : 8
// Enter number 1 ~ 9 : 1
// Enter number 1 ~ 9 : 6

//    입력한 숫자: 8 1 6 
// [ Strike: 1,  Ball: 2 ]

//      [ 4 Round ]
// Enter number 1 ~ 9 : 6
// Enter number 1 ~ 9 : 1
// Enter number 1 ~ 9 : 8

//    입력한 숫자: 6 1 8 
// [ Strike: 3,  Ball: 0 ]

// ========= Win =========
// 게임 종료