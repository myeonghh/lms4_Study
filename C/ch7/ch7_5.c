// <7.5>
//divisors.c -- 중첩된 if문들이 어떤 수의 약수들을 출력한다.
#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    unsigned long num;                      //검사를 위해 주어지는 수
    unsigned long div;                      //잠정적인 약수
    bool isPrime;                           //소수 플래그

    printf("검사할 정수를 하나 입력하시오");
    printf("(끝내려면 q)\n");
    while(scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if(num % div == 0)
            {
                if((div * div) != num)
                    printf("%lu, %lu : 둘 다 %lu의 약수다.\n",div, num / div, num);
                else
                    printf("%lu,%lu : 둘 다 %lu의 약수다.\n",div, num);
                isPrime = false;  //소수가 아니다
            }
        }
            if(isPrime)
                printf("%lu: 소수다.\n",num);
            printf("검사할 또 다른 정수를 하나 입력하시오");
            printf("(끝내려면 q)\n");            
    }
    printf("안녕!\n");
    
    return 0;
}

// - 새로운 수가 입력될 때마다 isPrime이 true로 초기화되도록 for루프 명세에서 콤마연산자를 사용했다.

// <출력문>
// 검사할 정수를 하나 입력하시오(끝내려면 q)
// 123456789
// 3, 41152263 : 둘 다 123456789의 약수다.
// 9, 13717421 : 둘 다 123456789의 약수다.
// 3607, 34227 : 둘 다 123456789의 약수다.
// 3803, 32463 : 둘 다 123456789의 약수다.
// 10821, 11409 : 둘 다 123456789의 약수다.
// 검사할 또 다른 정수를 하나 입력하시오(끝내려면 q)
// 149
// lu: 소수다.
// 검사할 또 다른 정수를 하나 입력하시오(끝내려면 q)
// 2013
// 3, 671 : 둘 다 2013의 약수다.
// 11, 183 : 둘 다 2013의 약수다.
// 33, 61 : 둘 다 2013의 약수다.
// 검사할 또 다른 정수를 하나 입력하시오(끝내려면 q)
// q
// 안녕!