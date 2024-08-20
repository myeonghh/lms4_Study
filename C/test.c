#include <stdio.h>

void main()
{
    int iNum = 90;
    int *p_iNum = &iNum;
    printf("p_iNum 포인터 변수 값: %p\n", p_iNum);

    int iVar = *p_iNum;
    printf("iVar 변수 값: %d\n", iVar);
    printf("포인터 변수는 역참조를 위해 존재한다.\n");
}
