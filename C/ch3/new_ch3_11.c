#include <stdio.h>

int main(void)
{
	char grade;               // 학점을 입력할 변수
	char name[20];            // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade);      // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);        // name 배열에 이름 문자열 입력, &를 사용하지 않는다.
	printf("%s의 학점은 %c입니다.\n", name, grade);

    // 배열의 이름은 애초에 주소값을 가르키기 때문에 scanf를 사용할때 &를 앞에 붙이지 않는다.
    // 변수는 주소값과 그 주소값에 들어있는 0101 덩어리를 의미하기 대문에 scanf를 사용할때 &를 앞에 붙여주어야 한다.
	return 0;
}