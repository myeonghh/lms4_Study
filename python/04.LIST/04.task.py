#과제28
#20부터 1까지의 수를 차례로 리스트에 저장하고 출력하는 순서도와 파이썬 프로그램을 작성하라.

listA = []

for i in range(20, 0, -1):
    listA.append(i)

print(listA)

#과제29
#리스트 요소를 오른쪽으로 한 칸씩 원형으로 이동하는 순서도와 파이썬 프로그램을 작성하라.

listA = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
temp = listA[-1]  #listA의 마지막 요소를 temp 변수에 저장

for i in range(len(listA)-1, 0, -1):  #listA의 마지막 요소부터 두번째 요소까지 바로 이전 요소로 차례대로 변환
    listA[i] = listA[i-1]

listA[0] = temp  #listA의 첫번째 요소에 temp를 저장

print(listA)

#과제30
#임의의 10개의 수를 저장하고 있는 리스트에서 최솟값을 구하는 순서도와 파이썬 프로그램을 작성하라.
import random

listA = []
min = 101  #초기 최솟갑을 101로 설정

for i in range(10): listA.append(random.randint(1, 100))  #listA에 1에서 100까지 랜덤숫자를 10개 추가
print(listA)

for i in range(0, len(listA)):
    if listA[i] < min:  #listA에 들어있는 첫번째 요소부터 차례대로 최솟값보다 작으면 최솟값을 해당 요소로 변환
        min = listA[i]

print(f"최솟값 : {min}")

#과제31
#입력 받은 10진수를 8진수로 변환하여 출력하는 순서도와 파이썬 프로그램을 작성하라.

num = int(input("10진수를 입력하세요 : "))
listA = []

while True:
    answer = num // 8  #입력 받은 10진수를 8로 나눈 몫
    rest = num % 8  #입력 받은 10진수를 8로 나눈 나머지

    listA.append(rest)  #나머지를 listA에 요소 추가

    num = answer  #10진수를 8로 나눈 몫을 num에 대입

    if num == 0:  #반복 후 몫이 0일때 반복문 빠져나감
        break

print("8진수 : ", end = "")
for i in range(0, len(listA)):
    print(listA.pop(), end = "")  #listA에 들어있는 마지막 요소부터 차례대로 출력

#과제32
#리스트에 저장된 8진수를 10진수로 변환하는 순서도와 파이썬 프로그램을 작성하라.

num = input("8진수를 입력하세요 : ")
listA = []
sum = 0

for i in range(0, len(num)):  #입력받은 8진수를 숫자 각 자리수마다 슬라이싱하여 listA에 요소 추가
    listA.append(int(num[i]))

for i in range(0, len(listA)):
    num2 = listA[i] * (8**(len(listA)-1-i))  #8진수의 각 자리수 listA[i]가 늘어날수록 8의 거듭제곱 n승을 하나씩 줄여가며
                                             #각 자리수 listA[i]와 8의n승을 곱해 줌
    sum += num2  #각 자리수마다 계산된 값을 모두 더해 줌

print(f"10진수 : {sum}")

#과제33
#내림차순으로 정렬된 데이터 집합에 대한 이진 탐색을 하는 순서도와 파이썬 프로그램을 작성하라.

listA = [80, 76, 75, 63, 57, 39, 27, 26, 18, 11]
listB = listA[:]  #listA의 요소를 똑같이 가지는 listB 리스트 변수 선언

print(listB)

num = int(input("찾고자 하는 키를 입력하세요 : "))  #사용자에게 키를 입력받아 num변수에 저장

while True:
    midIndex = len(listA) // 2  #listA 리스트의 중간 인덱스값 찾기

    if listA[midIndex] > num:
        listA = listA[midIndex + 1:]  #리스트 중간인덱스 요소가 num보다 크면 중간 인덱스 바로 다음 인덱스에서 끝까지 리스트 슬라이싱
    elif listA[midIndex] < num:
        listA = listA[:midIndex]  #리스트 중간인덱스 요소가 num보다 작으면 처음부터 중간인덱스 바로 전까지 리스트 슬라이싱
    else:
        print(f"{listB.index(num)} 번째 인덱스에서 탐색 성공")  #num값이 중간인덱스 요소와 일치하면
        break                                       #listA를 그대로 복사한 listB에서 "탐색 성공" 출력 후 반복문 빠져나옴

    if len(listA) == 0:    #계속된 슬라이싱으로 리스트에 요소가 남아있지 않으면
        print("탐색 실패")  #입력한 키 숫자가 리스트 안에 없는것이기 때문에 "탐색 실패" 출력 후 반복문 빠져나옴
        break

#과제34
#삽입 정렬은 다음과 같이 이미 정렬된 부분에서 자신의 위치를 찾아 삽입하여 정렬하는 방식이다.
#삽입 정렬을 이용해서 정렬하는 순서도와 파이썬 프로그램을 작성하여라

listA = [3, 7, 2, 8, 5, 1, 10, 9, 4, 6]

for i in range(1, len(listA)):  #첫번째 반복문 - listA의 두번째 요소(listA[1])부터 마지막 요소까지 반복
    for j in range(0, len(listA)):  #두번째 반복문 - listA의 해당인덱스 요소로부터 이전 인덱스 요소로 한칸씩 줄여가며 반복
        if i-j-1 < 0: break  #계속 반복하다가 인덱스 번호가 0 미만(listA[0])이 되면 두번째 반복문 빠져나옴

        if listA[i-j] < listA[i-j-1]:  #만약 해당 인덱스 요소가 이전 인덱스 요소보다 작으면
            temp = listA[i-j]          #해당 인덱스 요소와 이전 인덱스 요소값을 서로 교체
            listA[i-j] = listA[i-j-1]
            listA[i-j-1] = temp

print(listA)

