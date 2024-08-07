#include <stdio.h>

int main(void)
{       // printf 문자 출력시 문자열은 ""(쌍따옴표), 문자하나는 ''(작은따옴표)로 감싼다!!!
        printf("Be happy!");    // 화면에 "Be happy!" 출력
        printf("Be happy!\n\n");  // "Be happy." 출력 후 줄바꿈 (마지막 문자열에는 보통 \n 두개 써줘야 구분하기 쉬움)
        printf("%d", 10);       // 화면에 정수 "10" 출력
        printf("%lf", 3.5);      // 화면에 실수 "3.5" 출력
        printf("%d", 10 + 20);  // 10과 20을 더한 결과인 "30 출력"

        
        printf("%d\n", 10);        // %d 위치에 10 출력
        printf("%f\n", 3.4);       //
        printf("%lf\n", 3.4);      // %lf 위치에 3.4를 소수점 이하 6자리까지 출력
        printf("%.1lf\n", 3.45);   // 소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
        printf("%.10lf\n", 3.4);   // 소수점 이하 10자리까지 출력

        printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
        printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

        return 0;
}
