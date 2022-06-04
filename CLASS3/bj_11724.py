# https://www.acmicpc.net/problem/11724
import sys

sys.setrecursionlimit(2500)

Z, *X = open(0).readlines()
N, M = map(int, Z.split())
visited = [True] + [False] * N
d = {i + 1: [] for i in range(N)}
for i in X:
    u, v = map(int, i.split())
    d[u].append(v)
    d[v].append(u)


def dfs(c):
    visited[c] = True
    for i in d[c]:
        if visited[i]:
            continue
        dfs(i)


cnt = 0
while sum(visited) != N + 1:
    for i in range(1, N + 1):
        if visited[i]:
            continue
        else:
            cnt += 1
            dfs(i)
print(cnt)
