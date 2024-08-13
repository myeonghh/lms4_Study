// <14.2>
// manybook.c -- 여러 권의 책을 관리하는 도서 목록

#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100  // 책의 최대 권 수

struct book{        // book 템플릿을 설정한다.
    char title[MAXTITL];
    char author[MAXAUTL];
    double value;
};

int main(void)
{
    struct book library[MAXBKS];    // book 구조체의 배열
    int count = 0;
    int index;

    printf("도서 제목을 입력하시오.\n");
    printf("끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        printf("저자명을 입력하시오.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("정가를 입력하시오.\n");
        scanf("%lf", &library[count++].value);
        while (getchar() != '\n')
            continue;               // 입력 라인을 깨긋이 비운다
        if (count < MAXBKS)
            printf("다음 타이틀을 입력하시오.\n");
    }

    if (count > 0)
    {
        printf("다음은 소장하고 있는 도서들의 목록입니다:\n");
        for (index = 0; index < count; index++)
            printf("%s by%s: $%.2lf\n", library[index].title, library[index].author, library[index].value);
    }
    else
        printf("책이 한 권도 업서요? 야, 장하다 장해.\n");
    
    return 0;
}

char * s_gets(char * st, int n)
{
    char *ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');    // 개행을 찾는다
        if (find)                   // 주소가 NULL이 아니면,
            *find = '\0';               // 널문자를 거기에 놓는다
        else
            while (getchar() != '\n')
                continue;               // 행의 나머지를 처리한다.
    }
    return ret_val;
}

// - 구조체의 배열을 선언하는 것은, 다른 종류의 배열을 선언하는 것과 같다.
// - struct book library[MXBKS];
// - 이것은 MAXBKS개의 원소를 가지는 배열 library를 선언한다. 이 배열의 각 원소들은 book형의 구조체다.
// - 그러므로 library[0]은 하나의 book 구조체이고, library[1]도 하나의 book 구조체이다.
// - library[0].value ==> 배열 첫 번째 구조체의 value 멤버(필드)를 나타낸다.

// library  ==> book 구조체의 배열
// library[2]  ==> 배열의 한 원소, 그러므로 하나의 book 구조체
// library[2].title  ==> char형 배열, (library[2]의 title 멤버)
// library[2].title[4] ==> title 멤버 배열의 한 문 

// <출력문>
// 도서 제목을 입력하시오.
// 끝내려면 라인의 시작 위치에서 [enter] 키를 누르시오.
//  My Life as a Budgie
// 저자명을 입력하시오.
// Mack Zackles
// 정가를 입력하시오.
// 12.95
// (중략)
// 다음은 소장하고 있는 도서들의 목록입니다:
// My Life as a Budgie byMack Zackles: $12.95
// Thought and Unthought Rethought byKindra Schlagmeyer: $43.50
// C++ Primer Plus byStephen Prata: $59.99
// Coping with Coping byDr.Rubin Thonkwacker: $0.02
// Murder Wore a Bikini byMickey Splats: $18.95