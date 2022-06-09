# https://www.acmicpc.net/problem/7576

from collections import deque

x, *l = open(0).readlines()
M, N = map(int, x.split())
Z = [list(map(int, i.split())) for i in l]
D = [[-1, 0], [0, 1], [1, 0], [0, -1]]
Q = deque()
cnt = 1
L = 0
V = 0
for i in range(N):
    for j in range(M):
        if Z[i][j] == 1:
            L += 1
            Q.append([i, j])
        elif Z[i][j] == 0:
            V += 1
if V == 0:
    print(0)
else:
    while len(Q) != 0:
        L -= 1
        c = Q.popleft()
        for d in D:
            if (0 <= c[0] + d[0] < N) and (0 <= c[1] + d[1] < M):
                t = Z[c[0] + d[0]][c[1] + d[1]]
                if t == 0:
                    V -= 1
                    Z[c[0] + d[0]][c[1] + d[1]] = 1
                    Q.append([c[0] + d[0], c[1] + d[1]])
        if L == 0:
            if V == 0:
                break
            cnt += 1
            L = len(Q)
    print(cnt if V == 0 else -1)
