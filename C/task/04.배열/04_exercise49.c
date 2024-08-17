// 예제49
// 병합 정렬 알고리즘
// 임의의 리스트 2개에 요소를 원하는 만큼 무작위로 넣고, 병 정렬 알고리즘을 구현하여 정렬하세요.

#include <stdio.h>

int main(void)
{
    int a[5] ={1,5,4,2,3};
    int b[5] ={10,7,9,8,6};
    int m[10] ={0};
    int i,j,l,c;
    for(l=0;l<6;l++)
    {
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]>a[j])
                c = a[j];
        }
    }
     m[l]=c;
        printf("%d",m[i]);
    }

    return 0;
}

