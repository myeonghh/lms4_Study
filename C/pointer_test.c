#include <stdio.h>
 
void main()
{
    //  int 범위: -2,147,483,648 ~ 2,147,483,647
    //  16진수:1a2b3c4d == 10진수:   439,041,101
    //  16진수:7fffffff == 10진수: 2,147,483,647

    //1. 16진수 0x1a2b3c4d 값을, int 자료형 변수 iHexNum에 저장
    int iHexNum = 0x1a2b3c4d; // int int_max = 0x7fffffff;
    printf("1. 16진수 0x1a2b3c4d 값을, int 자료형 변수 iHexNum에 저장\n");
    printf("iHexNum size: %ld Byte, int iHexNum = %x;\n\n", sizeof iHexNum, iHexNum);


    // 2. iHexNum 변수에 대입한 16진수 0x1a2b3c4d 값을 출력
    printf("2. iHexNum 값 10진수, 16진수 출력\n");
    printf("iHexNum 변수의 10진수 값 = %d, 16진수 값 = %x;\n\n", iHexNum, iHexNum);

    // 3 포인터의 크기 출력
    char* ptr1 = (char*)&iHexNum;
    int  *ptr2 = &iHexNum;
    printf("3. iHexNum 변수 주소가 할당된,\n   int형 포인터 변수 prt1, char 형 포인터 변수 prt2 크기 출력\n");
    printf("char* ptr1 크기 = %ld Byte;\nint*  ptr2 크기 = %ld Byte;\n\n", sizeof ptr1, sizeof ptr2);
 
 
    // 4. 
    char* ptr = (char*)&iHexNum;
    printf("4. char* 포인터 변수 ptr 에 iHexNum 주소를 저장;\n");
    printf("char* ptr = &iHexNum;\n");
    printf("char* ptr = %p;\n\n", ptr);
    printf("ptr + 0 == %p\n", ptr + 0);
    printf("ptr + 1 == %p\n", ptr + 1);
    printf("ptr + 2 == %p\n", ptr + 2);
    printf("ptr + 3 == %p\n", ptr + 3);
 
 
    // 5. 포인터 변수 ptr 위치에 들어있는 값을 1바이트씩 16진수로 출력(1)
    //    포인터 (연산)
    printf("\n4. 포인터 변수 ptr 에 들어있는 1바이트씩 출력(1)\n");
    printf("(ptr+0) == %p\n",(ptr + 0));
    printf("(ptr+1) == %p\n",(ptr + 1));
    printf("(ptr+2) == %p\n",(ptr + 2));
    printf("(ptr+3) == %p\n",(ptr + 3));

}