// <5.8>
// sizeof.c -- sizeof 연산자를 사용한다.
// C9dml %z 변경자를 사용한다 -- %zd가 지원되지 않는다면 %u나 %lu를 사용하라.

#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n은 %zd바이트이다; 모든 int형 값은 %zd바이트이다.\n", n, sizeof n, intsize);
    // %zd는 sizeof 를 출력할때 쓰는 변환 지정자이다.
    return 0;
}
// size_t형은 새로운 데이터형(자료형)이 아니라 부호 없는 정수형이다.
// 이식 가능한 데이터형(int32_t 등)과 마찬가지로, size_t형도 표준 데이터형에 의해 정의된다.
// C에서는 typedef를 이용하여, 기존의 데이터형에 대한 별명(alias)을 만들 수 있게 한다.
// ex) typedef double real; ==> typedef를 통해서 real을 double 자료형의 별명으로 만들었다.
// 이제 real deal; 을 사용하면 컴파일러는 deal 변수를 double 자료형으로 인식한다.
// size_t 도 마찬가지로 어떤 시스템에서는 unsigned int형에 대한 별명으로 만들고, 다른 시스템에서는 unsigned long형에 대한 별명으로 만들 수 있다.
// <출력문>
// n = 0, n은 4바이트이다; 모든 int형 값은 4바이트이다.