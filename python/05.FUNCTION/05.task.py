#과제35 함수를 이용해서 두 수중 작은 수를 찾는 순서도와 파이썬 프로그램을 작성 하여라.

def func(num1, num2):  #정수 num1, num2를 매개변수로 갖는 func함수 선언
    min = 0
    if num1 < num2: min = num1  #만약 num1이 num2보다 작으면 num1을 변수 min값에 저장
    else: min = num2  #그 외 경우는 num2를 변수 min값에 저장

    return min  #min값을 리턴값으로 반환

num1 = int(input("정수 입력 : "))
num2 = int(input("정수 입력 : "))

func(num1, num2)  #사용자에게 입력받은 num1, num2를 인수로 써서 func함수 호출

#과제36 소수 판별하는 함수를 이용해서 2부터 10까지의 수에 대해 소수인지 아닌지를 출력하는 순서도와 파이썬 프로그램을 성하여라.

def func(num):  #정수 num을 매개변수로 갖는 func함수 선언
    cnt = 0
    for i in range(1, num+1):  #1부터 num까지 반복하며 약수가 있는 경우 cnt변수에 1을 추가
        if num % i == 0: cnt += 1

    if cnt == 2: print(f"{i} : 소수임")  #자기자신을 포함하여 약수가 2일 경우에 소수이기 때문에 cnt가 2일 경우 소수임을 출력
    else: print(f"{i} : 소수아님")  #그 외 경우는 소수아님을 출력

for i in range(2, 11):  #2부터 10까지 반복문으로 소수인지 아닌지 출력해주는 함수 호출
    func(i)

#과제37 계승을 구하는 재귀함수를 이용해서 입력 받은 수에 대한 계승을 구하는 순서도와 파이썬 프로그램을 작성하여라.

def func(num):  #정수 num을 매개변수르 갖는 func함수 선언
    result = 0
    if num <= 1: result = 1  #만약 num이 1 이하라면 result변수에 1 저장
    else: result = num * func(num-1)  #그 외 경우는 result변수에 재귀함수를 이용하여 num * func(num-1) 저장

    return result  #result 값을 리턴값으로 반환

num = int(input("정수 입력 : "))
func(num)  #사용자에게 입력받은 num을 인수로 사용하여 func 함수 호출

