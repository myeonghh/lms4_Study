// <14.4>
// friends.c -- 구조체를 가리키는 포인터를 사용한다.

#include <stdio.h>
#define LEN 20

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {{ "Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            68112.00
        },
        {{"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            232400.00
        }
    };
    struct guy * him;    /* 구조체를 가리키는 포인터 */
    
    printf("주  소 #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];    /* 포인터에게 가리킬 곳을 알려 준다 */
    printf("포인터 #1: %p #2: %p\n", him, him + 1);
    printf("him->income 은 $%.2f: (*him).income 은 $%.2f\n",
           him->income, (*him).income);
    him++;               /* 포인터 him이 다음 구조체를 가리키게 한다 */
    printf("him->favfood 은 %s:  him->handle.last 은 %s\n",
           him->favfood, him->handle.last);
    
    return 0;
}
// - struct guy * him; 이는 구조체를 가리키는 포인터를 선언하는 방법이다.
// - 처음에 키워드 struct가 오고, 그 다음에 구조체 태그 guy가 오고, 그 다음에 애스터리스크(*)가 오고, 그 다음에 포인터 이름이 온다. 
// - 이 방법은 지금까지 보았던 다른 포인터들의 선언과 동일하다.
// - 이선언은 새로운 구조체를 생성하지 않는다. 다만 이제 포인터 him이 기존의 어떤 guy형 구조체를 가리키도록 할 수 있다.
// - 예를 들면, barney가 guy형의 구조체라면, 다음과 같이 할 수 있다. him = &barney;
// - 배열의 경우와는 달리, 구조체의 이름은 구조체의 주소가 아니다. 그러므로 & 연산자를 사용해야 한다.
// - 구조체의 포인터 뒤에 -> 연산자를 사용하면 구조체의 한 멤버의 값을 얻을 수 있다.
// - barney.income == (*him).income == him -> income 셋 다 모두 같다.(him == &barney 일때)

// <출력문>
// 주  소 #1: 0x7ffda8095b50 #2: 0x7ffda8095ba4
// 포인터 #1: 0x7ffda8095b50 #2: 0x7ffda8095ba4
// him->income 은 $68112.00: (*him).income 은 $68112.00
// him->favfood 은 tripe:  him->handle.last 은 Swillbelly