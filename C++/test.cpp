#include <iostream>

class Timer {
private:
    int h, m, s; // 시, 분, 초

public:
    // 기본 생성자: 모두 0으로 초기화
    Timer() : h(0), m(0), s(0) {}

    // 초 단위로 초기화
    Timer(int s_) : h(0), m(0), s(s_) {}

    // 분과 초 단위로 초기화
    Timer(int m_, int s_) : h(0), m(m_), s(s_) {}

    // 시, 분, 초 단위로 초기화
    Timer(int h_, int m_, int s_) : h(h_), m(m_), s(s_) {}

    // 시간 출력 함수
    void printTime() {
        std::cout << h << "시간 " << m << "분 " << s << "초" << std::endl;
    }
};

int main() {
    Timer t1; // 기본 생성자
    Timer t2(45); // 45초 초기화
    Timer t3(3, 45); // 3분 45초 초기화
    Timer t4(1, 30, 45); // 1시간 30분 45초 초기화

    t1.printTime();
    t2.printTime();
    t3.printTime();
    t4.printTime();

    return 0;
}