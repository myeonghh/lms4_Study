// <5.10>
// add_one.c -- 증가 연산자: 전위 모드와 후위 모드

#include <stdio.h>
int main(void)
{
    int ultra = 0, super = 0;
    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }    
    return 0;
}
// - super++ 와 ++ultra는 (super = super + 1)과 (ultra = ultra + 1)과 같은 결과를 얻는다.
// - while (++super < 5){} 형태로도 증가 연산자를 사용할 수 있다.

// <출력문>
// super = 1, ultra = 1
// super = 2, ultra = 2
// super = 3, ultra = 3
// super = 4, ultra = 4
// super = 5, ultra = 5