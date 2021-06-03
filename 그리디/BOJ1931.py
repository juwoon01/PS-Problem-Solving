"""n = int(input())
time = [list(map(int, input().split())) for _ in range(n)]
result = 0
currentTime = 0
minTime = 2**31
isRun = True
isCheck = False
while isRun:
    for i in range(n):
        if time[i][0] >= currentTime and time[i][1] < minTime:
            minTime = time[i][1]
            isCheck = True

    if isCheck:
        result += 1
        currentTime = minTime
        minTime = 2**31
        isCheck = False
    else:
        isRun = False

print(result) 시간 초과"""
    
n = int(input())
time = [list(map(int, input().split())) for _ in range(n)]

time.sort(key=lambda x:(x[1], x[0]))
result = 1
currentTime = time[0][1]

for i in range(1, n):
    if time[i][0] >= currentTime:
        result += 1
        currentTime = time[i][1]

print(result)
