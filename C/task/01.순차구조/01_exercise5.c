// 성적 3개 입력받아 a, b, c 에 저장하고 이들의 합과 평균을 구해 출력한다.
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("성적 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("총점: %d\n", a + b + c);
    printf("평균: %d\n", (a + b + c)/3);
    return 0;
}

// <실행 결과>
// 성적 3개를 입력하세요: 86 90 100
// 총점: 276
// 평균: 92