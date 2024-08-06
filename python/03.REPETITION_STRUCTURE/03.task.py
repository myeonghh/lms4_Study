#과제13 5부터 15까지 출력하기 while 반복문

num = 5
while num <= 15:
    print(num, end = " ")
    num += 1

#과제14 5부터 15까지 출력하기 for 반복문

for i in range(5, 16):
    print(i, end = " ")

#과제15 10부터 1까지 출력하기 while 반복문

num = 10
while num > 0:
    print(num, end = " ")
    num -= 1

#과제16 1부터 입력받은 수 까지의 합을 출력

num = int(input("정수를 입력하세요 : "))
sum = 0
for i in range(1, num+1):
    sum += i
print(sum)

#과제17 1부터 100까지의 수 중 3의 배수의 합 출력
sum = 0
for i in range(3, 101, 3):
    sum += i

print(sum)

#과제18 1부터 100까지의 수 중 3의 배수의 합 출력

sum = 0
for i in range(1, 101):
    if i % 3 == 0: sum += i

print(sum)

#과제19 1+2-3+4+5-6 ... -99 +100 출력

sum = 0
for i in range(1, 101):
    if i % 3 == 0: sum -= i
    else: sum += i

print(sum)

#과제20 입력받은 숫자의 약수와 약수의 개수를 출력

num = int(input("정수를 입력하세요 : "))
cnt = 0

for i in range(1, num+1):
    if num % i == 0:
        print(i, end = " ")
        cnt += 1

print(f"약수의 개수 : {cnt}")

#과제21 입력받은 세 수의 공약수를 출력

num1 = int(input("첫 번째 정수를 입력하세요 : "))
num2 = int(input("두 번째 정수를 입력하세요 : "))
num3 = int(input("세 번째 정수를 입력하세요 : "))

numlist = [num1, num2, num3]
numlist.sort()

for i in range(1, numlist[0]+1):
    if numlist[0] % i == 0 and numlist[1] % i == 0 and numlist[2] % i == 0:
        print(i, end = " ")

#과제22 소수판별기

num = int(input("정수를 입력하세요 : "))
cnt = 0

for i in range(1, num+1):
    if num % i == 0: cnt += 1

if cnt == 2: print(f"{num} : 소수 맞음")
else: print(f"{num} : 소수 아님")

#과제23 피보나치수열 20번째 항까지 합을 출력

num1 = 1
num2 = 1
num3 = 0
sum = 2

for i in range(3, 21):
    num3 = num1 + num2
    sum += num3

    num1 = num2
    num2 = num3

print(sum)

#과제24 최솟값 구하기

numlist = []
while True:
    num = int(input("정수를 입력하세요(0 입력시 최솟값 출력) : "))

    if num == 0: break

    numlist.append(num)

numlist.sort()

print(f"최소값 : {numlist[0]}")

#과제25

for i in range(1, 6):
    for j in range(1, i+1):
        print(i, end = " ")
    print("\n")

print("")

for i in range(5, 0, -1):
    for j in range(1, i+1):
        print(j, end = " ")
    print("\n")

print("")

for i in range(5, 0, -1):
    for j in range(i, 0, -1):
        print(j, end = " ")
    print("\n")

#과제26 1!, 2!, 3!, 4!, 5!의 합을 출력

sum = 0

for i in range(1, 6):
    mul = 1
    for j in range(1, i+1):
        mul *= j
    sum += mul

print(sum)

#과제27 구구단 세로버전 출력

for i in range(1, 10):
    for j in range(2, 10):
        print(f"{j}*{i}= {j*i}", end = "\t")

    print("\n")




#달력만들기

year = int(input("년도를 입력하세요 : "))
month = int(input("월을 입력하세요 : "))
leapDay = 0
totalDay = 0
presentYearDay = 0

monthList = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


#해당 년도 전년까지의 윤일 계산
for i in range(1, year):
    if i % 4 == 0: leapDay += 1
    if i % 4 == 0 and i % 100 == 0: leapDay -= 1
    if i % 4 == 0 and i % 100 and i % 400 == 0: leapDay += 1


#해당 년도 전월까지의 일 수 계산
for i in range(0, month-1):
    if year % 4 == 0: monthList[1] = 29
    if year % 4 == 0 and year % 100 == 0: monthList[1] = 28
    if year % 4 == 0 and year % 100 and year % 400 == 0: monthList[1] = 29
    print(f"해당년도 전월 리스트 : {monthList[i]}")

    presentYearDay += monthList[i]

print(f"현재 년도 전 월까지의 일수 : {presentYearDay}")


totalDay = 365 * (year-1) + leapDay + presentYearDay

print(f"해당년도 해당 전월까지의 총 일수 : {totalDay}")
#1년 1월 1일 = Mon

#해당 전 월 끝나는 요일(0월, 1화, 2수, 3목, 4금, 5토, 6일)


#해당년도 해당 월 시작 요일 구하기
startDay = totalDay % 7 + 1
daynameList = ['월', '화', '수', '목', '금', '토', '일']
print(f"시작요일 : {daynameList[startDay-1]}")
#해당년도 해당 월 요일(1월, 2화, 3수, 4목, 5금, 6토, 7일)

#Sun Mon Tue Wed Thu Fri Sat

monthDayList = []
for i in range(1, 32):
    monthDayList.append(i)

print(monthDayList)

print(f"입력하신 날짜는 {year}년 {month}월 입니다.")

print("-"*34)
print("Sun  Mon  Tue  Wed  Thu  Fri  Sat")
print("-"*34)

daycntList = [7, 1, 2, 3, 4, 5, 6]

