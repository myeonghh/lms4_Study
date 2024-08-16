// 간단한 프로그램 함수로 구현하기 5
// 사용자가 도형 모양을 숫자로 선택하고, 해당 번호 도형을 출력하도록 프로그램을 구현하라

#include <stdio.h>
void star1(void);
void star2(void);
void star3(void);
void star4(void);
void star5(void);
void star6(void);
void star7(void);

int main(void) 
{   
    puts("1번");
    star1();
    puts("2번");
    star2();
    puts("3번");
    star3();
    puts("4번");
    star4();
    puts("5번");
    star5();
    puts("6번");
    star6();
    puts("7번");
    star7();

    return 0;
}

void star1(void)
{
    int i, j;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 1; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void star2(void)
{
    int i, j, k;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 1; j < 7-i; j++)
        {
            printf(" ");
        }
    for (k = 1; k < i+1; k++)
        {
            printf("*");
        }        
        printf("\n");
    }
}

void star3(void)
{
    int i, j    ;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 1; j < 8-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void star4(void)
{
    int i, j, k;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }
    for (k = 1; k < 8-i; k++)
        {
            printf("*");
        }        
        printf("\n");
    }
}

void star5(void)
{
    int i, j, k;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 1; j < 7-i; j++)
        {
            printf(" ");
        }
    for (k = 1; k < (i*2); k++)
        {
            printf("*");
        }        
        printf("\n");
    }
}

void star6(void)
{
    int i, j, k;
    
    for (i = 1; i < 7; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }
    for (k = 1; k < 14-(i*2); k++)
        {
            printf("*");
        }        
        printf("\n");
    }
}

void star7(void)
{
    int i, j, k;
    
    for (i = 1; i < 4; i++)
    {   
        for (j = 6-i; j > 0; j--)
        {
            printf(" ");
        }
        for (k = 1; k < i*2; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < i+3; j++)
        {
            printf(" ");
        }
        for (k = 1; k < 8-(i*2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}