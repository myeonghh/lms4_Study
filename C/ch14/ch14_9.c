// <14.9>
// names2.c -- 구조체 자체를 전달하고 리턴한다.

#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char * s_gets(char * st, int n);

int main(void)
{
    struct namect person;
    
    person = getinfo();
    person = makeinfo(person);
    showinfo(person);
    
    return 0;
}

struct namect getinfo(void)
{
    struct namect temp;
    printf("이름을 입력하시오.\n");
    s_gets(temp.fname, NLEN);
    printf("성씨를 입력하시오.\n");
    s_gets(temp.lname, NLEN);
    
    return temp;
}

struct namect makeinfo(struct namect info)
{
    info.letters = strlen(info.fname) + strlen(info.lname);
    
    return info;
}

void showinfo(struct namect info)
{
    printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
           info.fname, info.lname, info.letters);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // 개행을 찾는다.
        if (find)                  // 주소가 NULL이 아니면
            *find = '\0';          // 널 문자를 거기에 놓는다
        else
            while (getchar() != '\n')
                continue;          // 행의 나머지를 처리한다.
    }
    return ret_val;
}

// - 이 버전도 앞의버전과 동일한 결과를 만들지만, 구조체 자체를 전달인자로 사용한 것이다.
// - 이 경우 세 함수들이 제각기 person의 복사본을 만든다. 그래서 프로그램은 하나가 아니라 서로 구별되는 4개의 구조체를 사용한다.
// - 각자 복사본을 가지고 작업한 뒤 구조체를 리턴값으로 주어서 그 리턴값을 main함수의 원본 구조체(person)에 대입한다.

// - <전달인자로 구조체를 사용할까? 구조체 포인터를 사용할까?>
// - 구조체 포인터를 전달인자로 사용하는 방식은 주소 하나만 전달하기 때문에 빠르지만, 데이터 보호가 부족하다는 단점이 있다.
// - 피 호출 함수에서 수행하는 어떤 동작이 원본 구조체에 들어 있는 데이터에 엉뚱한 영향을 줄 수 있다. const 제한자로 그 문제를 해결할 수 있다.
// - 구조체를 전달인자로 전달하는 방식은 안전하고, 프로그래밍 스타일이 좀 더 명확하다는 장점이 있지만, 시간과 공간을 낭비할 수 있다는 단점이 있다.
// - 구조체 안에 있는 한두 개의 멤버만 사용하는 함수의 경우에는 포인터를 전달하거나 필요한 멤버들만 개별적인 전달인자로 전달하는것이 바람직하다.