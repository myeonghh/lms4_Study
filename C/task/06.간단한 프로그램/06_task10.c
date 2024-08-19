// 간단한 프로그램 함수로 구현하기 10
// 화살표 만들기

#include <stdio.h>

int main(void)
{
    int i,j,k,l;
    int num;
    printf("입력 >>");
    scanf("%d",&num);
    if (num % 2 == 0)
        num = num -1;

    for(i=0;i<num;i++)
    {
        for(j=0;j<num-i;j++)
        {
            printf("   ");
        }
        for(k=0; k<2*i+1;k++)
        {
            printf(" * ");
        }
        for(l=0;l<num-i;l++)
        {
            printf("   ");
        }
        printf("\n");
    }
    for(i = 0; i<num; i++)
    {
        for(j=0;j<num/2+1;j++)
        {
            printf("   ");
        }
        for(k=0;k<num;k++)
        {
            printf(" * ");
        }
        for(l=0;l<3;l++)
        {
            printf("   ");
        }
        printf("\n");
    }
}

// <실행 결과>
// 입력 >>8
//                       *                      
//                    *  *  *                   
//                 *  *  *  *  *                
//              *  *  *  *  *  *  *             
//           *  *  *  *  *  *  *  *  *          
//        *  *  *  *  *  *  *  *  *  *  *       
//     *  *  *  *  *  *  *  *  *  *  *  *  *    
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          
//              *  *  *  *  *  *  *          