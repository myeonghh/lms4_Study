// <3.4>
// print2.c -- printf()의 추가적인 특성을 설명한다.
#include <stdio.h>
int main(void)
{
    unsigned int un = 3000000000; /* 32비트 int형과 */
    short end = 200;              /* 16비트 short형을 사용하는 시스템*/
    long big = 65537;
    long long verybig = 12345678908642;
    
    printf("un = %u and not %d\n", un, un); // un = 3000000000 and not -1294967296
    printf("end = %hd and %d\n", end, end); // end = 200 and 200
    printf("big = %ld and not %hd\n", big, big); // big = 65537 and not 1
    printf("verybig=
     %lld and not %ld\n", verybig, verybig); // 12345678908642 and not 12345678908642
    
    return 0;
}