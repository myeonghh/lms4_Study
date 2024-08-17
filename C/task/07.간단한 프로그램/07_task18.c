// 간단한 프로그램 함수로 구현하기 18
// 로또 키오스크 만들기
// 방법은 개발자가 선택하세요.
// 입력받은 값은, 예외가 없도록 만들어 주세요.
// 자동, 반자동, 수동 선택하세요.
// 최대 1~5개의 로또를 선택 하세요.
// 입금과 잔돈을 결재하고, 결재 결과로 영수증을 출력하세요
// 영수증에 발행일시(현재), 추첨일(해당 주 토요일), 지급기한(1년)을 출력하세요.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void autoC(int arr[][6], int num);
void semiAutoC(int arr[][6], int num);
void manualC(int arr[][6], int num);
int static compare (const void* first, const void* second);


int main(void)
{

    int num1, num2, i;
    printf("-------------Lotto--------------\n");

    printf("System : 몇개를 구매 하시겠어요?('q'입력시 종료)\n");

    
    while (scanf("%d", &num1) == 1)
    {
        if (num1 <= 0 || num1 > 5) // 사용자가 입력한 번호 1 ~ 5 사이가 아닌 숫자 예외처리
        {
            printf("1부터 5사이의 숫자를 입력해주세요.\n");
            printf("다시 입력하세요\n");
            continue;
        }
        break;
    }

    int lottoArray[num1][6];
    printf("System: 1.자동  2.반자동  3.수동 \n");

    //scanf("%d", &num2) == 1
    while (scanf("%d", &num2) == 1)

    {
        if (num2 == 1)
        {
            autoC(lottoArray, num1);
            break;
        }
        else if (num2 == 2)
        {
            semiAutoC(lottoArray, num1);
            break;
        }
        else if (num2 == 3)
        {
            manualC(lottoArray, num1);
            break;
        }
        else
        {
            printf("1부터 3사이의 숫자를 입력해주세요.\n");
            printf("다시 입력하세요\n");
            continue;
        }
         
    }

    return 0;
}



void autoC(int arr[][6], int num)
{
    int i, j, k, dup;
    printf("System: 1.자동을 선택하셨습니다.\n");
    srand(time(NULL));
    for (i = 0; i < num; i++)
    {
        for(j = 0; j < 6; j++)
        {
            
            arr[i][j] = rand() % 45 + 1;
            dup = 0;
            for (k = 0; k < j; k++)
            {
                if (arr[i][j] == arr[i][k])
                    {
                        dup = 1;
                        break;
                    }       
            }
            if (dup == 1)
                {
                    j--;
                    continue;
                }           
        }      
    }   
    for (i =0; i< 6; i++)
        qsort(arr[i],6,sizeof(int),compare);
    for (i =0; i< num; i++)
    {    
        for (j = 0; j <6; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}


void semiAutoC(int arr[][6], int num)
{
    int i, j, k, l, m, mnum, dup, cnt;
    printf("System: 2.반자동을 선택하셨습니다.\n");
    printf("[ '0'을 입력하시면, 나머지는 자동으로 입력됩니다. ]\n");

    for (i = 0; i < num; i++)
    {
        cnt = 0;
        for(j = 0; j < 6; j++) // 수동 입력 부분
        {
            printf("Lotto %d장 %d번 수동 입력 >> ", i+1, j+1);
            scanf("%d", &mnum);
            if (mnum == 0)
            {
                printf("나머지 번호를 자동으로 입력합니다.\n");
                cnt = j;
                
                srand(time(NULL));
                for (l = cnt; l < 6; l++) // 자동 입력 부분
                {
                    arr[i][l] = rand() % 45 + 1;
                    dup = 0;
                    for (m = 0; m < l; m++)
                    {
                        if (arr[i][l] == arr[i][m])
                            {
                                dup = 1;
                                break;
                            }       
                    }
                    if (dup == 1)
                        {
                            l--;
                            continue;
                        }           
                }      

                break;
            }
            if (mnum > 45 || mnum < 0)
            {
                printf("1부터 45사이의 숫자를 다시 입력하세요.\n");
                j--;
                continue;
            }
            arr[i][j] = mnum;

            dup = 0;
            for (k = 0; k < j; k++)
            {
                if (arr[i][j] == arr[i][k])
                    {
                        dup = 1;
                        break;
                    }       
            }
            if (dup == 1)
                {
                    printf("중복되지 않는 숫자를 다시 입력하세요.\n");
                    j--;
                    continue;
                }               
        }
    }

    for (i =0; i< 6; i++)
        qsort(arr[i],6,sizeof(int),compare);

    for (i =0; i< num; i++)
    {    
        for (j = 0; j <6; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}


void manualC(int arr[][6], int num)
{
    int i, j, k, mnum, dup;
    printf("System: 3.수동을 선택하셨습니다.\n");

    for (i = 0; i < num; i++)
    {
        for(j = 0; j < 6; j++)
        {
            printf("Lotto %d장 %d번 수동 입력 >> ", i+1, j+1);
            scanf("%d", &mnum);
            
            if (mnum > 45 || mnum < 1)
            {
                printf("1부터 45사이의 숫자를 다시 입력하세요.\n");
                j--;
                continue;
            }
            arr[i][j] = mnum;

            dup = 0;
            for (k = 0; k < j; k++)
            {
                if (arr[i][j] == arr[i][k])
                    {
                        dup = 1;
                        break;
                    }       
            }
            if (dup == 1)
                {
                    printf("중복되지 않는 숫자를 다시 입력하세요.\n");
                    j--;
                    continue;
                }           
        }
    }
    for (i =0; i< 6; i++)
        qsort(arr[i],6,sizeof(int),compare);

    for (i =0; i< num; i++)
    {    
        for (j = 0; j <6; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}


int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

