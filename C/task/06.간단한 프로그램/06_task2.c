// 간단한 프로그램 함수로 구현하기 2
// 사용자가 사각형의 넓이, 원의 넓이, 삼각형의 넓이, 원의 둘레를 선택하고 자동 계산되도록 구현하라.
// 그리고 계산에 필요한 값을 입력받고, 그 결과를 출력하는 프로그램을 구현하라.

// 사각형의 넓이 = 가로의 길이 × 세로의 길이
// 삼각형의 넓이 = (1/2) 밑변 × 높이
// 원의 넓이 = 반지름 × 반지름 × 원주율
// 원둘레 = 2 X 원주율 X 반지름


#include <stdio.h>
double figureCal(int n);

int main(void)
{
    int num, scan;
    double res;
    while (1)
    {            
        printf("\n\n구하고 싶은 번호를 입력하세요.\n");
        printf("사각형의 넓이(1), 삼각형의 넓이(2), 원의 넓이(3), 원 둘레(4) : ");
        
        scan = scanf("%d", &num);
      
        if(scan != 1 || num < 1 || num > 4)
        {
            printf("번호를 제대로 입력하세요.");
            getchar();
            continue;
        }

        res = figureCal(num);
        printf("계산 결과 : %.2f", res);
    }
    return 0;
}

double figureCal(int n)
{
    const double pi = 3.141592;
    int width, height, radius;
    double result;

    switch (n)
    {
    case 1:
        printf("밑변과 높이를 입력하세요\n");
        printf("밑변: ");
        scanf("%d", &width);
        printf("높이: ");
        scanf("%d", &height);

        result = width * height;
        break;
    case 2:
        printf("밑변과 높이를 입력하세요\n");
        printf("밑변: ");
        scanf("%d", &width);
        printf("높이: ");
        scanf("%d", &height);

        result = (width * height) / 2;
        break;
    case 3:
        printf("반지름을 입력하세요: ");
        scanf("%d", &radius);
        
        result = radius * radius * pi;
        break;
    case 4:
        printf("반지름을 입력하세요: ");
        scanf("%d", &radius);
        
        result = radius * pi * 2;
        break;
    default:
        break;
    }
    return result;
}

// <실행 결과>
// 구하고 싶은 번호를 입력하세요.
// 사각형의 넓이(1), 삼각형의 넓이(2), 원의 넓이(3), 원 둘레(4) : 1
// 밑변과 높이를 입력하세요
// 밑변: 8
// 높이: 5
// 계산 결과 : 40.00

// 구하고 싶은 번호를 입력하세요.
// 사각형의 넓이(1), 삼각형의 넓이(2), 원의 넓이(3), 원 둘레(4) : 2
// 밑변과 높이를 입력하세요
// 밑변: 7
// 높이: 4
// 계산 결과 : 14.00

// 구하고 싶은 번호를 입력하세요.
// 사각형의 넓이(1), 삼각형의 넓이(2), 원의 넓이(3), 원 둘레(4) : 3
// 반지름을 입력하세요: 7
// 계산 결과 : 153.94

// 구하고 싶은 번호를 입력하세요.
// 사각형의 넓이(1), 삼각형의 넓이(2), 원의 넓이(3), 원 둘레(4) : 4
// 반지름을 입력하세요: 7
// 계산 결과 : 43.98