// 과제 42
// 내림차순 데이터 집합에 대한 이진 탐색을 하는 순서도와 C 프로그램 을 작성하여라  

#include <stdio.h>
int main(void)
{   
    int num, midIndex, start, end, i;
    int numList[10] = {80, 76, 75, 63, 57, 39, 27, 26, 18, 11};
    printf("찾고자 하는 숫자를 입력하세요: ");
    scanf("%d", &num);

    start = 0;
    end = sizeof numList / sizeof(int);

    while (1)
    {
        midIndex = start + ((end - start) / 2);

        if (numList[midIndex] > num){
            start = midIndex + 1;
        } 
        else if (numList[midIndex] < num){
            end = midIndex;
        }
        else{
            printf("%d 번째 인덱스에서 탐색 성공!", midIndex);
            break;
        }
        if (end - start == 0)
        {
            printf("탐색 실패\n");
            break;
        }
    }
    return 0;
}