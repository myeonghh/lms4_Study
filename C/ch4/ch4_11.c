// <4.11>
// intconv.c -- 잘못 짝지어진 정수형 변환 지정자

#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("short형, unsingned short형 num: %hd %hu\n", num, num);
    printf("short형, unsingned short형 -num: %hd %hu\n", mnum, mnum);
    printf("int형, char형 num: %d %c\n", num, num);
    printf("int형, short형, char형 WORDS: %d %hd %c\n", WORDS, WORDS, WORDS);
    
    return 0;
}
// - 두번째 라인에서 %hu 는 부호없는 즉 양수만 가지는 unsigned short 이기때문에 -336을 입력받아도 65200가 출력된다.
// - 세번째 라인은 255보다 큰 숫자값을 문자로 변환시키면 어떻게 되는지 보여준다.
// - 255 보다 더 큰 수를 입력하면 그 숫자를 255로 나눈 나머지값만 취해서 아키드코드로 변환한 문자가 출력된다.
 
// <출력 결과>
// short형, unsingned short형 num: 336 336
// short형, unsingned short형 -num: -336 65200
// int형, char형 num: 336 P
// int형, short형, char형 WORDS: 65618 82 R