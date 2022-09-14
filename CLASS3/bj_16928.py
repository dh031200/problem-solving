# https://www.acmicpc.net/problem/16928

from collections import deque

N, M = map(int, input().split())
V = [0] * 101
Q = deque()
Q.append([1, 0])
L = {}
for _ in range(N + M):
    s, e = map(int, input().split())
    L[s] = e
while len(Q):
    k, c = Q.popleft()
    if k == 100:
        print(c)
        break
    for i in range(1, 7):
        n = k + i
        if n > 100:
            continue
        if not V[n]:
            V[n] = 1
            if n in L:
                Q.append([L[n], c + 1])
            else:
                Q.append([n, c + 1])
