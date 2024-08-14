// 예제 43
// 10진수를 2진수로 변환하여 리스트에 저장하기 (필수)
// 10진수를 입력받아, 2진수로 출력하는 프로그램을 개발하세요.


#include <stdio.h>
int main(void)
{
    int num, cnum, cnt, i, answer, rest;
    
    printf("10진수 숫자를 하나 입력하세요: ");
    scanf("%d", &num);

    cnum = num;
    cnt = 0;
    while (cnum > 0){
        cnum /= 2;
        cnt++;       
    }

    int numList[cnt];

    for (i = 0; i < cnt; i++){
        answer = num / 2;
        rest = num % 2;

        numList[i] = rest;
        num = answer;
    }

    printf("2진수 : ");
    for(i = cnt-1; i >= 0; i--){
        printf("%d", numList[i]);
    }
    printf("\n");
       
    return 0;
}

// <실행 결과>
// 10진수 숫자를 하나 입력하세요: 359
// 2진수 : 101100111