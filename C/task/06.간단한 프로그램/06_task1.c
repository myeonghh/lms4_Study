// 간단한 프로그램 함수로 구현하기 1
//  사용자에게 숫자 2개를 입력받고, 사칙연산 기호(+, -, *, /, %, //) 를 입력받으면, 그 연산 결과를 출력하라.
// #include <string.h>
// strcmp('문자열a', '문자열b') ==> 문자열 a 와 문자열 b를 비교

#include <stdio.h>

double operate(void);
int main(void)
{
    int num1, num2;
    double res;
    char operator1 , operator2;
    while (1)
    {        
        res = operate();
        printf("계산 결과 : %.3f\n", res);
    }
   
    return 0;
}

double operate(void)
{
    double result;
    int num1, num2;
    char operator1 , operator2;

    printf("\n계산 할 숫자 2개를 입력하세요\n");
    printf("첫 번째 숫자: ");
    scanf("%d", &num1);
    printf("두 번째 숫자: ");
    scanf("%d", &num2);
    getchar();
    
    printf("기호(+, -, *, /, %%, //) 를 하나 고르세요: ");
    operator1 = getchar();
    operator2 = getchar();
    
    if (operator1 == '/' && operator2 == '/')
        result = (int)(num1 / num2);
    else if (operator1 == '+')
        result = num1 + num2;
    else if (operator1 == '-')
        result = num1 - num2;
    else if (operator1 == '*')
        result = num1 * num2;
    else if (operator1 == '/')
        result = (double)num1 / (double)num2;
    else if (operator1 == '%')
        result = num1 % num2;
    else 
        printf("연산자를 제대로 입력하세요.\n");
    
    return result;    
}

// <실행 결과>
// 계산 할 숫자 2개를 입력하세요
// 첫 번째 숫자: 15
// 두 번째 숫자: 6
// 기호(+, -, *, /, %, //) 를 하나 고르세요: %
// 계산 결과 : 3.000

// 계산 할 숫자 2개를 입력하세요
// 첫 번째 숫자: 21
// 두 번째 숫자: 8
// 기호(+, -, *, /, %, //) 를 하나 고르세요: /
// 계산 결과 : 2.625