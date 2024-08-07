// <4-10>

/* stringf.c -- 문자열 포맷 */
#include<stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n",BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);

    return 0;
}
/*
<출력값>
[Authentic imitation!]      => - 2s 문자열 필드를 2로 주었지만 문자열이 필드를 넘어가면 자동으로 확장됨
[    Authentic imitation!]  => - 문자열 필드를 문자열 길이보다 긴 24로 주었기 때문에 앞에 공백이 생김
[ 			        Authe]  => - %24.5s는 문자열 필드를 24로 주고 5개의 문자만 출력하라고 지시하는것
[Authe			         ]  => - 위와 똑같지만 - 부호가 붙으면 왼쪽으로 정렬
*/