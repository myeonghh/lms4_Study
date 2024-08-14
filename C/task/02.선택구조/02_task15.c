// 과제15
// 다음 공원 입장료에 대한 요금을 구하는 순서도의 ①을 채우고 C 프로그램을 작성하여라.

#include <stdio.h>
int main(void)
{
    int age;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    
    if (age >= 8 && age < 60)
        printf("입장료 : 5,000원\n");
    else
        printf("입장료 : 무료\n");

    return 0;
}

// <실행 결과>
// 나이를 입력하세요: 57
// 입장료 : 5,000원