# https://www.acmicpc.net/problem/1012
import sys

sys.setrecursionlimit(25000)
input = sys.stdin.readline
D = [[1, 0], [0, 1], [-1, 0], [0, -1]]
T = int(input())
for _ in range(T):
    M, N, K = map(int, input().split())
    z = [[False for _ in range(M)] for _ in range(N)]
    cnt = 0
    for _ in range(K):
        m, n = map(int, input().split())
        z[n][m] = True


    def dfs(x, y):
        if 0 > y or y >= len(z):
            pass
        elif 0 > x or x >= len(z[0]):
            pass
        else:
            if z[y][x]:
                z[y][x] = False
                for d in D:
                    dfs(x + d[0], y + d[1])


    for a in range(N):
        for b in range(M):
            if z[a][b]:
                cnt += 1
                dfs(b, a)
    print(cnt)
