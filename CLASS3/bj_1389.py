# https://www.acmicpc.net/problem/1389

from collections import deque

N, M = map(int, input().split())
D = {i: set() for i in range(1, N + 1)}
Min = 2 ** 32
for _ in range(M):
    A, B = map(int, input().split())
    D[A].add(B)
    D[B].add(A)
for i in range(1, N + 1):
    visited = [True] + [False] * N
    visited[i] = True
    KB = [0] * (N + 1)
    Q = deque()
    Q.append(i)
    cnt = 1
    LIM = 1
    while sum(visited) != (N + 1):
        LIM -= 1
        for t in D[Q.popleft()]:
            if not visited[t]:
                visited[t] = True
                Q.append(t)
                KB[t] = cnt
        if LIM == 0:
            cnt += 1
            LIM = len(Q)
    if sum(KB) < Min:
        Min = sum(KB)
        idx = i
print(idx)
