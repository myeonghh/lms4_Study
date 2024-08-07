// <3.8>
// typesize.c -- 데이터형들의 크기를 출력한다.

#include <stdio.h>
int main(void)
{
    /* c99는 크기를 위해 %zd 포맷 지정자를 제공한다 */
    printf("int형의 크기 : %zd 바이트.\n", sizeof(int));
    printf("char형의 크기 : %zd 바이트.\n", sizeof(char));
    printf("long형의 크기 : %zd 바이트.\n", sizeof(long));
    printf("long long형의 크기 : %zd 바이트.\n",
           sizeof(long long));
    printf("double형의 크기 : %zd 바이트.\n",
           sizeof(double));
    printf("long double형의 크기 : %zd 바이트.\n",
           sizeof(long double));
    return 0;
    /* 출력값값
    int형의 크기 : 4 바이트.
    char형의 크기 : 1 바이트.
    long형의 크기 : 8 바이트.
    long long형의 크기 : 8 바이트.
    double형의 크기 : 8 바이트.
    long double형의 크기 : 16 바이트.
    */
}