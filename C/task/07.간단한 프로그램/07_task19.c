// 간단한 프로그램 함수로 구현하기 19
// 트리 만들기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void star1(void);
void star2(void);

int main (void)
{
    while (1)
    {
        star1();
        sleep(1);
        system("clear");
        star2();
        sleep(1);
        system("clear");
    }
    
    return 0;
}

void star1(void)
{
    for (int i = 1; i < 5; i++)
    {
        if(i == 1)
        {
            for (int j = 1; j < i + 6; j++)
                printf(" ");
            printf("☆\n");
        }
        for (int j = 1; j < 9-(i*2); j++ )
        {
            printf(" ");
        }

        for (int k = 1; k < i*2; k++)
        {
            printf("■■");
        }
        printf("\n");
    }        

}
void star2(void)
{
    for (int i = 1; i < 5; i++)
    {
        if(i == 1)
        {
            for (int j = 1; j < i + 6; j++)
                printf(" ");
            printf("★\n");
        }
        for (int j = 1; j < 9-(i*2); j++ )
        {
            printf(" ");
        }

        for (int k = 1; k < i*2; k++)
        {
            printf("■■");
        }
        printf("\n");
    }
}