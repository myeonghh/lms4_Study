// 간단한 프로그램 함수로 구현하기 3
// 사용자가 숫자를 원하는 개수만큼 입력한다.
// 출력 결과는, 가장 큰 수와 가장 작은수, 홀수와 짝수인지, 양수, 0, 음수의 판결 결과를 출력하는 프로그램을 구현하라
// 사용자가 입력하는 숫자와 숫자 사이를 구분하는 방법은 개발자가 선택하세요.

#include <stdio.h>
void maxCal(int arr[], int len);
void minCal(int arr[], int len);
void oddEvenPnCal(int arr[], int len);

int main (void)
{
    int numArr1[100];
    int sizeCnt, i, j, scan, arrLen;

    for (i = 0; ;i++)
    {
        printf("숫자를 입력하세요.(끝내려면 'q') : ");
        scan = scanf("%d", &numArr1[i]);

        if (scan != 1)
        {
            printf("\n==============출력 결과===============\n");
            break;
        }
    }
    arrLen = i;
    int numArr2[arrLen];

    for (i = 0; i < arrLen; i++)
    {
        numArr2[i] = numArr1[i];
    }

    maxCal(numArr2, arrLen);
    minCal(numArr2, arrLen);
    oddEvenPnCal(numArr2, arrLen);
    printf("====================================\n");
    return 0;
}

void maxCal(int arr[], int len)
{
    int max, i;
    max = arr[0];

    for (i = 0; i < len; i++)
    {
        if (arr[i] > max)
            max = arr[i]; 
    }
    printf("최대값 : %d\n", max);

}

void minCal(int arr[], int len)
{
    int min, i;
    min = arr[0];

    for (i = 0; i < len; i++)
    {
        if (arr[i] < min)
            min = arr[i]; 
    }
    printf("최솟값 : %d\n", min);
}

void oddEvenPnCal(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] > 0)
            printf("숫자 %3d >> 짝수, 양수\n", arr[i]);
        else if (arr[i] % 2 == 0 && arr[i] < 0)
            printf("숫자 %3d >> 짝수, 음수\n", arr[i]);
        else if (arr[i] % 2 != 0 && arr[i] > 0)
            printf("숫자 %3d >> 홀수, 양수\n", arr[i]);
        else if (arr[i] % 2 != 0 && arr[i] < 0)
            printf("숫자 %3d >> 홀수, 음수\n", arr[i]);
        else
            printf("숫자 %3d >> '0'\n", arr[i]);
    }
}
// <실행 결과>
// 숫자를 입력하세요.(끝내려면 'q') : 5
// 숫자를 입력하세요.(끝내려면 'q') : 16
// 숫자를 입력하세요.(끝내려면 'q') : -4
// 숫자를 입력하세요.(끝내려면 'q') : 0
// 숫자를 입력하세요.(끝내려면 'q') : -12
// 숫자를 입력하세요.(끝내려면 'q') : 8
// 숫자를 입력하세요.(끝내려면 'q') : -7
// 숫자를 입력하세요.(끝내려면 'q') : q

// ==============출력 결과===============
// 최대값 : 16
// 최솟값 : -12
// 숫자   5 >> 홀수, 양수
// 숫자  16 >> 짝수, 양수
// 숫자  -4 >> 짝수, 음수
// 숫자   0 >> '0'
// 숫자 -12 >> 짝수, 음수
// 숫자   8 >> 짝수, 양수
// 숫자  -7 >> 홀수, 음수
// ====================================