#include <stdio.h>

int main(void)
{
    printf("%c\n", 65);                         // %c로 문자를 쓰고 숫자 65를 입력하면 아스키코드 '65'에 해당하는 'A'를 출력 
	printf("%c\n", 'A');                        // 문자 상수 출력 (작은 따옴표, %c)
	printf("%s\n", "A");                        // 문자열 상수 출력 (큰 따옴표, %s)
	printf("%c은 %s입니다.\n\n", '1', "first");   // 문자(%c)와 문자열(%s)을 함께 출력

	return 0;
}