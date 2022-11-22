# https://www.acmicpc.net/problem/1504

import heapq

I = int(1e9)
A, *B = open(0).readlines()
S = lambda x: map(int, x.split())
N, E = S(A)
u, v = S(B[-1])
G = [[] for _ in range(N + 1)]


def dijkstra(start):
    D = [I] * (N + 1)
    q = []
    heapq.heappush(q, (0, start))
    D[start] = 0
    while q:
        d, n = heapq.heappop(q)
        if D[n] < d:
            continue
        for i in G[n]:
            c = d + i[1]
            if c < D[i[0]]:
                D[i[0]] = c
                heapq.heappush(q, [c, i[0]])
    return D


for i in B[:-1]:
    a, b, c = S(i)
    G[a].append([b, c])
    G[b].append([a, c])

p1 = 0
p2 = 0
D = dijkstra(1)
p1 += D[u]
p2 += D[v]
D = dijkstra(N)
p1 += D[v]
p2 += D[u]
D = dijkstra(u)
k = D[v] + min(p1, p2)
print(k if k < I else -1)
