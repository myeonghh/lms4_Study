// 과제27
// while형 반복 구조를 이용해서 계승을 구하는 순서도와 C 프로그램 작성하여라.

#include <stdio.h>
int main(void)
{
    int num, conNum, fac;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);
    conNum = num;
    fac = 1;
    if (num == 0){
        printf("%d의 계승: %d\n", conNum, 1);
    }
    else{
        while(num > 0)
        {
            fac *= num;
            num--;
        }
        printf("%d의 계승: %d\n", conNum, fac);
    }
    return 0;
}

// < 실행 결과>
// 정수를 입력하세요: 5
// 5의 계승: 120