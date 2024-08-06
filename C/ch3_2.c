/* print1.c-displays some properties of printf() */

#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;
    
    // %d => 정수, %f => 실수
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two );
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten, 1, 2 );  // forgot 2 arguments  ====> %d 와 1대1로 맞춰지지 않으면 오류 발생
    
    return 0;
}