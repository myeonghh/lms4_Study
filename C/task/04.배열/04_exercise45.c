// 예제45
// 선형 탐색 알고리즘
// 임의의 숫자를 10개를 요소로 가지는 리스트를 만들고, 키 값을 입력했을 때 인덱스를 찾아 출력하는 선형 탐색 알고리즘을 구현하라.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[10],i,key,b;
    printf("key값을 입력하세요: ");
    scanf("%d",&key);
    b=1;
    for(i=0;i<10;i++)
        a[i]=rand()%100;

    for(i=0;i<10;i++)
        {if(a[i] == key)
            {printf("%d는 배열 %d 에 존재합니다.\n",key,i+1);
                b=0;
            }
        }
    if (b==1)
        printf("탐색 실패");
        printf("배열값은  ");
    for(i=0;i<10;i++)
        printf("%4d",a[i]);
        
}

// <실행 결과>
// key값을 입력하세요: 35
// 35는 배열 6 에 존재합니다.
// 배열값은    83  86  77  15  93  35  86  92  49  21