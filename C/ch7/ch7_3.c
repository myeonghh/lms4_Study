// <7.3>
//cypher2.c -- 알파벳 문자가 아닌 것들은 유지하고, 입력을 변경한다
#include<stdio.h>
#include<ctype.h>                  // isalpha () 함수를 위해
int main(void)
{
    char ch;
    while ((ch = getchar()) != '\n')
    {
         if(isalpha(ch))        //문자이면
             putchar(ch + 1);   //다음 문자를 출력한다
         else                   //그렇지 않으면
             putchar(ch);       //변경하지 않고 그대로 출력한다
    }
    putchar(ch);                //개행을 출력한다
    
    return 0;
}
// - 스페이스와 구두점은 암호화되지않고, 영어 대문자와 소문자들만 암호화 된다.
// - isalpha() 함수는 매개변수가 알파벳인지 아닌지를 판별하는 함수이다. 알파벳이면 참(1)을 리턴하고 아니면 거짓(0)을 리턴한다.
// - 이와 비슷한 함수들을 <ctype.h> 에서 제공하고 있다. (교재 표 7.1 참고 p295)

// <출력문>
// Look, It's a programmer!
// Mppl, Ju't b qsphsbnnfs!