// first.c

// C 주석
// 한줄 주석 쓸 때

/*
여기다가 가운데 많이 씀
여러줄을 한번에
*/
// standard input output을 줄인것, 인풋, 아웃풋 기능을 사용하겠다는 의미(무조건 써야됨)
#include <stdio.h>
// main 함수의 첫번째 코드부터 파일이 시작됨(main 함수가 시작점!!!)
// int => 자료형 (지금 int는 4byte)
// 함수의 반환(return)값에 대한 자료형을 함수명 앞에 적어 주어야 함(int) ==> return 0 이므로
// (void) => 함수의 매개변수값이 없다는 것을 나타냄
// main 함수는 리턴값이 없어도 무조건 '0'을 반환함(자동으로 0을 반환 => 성공), 그래도 명시하는게 맞음
// rturn 0 은 실패하지 않았다는 의미(성공)

int main(void) 
{
    int num; 
    num = 1; 
    // int num = 1;
    // C에서는 기본값이 없음(다른 언어는 기본값이 있음 ex) 'int => 0' ) 무조건 값을 넣어주어야됨(초기화)

    // include <studio.h> 에서 print 기능을 가져옴
    printf("I am a simple "); /* use the printf() function    */
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);

    return 0;
};

// ctrl + shift + i ==> 자동정렬