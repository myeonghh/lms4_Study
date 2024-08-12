#include <stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

int main(void)
{
    int a = 10, b = 20;
    int temp;

    printf("0. a:%d, b:%d\n", a, b);

    temp = a; // temp = 10, a = 10, b = 20  
    a = b;      // temp = 10, a = 20, b = 20
    b = temp; // temp = 10, a = 20, c = 10

    swap1(a, b); // 변수 a, b의 주소값이 아니라 단순히 그 값을 복사한 값이 매개변수로 들어갔기 때문에 main 함수내에서 변수 a, b 값은 바뀌지 않는다.
    printf("1. a:%d, b:%d\n", a, b);

    swap2(&a, &b); // 변수 a, b의 주소값을 매개변수로 넣어서 그 주소값에 있는 값을 직접 바꿔줬기 때문에 main 함수내에서의 변수 a, b 값도 바뀐다.
    printf("2. a:%d, b:%d\n", a, b);

    return 0;
}

void swap1(int a, int b)
{
    int temp;
    temp = a; // temp = 10, a = 10, b = 20
    a = b;      // temp = 10, a = 20, b = 20
    b = temp; // temp = 10, a = 20, c = 10
}

void swap2(int *a, int *b)
{
    int temp;
    temp = *a; // temp = 10, a = 10, b = 20
    *a = *b;   // temp = 10, a = 20, b = 20
    *b = temp; // temp = 10, a = 20, c = 10
}