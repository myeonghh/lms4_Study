// 사각형의 넓이 구하기
// 사각형의 넓이 = 가로의 길이 X 세로의 길이
#include <stdio.h>

int main(void)
{
    int width, height;
    printf("사각형의 가로와 세로의 길이를 입력하세요\n");
    printf("가로: ");
    scanf("%d", &width);
    printf("세로: ");
    scanf("%d", &height);

    printf("사각형 넓이: %d\n", width * height);

    return 0;
}

// <실행결과>
// 사각형의 가로와 세로의 길이를 입력하세요
// 가로: 7
// 세로: 5
// 사각형 넓이: 35