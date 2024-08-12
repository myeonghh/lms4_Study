// <7.2>
//cyper1.c -- 스페이스는 유지하고, 입력을 변경한다
#include<stdio.h>
#define SPACE ' '            //작은 따옴표-스페이스-작은따옴표
int main(void)
{
    char ch;

    ch = getchar();          //문자 하나를 읽는다
    while (ch != '\n')       //라인의 끝이 아닌 동안
    {
        if (ch == SPACE)     //스페이스는 그대로 둔다
            putchar(ch);     //변경하지 않는다
        else
            putchar(ch + 1); //다른 문자들은 변경한다
        ch = getchar();      //다음 문자를 얻는다
    }
    putchar(ch);             //개행을 출력한다

    return 0; 
}
// - getchar()는 전달인자를 사용하지 않고 사용자의 입력으로부터 다음 문자를 리턴한다.
// - ch = getchar(); ==> 이 문장은 다음 입력 문자를 읽고, 그 값을 변수 ch에 대입한다.
// - putchar() 함수는 전달인자를 출력한다.
// - putchar(ch); ==> 이 문장은 이전에 ch에 대입된 값을 문자로 출력한다.

// <출력문>
// CALL ME HAL.
// DBMM NF IBM/