// 간단한 프로그램 함수로 구현하기 8
// 꽉찬 다이아몬드 만들기

#include <stdio.h>
void makeDm(int);
int makeOddNum(int);

int main(void)
{
    int num;
    printf("정수 입력('0'이하 입력시 종료):");
    scanf("%d", &num);
    num = makeOddNum(num);

    while (num > 0)
    {
        makeDm(num);
        printf("정수 입력('0'이하 입력시 종료):");
        scanf("%d", &num);
        num = makeOddNum(num);
    }
    return 0;
}

void makeDm(int n)
{
    int frontN, backN, i, j, k, l;

    frontN = (n / 2) + 1;
    backN = n - frontN;

    for (i = 1; i <= frontN; i++)
    {
        for (j = 1; j <= frontN-i; j++)
        {
            printf(" ");
        }
        for (k = 1; k < i*2; k++)
        {
            printf("X");
        }
        for (l = 1; l <= frontN-i; l++)
        {
            printf(" ");
        }
        printf("\n");
    } 

    for (i = 1; i <= backN; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= n-(i*2); k++)
        {
            printf("X");
        }
        for (l = 1; l <= i; l++)
        {
            printf(" ");
        }
        printf("\n");
    }
}

int makeOddNum(int n)
{
   return (n % 2 == 0)? n - 1 : n;
}

// <실행 결과>
// 정수 입력('0'이하 입력시 종료):15
//        X       
//       XXX      
//      XXXXX     
//     XXXXXXX    
//    XXXXXXXXX   
//   XXXXXXXXXXX  
//  XXXXXXXXXXXXX 
// XXXXXXXXXXXXXXX
//  XXXXXXXXXXXXX 
//   XXXXXXXXXXX  
//    XXXXXXXXX   
//     XXXXXXX    
//      XXXXX     
//       XXX      
//        X       
// 정수 입력('0'이하 입력시 종료):0