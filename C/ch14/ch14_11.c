// <14.11>
// complit.c -- 복합 리터럴

#include <stdio.h>
#define MAXTITL  41
#define MAXAUTL  31

struct book {          // 구조체 템플릿: book은 태그이다.
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book readfirst;
    int score;
    
    printf("테스트 스코어를 입력하시오: ");
    scanf("%d",&score);
    
    if(score >= 84)
        readfirst = (struct book) {"Crime and Punishment", // ==> 구조체의 복합 리터럴
            "Fyodor Dostoyevsky",
            11.25};
    else
        readfirst = (struct book) {"Mr. Bouncy's Nice Hat",  // ==> 구조체의 복합 리터럴
            "Fred Winsome",
            5.99};
    printf("할당된 독서:\n");
    printf("%s by %s: $%.2f\n",readfirst.title,
           readfirst.author, readfirst.value);
    
    return 0;
}
// - 복합 리터럴은 단순히 임시 구조체 값만 필요할때 간편하게 사용할 수 있다.
// - 예를 들면 복합 리터럴은 함수의 전달인자로 사용되는 구조체나 다른 구조체에 대입되는 구조체를 생성하는데 사용할 수 있다.
// - (struct book){"The Idiot", "Fyodor Dostoyevsky", 6.99} 
// - 위와 같은 형식으로 중괄호로 둘러싼 초기화자 리스트 앞에, 괄호로 둘러싼 데이터형 이름을 위치시킨다.

// <출력문>
// 테스트 스코어를 입력하시오: 80
// 할당된 독서:
// Mr. Bouncy's Nice Hat by Fred Winsome: $5.99