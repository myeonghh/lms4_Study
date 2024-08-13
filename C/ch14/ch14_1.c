// <14.1>
// book.c -- 관리하는 도서가 하나뿐인 도서 목록

#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n); // s_gets 함수 선언
#define MAXTITL  41      /* 최대 책 제목 길이 + 1 */
#define MAXAUTL  31      /* 최대 저자명 길이 + 1 */

struct book {            /* 구조체 템플릿: 태그는 book이다 */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};                       /* 구조체 템플릿의 끝  */

int main(void)
{
    struct book library; /* libarary를 book형 변수로 선언한다  */
    
    printf("도서 제목을 입력하시오.\n");
    s_gets(library.title, MAXTITL); /* 책 제목(title) 부분에 접근한다 */
    printf("저자명을 입력하시오.\n");
    s_gets(library.author, MAXAUTL);
    printf("정가를 입력하시오.\n");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n",library.title,
           library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author,
           library.title, library.value);
    printf("종료.\n");
    
    return 0;
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
            *find = '\0';          // null 문자를 거기에 둔다
        else
            while (getchar() != '\n')
                continue;          // 행의 나머지를 삭제
    }
    return ret_val;
}
// -  '구조체'란 여러 자료형을 가진 변수들을 하나로 묶어 자료형으로 사용할 수 있도록 정의하는 것을 말한다 
// - 위처럼 'struct' 뒤에 구조체의 이름을 정해주고, 중괄호 블럭 안에 필요한 변수들을 선언하여 사용한다. (struct 구조체명{필드})
// -  정의한 구조체를 사용하려면 그 구조체를 변수로 선언해야 한다. 그러기 위해서 뒤에 변수명을 붙여 구조체의 변수로 선언해주는 작업이 필요하다.(struct 구조체명 변수명;)
// - 예제 <14.1>에서 만든 구조체는 멤버 또는 필드라고 부르는 세 부분을 가지고 있다.(책 제목, 저자명, 정가)

// <출력문>
// 도서 제목을 입력하시오.
// Chiken of the Andes
// 저자명을 입력하시오.
// Disma Lapoult
// 정가를 입력하시오.
// 22.99
// Chiken of the Andes by Disma Lapoult: $22.99
// Disma Lapoult: "Chiken of the Andes" ($22.99)
// 종료.