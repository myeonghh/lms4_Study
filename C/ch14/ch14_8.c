// <14.8>
// names1.c -- 구조체를 가리키는 포인터를 사용한다

#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char * st, int n);

int main(void)
{
    struct namect person;
    
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    return 0;
}

void getinfo (struct namect * pst)
{
    printf("이름을 입력하시오.\n");
    s_gets(pst->fname, NLEN);
    printf("성씨를 입력하시오.\n");
    s_gets(pst->lname, NLEN);
}

void makeinfo (struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo (const struct namect * pst)
{
    printf("%s %s, 당신의 성명은 %d개의 글자를 가지고 있습니다.\n",
           pst->fname, pst->lname, pst->letters);
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // 개행을 찾는다
        if (find)                  // 주소가 NULL이 아니면,
            *find = '\0';          // 널문자를 거기에 놓는다.
        else
            while (getchar() != '\n')
                continue;          // 행의 나머지를 처리한다.
    }
    return ret_val;
}

// - 이 프로그램은 main()에서 호출하는 세 개의 함수에 작업을 분담시킨다. 각각의 경우에, person 구조체의 주소가 함수에 전달된다.
// - getinfo() 함수는 그 자체에서 main()에 정보를 전달한다. 이 함수는 사용자로부터 이름과 성씨를 얻어, person 구조체에 넣는다. 이때 person 구조체를 pst포인터를 사용하여 찾는다.
// - getinfo() 함수가 main()에 정보를 제공하고 있지만, 이 함수는 return 문 방식을 취하지 않으므로 void형 함수이다.
// - makeinfo() 함수는 양방향 정보 전달을 수행한다. 이 함수는 person을 가리키는 포인터를 사용하여, 그 구조체에 저장된 이름과 성씨를 찾는다.
// - 이 함수는 strlen()을 사용하여, 이름과 성씨를 이루고 있는 글자 수를 가각 구하여 더한 후, person의 주소를 사용하여 그 합을 저장한다.
// - 마지막으로, showinfo() 함수는 포인터를 사용하여 출력할 정보를 찾는다.
// - 여기서 getinfo()는 자체에서 호출 함수로 정보를 전달 했고, showinfo()는 호출 함수로부터 자체로 정보를 전달했고, makeinfo()는 이 두가지를 다 수행했다.

// <출력문>
// 이름을 입력하시오.
// Viola
// 성씨를 입력하시오.
// Plunderfest
// Viola Plunderfest, 당신의 성명은 16개의 글자를 가지고 있습니다.