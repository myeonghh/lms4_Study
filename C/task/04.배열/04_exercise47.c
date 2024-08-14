// 예제47
// 선택 정렬 알고리즘
// 임의의 리스트에 요소를 원하는 만큼 무작위로 넣고, 선택 정렬 알고리즘을 구현하여 정렬하세요

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    const int LEN = 10;
    int numList[LEN], num, i, j, min, minIndex, temp;
    
    for (i = 0; i < LEN; i++){
        numList[i] = rand() % 50 + 1; // 1 ~ 50까지의 랜덤 숫자 10개 리스트에 넣기 
    }
    printf("랜덤숫자 10개: ");
    for (i = 0; i < LEN; i++){
        printf("%d ", numList[i]); // 초기 랜덤 리스트 출력
    }

    for (i = 0; i < LEN; i++){
        min = 51;
        for (j = i; j < LEN; j++){
            if (numList[j] < min){
                min = numList[j];
                minIndex = j;
            }
        }       
        temp = numList[minIndex];
        numList[minIndex] = numList[i];
        numList[i] = temp;
    }

    printf("\n선택 정렬 후: ");
    for (i = 0; i < LEN; i++){
        printf("%d ", numList[i]);
    }
    printf("\n");
    
    return 0;
}

// <실행 결과>
// 랜덤숫자 10개: 34 37 28 16 44 36 37 43 50 22 
// 선택 정렬 후: 16 22 28 34 36 37 37 43 44 50 