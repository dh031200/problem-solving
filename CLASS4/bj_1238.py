# https://www.acmicpc.net/problem/1238

import heapq

I = int(1e9)
V, *L = open(0).readlines()
N, M, X = map(int, V.split())
R = [0] * (N + 1)
for t in range(1, N + 1):
    P = [[] for _ in range(N + 1)]
    D = [I] * (N + 1)
    for l in L:
        a, b, c = map(int, l.split())
        P[a].append([b, c])
    def S(start):
        q = []
        heapq.heappush(q, (0, start))
        D[start] = 0
        while q:
            d, n = heapq.heappop(q)
            if D[n] < d:
                continue
            for p in P[n]:
                c = d + p[1]
                if c < D[p[0]]:
                    D[p[0]] = c
                    heapq.heappush(q, [c, p[0]])
    S(t)
    if t != X:
        R[t] += D[X]
    else:
        R = [i + d for i, d in zip(R, D)]
print(max(R[1:]))
