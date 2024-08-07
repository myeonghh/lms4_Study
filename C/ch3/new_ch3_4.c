#include <stdio.h>

int main(void)
{
	unsigned int a;
    // 0 ~ 4,294,967,295

    // %d (signed) int MAX, MIN
    // %d unsigned int MAX 출력이 안됨
    // %u unsigned int MAX 출력됨

	a = 4294967295;        // 큰 양수 저장
	printf("%d\n", a);     // %d로 출력 (%d 부호 고려해서 출력 => %d는 음수 양수 둘다 포함하니까 4294967295이 지정된 -1로 표시)

    a = 4294967295;        // 큰 양수 저장
	printf("%u\n", a);     // %u로 출력 (%u 부호 무시해서 양수로 출력 => %u는 부호 무시 양수만 포함하니까 4294967295이 지정된 4294967295로 그대로 표시)

	a = -1;                // 음수 저장
	printf("%u\n", a);     // %u로 출력

	return 0;
}
