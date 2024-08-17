// 과제 36
// 10부터 1까지의 수를 배열에 저장하고 출력하는 순서도와 C 프로그램 을 작성하여라

#include <stdio.h>

int main(void)

{
    int a[10];
    int i;

    for(i=0;i<10;i++)
        {
            a[i]=10-i;
            printf("%3d",a[i]);
        }
}

// <실행 결과>
// 10  9  8  7  6  5  4  3  2  1