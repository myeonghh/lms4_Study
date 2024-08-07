// <4.3>
// praise2.c
// 만약 사용하는 시스템이 %zd를 인식하지 못한다면
// %u 또는 %lu를 사용한다.

#include<stdio.h>
#include<string.h>  /* strlen() 프로토타입을 제공한다 */
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];
    printf("실례지만 성함이 어떻게 되시는지?\n");
    scanf("%s",name);
    printf("반갑습니다,%s씨. %s\n" , name, PRAISE);
    printf("이름은 %zd글자인데 메모리 셀 %zd개를 차지합니다.\n",strlen(name),sizeof name);
    printf("감탄문은 %zd글자인데",strlen(PRAISE));
    printf("메모리 셀 %zd개를 차지합니다. \n", sizeof PRAISE);

    return 0;
}
/* 
%
- zd는 sizeof 연산자(데이터의 크기를 알려주는)를 출력할때 사용하는 포맷 지정자이다.
- 마찬가지로 scanf로 이름을 입력받을때 띄어쓰기를 쓰면 띄어쓰기 앞까지만 인식한다.
- 총 이름 문자배열(문자열)이 40칸 이어도 입력받은 이름이 11글자이면 12번째 셀에 널 문자가 입력된다.(문자열이 끝나는 의미)
- define 으로 정의된 PRAISE 뒤의 "" 문자열은 길이와 데이터를 잴때 스페이스와 구두점까지 포함하여 문자의 정확한 개수를 알려준다.
 */

// <출력문>
// 실례지만 성함이 어떻게 되시는지?
// Serendipity Chance
// 반갑습니다,Serendipity씨. You are an extraordinary being.
// 이름은 11글자인데 메모리 셀 40개를 차지합니다.
// 감탄문은 31글자인데메모리 셀 32개를 차지합니다. 