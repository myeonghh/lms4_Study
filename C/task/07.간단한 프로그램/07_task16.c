// 간단한 프로그램 함수로 구현하기 16
// 달력만들기
// 년월을 (원하는 방식으로) 입력받아
// 해당 년도와 월을 출력하세요.

#include <stdio.h>

int main(void)
{
    int y,m,day=0,a,ye,yoon,back,saback,sp=0,i,j,dd=0;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};


    printf("년을 입력하세요");
    scanf("%d",&y);
    printf("월을 입력하세요");
    scanf("%d",&m);
    //1월 2화 3수 4목 5금 6토 0일

    yoon=y/4;
    back=y/100;
    saback=y/400;
    
    yoon=yoon-back+saback;

    if( y % 4 ==0 && m <= 2 )
        yoon=yoon-1;

    for(a=0; a<m-1;a++)
        day= day+days[a];
        ye=y*365+day+yoon;

    printf("   --------%d년 %d월--------\n",y,m);
    printf("   일  월  화  수  목  금  토\n");
    
    if(m==2 && y%4==0 && y%100==0 && y%400==0)
        days[1]=29;
    else if(y%4==0 && y%100==0)
        days[1]=28;
    else if(y%4==0)
        days[1]=29;

    for(i=0;i<6;i++)
    {
        for(j=0;j<7;j++)
        {   
            if(sp < ye%7)
            {
            printf("    ");
            sp=sp+1;}
            else if (dd == days[m-1])
                break;
            
            else
            {dd=dd+1;
            printf("%4d",dd);}
        }
        printf("\n");
    }


    return 0;
}

// <실행 결과>
// 년을 입력하세요2018
// 월을 입력하세요9
//    --------2018년 9월--------
//    일  월  화  수  목  금  토
//                            1
//    2   3   4   5   6   7   8
//    9  10  11  12  13  14  15
//   16  17  18  19  20  21  22
//   23  24  25  26  27  28  29
//   30