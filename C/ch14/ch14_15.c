// <14.15>
// enum.c -- 열거된 상수들을 사용한다.
#include <stdio.h>
#include <string.h>    // strcmp(), strchr()를 사용하기 위해
#include <stdbool.h>   // C99 기능
char * s_gets(char * st, int n);

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow",
                         "green", "blue", "violet"};
#define LEN 30

int main(void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;
    
    puts("컬러를 입력하시오(끝내려면 빈 라인):");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
    {
        for (color = red; color <= violet; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                color_is_found = true;
                break;
            }
        }
        if (color_is_found)
            switch(color)
        {
            case red    : puts("장미는 red.");
                break;
            case orange : puts("양귀비는 orange.");
                break;
            case yellow : puts("해바라기는 yellow.");
                break;
            case green  : puts("잔디는 green.");
                break;
            case blue   : puts("블루벨은 blue.");
                break;
            case violet : puts("제비꽃은 violet.");
                break;
        }
        else
            printf("%s 컬러는 잘 모르겠습니다.\n", choice);
        color_is_found = false;
        puts("다음 컬러를 입력하시오(끝내려면 빈 라인):");
    }
    puts("안녕!");
    
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
        if (find)                  // 주소가 NULLdl dkslaus
            *find = '\0';          // 널 문자를 거기에 놓는다
        else
            while (getchar() != '\n')
                continue;          // 행의 나머지를 처리한다.
    }
}
// - enum 키워드를 사용하여 새로운 데이터형을 만들고, 그 데이터형이 가질 수 있는 값들을 지정할 수 있다.
// - enum 상수들은 사실상 int형이다. 그러므로 int형을 사용할 수 있는 곳이라면 어디라도 그것을 사용할 수 있다.
// - 열거형의 목적은 프로그램의 가독성을 높이는 것이다.
// - enum spectrum {red,orange, yellow, green, blue, violet};, enum spectrum color;
// - 첫 번째 선언은 spectrum을 태그 이름으로 설정한다. 이것은 enum spectrum을 데이터형 이름으로 사용할 수 있게 한다.
// - 두 번째 선언은 color를 그 데이터형의 변수로 만든다. 중괄호({})안에 있는 식별자들은 spectrum 변수가 가질 수 있는 가능한 값들을 열거한다.

// - 열거된 리스트에 있는 상수들은, 기본 설정(디폴트)로 정수값 0, 1, 2, 3 등으로 대입된다.
// - enum kids {nippy, slats, skippy, nina, liz}; 이 열거형 선언에서 nina는 기본적으로 값 3을 갖게 만든다.
// - 열거된 상수들이 사용자가 원하는 정수값을 갖도록 지정할 수 있다.
// - enum levels {low = 100, medium = 500, high = 2000};
// - 한 상수에만 값을 지정하고 그 다음 상수들에는 지정하지 않으면, 그 다음 사수들에는 연속적으로 수가 매겨진다.


// <출력문>
// 컬러를 입력하시오(끝내려면 빈 라인):
// blue
// 블루벨은 blue.
// 다음 컬러를 입력하시오(끝내려면 빈 라인):
// orange
// 양귀비는 orange.
// 다음 컬러를 입력하시오(끝내려면 빈 라인):
// purple
// purple 컬러는 잘 모르겠습니다.
// 다음 컬러를 입력하시오(끝내려면 빈 라인):

// 안녕!