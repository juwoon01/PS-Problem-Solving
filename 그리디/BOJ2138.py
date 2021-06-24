#두번째 스위치부터 비교 후 작동 함수
def check(f, s, n):
    count = 0
    for i in range(1, n):
        if f[i-1] != s[i-1]:
            f[i] = f[i] ^ 1
            if i == n-1:
                f[i-1] = f[i-1] ^ 1
            else:
                f[i-1] = f[i-1] ^ 1
                f[i+1] = f[i+1] ^ 1
            count += 1
    result = True
    for i in range(n): 
        if f[i] != s[i]:
            result = False
    return result, count
    
n= int(input())

first = list(map(int, input()))
second = list(map(int, input()))

count = 0

#첫 스위치 비작동
copy = first[:]#리스트 슬라이딩(깊은 복사)
answer = check(copy, second, n)

if answer[0]:
    print(answer[1])
else:
    #첫 스위치 작동
    first[0] = first[0] ^ 1
    first[1] = first[1] ^ 1
    answer = check(first, second, n)
    if answer[0]:
        print(answer[1]+1)
    else:
        print(-1)
