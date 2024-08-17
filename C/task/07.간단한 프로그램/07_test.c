#include <stdio.h>
#include <time.h>
 
#define RESETTEXT "\x1B[0m" // Set all colors back to normal.
#define FOREMAG "\x1B[35m"  // Magenta
#define FORERED "\x1B[31m"  // Red
 
#define DAY_OF_WEEK_SIZE 7
const static char *DAY_OF_WEEK[DAY_OF_WEEK_SIZE] = {
    "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
 
// struct tm *localtime(const time_t *timeval);
 
// struct tm {
//         int tm_sec;   //초
//         int tm_min;   //분
//         int tm_hour;  //시
//         int tm_mday;  //일
//         int tm_mon;   //월(0부터 시작)
//         int tm_year;  //1900년부터 흐른 년
//         int tm_wday;  //요일(0부터 일요일)
//         int tm_yday;  //현재 년부터 흐른 일수
//         int tm_isdst;
// };
 
int main()
{
    time_t current;
    time(&current);
    struct tm *t = localtime(&current);
 
    printf("\n\n1.\n");
    switch (t->tm_wday)
    {
    case 0:
        printf("일요일 ");
        break;
    case 1:
        printf("월요일 ");
        break;
    case 2:
        printf("%s", DAY_OF_WEEK[t->tm_wday]);
        break;
    case 3:
        printf("수요일 ");
        break;
    case 4:
        printf("목요일 ");
        break;
    case 5:
        printf("금요일 ");
        break;
    case 6:
        printf("토요일 ");
        break;
    }
 
 
    printf("\n\n2.\n");
    printf("%d:%d:%d\n", t->tm_hour, t->tm_min, t->tm_sec);
    printf("1년 365일 중 %d일째", t->tm_yday + 1);
 
    
    printf("\n\n3.\n");
    printf("        💰 Lotto 6/45 💰");
    printf(FOREMAG);
    printf("\n");
    printf("발행일:");
    printf("%d", t->tm_year + 1900);
    printf("/");
    printf("%02d", t->tm_mon + 1);
    printf("/");
    printf("%02d", t->tm_mday);
    printf("(");
    printf("%s", DAY_OF_WEEK[t->tm_wday]);
    printf(") ");
    printf("%02d", t->tm_hour);
    printf(":");
    printf("%02d", t->tm_min);
    printf(":");
    printf("%02d", t->tm_sec);
    printf("\n");
    printf(RESETTEXT);
 
    return 0;
}