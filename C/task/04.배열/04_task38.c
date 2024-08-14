// 과제 38
// 배열 요소를 오른쪽으로 한 칸씩 원형으로 이동하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int numList[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp, i;

    temp = numList[9];
    for (i = 9; i > 0; i--)
    {
        numList[i] = numList[i-1];
    }
    numList[0] = temp;

    printf("오른쪽으로 한 칸 원형이동: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numList[i]);
    }
    printf("\n");
    return 0;
}

// <실행 결과>
// 오른쪽으로 한 칸 원형이동: 10 1 2 3 4 5 6 7 8 9