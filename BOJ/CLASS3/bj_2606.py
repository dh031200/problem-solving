# https://www.acmicpc.net/problem/2606

N, M, *X = open(0).readlines()
N = int(N)
M = int(M)
visited = [True] + [False] * N
d = {i+1:[] for i in range(N)}
for i in X:
    u,v = map(int, i.split())
    d[u].append(v)
    d[v].append(u)

def dfs(c):
    visited[c] = True
    for i in d[c]:
        if visited[i]:
            continue
        dfs(i)

dfs(1)
print(sum(visited) - 2)