// <4.1>
// talkback.c -- 수다스럽지만, 정보를 주는 프로그램

#include <stdio.h>
#include <string.h>      // strlen() 프로토타입을 사용하기 위해 include해주어야 함
#define DENSITY 62.4     // 신체밀도(입방피트당 파운드 수)
int main()
{
    double weight, volume;
    int size, letters;
    char name[40];        // name은 영문자로 40개를 넣을 수 있는 배열이다.
    
    printf("하이! 이름이 뭐예요?\n");
    scanf("%s", name); // name은 배열이므로 앞에 &를 붙여주지 않아도 된다.
    printf("%s씨, 몸무게는 몇 파운드나 나가요?\n", name);
    scanf("%lf", &weight); // weight은 변수이기 때문에 앞에 주소값을 나타내는 &을 붙여야 한다.
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("옳거니, %s 씨의 몸은 %.2lf 입방피트를 차지합니다.\n",
           name, volume);
    printf("그리고 이름이 %d 글자니까,\n", letters);
    printf("저장하려면 %d 바이트가 필요합니다.\n", size);
    
    return 0;
}
// - 문자열을 저장하기 위해서는 문자 자료형의 배열을 사용해야 한다.
// - 문자열의 입출력을 다루기 위해서는 %s 변환지정자를 사용해야 한다.
// - 문자열의 전달인자는 배열(array)이기 때문에 앞에 & 를 붙이지 않는다.(일반 변수는 & 붙여주어야함)
// - strlen() 함수를 사용하면 문자열의 길이를 알아낼 수 있다.(문자열 마지막의 null 값은 길이에서 제외한다.) 

// <출력문>
// 하이! 이름이 뭐예요?
// christine
// christine씨, 몸무게는 몇 파운드나 나가요?
// 154
// 옳거니, christine 씨의 몸은 2.47 입방피트를 차지합니다.
// 그리고 이름이 9 글자니까,
// 저장하려면 40 바이트가 필요합니다.