# https://www.acmicpc.net/problem/1753

from heapq import *

V, E, K, *L = map(int, open(0).read().split())
I = int(1e9)
R = [0] * (V + 1)
G = [[] for _ in range(V + 1)]
for l in range(0, len(L), 3):
    s, d, w = L[l:l + 3]
    G[s].append([d, w])

D = [I] * (V + 1)
q = []
heappush(q, (0, K))
D[K] = 0
while q:
    d, n = heappop(q)
    if D[n] < d:
        continue
    for g in G[n]:
        w = d + g[1]
        if w < D[g[0]]:
            D[g[0]] = w
            heappush(q, [w, g[0]])

for r in D[1:]:
    print(r if r < I else 'INF')
