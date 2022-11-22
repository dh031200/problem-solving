N, K = map(int, input().split())
cnt = 0
Num = [i for i in range(2, N + 1)]
while True:
    j = min(Num)
    for k in range(j, N + 1, j):
        if k % j == 0 and Num.__contains__(k):
            Num.remove(k)
            cnt += 1
        if cnt == K:
            break
    if cnt == K:
        break
print(k)
