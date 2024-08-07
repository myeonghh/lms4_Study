#include <stdio.h>

int main(void)
{
    // 1byte 256가지 2의 8제곱
    // 0 - 255 까지 256개의 숫자중에 1개를 표현
    // 0000 0000
    // 0000 0001 

	char ch1 = 'A';     // 문자로 초기화, 저장된 값은 문자의 아스키 코드 값 (범위 => -128 ~ +127) 
    unsigned char ch3 = 255; // 0 ~ 255
	char ch2 = 65;      // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);
    printf("아스키 코드 값이 %d인 문자 : %c\n", -2, -2);

	return 0;
}