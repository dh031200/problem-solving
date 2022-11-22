# https://www.acmicpc.net/problem/11723

from collections import deque

X, *I = open(0).readlines()
M, N, H = map(int, X.split())
F = M * N * H
L = [[list(map(int, i.split())) for i in I[i * N:i * N + N]] for i in range(H)]
Q = deque()
D = [[1, 0, 0], [-1, 0, 0], [0, 1, 0], [0, -1, 0], [0, 0, 1], [0, 0, -1]]
V = 0
R = 1
W = 0

## For Debug
# print('---------------------------')
for i in range(H):
    for j in range(N):
        for k in range(M):
            if L[i][j][k] == 1:
                Q.append([i, j, k])
                V += 1
            elif not L[i][j][k]:
                W += 1
if not W:
    print(0)
else:
    cnt = 0
    while len(Q):
        i, j, k = Q.popleft()
        V -= 1
        cnt += 1
        for d in D:
            id, jd, kd = i + d[0], j + d[1], k + d[2]
            if 0 <= id < H and 0 <= jd < N and 0 <= kd < M and not L[id][jd][kd]:
                Q.append([id, jd, kd])
                L[id][jd][kd] = 1
                W -= 1
        if not V:
            if not W:
                break
            R += 1
            V = len(Q)

            ## For Debug
            # for Z in L:
            #     for X in Z:
            #         for C in X:
            #             print('%2d' % C, end=' ')
            #         print()
            # print('---------------------------')
    print(R if not W else -1)
