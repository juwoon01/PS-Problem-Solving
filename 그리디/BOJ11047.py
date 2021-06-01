count = 0
N, K = map(int, input().split())
coin = [int(input()) for _ in range(N)]

i = N-1
while i >= 0:
    if K >= coin[i]:
        quotient, remainder = divmod(K, coin[i])
        count += quotient
        K = remainder
    i -= 1
       
print(count)

"""for _ in range(N):
    coin.append(int(input()))"""
#coin.reverse() 

"""
i = N-1
while i >= 0:
    if K >= coin[i]:
        count += K // coin[i]
        K %= coin[i]
    i -= 1
"""