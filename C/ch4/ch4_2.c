// <4.2>
// praise1.c -- 몇 가지 유형의 문자열들을 사용한다.

#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
    char name[40];
    
    printf("실례지만 성함이 어떻게 되시는지?\n");
    scanf("%s", name); // 마찬가지로 name은 배열이기 때문에 앞에 &를 붙이지 않는다.
    printf("반갑습니다, %s 씨. %s\n", name, PRAISE);
    
    return 0;
}
// - 문자열이 끝나면 끝나는 바로다음 문자열 배열칸에 널 값이 들어감
// - 개발자가 직접 name 배열에 널 문자를 넣을 필요는 없음(컴파일러가 알아서 집어넣음)
// - define으로 PRAISE를 정의하면 그 뒤에 나오는 "" 을 문자열로 인식한다.
// - 만약 scanf에 이름을 입력할때 Angela Plains 같이 중간에 띄어쓰기를 하면 Angela만 인식한다.
// - scanf() 함수는 입력을 읽기 시작한 후 첫 번째 화이트스페이스(블랭크, 탭, 개행 등)를 만나면 읽기를 멈춘다.

// <출력문>
// 실례지만 성함이 어떻게 되시는지?
// Angela Plains
// 반갑습니다, Angela 씨. You are an extraordinary being.