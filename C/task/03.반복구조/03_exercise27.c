// 예제 27
// 최대공약수 구하기
// 두 정수의 공약수 중 가장 큰 것을 최대공약수라 한다. 
// 그러므로 n1과 n2의 최대공약수는 n1부터 1까지 1씩 감소하는 i로 n1과 n2 모두를 나누어떨어지게 하는 첫 번째 수가 된다. 단, n1이 n2보다 작다고 가정한다.

#include <stdio.h>
int main(void)
{
    int n1, n2, max;
    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &n1, &n2);

    if(n1 < n2){
        for (int i = n1; i > 0; i--){
            if(n1 % i == 0 && n2 % i == 0){
                max = i;
                break;
            }                
        }
    }
    else{
        for (int i = n2; i > 0; i--){
            if(n2 % i == 0 && n1 % i == 0){
                max = i;
                break;
            }                
        }
    }

printf("최대공약수: %d\n", max);

    return 0;
}

// <실행 결과>
// 정수 2개를 입력하세요: 128 24
// 최대공약수: 8