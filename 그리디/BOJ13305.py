city = int(input()) # 도시의 수
loadLength = list(map(int,input().split())) 
cost = list(map(int,input().split()))
result = 0

# 가장 싼가? -> 아니면 다음 주유소까지 갈 기름, 싸면 모두 갈 기름 -> 틀림
# 이전 기름보다 싼가? -> 싸면 그걸로 아니면 이전으로

minCost = cost[0]
for i in range(len(loadLength)):
    if cost[i] < minCost: #이전보다 싸면
        minCost = cost[i]
    result += minCost * loadLength[i]

print(result)
