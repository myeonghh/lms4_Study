// 밑변과 높이를 입력 받아 삼각형의 넓이를 구해 출력하는 순서도와 C 프로그램을 작성하여라.
// 삼각형의 넓이((밑변 * 높이)/2)
#include <stdio.h>

int main(void)
{
    int width, height;
    printf("삼각형의 밑변과 높이를 입력하세요\n");
    printf("밑변: ");
    scanf("%d", &width);
    printf("높이: ");
    scanf("%d", &height);

    printf("삼각형의 넓이: %d\n", (width * height) / 2);
    return 0;
}

// <실행 결과>
// 삼각형의 밑변과 높이를 입력하세요
// 밑변: 8
// 높이: 5
// 삼각형의 넓이: 20