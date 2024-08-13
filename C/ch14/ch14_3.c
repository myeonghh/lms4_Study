// <14.3>
// friend.c -- 중첩된 구조체를 사용한다.

#include <stdio.h>
#define LEN 20
const char * msgs[5] =
{
    "훌륭한 저녁 대접에 감사드립니다.",
    "당신의 직업이 ",
    "라는 점은 당신이 정말 특별한 분이라는 것을 증명합니다.",
    "우리는 맛있는 ",
    "를 먹고 약간 웃는 것 이상으로 함께했음에 틀림이 없습니다"
};

struct names {                     // 첫 번째 구조체
    char first[LEN];
    char last[LEN];
};

struct guy {                       // 두 번째 구조체
    struct names handle;           // 중첩된 구조체
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow = {   // 구조체 변수의 초기화
        { "Ewen", "Villard" },
        "훈제 연어",
        "성격 코치",
        68112.00
    };
    
    printf("친애하는 %s, \n\n", fellow.handle.first);
    printf("%s%s.\n", msgs[0], fellow.handle.first);
    printf("%s%s\n", msgs[1], fellow.job);
    printf("%s\n", msgs[2]);
    printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
    if (fellow.income > 150000.0)
        puts("!!");
    else if (fellow.income > 75000.0)
        puts("!");
    else
        puts(".");
    printf("\n%40s%s\n", " ", "또 뵈어요,");
    printf("%40s%s\n", " ", "Shalala");
    
    return 0;
}
// - 중첩된 구조체선언을 할때도 그냥 구조체 안에 다른 멤버(필드)를 선언하는것 처럼 똑같이 선언해주면 된다.
// - struct names handle;  ==> 물론 그 파일에 names 구조체의 선언이들어 있어야 한다.
// - 중첩된 구조체의 메머에 접근하려면 도트 연산자를 두 번 사용하면 된다.
// - fellow.handle.first  ==> fellow를 찾는다. 그 다음에 fellow의 handle 멤버를 찾는다. 그 다음에 handle의 first 멤버를 찾는다.

// <출력문>
// 친애하는 Ewen, 
//
// 훌륭한 저녁 대접에 감사드립니다.Ewen.
// 당신의 직업이 성격 코치
// 라는 점은 당신이 정말 특별한 분이라는 것을 증명합니다.
// 우리는 맛있는 훈제 연어를 먹고 약간 웃는 것 이상으로 함께했음에 틀림이 없습니다..
//
//                                         또 뵈어요,
//                                         Shalala