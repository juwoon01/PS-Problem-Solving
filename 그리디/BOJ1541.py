import re

string = input()
number = re.split('[-]', string)
result = 0

first = list(map(int, number[0].split('+')))
for i in range(len(first)):
    result = result + first[i]

for i in range(1, len(number)):
    next = list(map(int, number[i].split('+')))
    nextNum = 0
    for j in range(len(next)):
        nextNum = nextNum + next[j]
    result = result - nextNum

print(result)


###for i in len(number):




### - 뮈에 나오는 모든 + 를 + 한 뒤 -
