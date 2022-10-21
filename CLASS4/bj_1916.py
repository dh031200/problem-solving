# https://www.acmicpc.net/problem/1916

from heapq import *

N, M, *L = open(0).readlines()
N = int(N)
M = int(M)
I = int(1e9)
G = [[] for _ in range(N + 1)]
D = [I] * (N + 1)
Q = []
for l in L[:-1]:
    s, d, w = map(int, l.split())
    G[s].append([d, w])

A, B = map(int, L[-1].split())
heappush(Q, [0, A])
D[A] = 0
while Q:
    s, d = heappop(Q)
    if D[d] < s: continue
    for g in G[d]:
        w = s + g[1]
        if w < D[g[0]]:
            D[g[0]] = w
            heappush(Q, [w, g[0]])
print(D[B])
