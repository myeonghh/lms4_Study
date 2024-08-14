// 과제11
// 홀수, 짝수를 판별하는 다음 순서도의 ①과 ②를 채우고 그에 맞는 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    if (a % 2 == 1){
        printf("홀수입니다\n");
    }
    else{
        printf("짝수입니다\n");
    }

    return 0;
}

// <실행 결과>
// 정수를 입력하세요: 9
// 홀수입니다