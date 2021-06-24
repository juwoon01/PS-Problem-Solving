n, m = map(int, input().split())

first = [list(map(int, input())) for _ in range(n)]
second = [list(map(int, input())) for _ in range(n)]


count = 0
for i in range(n-2):
    for j in range(m-2):
        if first[i][j] != second[i][j]:# 다른 부분을 만나자마자
            for x in range(i, i+3):
                for y in range(j, j+3):
                    first[x][y] = first[x][y] ^ 1 # xor
            count += 1
        
result = True
for i in range(n):
    for j in range(m):  
        if first[i][j] != second[i][j]:
            result = False

if result:
    print(count)
else:
    print(-1)

