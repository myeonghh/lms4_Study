//* two_func.c -- a program using two functions in one file */
#include <stdio.h>

// 내가 아래에서 함수를 정의했으면 함수의 머리부분(header)을 main 위에 다시 선언해줘야함
// 그게 아니라면 함수의 모든 부분을 main 위에 적어야 됨
// 둘 중 하나 무조건 해줘야 함(그래야 main에서 함수 사용이 가능함)
void butler(void);      /* ANSI/ISO C function prototyping */

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

void butler(void)       /* start of function definition */
{
    printf("You rang, sir?\n");
}