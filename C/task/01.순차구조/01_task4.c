// 미터 단위의 길이를 입력받아 킬로미터와 미터로 변환하여 출력하는 순서도와 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int meter;
    printf("미터를 입력하세요: ");
    scanf("%d", &meter);
    printf("%dkm %dm\n", meter / 1000, meter % 1000);

    return 0;
}

// <실행 결과>
// 미터를 입력하세요: 5892
// 5km 892m