# https://www.acmicpc.net/problem/14938

S = open(0).readlines()
n, m, r = map(int, S[0].split())
V = [*map(int, S[1].split())]
G = [[int(1e9)] * n for _ in range(n)]
for s in S[2:]:
    a, b, c = map(int, s.split())
    G[a - 1][b - 1] = G[b - 1][a - 1] = c
for i in range(n):
    for j in range(n):
        for k in range(n):
            if j != k:
                G[j][k] = min(G[j][k], G[j][i] + G[i][k])
R = 0
for l in range(n):
    R = max(R, V[l] + sum(V[i] for i, v in enumerate(G[l]) if v <= m))
print(R)
